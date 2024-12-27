#include <stdio.h>
int main()
{
char str1[21],str2[21],str3[41];
int i, j, k;
printf("Enter the first string(max length 20 characters):\n");
fgets(str1,21,stdin);
printf("Enter the second string(max length 20 characters):\n");
fgets(str2,21,stdin);
printf("First String: %s\n",str1);
printf("Second String: %s\n",str2);
for(i=0,j=0; str1[i] != '\0' ; i++) {
if( str1[i] != '\n') /* skip copying the new line character */
{
str3[j++] = str1[i];
}
}
for(i=0; str2[i] != '\0'; i++) {
if(str2[i] != '\n') /* skip copying the new line character */
{
str3[j++] = str2[i];
}
}
str3[j] = '\0';
printf("Concatenated String: %s\n",str3);
}
