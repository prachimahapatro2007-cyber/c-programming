#include<stdio.h>
int main()
{
int t,s,b;
scanf("%d%d%d",&t,&s,&b);
int capacity;
capacity=(2*t*s*b*512)/1024;
printf("%d KB",capacity);
return 0;
}
