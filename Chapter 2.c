// Chapter 2 Leap year
// 当年份不是100的倍数且是4的倍数时，该年是闰年；
// 年份 % 100 ！= 0 && 年份 % 4 == 0
// 当年份是100的倍数且是400的倍数时，该年也是闰年
// 年份 % 400 == 0
// ( 年份 % 100 ！= 0 && 年份 % 4 == 0 ) || 年份 % 400 == 0

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year\n");
    scanf("%d", &year);
    if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) {
        printf("The %d is leap year", year);
    } else {
        printf("The %d is not leap year", year);
    }

    return 0;
}