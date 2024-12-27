#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
float a,b,c,real,imag;
float root1,root2,d;
printf("Enter the values of Coefficient a, b, c in a single line with space in between:\n");
scanf("%f%f%f",&a,&b,&c);
d=((b*b)-(4*a*c)); /* Calculate the Determinant ‘d’ */
if(d==0)
{
printf("The roots are real and equal\n");
root1=root2=((-b)/(2*a));
printf("root1=root2 is %.3f\n",root1);
}
else if(d>0)
{
printf("The roots are real and Distinct\n");
root1=(((-b)+sqrt(d))/(2*a));
root2=(((-b)-sqrt(d))/(2*a));
printf("root1 is %.3f \n root2 is %.3f \n",root1,root2);
}
else
{
printf("The roots are real and imaginary\n");
real=(-b)/(2*a);
imag=sqrt(-d)/(2*a);
printf("root1 is %.3f+i%.3f \n",real,imag);
printf("root2 is %.3f-i%.3f \n",real,imag);
}
}
