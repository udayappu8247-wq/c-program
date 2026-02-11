#include<stdio.h>
struct book{
int id;
char title[20];
char author[20];
};
int main(){
struct book b1={101,"success","uday"};
printf("%d %s %s\n",b1.id,b1.title,b1.author);

struct book b2={102,"success","charan"};
printf("%d %s %s\n",b2.id,b2.title,b2.author);


struct book b3={103,"success","king"};
printf("%d %s %s\n",b3.id,b3.title,b3.author);
}
