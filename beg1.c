#include<stdio.h>
int main()
{
	//int t;
	//scanf("%d",&t);
	int t=1;
    printf("Enter Matrix\n");
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
            scanf("%d %d %d\n",&arr[i][0],&arr[i][1],&arr[i][2]);
    }
    for(int i=0;i<3;i++)
        {
        for(int j=0;j<3;j++)
        {
         printf("%d ",arr[i][j]);
    }
    printf("\n");
    }
	return 0;
}

