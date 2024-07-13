#include<stdio.h>
void main()
{
  int a[50],i,n;
printf("Enter the n value");
scanf("%d",&n);
printf("Enetr the elementes");
for (i=0;i<n;i++)
{
sacnf("%d",&a[i]);
}
printf("the elements are");
for(i=n-1;i>0;i--)
{
printf("%d\n",a[i]);
}
}
