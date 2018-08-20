#include<stdio.h>
void printarray(int arr[],int size)
{
    printf("Array is : \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void swap(int *arr,int i,int j);
int main(void)
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",size);
    int i=0;
    int j=size-1;
    int k=size-1;
    swap(arr,i,k);
        i++;
        swap(arr,i,j);
        k--;
        i++;
    while(i<size)
    {
        swap(arr,i,k);
        i++;
        swap(arr,i,j);
        k--;
        i++;
    }
    printarray(arr,size);
}

void swap(int *arr,int m,int n)
{
    int temp=arr[m];
    arr[m]=arr[n];
    arr[n]=temp;
}
