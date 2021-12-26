#include <stdio.h>
#include <stdbool.h>

const int M = 50;

int imitation_main() {
    char str1[M], str2[M], str[M * 2], str3[M * 2];
    int i = 0, k = 0, l = 0;
    bool flag1 = true, flag2 = true;

    printf("Введите строку 1:\n");
    gets(str1);
    printf("Введите строку 2:\n");
    gets(str2);
    while ((str1[i] != '\0' || str2[i] != '\0') && str1[i] == str2[i])
        i++;
    printf("Совпало символов: %d\n", i);
    for (int j = i; (j < M) && (flag1 || flag2); j++) {
        if (str1[j] != '\0' && flag1)
            k++;
        else
            flag1 = false;
        if (str2[j] != '\0' && flag2)
            l++;
        else
            flag2 = false;
    }
    printf("В первой и второй строке осталось %d и %d символов.\n", k, l);
    for (int j = 0; j < k; j++)
        str[j] = str1[j + i];
    for (int j = k; j < (k + l); j++)
        str[j] = str2[j - k + i];
    str[k + l] = '\0';

    printf("%s\n", str);

    int r = 0, j = 0;
    for (int f = 0; f < (i + i + k + l); f++) {
        if (str1[j] != '\0') {
            str3[r] = str1[j];
            r++;
        }
        if (str2[j] != '\0') {
            str3[r] = str2[j];
            r++;
        }
        j++;
    }
    str3[r - 2] = '\0';
    printf("%s\n", str3);
}