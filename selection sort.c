/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
 
int main()
{
    int array[10], n, i, j, temp, min;
   
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
   
    printf("Enter %d integers\n", n);
   
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
   
   
    for (i = 0; i < n; i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;   
    }
    
    printf("elements after sorted are\n");
    
    for(i=0;i<n;i++)
    {
       printf("%d\n",array[i]); 
    }
    return 0;
}
