#include <stdio.h>
int main() {
   int n,i;
   int exp=1;
   printf("enter ur limit : ");
   scanf("%d", &n);

   for(int i=1;i<=n;i++) {
 exp=exp*exp;;
  printf("exp : %d \n" , exp);
       
   } 

return 0;
}