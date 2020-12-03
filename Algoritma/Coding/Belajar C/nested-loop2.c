#include <stdio.h>
#include <stdlib.h>

int input;
int nilai1,nilai2;

int main()
{
    printf("Input = ");
    scanf("%d",&input);

    nilai1=1;
    while (nilai1<=input)
    {

        nilai2=1;
        while (nilai2<=input)
        {
            if(nilai2%2==1)
            {
                printf("0");
            } else
            {
                printf("1");
            }

            nilai2++;
        }
        printf("\n");
        nilai1++;

    }
    return 0;
}
