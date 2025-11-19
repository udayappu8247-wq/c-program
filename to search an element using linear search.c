#include<stdio.h>
int main(){
  int arr[5]={10,25,35,45,50};
  int i,key,found=0;
  printf("Enter element to search:");
  scanf("%d",&key);
  for(i=0;i<5;i++){
       if(arr[i]==key){
   found=1;
   break;
  }
  }
  if(found)
   printf("Enter element %d found at poistion %d\n",key,i+1);

   else
      printf("Element %d not found\n",key);
      return 0;

}
