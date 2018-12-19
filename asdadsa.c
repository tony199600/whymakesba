#include<stdio.h>
#include<stdlib.h>
//
void menu(void);
void a (void);
void b (void);
void c (void);
//
void menu(){
     int choice;
     printf("1\n");
     printf("2\n");
     printf("3\n");
     printf("4\n");
     
     printf("input:");
     int ascii,key;
     if(!kbhit()) ascii=getch();
     for (;;){
         if(ascii == 27)
         exit(1);
         else if(ascii == 49)
         a();
         else if(ascii == 50)
         b();
         else if(ascii == 51)
         c();
         else
            printf("enter angin\n");
            system("pause");
            system("cls");
            menu();
     }
}
//
void a(){
     system("cls");
     printf("1");
}
//
void b(){
     system("cls");
     printf("2");
}
//
void c(){
     system("cls");
     printf("3");
}
//
main(){
       menu();
       }
