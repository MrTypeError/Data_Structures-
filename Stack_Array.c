#include<stdio.h>
#define MAXSIZE 8;
void fnPush();
int fnPop();
int fnDisplay();
int isEmpty();
int isFull();
int top=-1,data,dispData,arrStack[8];

void fnPush(){
    
    if(top==8)
    {
        printf(" The Stack is Full ");
    }
    else{
        printf("Enter the Number");
        scanf("%d",data);
        top=top+1;
        arrStack[top]=data;
    }
   
}
int fnPop(){
    if ( top<=-1)
    {
        printf("The Stack is Empty");
        printf("under flow");
    }
    else{
        top=top-1;
    }

}
int fnDisplay(){
    if (top<=-1)
    {
        printf("The Stack is Empty");
    }
    else{
    dispData=arrStack[top];
    for (int i = top; i >=0; i--)
    {
        printf(arrStack[i]);
    }
    }
    
}

void main(){
    int choice;

    printf("Enter 1 For Adding Element");
    printf("Enter 2 for Deleting element");
    printf("Enter 3 for Display The Elements");
    printf("Enter 4 to Quit");

    printf("\nEnter your choice \n");
    scanf("%d",choice);
    do
    {
        switch (choice){
    case 1 :
        printf("You have selected to Push");
        fnPush();
        break;
    case 2 :
        printf("You have Selected to POP");
        fnPop();
        break;
    case 3 :
        printf("You have selected to Display");
        fnDisplay();
        break;
    }
    } while (choice!=4);