#include <stdio.h>
void PushLink();
int PopLink();
int DisplayLink();
int IsEmpty();
struct Node
{
    int data;
    struct node *next;
};
typedef struct node LinkList;
LinkList *TOP = NULL;
void PushLink(int idata){
    LinkList *NewNode;
    NewNode=(LinkList*)malloc(sizeof(LinkList));
    NewNode - > data=idata;
    NewNode - > TOP=NULL;
    TOP=NewNode;

}
int PopLink(){
    if (IsEmpty()== 1)
    {
        printf("\nThe Link List is Empty :) \n");
    }
    else
    {
        int Temp;
        LinkList *DelLink;
        Temp= TOP -> data;
        DelLink=TOP;
        TOP=TOP -> next;
        free(DelLink);
        return Temp;
    }
    

}
int DisplayLink(){
    if (IsEmpty()==1)
    {
        printf("The Link List is Empty");
    }
    else{
        LinkList *DisplayLink;
        DisplayLink=TOP;
        while (DisplayLink!= NULL)
        {
            printf("The Node is :-%d",DisplayLink);
            DisplayLink=DisplayLink - > next;

        }
        

    }
    
    

}
