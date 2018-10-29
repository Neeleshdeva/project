#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int age[100],c=0,i,j,m=0,n=0,l=0,o=0,k=0,ch,ch1;
char name[50][50],add[50][50],email[50][50],bgrp[50][50],gen[50][50],bl[50],mid[50];
double mob[50],mno;
printf("enter your choice 1.New donar\n 2.Display Donars \n 3.Selecting categorie to display\n")
scanf("%d",&ch);
do
{
switch(ch)
{
case 1:
          printf("BLOOD BANK APPLICATION\n");
          printf("enter the Donar name");
for(i=0;i>0;i++)
{
for(j=0;name[j]!='\0';j++)
{
          scanf("%c",&name[i][j]);
}
c++;
}
          printf("Enter the Age");
          scanf("%d",&age[m++]);
          printf("Enter the Address");
for(i=0;i>0;i++)
{
for(j=0;add[j]!='\0';j++)
{
          scanf("%c",&add[i][j]); 
}
}
          printf("Enter the Email id");
for(i=0;i>0;i++)
{
for(j=0;email[j]!='\0';j++)
{
          scanf("%c",&email[i][j]);
}
}
          printf("enter mobile no");
          scanf("%ld",&mob[n++]);
          printf("enter blood group");
for(i=0;i>0;i++)
{
for(j=0;bgrp[j]!='\0';j++)
{
          scanf("%c",&bgrp[i][j]);
}}
          printf("enter gender");
for(i=0;i>0;i++)
{
for(j=0;gen[j]!='\0';j++)
{
          scanf("%c",&gen[i][j]);
}}
          break;

case 2:
        Printf("LIST OF ALL DONARS");
for(i=0;i<c;i++)
{
printf("%s  %d  %s  %s  %ld  %s  %s ",name[i],age[i],add[i],email[i],mob[i],bgrp[i],gen[i]);
}
break;

case 3:
printf("1.Blood group\n2.Mobile no\n3.Email id");
printf("enter your choice");
scanf("%d",&ch1);
do
{
switch( ch1)
{
case 1:
printf("enter the blood group");
scanf("%s",bl);
for(i=0;i<c;i++)
{
if(bgrp[i]==b1)
{
num[k++]=i;
}
}
for(i=0;i<k;i++)
{
printf("%s  %d  %s  %s  %ld  %s ",name[num[i]],age[num[i]],add[num[i]],email[num[i]],mob[num[i]],gen[num[i]]);
}
break;

case 2:
printf("enter the mobile no");
scanf("%ld",&mno);
for(i=0;i<c;i++)
{
if(mob[i]==mno)
{
num[l++]=i;
}
}
for(i=0;i<l;i++)
{
printf("%s  %d  %s  %s  %s  %s ",name[num[i]],age[num[i]],add[num[i]],email[num[i]],bgrp[num[i]],gen[num[i]]);
}
break;

case 3:
printf("enter the email id");
scanf("%s",mid);
for(i=0;i<c;i++)
{
if(email[i]==mid)
{
num[o++]=i;
}
}
for(i=0;i<o;i++)
{
printf("%s  %d  %s  %ld  %s  %s ",name[num[i]],age[num[i]],add[num[i]],mob[num[i]],bgrp[num[i]],gen[num[i]]);
}
break;
}while(ch1>3);
}
}while(ch>3);
}
}
