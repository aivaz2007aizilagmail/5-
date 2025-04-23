#include <stdio.h>

int get_letter_position(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 1;
    }
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 1;
    }
    return -1; // Не буква английского алфавита
}

int main() {
    char letter = 'L'; // Может быть в любом регистре
    int position = get_letter_position(letter);

    if (position > 0) {
        printf("Буква '%c' находится на позиции %d в алфавите\n", 
               letter, position);
    } else {
        printf("Символ '%c' не является буквой английского алфавита\n", 
               letter);
    }

    return 0;
}
