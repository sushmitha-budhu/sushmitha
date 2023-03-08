#include<stdio.h>
void main()
{
    int arr [20],size,i,j, temp;
    scanf("%d",& size);
    printf("enter the size of array=");
    scanf("%d",&size);
    printf("enter the elements of array----");
    for(i=0;i<size;i++)
    {
        printf("\n enter the %d element", i+1);
        scanf("%d",& arr[i]);
        }
        for(i=0;j<size -1;j++)
        for(j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        printf("\n stored array is---");
        for(i=0;i<size;i++)
        printf("\t %d", arr[i]);
        }
