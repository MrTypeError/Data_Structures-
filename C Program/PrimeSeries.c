/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

void PrimeChk(int Num)
    {   
        printf("Enter the Number");
        printf("2");
        for(int a=3;a<Num;a++)
        if (a%2==1)
        {
            printf("%d",a);
        }
    }

void eChk(int Num)
    {   
        printf("Enter the Number");
        printf("2");
        for(int a=3;a<Num;a++)
        if (a%2==1)
        {
            printf("%d",a);
        }
    }

void main()
{
    int Num;
    printf("Enter the Number Till which you want to see the series :-\n");
    scanf("%d",&Num);
    PrimeChk(Num);
    // eChk(Num);
}
