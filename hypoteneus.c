#include<stdio.h>
#include<math.h>
int main()
{
double x,y,hypotenuse;
//input two sides
scanf("%If %1f",&x,&y);
//calculate hypotenuse using pythagoras theorem
hypotenuse = sqrt((x*x) + (y*y));
//print result with 2 decimal places
printf("%.21f".hypotenuse) ;
return 0;
}
