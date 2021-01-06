#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void owner();
void customer();
void log_in();
void ap_details();
void booking();
void payment();
int ap_class();
int extra();
void rent();
void copyright();
char name[100],loc[170];
int pass=0,p_num,password=123456;

int main()
{
    int click;

     while(1)
     {
         system("cls");
         printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tSAFE HOME\033[m\n");
          printf("\n\033[0;32m\n\t\t\t\t\t|Enter any number|\n\n\t\t\t\t\t|1|owner \n\t\t\t\t\t|2|Customer\n\t\t\t\t\t|3|Exit\033[m\n\t\t\t\t\t");
         scanf("%d",&click);
         switch(click)
     {
     case 1:
        owner();
        break;
     case 2:
        customer();
        break;
     case 3:
        exit(1);
        default:
        printf("\n\033[0;32m\n\n\n\n\n\t\t\t\t\tplease try again\033[m\n");
     }
     }
  getch();

}

void log_in()
{
    system("cls");

    while(1)
    {
        printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tLOG IN\033[m\n");
        if(pass==password)
        {
            break;
        }
        printf("\033[0;32m\n\t\t\t\t\tEnter your password: \033[m");
        scanf("%d",&pass);
        if(password==pass)
        {
            break;
        }

    }
}

void owner()
 {
     int click;
     log_in();

     while(1)
     {
          system("cls");
                  printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tADMIN MENU\033[m\n");
          printf("\n\033[0;32m\n\t\t\t\t\t|Enter any number|\n\n\t\t\t\t\t|1|Apartment details \n\t\t\t\t\t|2|Copyright\n\t\t\t\t\t|3|Main menu\033[m\n\t\t\t\t\t");
         scanf("%d",&click);
         switch(click)
     {
     case 1:
        ap_details();
        break;
     case 2:
        copyright();
        break;
     case 3:
        main();
        break;

      default:
       printf("\nplease enter again\n");
     }
     }

 }

 void ap_details()
 {
     system("cls");
             printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tAPARTMENT DETAILS\033[m\n");

     printf("\n\033[0;32m\n\t\t\t\t\tPrice List\n\t\t\t\t\t|1| LUXURY 30000 per month\n\t\t\t\t\t|2| SEMI LUXURY 15000 per month\n\t\t\t\t\t|1| NORMAL 6000 per month\033[m\n");
     getch();
 }

 void customer()
 {
  int click;

     while(1)
     {
          system("cls");
                  printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tCUSTOMER MENU\033[m\n");
          printf("\n\033[0;32m\n\t\t\t\t\t|Enter any number|\n\n\t\t\t\t\t|1|Apartment details \n\t\t\t\t\t|2|Booking\n\t\t\t\t\t|3|Exit\033[m\n\t\t\t\t\t");
         scanf("%d",&click);
         switch(click)
     {
     case 1:
        ap_details();
        break;
     case 2:
        booking();
        break;
     case 3:
        main();
        break;

      default:
       printf("\nplease enter again\n");
     }
     }

 }

void booking()
{
    int n;
    system("cls");
                  printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tENTER YOUR INFORMATION\033[m\n");
     printf("\033[0;32m\n\t\t\t\t\tEnter your name:\033[m");
     scanf("\n");
     gets(name);
     printf("\033[0;32m\n\t\t\t\t\tEnter location: \033[m");
     scanf("\n");
     gets(loc);
     printf("\033[0;32m\n\t\t\t\t\tEnter your phone number: \033[m");
     scanf("%d",&p_num);
     printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tDo you want to make payment now?\n\t\t\t\t\t|1|Yes\n\t\t\t\t\t|2|No\033[m\n\t\t\t\t\t");
     scanf("%d",&n);
     while(1)
     {
     switch(n)
     {
     case 1:
        payment();
        break;
     case 2:
        customer();
        break;
     default:
        printf("try again");

     }
     }
}

void payment()
{
    int n,a,ap,ex,total;
     system("cls");
                  printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tPAYMENT MENU\033[m\n");
                  printf("\033[0;32m\n\t\t\t\t\tEnter rent duration(month): \033[m");
                  scanf("%d",&n);
                  ap=ap_class();
                  ex=extra();
                  total=(ap+ex)*n;
                  system("cls");
                  printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tPAYMENT MENU\033[m\n");
                  printf("\033[0;32m\n\t\t\t\t\t|1|Bkash \n\t\t\t\t\t|2|Rocket\033[m\n\t\t\t\t\t");
                  scanf("%d",&a);
                  system("cls");
                  printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tPAYMENT MENU\033[m\n");
                  printf("\033[0;32m\n\t\t\t\t\tPAYMENT SUCCESSFUL");
                  printf("\033[0;32m\n\t\t\t\t\tPayment receipt: \n\t\t\t\t\tName: %s \n\t\t\t\t\tPhone number: %d \n\t\t\t\t\tTotal bill: %d\033[m\n",name,p_num,total);
                  getch();


}

int ap_class()
{
    int click;
    while(1)
    {
    system("cls");
                  printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tAPARTMENT CLASS\033[m\n");
          printf("\n\033[0;32m\n\t\t\t\t\t|Choose apartment class|\n\n\t\t\t\t\t|1|LUXURY \n\t\t\t\t\t|2|SEMI LUXURY\n\t\t\t\t\t|3|NORMAL\033[m\n\t\t\t\t\t");
         scanf("%d",&click);
         switch(click)
     {
     case 1:
        return 30000;
        break;
     case 2:
        return 15000;
        break;
     case 3:
        return 6000;
        break;

      default:
       printf("\nplease enter again\n");
     }
    }
}


int extra()
{
    int click;
    while(1)
    {
    system("cls");
                  printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tAPARTMENT CLASS\033[m\n");
          printf("\n\033[0;32m\n\t\t\t\t\t|Choose Extra Services|\n\n\t\t\t\t\t|1|Laundry service \n\t\t\t\t\t|2|Food corner\n\t\t\t\t\t|3|Playground\n\t\t\t\t\t|4|None\033[m\n\t\t\t\t\t");
         scanf("%d",&click);
         switch(click)
     {
     case 1:
        return 1000;
        break;
     case 2:
        return 5000;
        break;
     case 3:
        return 500;
        break;
        case 4:
        return 0;
        break;

      default:
       printf("\nplease enter again\n");
     }
    }
}


  void copyright()
 {
     system("cls");
             printf("\033[0;32m\n\n\n\n\n\t\t\t\t\tCOPYRIGHT\033[m\n");

     printf("\n\033[0;32m\n\t\t\t\t\tALL RIGHTS RESERVED\n\t\t\t\t\tTO FARHANA ISLAM URMI\n\t\t\t\t\tE-MAIL:farhanaurmi123@gmail.com\033[m\n");
     getch();
       printf("\n");
 }

