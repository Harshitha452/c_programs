#include<stdio.h>
void main()
{
    int n1,n2,i,max,lcm;
    printf("Enter the value of n1 and n2:");
    scanf("%d%d",&n1,&n2);
    max=((n1>n2)?n1:n2);
    for(i=1;i<max;i++)
    {
        if((max%n1==0) && (max%n2==0))
        {
            printf("The lcm %d and %d of %d",n1,n2,max,lcm);
            break;
        }
    }
    max++;
}
