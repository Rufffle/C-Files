#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    int n,i,r,rev=0,ch;

    printf("Enter an integer : ");
    scanf("%d",&n);

    p=fopen("output.txt","w");
    //fscanf(p,"%d",&n);

    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }

    while(rev!=0)
    {
        ch=rev%10;
        rev/=10;
        switch(ch)
        {
            case 1:
                fprintf(p,"One  ");
                break;
            case 2:
                fprintf(p,"Two  ");
                break;
            case 3:
                fprintf(p,"Three  ");
                break;
            case 4:
                fprintf(p,"Four  ");
                break;
            case 5:
                fprintf(p,"Five  ");
                break;
            case 6:
                fprintf(p,"Six  ");
                break;
            case 7:
                fprintf(p,"Seven  ");
                break;
            case 8:
                fprintf(p,"Eight  ");
                break;
            case 9:
                fprintf(p,"Nine  ");
                break;
            default:
                fprintf(p,"Zero  ");
        }
    }

    fclose(p);

    return 0;
}
