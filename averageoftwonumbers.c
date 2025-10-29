#include<stdio.h>
#include<math.h>
int main()
{
int num1,num2;
float Average;
scanf("%d",&num1);
scanf("%d",&num2);
Average=(float)(num1+num2)/2.0;
printf("Average of %d and %d is: %.2f
,num1, num2, Average);
return 0;
}
