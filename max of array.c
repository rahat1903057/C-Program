#include<stdio.h>
int main()
{
    int arr[5]={10, 37, 75, 45, 64};
    int max = arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("%d",max);
}
