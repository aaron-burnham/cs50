#include <cs50.h>
#include <stdio.h>
#include <string.h>

void vigenere(string);

int main(int argc, string argv[])
{
    if (argc == 2) {
        vigenere(argv[1]);
        return 0;
    } else {
        printf("Not Quite\n");
        return 1;
    }
}

void vigenere(string kw) {
    int len = strlen(kw);
    int ca[len];
    for (int i = 0; i < len; i++) {
        char c = kw[i];
        if (c >= 'A' && c <='Z') {
            ca[i] = c - 65;
            printf("%i\n", c-65);
        } else if (c >= 'a' && c <= 'z') {
            ca[i] = c - 97;
            printf("%i\n", c-97);
        }
    }
    for (int i=0; i< len; i++) {
        printf("%i", ca[i]);
    }
    printf("%s", kw);
}