#include<stdio.h>
#include<math.h>
int main()
{
int N, X, remaining_number_of_donations;
scanf("%d%d",&N, &X);
remaining_number_of_donations=N-X;
printf("%d", remaining_number_of_donations);
return 0;
}
