#include<stdio.h>
int main(){
int arr[5]={10,20,30,40,50};
int*p=arr;
printf("After elements using ponter:");
for(int i=0;i<5;i++);
  printf("%d",*(p+1));
  return 0;
  }
