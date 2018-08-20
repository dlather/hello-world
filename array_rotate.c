#include<stdio.h>

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
// rotating by using temporary array
void leftrotatebytemp_array(int *arr,int size,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=0;i<size-d;i++)
    {
        arr[i]=arr[i+d];
    }
    for(int i=0;i<d;i++)
    {
        int j=i+size-d;
        arr[j]=temp[i];
    }

}

//rotating array by reversal
/* Let AB are the two parts of the input array where A = arr[0..d-1] and B = arr[d..n-1]. The idea of the algorithm is :

Reverse A to get ArB, where Ar is reverse of A.
Reverse B to get ArBr, where Br is reverse of B.
Reverse all to get (ArBr) r = BA */
void leftrotatebyreversal(int *arr,int size,int d)
{
    int a[d];
    int b[size-d];
    for(int i=0;i<d;i++)
    {
        a[i]=arr[i];
    }
    for(int i=d;i<size;i++)
    {
        b[i-d]=arr[i];
    }
    void arrayreverse( int s,int temp[s])
    {
        int t[s];
        for(int i=0;i<s;i++)
        {
            t[i]=temp[i];
        }
        for(int i=0;i<s;i++)
        {
            temp[i]=t[s-i-1];
        }
    }
    arrayreverse(d,a);
    arrayreverse(size-d,b);
    for(int i=0;i<size;i++)
    {
        if(i<d)
            arr[i]=a[i];
        else
            arr[i]=b[i-d];
    }
    arrayreverse(size,arr);
}

void printarray(int arr[],int size)
{
    printf("Array is : \n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}

/*Step 1 : Copy the entire array two times in temp[0..2n-1] array.
Step 2 : Starting position of array after k rotations in temp[] will be k % n. We do k
Step 3 : Print temp[] array from k % n to k % n + n.*/

void left_rotate_array_by_copy(int *arr,int size,int d)
{
    int temp[2*size];
    for(int i=0;i<2*size;i++)
    {
        temp[i]=arr[i%size];
    }
    for(int i=d;i<size+d;i++)
    {
        arr[i-d]=temp[i];
    }
}

int main(void)
    {
    printf("Enter Array size \n");
    int size;
    scanf("%d",&size);
    printf("Enter Array Elements \n");
    int arr[size];
    for(int i=0;i<size;i++)
        {
        scanf("%d",&arr[i]);
        }
    printf("Enter shift \n");
    int d;
    scanf("%d",&d);
    left_rotate_array_by_copy(arr,size,d);
    printarray(arr,size);
    return 0;
    }
