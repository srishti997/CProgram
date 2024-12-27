#include <stdio.h>
int npower(int n1, int n2);
int main()
{
int base, a, result;
printf("Enter base number: ");
scanf("%d", &base);
printf("Enter power number(positive integer): ");
scanf("%d", &a);
result = npower(base, a);
printf("%d^%d = %d\n", base, a, result);
return 0;
}

int npower(int base, int a)
{
if (a != 0) {
return (base * npower(base, a - 1));
}
else {
return 1;
}
}
