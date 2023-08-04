#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    int n,i,r,rev=0,ch;

    p=fopen("input.txt","r");
    fscanf(p,"%d",&n);
    fclose(p);

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
                printf("One  ");
                break;
            case 2:
                printf("Two  ");
                break;
            case 3:
                printf("Three  ");
                break;
            case 4:
                printf("Four  ");
                break;
            case 5:
                printf("Five  ");
                break;
            case 6:
                printf("Six  ");
                break;
            case 7:
                printf("Seven  ");
                break;
            case 8:
                printf("Eight  ");
                break;
            case 9:
                printf("Nine  ");
                break;
            default:
                printf("Zero  ");
        }
    }

    return 0;
}
