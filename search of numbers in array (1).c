#include <stdio.h>
int mynums[] = {0,1,2,10,20,-20,34,45,33,123,-101,108};
int main()
{
int i,j,val;
printf("Enter the number you want to search?\n");
scanf("%d", &val);
j = sizeof(mynums)/sizeof(int);
printf("Total numbers in mynums array is %d\n\n",j);
printf("Searching for %d in mynums array.....\n\n",val);
for(i=0; i<j; i++)
{
if(mynums[i] == val)
{
printf("Number %d found at array index %d\n",val,i);
return(0);
}
}
printf("Sorry, Number not found\n");
}
