#include <stdio.h>
int main()
{
float principal, term, rate, simple_interest;
printf("Enter principal (amount): ");
scanf("%f", &principal);
printf("Enter term: ");
scanf("%f", &term);
printf("Enter rate: ");
scanf("%f", &rate);
simple_interest = (principal * term * rate) / 100;
printf("Simple Interest = %f\n", simple_interest);
return 0;
}
