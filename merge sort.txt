
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

void conqure(int arr[], int ini_index,int m,int fin_index)
{
    int i, j, k;
    int n1 = m - ini_index + 1;
    int n2 = fin_index - m;
    
    int L[n1], R[n2];
    
    for(i=0;i<n1;i++)
    {
        L[i] = arr[ini_index + i];
    }
    
    for(j=0;j<n2;j++)
    {
        R[j] = arr[m + 1 + j]; 
    }
    
    i=0;
    j=0;
    k=ini_index;
    
    while( i<n1 && j<n2 )
    {
        if(L[i] < R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    while(i<n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    
    while(j<n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[10], int ini_val, int fin_val)
{
    
    int mid_val;
    if(ini_val<fin_val)
    {
        mid_val = (ini_val + fin_val)/2;
    
        mergesort(arr,ini_val,mid_val);
        mergesort(arr,mid_val + 1,fin_val);
        
       conqure(arr,ini_val,mid_val,fin_val);
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
    
    mergesort(arr,0,n-1);
    
    printf("elements after sorted order are\n");
    
    for(k=0;k<n;k++)
    {
        printf(" %d\n",arr[k]);
    }
    
    return 0;
}
