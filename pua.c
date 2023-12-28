#include <stdio.h>

int main() {
    int ch1, ch2;

    printf("Enter two characters: ");
    ch1 = getchar(); // 用户输入 'H'，ch1 = 72
    
    ch2 = getchar(); // 用户输入 'e'，ch2 = 101

    printf("ASCII values: %d %d\n", ch1, ch2);

    return 0;
}
