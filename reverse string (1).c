#include <stdio.h>
#include <string.h>
int main() {
char str[40]; // declare the size of the character string
printf("Enter a string to be reversed: ");
scanf("%s", str);
int length = strlen(str);
// Reverse the string manually
for (int i = 0, j = length - 1; i < j; i++, j--) {
char temp = str[i];
str[i] = str[j];
str[j] = temp;
}
printf("After the reverse of a string: %s\n", str);
return 0;
}
