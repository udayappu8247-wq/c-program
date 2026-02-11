#include <stdio.h>
#include <string.h>

int main()
 {
    char username[20], password[7];
    char correctUsername[] = "uday";
    char correctPass[] = "00057";

    printf("Enter username: ");
    scanf("%19s", username);

    printf("Enter 6 digit password: ");
    scanf("%6s", password);


      if(strcmp(password, correctPass) == 0)
        {
        printf("Login successful!\n");
    }
    else


        {
        printf("Invalid -3password.\n");
    }

    return 0;
}
