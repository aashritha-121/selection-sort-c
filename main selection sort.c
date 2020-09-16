#include<stdio.h>
int main()
{
    int a[100],i,j,num,temp=0,min=0;
    printf("enter number of elements");
    scanf("%d",&num);
    printf("enter array elements:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        min=i;
        for(j=i+1;j<num;j++)
        {

            if(a[min]>a[j])
                min=j;

        }
    temp=a[min];
    a[min]=a[i];
    a[i]=temp;
    }
    printf("sorted array is:");
    for(i=0;i<num;i++)
    {
        printf("%d",a[i]);
    }
}
