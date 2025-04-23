#include <stdio.h>
#include <string.h>

int main() {
    char abc[] = "abcdefghijklmnopqrstuvwxyz";
    char target = 'l'; // Искомая буква
    int pos = -1;

    for (int counter = 0; counter < strlen(abc); counter++) {
        if (abc[counter] == target) {
            pos = counter + 1;
            break;
        }
    }

    if (pos != -1) {
        printf("Буква '%c' находится на позиции %d в алфавите\n", target, pos);
    } else {
        printf("Буква '%c' не найдена в алфавите\n", target);
    }

    return 0;
}
