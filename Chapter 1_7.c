// Chapter 1_7 数学函数

#include <stdio.h>
#include <math.h>

int main() {
    // 三角形面积
    // area = sqrt(s(s-a)(s-b)(s-c))
    // s = (a+b+C) / 2
    double a;
    double b;
    double c;
    double s;
    double area;
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("a = %f, b = %f, c = %f\n", a, b, c);
    printf("s = %f\n", s);
    printf("area = %lf\n", area);
    printf("%f", s * (s - a) * (s - b) * (s - c));

    return 0;

}