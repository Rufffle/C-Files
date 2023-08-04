#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    int n,i,flag=0;
    //printf("Hello world!\n");

    p=fopen("input.txt","r");
    fscanf(p,"%d",&n);
    fclose(p);

    for(i=2 ; i<n ; i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }

    return 0;
}
