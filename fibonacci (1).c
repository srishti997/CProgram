#include <stdio.h>
int main()
{
int i,a,b,n,sum;
a = 0; /* ‘a’ and ‘b’ are initialized to the first 2 values */
b = 1;
printf("Enter the position in Fibonacci series (n):\n");
scanf("%d",&n);
if( n <= 0) {
printf("Enter a number greater than 0\n");
return(-1);
}
else if( n == 1) {
sum = 0;
}
else if ( n == 2 ) {
sum = 1;
}
else {
for (int i = 2; i < n; i++)
{
sum = a + b;
a = b;
b = sum;
}
}
printf("The nth number in the Fibonacci series is:%d\n",sum);
return 0;
}
