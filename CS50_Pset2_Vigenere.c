#include <cs50.h>
#include <stdio.h>
#include <string.h>
int main(int argc, string argv[])
{
    string key = get_string("Key: ");
    string p = get_string("Word: ");
    int n = strlen(p);
    
    for (int i = 0; i < n; i++) {
        int k = key[i];
        if(p[i] >= 'A' && p[i] <= 'Z') {
            printf("%c", p[i] + (k-'A'));
            printf("%i", 'A' - (k + 'A'));
            
        } else if (p[i] >= 'a' && p[i] <= 'z'){
            printf("%c", p[i] + (k-'a'));
            printf("%c", (k-'a'));
        }
        
    }
}