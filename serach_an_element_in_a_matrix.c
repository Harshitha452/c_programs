#include<stdio.h>
void main()
{
    int a[4][4]={{0,2,4,3},{8,5,6,7},{8,9,1,1}};
    int search = 3;
    int flag=0;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(a[i][j]==search)
            {
                printf("Element is found at (%d, %d) position",i,j);
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        printf("Not found");
}
