#include<stdio.h>
#include<stdlib.h>
#include SIZE 5
int qeue[SIZE];
int fornt=-1,rear=-1;
void enqueue(int value){
if(rear==SIZE-1)
 printf("Queue overflow!cannot insert %d\n",value);
 else{
 printf(front==-1)front=0;
 stack[++rear]=value;
 printf("%d enqueued to queue\n", value)

 }
}
void dequeue(){
if(front==-1||front>rear)
printf("Queue underflow!No element to pop\n");
else
printf("%d dequeue from queue\n",queue[front++]);
}
void display(){
if(front==-1||front rear)
 printf("Queue is empty\n");
 else{
 printf("Queue elements:");
 for(int = front;<=rear;i++);
 printf("%3d",queue[i]);
 printf("\n");
 }
}
int main(){
enqueue(10);
enqueue(20);
enqueue(30);
display();
dequeue();
display();
return 0;
}
