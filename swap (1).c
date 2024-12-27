#include <stdio.h>
int main()
{
int x, y;
int temp;
printf("Enter Value of x: ");
scanf("%d", &x);
printf("\nEnter Value of y: ");
scanf("%d", &y);
/* swap using a temporary variable */
temp = x;
x = y;
y = temp;
printf ("\nAfter Swapping: x = %d, y = %d", x, y);
return 0;
}
