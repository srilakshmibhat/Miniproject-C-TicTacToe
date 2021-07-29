#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
int i,j,k=0, row=5, col=5;
char elt1,elt2,l='1';
char a[6][6], n1[20], n2[20];
void player1()
{
char pos1;
printf("%s : Enter the position\n",n1);
scanf(" %c",&pos1);
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
if(a[i][j]==pos1)
{
a[i][j]=elt1;
k=k+1;
break; }
}}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
printf("%c ",a[i][j]);
printf("\n");
}
}
void player2()
{
char pos2;
printf("%s : Enter the position\n",n2);
scanf(" %c",&pos2);
for(i=0;i<row;i++)
for(j=0;j<col;j++)
if(a[i][j]==pos2)
{ a[i][j]=elt2;
k=k+1;
break; }
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
printf("%c ",a[i][j]);
printf("\n");
}
}
void check()
{
if(a[0][0]==a[0][2]&&a[0][2]==a[0][4])
{ if(a[0][0]==elt1)
printf("congratulations! %s won the game!",n1);
else printf("congratulations! %s won the game!",n2);
getch();
exit(0);
}
else if(a[2][0]==a[2][2]&&a[2][2]==a[2][4])
{ if(a[2][0]==elt1)
printf("congratulations! %s won the game!",n1);
else
printf("congratulations! %s won the game!",n2);
getch();
exit(0);
}
else if(a[4][0]==a[4][2]&&a[4][2]==a[4][4])
{ if(a[4][0]==elt1)
printf("congratulations! %s won the game!",n1);
else printf("congratulations! %s won the game!",n2);
getch();
exit(0);
}
else if(a[0][0]==a[2][0]&&a[2][0]==a[4][0])
{ if(a[0][0]==elt1)
printf("congratulations! %s won the game!",n1);
else
printf("congratulations! %s won the game!",n2);
getch();
exit(0);
}
else if(a[0][2]==a[2][2]&&a[2][2]==a[4][2])
{ if(a[0][2]==elt1)
printf("congratulations! %s won the game!",n1);
else printf("congratulations! %s won the game!",n2);
getch();
exit(0);
}
else if(a[0][4]==a[2][4]&&a[2][4]==a[4][4])
{ if(a[0][4]==elt1)
printf("congratulations! %s won the game!",n1);
else printf("congratulations! %s won the game!",n2);
getch();
exit(0);
}
else if(a[0][0]==a[2][2]&&a[2][2]==a[4][4])
{ if(a[0][0]==elt1)
printf("congratulations! %s won the game!",n1);
else printf("congratulations! %s won the game!",n2);
getch();
exit(0);
}
else if(a[0][4]==a[2][2]&&a[2][2]==a[4][0])
{ if(a[2][2]==elt1)
printf("congratulations! %s won the game!",n1);
else printf("congratulations! %s won the game!",n2);
getch();
exit(0);
}
else printf("\n");
}
int main()
{
//clrscr();
printf("- - - - - - - - - - - - - - - -");
printf("\n\n********* TIC-TAC-TOE *********\n\n");
printf("- - - - - - - - - - - - - - - -\n\n\n");
printf("Rules:\n* This is a 2 player game.\n* The 2 characters are o and x\n\n");
a[1][1]='+';
a[1][3]='+';
a[3][1]='+';
a[3][3]='+';
for(i=0;i<row;i+=2)
{
for(j=1;j<col;j+=2)
{
a[i][j]='|';
}
}
for(i=1;i<row;i+=2)
{
for(j=0;j<col;j+=2)
{
a[i][j]='-';
}
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%c ",a[i][j]);
}
printf("\n");
}
printf("\nThese numbers denote the positions:\n\n");
for(i=0;i<row;i+=2)
for(j=0;j<col;j+=2)
{ a[i][j]=l;
l++;}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("%c ",a[i][j]);
}
printf("\n");
}
printf("player 1: Enter your name\n");
scanf("%s",n1);
printf("player 2: Enter your name\n");
scanf("%s",n2);
printf("%s : enter your character\n",n1);
scanf(" %c",&elt1);
if(elt1=='x')
elt2='o';
else elt2='x';
printf("\n %s : your character is %c\n\n",n2,elt2);
while(k<=9)
{
player1();
check();
if(k==9)
{ printf("Draw match!");
getch();
exit(0); }
player2();
check();
}
getch();
}

