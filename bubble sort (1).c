#include <stdio.h>
#include <stdlib.h>
int numsort(const void *x,const void *y);
int main()
{
int nums[10];
int i,j,k;
printf("How many numbers do you want to sort:\n");
scanf("%d",&i);
getchar(); /* read trailing newline char */
if( i > 10) {
printf("Can handle only 10 numbers, restricting to 10 \n");
i = 10;
}
printf("Ok, now enter %d numbers \n", i);
for(j=0; j<i; j++) {
scanf("%d",&nums[j]);
getchar(); /* read trailing whitespace */
}
printf("Initial Array as given:\n");
for(j=0; j<i; j++) {
printf("nums[%d] = %d\n",j, nums[j]);
}
qsort(nums,i,sizeof(int),numsort);
printf("\nSorted Array (Ascending Order) \n");
for(j=0; j<i; j++) {
printf("nums[%d] = %d\n",j, nums[j]);
}
}
int numsort(const void *x, const void *y)
{
int a,b;
a = *((int *)x);
b = *((int *)y);
if ( a < b) {
return(-1);
}
else if ( a > b ) {
return(1);
}
else {
return(0);
}
}
