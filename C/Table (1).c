#include<stdio.h>

int main()
{
    int n,i;
    
    printf("The Table of This Number: ");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++)
    {
      printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}