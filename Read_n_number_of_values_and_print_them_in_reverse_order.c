#include <stdio.h>
void main()
{
  int a[50],i,n;
  printf("Enter the n value");
  scanf("%d",&n);
  printf("Enter the elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("The elements are");
  for(i=n-1;i>=0;i--)
  {
    printf("%d\n",a[i]);
  }
}
