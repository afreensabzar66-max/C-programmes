#include <stdio.h>
int main() {
    int n;
    printf("enter the numb: ");
    scanf("%d", &n);
    if (n%5==0) {
    printf("numb is divisible by 5");
    }else {
        printf("not divisible");
    }
       return 0;
}