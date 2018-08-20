#include<stdio.h>


void printarray(int arr[],int size)
{
    printf("Array is : \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}

int main(void)
{
    int arr[]={3,-5,7,-9,-6,-3,5,7,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=0;
    int temp;
    for(j=0;j<size;j++)
    {
        if(arr[j]<0)
        {
            temp=arr[j];
            for(int k=j;k>i;k--)
            {
                arr[k]=arr[k-1];
            }
            arr[i]=temp;
            i++;
        }

    }
    printarray(arr,size);
}
