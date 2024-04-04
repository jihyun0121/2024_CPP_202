#include <stdio.h>

int main(void) {
    char str[30] = "develop hungry";
    char str2[30] = "";

    int i = 0;
    for (; str[i] != '\0'; i++) {
        str2[i] = str[i];

    }
        printf("%s ", str2);
}