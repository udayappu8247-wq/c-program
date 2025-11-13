 #include<stdio.h>
 void sayHello(){
 printf("hello,student you just called me back\n");
 }
 void studentWork(void(*callbackfunc)()){
 printf("Student is doing homework...\n");
 callbackfunc();
 int main(){
 studentWork(sayHello);
 return 0;
 }
