#include <stdio.h>
int main() {
int  n, temp;
printf("enter size of array:");
scanf("%d" , &n);
int arr[n];
printf("enter elements of array:");
for (int i=0;i<n;i++){
scanf("%d" , &arr[i]);
}

   
return 0;
}