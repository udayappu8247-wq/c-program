 #include<stdio.h>
 #include <string.h>

int main() {
    char str1[30] = "hello";
    char str2[30] = "world";
    printf("Length of str1: %lu\n", strlen(str1));
    strcat(str1, str2);
    printf("After concatenation: %s\n", str1);
    strcpy(str2, "everyone");
    printf("Copied string: %s\n", str2);
    int result = strcmp(str1, str2);
    printf("Comparison result: %d\n", result);
	return 0;

}
