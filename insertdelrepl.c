#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int ch,i=0,len,pos,cost=0,option=1;
char a[1000],b[1000];
char val;
clrscr();
printf("enter the string1: \n");
scanf("%s",a);
printf("enter the string2: \n");
scanf("%s",b);
while(option)
{
printf("menu\n");
printf("1.insert\n");
printf("2.delete\n");
printf("3.replace\n");
printf("4.Exit\n");
printf("Enter your choice ");
scanf("%d",&ch);
if(cost<19)
{
switch(ch)
{
case 1:
printf("the cost of the string is 4\n");
printf("Enter the position and value where wish to insert:");
scanf("%d\n",&pos);
scanf("%c",&val);
len=strlen(a);
for(i=len-1;i>=pos-1;i--)
{
a[i+1]=a[i];
}
a[len+1]='\0';
a[pos-1]=val;
printf("after insertion:");
printf("%s",a);
cost=cost+4;
printf("\nDo you want to continue?y->1/no-0");
scanf("%d",&option);
break;
case 2:
printf("The cost is 3");
printf("Enter the position to delete: ");
scanf("%d",&pos);
len=strlen(a);
for(i=pos-1;i<len;i++)
a[i]=a[i+1];
printf("after deleting");
printf("%s",a);
cost=cost+3;
printf("\nDo you want to continue?y->1/no-0");
scanf("%d",&option);
break;
case 3:
printf("the cost is 5\n");
printf("enter the position to replace and value");
scanf("%d\n",&pos);
scanf("%c",&val);
a[pos-1]=val;
printf("after replacing");
printf("%s",a);
cost=cost+5;
printf("\nDo you want to continue?y->1/no-0");
scanf("%d",&option);
break;
}
}
}
printf("your total cost is %d",cost);
getch();
}
