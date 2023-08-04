#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    int a,b,i,gcd;
    //printf("Enter 2 integer : ");
    //scanf("%d %d",&a,&b);

    p=fopen("input.txt","r");

    fscanf(p,"%d %d",&a,&b);

    for(i=1 ; i<=a && i<=b ; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }

    printf("GCD of %d and %d is = %d",a,b,gcd);

    fclose(p);

    return 0;
}
