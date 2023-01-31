#include <stdio.h>
#include <string.h>

int main()
{
    const int SIZE = 50;
    char str[SIZE];
    printf("Enter your text\t\t\t");
    gets_s(str);
    printf("Entered text:\t\t\t");
    puts(str);
    for (int i = 0; i < strlen(str); i++) {
        str[i] = str[i + 1];
    }
    printf("Text without first letter:\t");
    puts(str);
    char temp[SIZE];
    int q = strlen(str);
    for (int i = 0; i < q; i++) { 
        temp[(q - 1) - i] = str[i];
    }
    temp[q] = str[q];
    printf("Changed text:\t\t\t");
    puts(temp);
    return 0;
}