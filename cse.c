#include <stdio.h>
int main() {
    float n;
    printf("enter radius: ");
    scanf("%f", &n);
    float area = 3.14*n*n;
    printf("area of circle = %f" , area);
   
       return 0;
}