#include<stdio.h>
#include<math.h>
int main ()
{
int R, C, E, total_cells;
scanf("%d%d%d",&R,&C,&E);
total_cells=(R*C)+(C*E);
printf("%d", total_cells);
return 0;
}
