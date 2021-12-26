#include <stdio.h>
#include <ctype.h>

const int L = 50;

void check_type(int);

int imitation_main() {
    char str[L];
    int i = 0;
    printf("Введите строку:\n");
    gets(str);
    while (str[i] != '\0') {
        check_type(str[i]);
        i++;
    }
}

void check_type(int c) {
    if (isdigit(c))
        printf("%c - цифра, печатаемый символ.\n", c);
    else if (islower(c))
        printf("%c - буква, строчная, печатаемый символ.\n", c);
    else if (isupper(c))
        printf("%c - буква, заглавная, печатаемый символ.\n", c);
    else if (isspace(c))
        printf("%c - пробел, печатаемый символ.\n", c);
    else if (isprint(c))
        printf("%c - знак, печатаемый символ.\n", c);
    else
        printf("%c - непечатаемый символ.\n", c);
}


