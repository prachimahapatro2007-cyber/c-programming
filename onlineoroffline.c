#include<stdio.h>
int main ()
int N,M;
{
scanf("%d%d", &N, &M) ;
int discountline=N-(N*10)/100;
if(discountline<M)
{
printf("ONLINE");
}
else if(discountline>M)
{
printf("DINING");
}
else{
printf("EITHER");
}
return 0;
}
