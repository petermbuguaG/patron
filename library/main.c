#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct patron{
   char name(100);
   char pass(30);
   char email(50);
   int is_staff;
};
int save_patron(struct patron patron){
file*fp;
fp=fopen("patron","ab");
fwrite(&patron,sizeof(struct patron),1,fp);
fclose(fp);
return1;
    void add patron()
    struct patron patron;
    printf("enter name:");
    getschar();
    gets(patron. name);
    printf("enter email:");
    gets("patron.email:");
    printf("initial password:");
    gets(patron.pass);
    printf("enter 1 if staff 0 otherwise:");
    scanf("%d",&patron.is_staff);
    if(save_patron(patron))
    printf("patron %s successfully add\n",patron.name);
    else
        printf("unsuccessful\n");
}
int menu()
{
  int action;
  printf("select an action:\n");
  printf("1. add new patron\n");
  printf("2. view patron\n");
  printf("3. view books\n");
  printf("your action:");
  scanf("%d",&action);
  if("action<1|| action > 4)
     printf("invalid action.try again\n");
}
    return action;
}
void execute_action(int action){
    switch(action){
        case 1
           add_patron
           break;
        case 2
           printf("here is a list of patron\n");
           break;
        case 3
           printf("here is a list of books");
           break;
        case 4
           printf("adding a new book\n");
           break;
        default:
            printf("invalid action.\n")
    }
}


int main()
{
   printf("county library");
   printf("welcome peter!\n");
   execute_action(menu());
   return 0;
}
