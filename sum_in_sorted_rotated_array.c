/*Given a sorted and rotated array, find if there is a pair with a given sum
Given an array that is sorted and then rotated around an unknown point. Find if array has a pair with given sum ‘x’. It may be assumed that all elements in array are distinct.

Examples :

Input: arr[] = {11, 15, 6, 8, 9, 10}, x = 16
Output: true
There is a pair (6, 10) with sum 16 */
#include<stdio.h>

void printarray(int arr[],int size)
{
    printf("Array is : \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}


// rotating each time by 1 element
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

int findpivot(int *arr,int size)
{
    int piv;
    int i;
    for( i=0;i<size;i++)
    {
        if(arr[i+1]<arr[i])
            {
                piv=i;
                break;
            }
    }
    return piv;
}


void find_elements_with_sum(int *arr,int size,int sum,int pivot)
{
     if(pivot==size)
        pivot=0;
    if(pivot==-1)
        pivot=size-1;
    int s=pivot+1;
    int b=pivot;
    int S=arr[s];
    int B=arr[b];
    int found=0;
    while(s!=b)
    {
        if(s==size)
            s=0;
        if(b==-1)
            b=size-1;
        if(sum==(S+B))
        {
            printf("Elements found :%d %d",S,B);
            found=1;
            break;
        }
        else if(sum>(S+B))
        {
            S=arr[s+1];
        }
        else
        {
            B=arr[b-1];
        }
    }
    if(found==0)
        printf("Elements Not found");
}

int main(void)
    {
    printf("Enter Array size \n");
    int size;
    scanf("%d",&size);
    printf("Enter Array Elements in Asending order \n");
    int arr[size];
    for(int i=0;i<size;i++)
        {
        scanf("%d",&arr[i]);
        }
    printf("Enter shift \n");
    int d;
    scanf("%d",&d);
    leftrotatebyone_by_one(arr,size,d);
    printarray(arr,size);
    int pivot=findpivot(arr,size);
    int sum;
    printf("Enter sum");
    scanf("%d",&sum);
    find_elements_with_sum(arr,size,sum,pivot);
    return 0;
    }
    // Does not run when shift =0, pivot becomes =size

