// Chapter 1_6 getchar() and putchar()
#include <stdio.h>

int main() {
    char a = getchar();
    char b = getchar();
    char c = getchar();

    putchar(a);
    putchar(b);
    putchar(c);

    return 0;
}