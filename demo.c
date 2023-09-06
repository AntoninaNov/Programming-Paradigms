#include <stdio.h>
// #include<stdlib.h> // system("clear");

int main() {
    int choice;
    int age;
    char name[30];

    printf("Welcome to the text editor! Here's a list of available commands:\n");
    printf("1. Hello, World!\n");
    printf("2. Input pet age and name\n");
    printf("3. Convert pet age to human age and display\n");
    printf("4. Enter text to append\n");
    printf("4. Start a new line\n");


    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Hello, World!\n");
            break;
        case 2:
            printf("Please enter the name of your pet: ");
            scanf("%s", name);

            printf("Please enter the age of your pet: ");
            scanf("%d", &age);

            printf("Your pet's name is %s and it is %d years old.\n", name, age);
            break;
        case 3:
            if (age == 0) {
                printf("Please enter the pet's age first using command 2.\n");
            }
            else {
                int human_age = age * 7; // conversion
                printf("%s's age in human years is approximately %d years.\n", name, human_age);
            }
            break;
        case 4:
            printf("The command is not implemented\n");
            break;
        default:
            printf("Invalid command.\n");
            break;
    }

    return 0;
}

