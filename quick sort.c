/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>


void swap(int *ele1,int *ele2)
{
    int temp;    
    temp = *ele1;
    *ele1 = *ele2;
    *ele2 = temp;
}

void quicksort(int a[],int low_index, int high_index)
{
    int pivot,i,j;
    if(low_index<high_index)
    {
        pivot = low_index ,i = low_index ,j = high_index;
        while(i<j)
        {
            while(a[i]<=a[pivot])
            {
                i++;
            }
        
            while(a[j]>a[pivot])
            {
                j--;
            }
        
            if(i<j)
            {
                swap(&a[i],&a[j]);
            }
        }
        
        swap(&a[j],&a[pivot]);
        
        quicksort(a,0,j - 1);
        quicksort(a,j + 1,high_index);
    }
}

int main()
{
    int arr[10];
    int n,k;
    printf("input the number of elements to store in an array");
    scanf("%d",&n);
    printf("enter the elements in the array\n");
    
    for(k=0;k<n;k++)
    {
        printf("element is %d : ",k+1);
        scanf("%d",&arr[k]);
    }
    
    quicksort(arr,0,n-1);
    
    printf("elements after sorted order are\n");
    
    for(k=0;k<n;k++)
    {
        printf(" %d\n",arr[k]);
    }
    return 0;

}
