
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
 
int main()
{
    int array[10], n, i, j, temp;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
   
    printf("Enter %d integers\n", n);
   
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
   
   
    for (i = 1; i < n; i++)
    {
        temp = array[i];
        for(j=i;j>0&&temp<array[j-1];j--)
        {
            array[j] = array[j-1];
        }
        array[j] = temp;
    }
    
    printf("elements after sorted are\n");
    
    for(i=0;i<n;i++)
    {
       printf("%d\n",array[i]); 
    }
    
    return 0;
}
