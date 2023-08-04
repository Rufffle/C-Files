#include <stdio.h>
int main()
{
    FILE *p;
    int i, n, t1 = 0, t2 = 1, nextTerm;

    p=fopen("output.txt","w");
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    //fscanf(p,"%d",&n);


    fprintf(p,"Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        fprintf(p,"%d ",t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    fclose(p);

    return 0;
}
