int main(void)
{
int n, i;
unsigned long fact = 1;
printf("Enter an integer: ");
scanf("%d", &n);
if (n < 0)
{
printf("Error: Factorial of a negative number does not exist\n");
}
else
{
for (i = 1; i <= n; ++i) {
fact *= i;
}
printf("Factorial of %d = %lu\n", n, fact);
}
return 0;
}
