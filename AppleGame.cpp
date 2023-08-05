#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
int g()
{
int x=21,u,d,c=0,co;
printf(" \n         RULES           ");

printf("\nINVALID CHOICE FOR MORE THAN THREE TIMES WILL ELIMINATE THE PLAYER \n ");
printf("CHOOSE APPLE IN SUCH A WAY THAT THE LAST APPLE IS CHOSEN BY THE COMPUTER \n ");
printf(" IF YOU PICK THE LAST APPLE YOU LOOSE THE GAME  \n ");
printf(" PRESS ANY KEY TO START THE GAME  ");
getch();
system("cls");
printf("\nThere are total %d Apples\n",x);
printf("You can choose from 1 to 4 Apples\n");
while(x>=1)
{
printf("User's Turn\n");
scanf("%d",&u);
if(u<1 || u>4)
{
printf("Follow The Rules Pick Between 1 and 4\n");
c++;
}
   else if(u>4 && c>2)
       exit(0);
else if(u<=4 && c<=2)
{
x=x-u;
printf("Remaining Apples = %d\n",x);
switch(u)
{
case 1 : co=4;
        x=x-co;
        break;
case 2 : co=3;
        x=x-co;
        break;
case 3 : co=2;
        x=x-co;
        break;
case 4 : co=1;
        x=x-co;
        break;
        default: printf("incorrect entry\n");
                 c++;
}
printf("computer's Turn = %d\n",co);

}
printf("Remaining Apples = %d\n",x);
if(x==1)
{
printf("YOU HAVE TO PICK THE LAST APPLE\n");
printf("YOU LOST");
exit(0);
}
}
return 0;
} 

 
int main()
{
char na[5],ac[5];
int i;
printf("               WELCOME TO APPLE GAME              \n");
printf("                       LOGIN                      \n");
printf("ENTER NAME\n");
gets(na);
printf("ENTER PASSWORD\n");
for(i=0;i<=4;i++)
    {
   
    ac[i]=getch();
    printf("*");
}
getch();
if(strcmp(na,"ayush")==0 && strcmp(ac,"ayush")==0)
{


 printf("\nLOGIN SUCCESSFUL");
 system("cls");
  i= g();
}
else
{
printf("\ninvalid");
exit(0);
}
getch();
}
