#include <stdio.h>
#include <cs50.h>

void createMario(int height);

int main(void) {
    int i;
    do {
        i = get_int("Please enter a height: ");
    }    
    while(i < 0 || i > 10); 
    
    createMario(i);
    
}

void createMario(int height) {
            for (int row = 0; row < height; row++) {
                for (int spaces = height-1; spaces > row; spaces--) {
                    printf(".");
                }
                for (int hashes = 0; hashes <= row; hashes++) {
                    printf("#");
                }
                printf(" ");
                //mirrored
                for (int sehsah = 0; sehsah <= row; sehsah++) {
                    printf("#");
                }
                printf("\n");
            }
        }   
