#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    int a,b,i,gcd;
    printf("Enter 2 integer : ");
    scanf("%d %d",&a,&b);

    p=fopen("output.txt","w");

    for(i=1 ; i<=a && i<=b ; i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }

    fprintf(p,"GCD of %d and %d is = %d",a,b,gcd);

    fclose(p);

    return 0;
}
