#include<stdio.h>
void display (int arr[],int n)
{
    for ( int i=0;i<n;i++)
    {
     printf("%d\n",arr[i]);

    }
}

int Insertion(int arr[], int size,int element,int index,int capacity)
{
    if(size>=capacity){
        return -1;
    }

       for (int i=size-1;i>=index;i--)
       {
           arr[i+1]=arr[i];
       }
       arr[index]=element;
       return 1;
}

int main()
{
    int arr[20]={1,2,3,4,5};
    int index = 2;
    int element=18;
    int size= 5;
    int capacity=100;
    Insertion(arr,size,element,index,capacity);

    size+=1;

    display( arr,size);

  return 0;
}
