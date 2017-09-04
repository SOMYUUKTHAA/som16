#include <stdio.h>
int main()
{
int a, b, i, num;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &a, &b);
printf("Prime numbers between %d and %d are: ", a, b);
while (a<b)
{
num = 0;
for(i=2;i<=a/2;++i)
{
if(a % i == 0)
{
num = 1;
break;
}
}
if (num == 0)
printf("%d ", a);
++a;
}
return 0;
}
