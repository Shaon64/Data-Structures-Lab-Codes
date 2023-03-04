#include <stdio.h>
int main()
{
int i,n,array[100], position, c;
scanf("%d",&n);
for(i = 0; i < n; i++)

scanf("%d",&array[i]);

int pos;
scanf("%d",&pos);
int ele;
scanf("%d",&ele);
if(pos > n)
printf("Invalid Input");
else

for (i = n – 1; i >= pos – 1; i–)
arr[i+1] = arr[i];

arr[pos-1] = ele;

printf("Array after insertion is:\n");

for (i = 0; i <= n; i++)
printf("%d\n", arr[i]);

printf("Enter the number of elements of the array : ");
scanf("%d", &n);

printf("\nInput the array elements :");

for (c = 0; c < n; c++)
scanf("%d", &array[c]);

printf("\nEnter the position :");
scanf("%d", &position);

if (position >= n+1)
printf("\nDeletion not possible.\n");
else
{
for (c = position – 1; c < n – 1; c++)
array[c] = array[c+1];

printf("\nArray after deletion :");

for (c = 0; c < n – 1; c++)
printf("%d\n", array[c]);
}




return 0;
}
