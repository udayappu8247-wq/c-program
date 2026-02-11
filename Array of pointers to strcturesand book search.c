#include<stdio.h>
#include<string.h>
struct Book{
 int id;
 char title[50];
 char author[50];
};
int main(){
    struct Book b1={101,"C Programing","dennis ritche"};
    struct Book b2={102,"Data Stuctures","Mark Wiess"};
    struct Book b3={103,"Operating systems","Silberschatz"};

    struct Book *book[3]={&b1,&b2,&b3};

    int searchID,i,found=0;
    printf("Enter Book Id to search:");
    scanf("%d", &searchID);
    for(i=0;i<3;i++){

         if(book[i]->id == searchID){

         printf("\nBook Found:\n");
         printf("ID:%d\n",book[i]->id);
         printf("Title:%s\n",book[i]->title);
         printf("Author:%s\n",book[i]->author);
         found=1;
         break;

         }
    }
        if(!found)
        printf("\nBook NOt Found!\n");
        return 0;
}
