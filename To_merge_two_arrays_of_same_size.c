#include<stdio.h>
int main()
{
    int arr1=5,arr2=5,arr_merge,i,j;
    int a[5]={5,4,3,2,1};
    int b[5]={10,9,8,7,6};
    arr_merge=arr1+arr2;
    int c[arr_merge];
    for(i=0;i<arr1;i++)
    {
        c[i]=a[i];
    }
    for(i=0,j=arr1;j<arr_merge && i<arr2;i++,j++)
    {
        c[j]=b[i];
    }
    for(i=0;i<arr_merge;i++)
    {
        printf("%d",c[i]);
    }
    return 0;
    }
