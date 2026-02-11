#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20];
    char correctUser[] = "admin";
    char correctPass[] = "1234";

    printf("Enter username: ");
    scanf("%19s", username);

    printf("Enter password: ");
    scanf("%19s", password);

    if (strcmp(username, correctUser) == 0 && strcmp(password, correctPass) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }

    return 0;
}
