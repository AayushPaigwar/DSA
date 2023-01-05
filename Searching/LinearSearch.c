//Write a program in C/C++ to implement Linear Search.

#include<stdio.h>

int LinearSearch(int search[] , int size, int value)
{
    //using for loop to traverse all the element in the array.
    for(int i=0 ;i<size; i++)
        if(search[i]==value)
         return i;
    return -1;
}

int main()
{
    int search[]= {1,10,23,4,51};
    int size= sizeof(search)/sizeof(search[0]);
    int value = 12;
    int index = LinearSearch(search,size,value); 
    if(index== -1)
    {
    printf("The element not found ");
    }
    else
    printf("The elemnet found at %d", index);

}