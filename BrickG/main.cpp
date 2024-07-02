#include <SFML/Graphics.hpp>



// Ball 클래스 정의
class Ball {
public:
    sf::CircleShape shape;
    sf::Vector2f velocity;

    //생성자-멤버변수 초기화 하기 위해
    Ball(float mX, float mY) {
        shape.setPosition(mX, mY);           //위치
        shape.setRadius(10.f);               //반지름의 크기
        shape.setFillColor(sf::Color::Red);  //색깔
        shape.setOrigin(10.f, 10.f);         //(새로운) 기준점
        velocity = { -8.f, -8.f };           //속도  --> 왼쪽으로 위로 움직임
    }


    void update() {
        shape.move(velocity);

        if (left() < 0) velocity.x = 8.f;
        else if (right() > 800) velocity.x = -8.f;

        if (top() < 0) velocity.y = 8.f;
        else if (bottom() > 600) velocity.y = -8.f;
    }

    float left() { return shape.getPosition().x - shape.getRadius(); }
    float right() { return shape.getPosition().x + shape.getRadius(); }
    float top() { return shape.getPosition().y - shape.getRadius(); }
    float bottom() { return shape.getPosition().y + shape.getRadius(); }
};

// Paddle 클래스 정의
class Paddle {
public:
    sf::RectangleShape shape;
    const float paddleWidth = 100.f;
    const float paddleHeight = 20.f;
    const float paddleVelocity = 10.f;

    Paddle(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ paddleWidth, paddleHeight });
        shape.setFillColor(sf::Color::Blue);
        //기준점을 중심으로 
        shape.setOrigin(paddleWidth / 2.f, paddleHeight / 2.f);
    }

    void update() {
        //왼쪽 화살키를 누르고 && 왼쪽 끝에 도달하지 않은 경우
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) && left() > 0) {
            shape.move(-paddleVelocity, 0.f);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) && right() < 800) {
            shape.move(paddleVelocity, 0.f);
        }
    }



    float left() { return shape.getPosition().x - shape.getSize().x / 2.f; }
    float right() { return shape.getPosition().x + shape.getSize().x / 2.f; }
    //지금 당장은 쓸모가 없지만, 확장을 고려해서 일단 놔두겠음.
    float top() { return shape.getPosition().y - shape.getSize().y / 2.f; }
    float bottom() { return shape.getPosition().y + shape.getSize().y / 2.f; }
};

// Brick 클래스 정의
class Brick {
public:
    sf::RectangleShape shape;
    bool destroyed = false;

    Brick() {
        shape.setSize({ 60.f, 20.f });  //벽돌 크기
        shape.setFillColor(sf::Color::Yellow);
        shape.setOrigin(30.f, 10.f);
    }

    Brick(float mX, float mY) {
        shape.setPosition(mX, mY);
        shape.setSize({ 60.f, 20.f });
        shape.setFillColor(sf::Color::Yellow);
        shape.setOrigin(30.f, 10.f);
    }

    void setPosition(float mX, float mY) {
        shape.setPosition(mX, mY);
    }

};

const int brick_row = 4;
const int brick_column = 7;

int main()
{
    // 창 생성
    sf::RenderWindow window(sf::VideoMode(800, 600), "bricks");  //창 크기(너비, 높이)
    window.setFramerateLimit(60);   // 초당 프레임을 60으로

    Ball ball(800 / 2.f, 300.f);
    Paddle paddle(600.f, 550.f);  //paddle의 위치
    Brick bricks[brick_row][brick_column];
    for (int i = 0; i < brick_row; i++) {
        for (int j = 0; j < brick_column; j++) {
            bricks[i][j].setPosition(200+(60 + 10) * j, 200+(20 + 10) * i);
        }
    }


    // 이벤트 루프 시작
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // x 마크를 누르면
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //update
        ball.update();
        paddle.update();

        //공과 패들의 충돌처리(paddle에 ball이 닿으면 튕겨 나감)
        if (ball.shape.getGlobalBounds().intersects(paddle.shape.getGlobalBounds())) {  //intersects : 교차하다
            ball.velocity.y = -ball.velocity.y;
        }

        //공과 별돌의 충돌처리
        for (int i = 0; i < brick_row; i++) {
            for (int j = 0; j < brick_column; j++) {
                if (ball.shape.getGlobalBounds().intersects(bricks[i][j].shape.getGlobalBounds())) {
                    if (bricks[i][j].destroyed == false) {
                        bricks[i][j].destroyed = true;
                        ball.velocity.y = -ball.velocity.y;
                        //ball.velocity.x = -ball.velocity.x;
                    }
                }
            }
        }

        //draw
        // 화면 지우기
        //window.clear();  //매개변수가 없지만 디폴트 값으로 sf::Color:(0,0,0,255)가 있다.
        window.clear(sf::Color::White);

        //그리기
        window.draw(paddle.shape);
        window.draw(ball.shape);
        for (int i = 0; i < brick_row; i++) {
            for (int j = 0; j < brick_column; j++) {
                if (!bricks[i][j].destroyed)
                    window.draw(bricks[i][j].shape);
            }
        }

        // 화면 업데이트
        window.display();
    }

    return 0;
}
//게임이 실행되는 기본적인 구조
//1. init
//2. update
//3. draw