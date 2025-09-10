#include <stdio.h>
int main() {
    char firstName[50];
    char lastName[50];

    // Ask for first name
    printf("Enter your first name: ");
    scanf("%49s", firstName);

    // Ask for last name
    printf("Enter your last name: ");
    scanf("%49s", lastName);

    // Print greeting
    printf("Hello %s %s\n", firstName, lastName);

    return 0;
}
