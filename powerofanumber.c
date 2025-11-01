#include<stdio.h>
#include<math.h>
int main()
{
int x, y, M, formula, answer;
scanf ("%d%d%d" , &x, &y, &M) ;
formula=pow(x,y);
answer=formula%M;
printf("%d", answer);
return 0;
}
