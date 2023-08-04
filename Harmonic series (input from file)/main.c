#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    int n,i;
    float sum=0;

    p=fopen("input.txt","r");
    fscanf(p,"%d",&n);
    fclose(p);

    for(i=1 ; i<=n ; i++)
    {
        sum+=(float)1/i;
    }

    printf("sum of the series is = %f",sum);

    return 0;
}
