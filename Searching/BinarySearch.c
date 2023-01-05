// Write a program in C/C++ to implement Binary Search.

#include<stdio.h>
int BinarySearch(int arr[],int size, int value)
{
    int start= 0, end= size-1, mid =(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==value) 
        {
        return mid;
        }
        
        //to go left side of the mid value
        if (value<arr[mid])
        {
            end= mid -1;
        }

        //to go right side of the mid value
        else if (value>arr[mid])
        {
            start= mid +1;
        }
        mid= (start+end)/2; // to update the mid value  
    }
    return -1;
}

int main()
{
    int search[5]= {1,2,3,4,5};
    int size = sizeof(search)/sizeof(search[0]);
    int value= 3;
    int index = BinarySearch(search, size, value);
    if(index==-1)
    printf("The number is not found ");
    else
    printf("The element is found at: %d", index);
}