#include <stdio.h>
#include <string.h>

void extract_substring(const char* src, char* dest, int start, int length) {
    for (int i = 0; i < length && src[start + i] != '\0'; i++) {
        dest[i] = src[start + i];
    }
    dest[length] = '\0';
}

int main() {
    const char* word = "yellow";
    int start_pos = 3; // Начало подстроки (индексация с 0)
    int sub_length = 3; // Длина подстроки "low"

    // Выделяем память для подстроки + терминатор
    char substring[sub_length + 1];
    
    extract_substring(word, substring, start_pos, sub_length);
    
    printf("Исходная строка: %s\n", word);
    printf("Извлеченная подстрока: %s\n", substring);

    return 0;
}
