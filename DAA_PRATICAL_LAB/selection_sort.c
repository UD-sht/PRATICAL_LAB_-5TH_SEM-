#include<stdio.h>

int bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            temp=a[j];
            if(a[j]>a[j+1])
            {
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements for array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    bubble_sort(a,n);
    printf("Sorted array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
