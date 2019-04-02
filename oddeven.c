#include<stdio.h>
void main()
{
int num,r;
printf("Enter a number");
scanf("%d",&num);
r=num%2;
if(r==0)
printf("EVEN");
else 
printf("ODD");
}
