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
    int arr[]={3,6,5,4,8,9,10};
    int ind[]={6,4,3,1,2,5,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k,temp1,temp2;
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            if(ind[j]==i)
                {
                    k=j;
                    break;
                }
        }
    temp1=arr[i];
    temp2=ind[i];
    arr[i]=arr[k];
    ind[i]=ind[k];
    arr[k]=temp1;
    ind[k]=temp2;
    }
    printarray(arr,size);

}
