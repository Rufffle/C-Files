#include <stdio.h>
int main()
{
    FILE *p;
    int i, n, t1 = 0, t2 = 1, nextTerm;

    p=fopen("input.txt","r");
    //printf("Enter the number of terms: ");
    //scanf("%d",&n);
    fscanf(p,"%d",&n);
    fclose(p);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d ",t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
