#include<stdio.h>

int main(void)
{
    int arr[]={7,6,6,8,4,3,5};
    int size =7;
    int k=5;
    int temp[]={0,0,0,0,0,0,0};
    int count=0;
    int j=0;
    int sum=0;
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<=k)
            count++;
        else
        {
            sum+=count;
            temp[j]=count;
            j++;
            count=0;
            if(max<temp[j])
                max=temp[j];
        }
    }
    printf("Min no of swaps needed %d",sum-max);

}
