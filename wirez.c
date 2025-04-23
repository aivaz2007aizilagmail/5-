#include <stdio.h>
#include <string.h>

int main() {
    char original[] = "yellow";
    char new_str[4];
    int from = 3;
    int to = 6;

    int new_idx = 0;
    for (int old_idx = from; old_idx < to; old_idx++) {
        new_str[new_idx] = original[old_idx];
        new_idx++;
    }
    new_str[new_idx] = '\0';

    printf("Результат: %s\n", new_str);

    return 0;
}
