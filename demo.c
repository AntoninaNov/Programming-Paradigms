#include <stdio.h>

int main() {
    int choice;

    printf("Choose the command:\n");

    scanf("%d", &choice);

    if (choice == 1) {
        printf("Hello, World!\n");
    }

    return 0;
}
