#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<ctime>
#include<time.h>
#include"project.h"
using namespace std;
int count;
int main()
{
system("color 6f");
int i;
char p[]=" Welcome to our Console based Car Management system ";
gotoxy(20,4);
for(i=0;i<12;i++)
{
Sleep(55);
cout<<":";
}
for(i=0;i<strlen(p);i++)
{
Sleep(50);
cout<<p[i];
    }
for(i=0;i<12;i++)
{
Sleep(55);
cout<<":";
}

char d[]={"A Project developed by"};
gotoxy(49,0);
for(i=0;i<strlen(d);i++)
{
Sleep(50);
cout<<d[i];
    }
   
char A[]={"Ali Hasnain 19K-1331"};
char S[]={"Syed Saad 19K-0209"};
char Z[]={"Ziyaan Ali 19K-0330"};
gotoxy(50,1);
for(i=0;i<strlen(A);i++)
{
Sleep(50);
cout<<A[i];
    }
    gotoxy(50,2);
for(i=0;i<strlen(S);i++)
{
Sleep(50);
cout<<S[i];
    }
    gotoxy(50,3);
for(i=0;i<strlen(Z);i++)
{
Sleep(50);
cout<<Z[i];
    }
 menu:
system("color 6f");
cout<<"\n\n";
design();
static int count=0;
gotoxy(50,8);
cout<<"------------------"<<endl;
gotoxy(50,9);
cout<<"| Enter UserName:| ";
gotoxy(50,10);
cout<<"------------------";
gotoxy(70,9);
string username;
cin>>username;
gotoxy(50,13);
cout<<"------------------"<<endl;
gotoxy(50,14);
cout<<"| Enter Password:| ";
gotoxy(50,15);
cout<<"------------------";
gotoxy(70,14);
string pass;
cin>>pass;

if (username=="FORGET" || username=="forget")
{
gotoxy(50,18);
cout<<"Dail 03482206653  03323444835  03243132082";
gotoxy(53,20);
cout<<"Press Any key to continue!!";
getch();
}

if ((username=="k191331@nu.edu.pk" || username=="k190209@nu.edu.pk" || username=="k190330@nu.edu.pk")&&(pass=="oopproject"))
{
gotoxy(50,20);
cout<<"Welcome Sir!press any key to continue ";
getch();
}
else
{
system("cls");
gotoxy(51,2);
cout<<"Username or Password Incorrect!!";
gotoxy(51,4);
cout<<"Re-Enter Please:";
gotoxy(51,6);
cout<<"Forget Password ? then Enter FORGET/forget in place of user name!!";
count++;
cout<<endl<<count;
if(count==5)
{
gotoxy(53,8);
cout<<"Sorry Come Again later!!";
exit(0);
}
goto menu;
}
system("cls");
int q,r;
system("cls");
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t";
    cout<<"      loading...";
    cout<<"\n\n\t\t\t";
    for(r=1;r<=20;r++){
    for(q=0;q<=50000000;q++);//to display the character slowly
    printf("%c",178);}
system("cls");
choice:
owner o;
system("color f6");
design();
   int a;
   gotoxy(55,5);
   cout<<"|--------------------------------------------|";
   gotoxy(55,6);
   cout<<"|               1)INVENTRY TIME              |";
   gotoxy(55,7);
   cout<<"|--------------------------------------------|";
   gotoxy(55,8);
   cout<<"|               2)SELLING TIME               |";
   gotoxy(55,9);
   cout<<"|--------------------------------------------|";
   gotoxy(55,10);
   cout<<"|               3)UPDATE MODE                |";
   gotoxy(55,11);
   cout<<"|--------------------------------------------|";
   gotoxy(55,12);
   cout<<"|               4)OWNER MODE                 |";
   gotoxy(55,13);
   cout<<"|--------------------------------------------|";
   gotoxy(55,14);
   cout<<"|               5)CUSTOMER MODE              |";
   gotoxy(55,15);
   cout<<"|--------------------------------------------|";
   gotoxy(55,16);
   cout<<"|               0)EXIT                       |";
   gotoxy(55,17);
   cout<<"|--------------------------------------------|";
   gotoxy(55,18);
   cout<<"|               Your Choice:                 |";
   gotoxy(55,19);
   cout<<"|--------------------------------------------|";
   
gotoxy(85,18);
cin>>a;
switch(a)
{
case 0:
system("cls");
system("color 8f");
cout<<"--------------";
cout<<endl<<"|THANKYOU!!!!|"<<endl;
cout<<"--------------";
return 0;

case 1:
system("cls");
system("color f1");
o.assigner();
cout<<"Successfully Entered!."<<endl;
break;

case 2:
system("cls");
o.sell();
break;

case 3:
system("cls");
system("color f3");
o.updateall();
cout<<"SUCCESSFULLY CHANGED"<<endl;
break;

case 4:
system("cls");
system("color f4");
system("cls");
o.ownerdisplayer();
cout<<endl;
break;

case 5:
system("cls");
system("color f6");
o.costumermode();
o.displaychoices();
break;

default:
gotoxy(55,20);
system("color f4");
cout<<"The Number Doesnt match!";
}
cout<<"\nPress any key to goback:";
getch();
system("cls");
goto choice;
return 0;
}
