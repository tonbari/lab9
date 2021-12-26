#include <stdio.h>


int get_string_len_while(char *arr) {
    int i = 0;
    while (arr[i])i++;
    return i;
}

int get_string_len_for(char *arr) {
    for (int i = 0;; i++)
        if (*(arr + i) == 0)
            return i;
}

int get_string_len_do_while(char *arr) {
    int i = 0;
    do i++; while (arr[i]);
    return i;
}

void create_string_copy_while(char *arr, char *arr1) {
    int i = 0;
    while (arr[i]) {
        arr1[i] = arr[i];
        i++;
    }
    *(arr1 + i) = 0;
}

void create_string_copy_for(char *arr, char *arr1) {
    for (int i = 0;; i++)
        if (arr[i]) { arr1[i] = arr[i]; }
        else {
            arr1[i] = 0;
            return;
        }
}

void create_string_copy_do_while(char *arr, char *arr1) {
    int i = 0;
    do {
        arr1[i] = arr[i];
        i++;
    } while (arr[i]);
    arr1[i] = 0;
}


int imitation_main() {
    char arr[100], arr1[100], arr2[100], arr3[100];
    int i = 0, n = 0, c = 0;

    printf("get_string_len_while returned a %d\n", get_string_len_while(arr));
    printf("get_string_len_for returned a %d\n", get_string_len_for(arr));
    printf("get_string_len_do_while returned a %d\n", get_string_len_do_while(arr));

    create_string_copy_while(arr, arr1);
    puts(arr1);
    create_string_copy_for(arr, arr1);
    puts(arr1);
    create_string_copy_do_while(arr, arr1);
    puts(arr1);

    do {
        if (arr[i] >= '0' && arr[i] <= '9')n++;
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))c++;
        i++;
    } while (arr[i]);
    printf("В строке %d букв и %d цифр\n", c, n);

    getch();
    return 0;
}
