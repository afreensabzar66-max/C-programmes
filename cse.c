#include <stdio.h>
int main() {
   int n,i;
   int numb=2;
   printf("enter ur limit : ");
   scanf("%d", &n);

   for(int i=1;i<=n;i++) {
    numb=numb*numb;
  printf("new numb : %d \n" , numb);
       
   } 

return 0;
}