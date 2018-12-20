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
     printf("1:enter the data\n");
     printf("2:show the input data\n");
     printf("3:make the table\n");
     printf("\n");
     
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
     char ch;
       FILE *fp;
       fp = fopen("sba_data.txt","w");
       if(fp==NULL){
                    printf("cannot oper the file!\n");
                    system("pause");
                    exit(1);
                    }
     printf("your age");
       ch = getchar();
       while(ch!='\n'){
                       fputc(ch,fp);
                       ch=getchar();
                       }
       fclose(fp);
     

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
