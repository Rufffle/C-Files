#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    int n,i;
    float sum=0;

    printf("Enter integer : ");
    scanf("%d",&n);

    p=fopen("output.txt","w");
    //fscanf(p,"%d",&n);
    //fclose(p);

    for(i=1 ; i<=n ; i++)
    {
        if(i<n)
        {
            fprintf(p," 1/%d +",i);
        }
        else if(i==n)
        {
            fprintf(p," 1/%d",i);
        }
        sum+=(float)1/i;
    }

    fprintf(p," = %f",sum);

    fclose(p);

    return 0;
}
