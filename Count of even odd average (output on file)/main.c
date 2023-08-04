#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    int n,i,even=0,odd=0,sum1=0,sum2=0;
    float avg1,avg2;

    p=fopen("output.txt","w");
    //fscanf(p,"%d",&n);
    printf("Enter an integer : ");
    scanf("%d",&n);

    for(i=1 ; i<n ; i++)
    {
        printf(" %d +",i);
    }

    printf(" %d\n",n);

    for(i=1 ; i<=n ; i++)
    {
        if(i%2==0)
        {
            sum1+=i;
            even++;
        }
        else
        {
            sum2+=i;
            odd++;
        }
    }

    printf("sum of even = %d & sum of odd = %d\n",sum1,sum2);

    avg1=(float)(sum1/even);

    fprintf(p,"Average of even number from the series = %.2f\n",avg1);

    avg2=(float)(sum2/odd);

    fprintf(p,"Average of odd number from the series = %.2f",avg2);

    return 0;
}
