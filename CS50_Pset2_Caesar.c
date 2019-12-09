#include <cs50.h>
#include <stdio.h>
#include <string.h>

void caesar(int);

int main(int argc, string argv[])
{
    
    if (argc == 2) {
        int key = atoi(argv[1]);
        caesar(key);
        return 0;
    } else {
        printf("Please try again\n");
        return 1;
    }
}

void caesar(int k) {
    string s = get_string("plaintext: ");
    int n = strlen(s);
    char o[n];
    
    for (int i = 0; i < n; i++)  {
        if (s[i] >= 65 && s[i] <= 90) {
            o[i] = (s[i]+k-'A')%26+'A';
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            o[i] = (s[i]+k-'a')%26+'a';
        } else {
            o[i] = s[i];
        }
    }
    printf("ciphertext: %s", o);
    printf("\n");
}