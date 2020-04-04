/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int i,j,*a,n,temp;
    printf("input the number of elements to store in an array");
    scanf("%d",&n);
    
    
    a = (int*)calloc(n,sizeof(int));
 
    
    for(i=0;i<n;i++)
    {
        printf("element - %d :", i+1);
        scanf("%d",a+i);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(a+i) > *(a+j))
            {
                temp = *(a+j);
                *(a+j) = *(a+i);
                *(a+i) = temp;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("elements - %d : %d\n",i+1,*(a+i));
    }
    return 0;
}
