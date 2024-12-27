#include <stdio.h>
int main()
{
/* Initializing variables */
char str[100];
int i,length=0;
/* Accepting input */
printf("Enter a string: \n");
scanf("%s",str);
/* for loop to count till null char */
for(i=0; str[i]!='\0'; i++)
{
length++; //Counting the length.
}
printf("\nLength of input string: %d\n",length);
return 0;
}
