#include<stdio.h.>
void sayHello(){
 printf("Hello, student!You just called me back\n");
 }
 void studentWork(void(*callbackFunc)()){
  printf("Student is doing homework....\n");
}
 int main(){

  studentWork(sayHello);
  return 0;
  }






