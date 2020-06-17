// Chapter 1_3_4 int float double char 型数据

#include <stdio.h>

int main() {
    int a = 1;
    double b = 2.2;
    float c = 3.3f;
    char d = 'a';
    printf("%d\n", a);
    printf("%f\n", b);
    printf("%f\n", c);
    printf("%c\n", d);

    // 明文oyrn，密文+1
    char c1 = 'o';
    char c2 = 'y';
    char c3 = 'r';
    char c4 = 'n';
    printf("%c%c%c%c", c1+1, c2+1, c3+1, c4+1);

    return 0;

}
