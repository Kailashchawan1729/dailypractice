
#include<stdio.h>
void display (int arr[],int n)
{
    for ( int i=0;i<n;i++)
    {
     printf("%d\n",arr[i]);

    }
}

int main()
{
    int arr[20]={2,8,34,55,78,208,455};
    int n=10;
    display( arr,n);

  return 0;
}
