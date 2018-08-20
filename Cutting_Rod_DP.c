#include<stdio.h>
int main()
{
    int price[]={0, 1, 5, 8, 9, 10, 17, 17, 20}; // We would be using index from 1
    int n=8;
    int p=0;
    int max_price[]={0, 1, 5, 8, 9, 10, 17, 17, 20}; // Copied array price
    max_price[1]=price[1];
    for(int i=2;i<=n;i++)
    {
        p=0;
        for(int j=1;j<=(i/2);j++)
        {
           p=price[j]+price[i-j];
           if(p>max_price[i])
           {
                max_price[i]=p;
           }
        }
    }
    for(int i=1;i<=8;i++)
        printf("  Max Price for length %d is %d \n",i,max_price[i]);
    return 0;
}
