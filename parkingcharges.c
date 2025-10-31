#include<stdio.h>
#include<math.h>
int main()
{
int X, Y, H, total_amount;
scanf("%d%d%d", &X, &Y, &H);
total_amount=X+(H-1)*Y;
printf("%d", total_amount) ;
return 0;
}
