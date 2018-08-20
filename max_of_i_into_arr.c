#include<stdio.h>

int sum(int *arr,int size)
{
    int sum=0;
    for(int i=1;i<size;i++)
    {
        sum=sum+i*arr[i];
    }
    return sum;
}

void leftrotatebyone_by_one(int *arr,int size,int d)
    {
    for(int i=0;i<d;i++)
    {
        int temp=arr[0];
        for(int j=0;j<size-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[size-1]=temp;
    }
    }

int main(void)
{
    int arr[]={1,20,2,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int r[size];
    int arraysum=0;
    for(int i=0;i<size;i++)
    {
        arraysum+=arr[i];
    }
    printf("Array Sum is : %d \n",arraysum);
    r[0]=sum(arr,size);
    for(int i=1;i<size;i++)
    {
        leftrotatebyone_by_one(arr,size,1);
        r[i]=r[i-1]-arraysum+(size*arr[size-1]);
        printf("%d\n",r[i]);
    }
    int max=r[0];
    for(int i=1;i<size;i++)
    {
        if(r[i]>max)
            max=r[i];
    }
    printf("Max is %d",max);
}
