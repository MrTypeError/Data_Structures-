#include<stdio.h>
void printFibo();
int Num,n;
void printFibo(int n){
    int num1=0,num2=1,num3;
    num3=num1+num2;
    num1=num2;
    num3=num2;
    printf(num3);
    printFibo(n-1);

}


void main(){
    printf("Enter till which you want to See the Series :-\n");
    scanf("%d",Num);

    print("\n Enter the Number Greater Then 0 \n");
    printf("0 1");
    if (Num>0)
    {
        printFibo(Num);
    }
    else
    {
        printf("\n Number Less Then Zero Or Equal is not Possible \n");
    }
    
}
