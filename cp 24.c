#include <stdio.h>
#include <string.h>

int main() {
    char userid[20];
    char password[50];
    int i;
    int hasUpper = 0, hasDigit = 0, hasSpecial = 0;
    char correctUser[] = "uday";
    printf("Enter User ID: ");
    scanf("%s", userid);
    printf("Enter Password: ");
    scanf("%s", password);

    if (strlen(password) != 8) {
        printf("Password must be exactly 8 characters long.\n");
        return 0;
    }

    for (i = 0; password[i] != '\0'; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z')
            hasUpper = 1;
        else if (password[i] >= '0' && password[i] <= '9')
            hasDigit = 1;
        else if ((password[i] >= 33 && password[i] <= 47) ||
                 (password[i] >= 58 && password[i] <= 64) ||
                 (password[i] >= 91 && password[i] <= 96) ||
                 (password[i] >= 123 && password[i] <= 126))
            hasSpecial = 1;
    }

    if (hasUpper && hasDigit && hasSpecial && strcmp(userid, correctUser) == 0) {
        printf("Login successful. Strong password ✅\n");
    } else {
        printf("Invalid user ID or weak password ❌\n");
    }

    return 0;
}
