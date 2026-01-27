#include <stdio.h>
# include <conio.h>
 int main()
{
int array [] = {2,5,7,1};
int n = size of (array) / size of(array[0]);
int sum = 0;
printf ("\nCalculate the sum of all elements\n");

for (int i=0; i<n; i++)
{
sum+= array[i];
}
printf ("Sum of array element:%d\n",sum);
getch();
return 0;
}