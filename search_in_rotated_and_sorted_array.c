/* Search an element in a sorted and rotated array
An element in a sorted array can be found in O(log n) time via binary search.
But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2.
Devise a way to find an element in the rotated array in O(log n) time.*/

#include<stdio.h>

/*All solutions provided here assume that all elements in array are distinct.

The idea is to find the pivot point, divide the array in two sub-arrays and call binary search.
The main idea for finding pivot is – for a sorted (in increasing order) and pivoted array, pivot element is the only element for which next element to it is smaller than it.
Using above criteria and binary search methodology we can get pivot element in O(logn) time
Input arr[] = {3, 4, 5, 1, 2}
Element to Search = 1
  1) Find out pivot point and divide the array in two
      sub-arrays. (pivot = 2) Index of 5
  2) Now call binary search for one of the two sub-arrays.
      (a) If element is greater than 0th element then
             search in left array
      (b) Else Search in right array
          (1 will go in else as 1 < 0th element(3))
  3) If element is found in selected sub-array then return index
     Else return -1. */
int findpivot(int *arr,int size);
void searchelement(int *arr,int li,int ui,int ele);
void binary_search(int *arr,int size,int pivot,int ele);
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
    printf("Enter Array size \n");
    int size;
    scanf("%d",&size);
    printf("Enter Array Elements in asending order \n");
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter shift \n");
    int d;
    scanf("%d",&d);
    //Rotating array by d
    leftrotatebyone_by_one(arr,size,d);
    printarray(arr,size);
    int pivot=findpivot(arr,size);
    printf("Enter element to be searched \n");
    int ele;
    scanf("%d",&ele);
    if(ele>=arr[0])
        searchelement(arr,0,pivot,ele);
    else
        searchelement(arr,pivot+1,size-1,ele);
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

void searchelement(int *arr,int li,int ui,int ele)
{
    int index=-1;
    for(int i=li;i<=ui;i++)
    {
        if(arr[i]==ele)
        {
            printf("Element found at index :%d",i);
            index=i;
        }
    }

}

//Important
/*Method 2 (Efficient Using Binary Search)

Here are also we find index of minimum element, but using Binary Search. The idea is based on below facts :
The minimum element is the only element whose previous is greater than it. If there is no previous element element,
 then there is no rotation (first element is minimum). We check this condition for middle element by comparing it with (mid-1)’th and (mid+1)’th elements.
If minimum element is not at middle (neither mid nor mid + 1), then minimum element lies in either left half or right half.
If middle element is smaller than last element, then the minimum element lies in left half
Else minimum element lies in right half */
