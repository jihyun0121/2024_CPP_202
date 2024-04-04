#include <iostream>
#include <string>

int main(void) {
    std::string str = "develop hungry";
    std::string str2;
    
    str2 = str;

    /*int i = 0;
    for (; str[i] != '\0'; i++) {
        str2[i] = str[i];
    }*/
    std::cout << str2;
}