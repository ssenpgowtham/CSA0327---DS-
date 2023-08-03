#include<stdio.h>
int main()
{
int num;
printf("Enter the Number of elements in the array");
scanf("%d",&num);
for (i=0;i<num;i++)
printf("Enter the elements in the array");
scanf("%d",&a[i]);
for(i=0;i<num;i++)
if (a[i]%2==0)
{
printf("%d is  even number",a[i]);
}
else
{
printf("%d is  odd number",a[i]);
}
return 0;
}
