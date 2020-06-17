// Chapter 1_5 scanf

#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    int ave = 0;
    printf("Enter number a and b ");
    scanf("%d%d",&a, &b);
//    printf("Enter number a ");
//    scanf("%d", &a);
//    printf("Enter number b ");
//    scanf("%d", &b);
    ave = (a + b) / 2;
    printf("Average number is %d\n", ave);

    return 0;
}