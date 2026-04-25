#include <stdio.h>
int main() {
   int a , b, i;
 
   printf("enter ur number : ");
   scanf("%d", &a);
   printf("enter ur limit : ");
   scanf("%d", &b);

   for(int i=1;i<=b;i++) {
    int table =a*i;
  printf(" %d ",table);
       
   } 

return 0;
}