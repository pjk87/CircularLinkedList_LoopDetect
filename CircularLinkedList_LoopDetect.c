#include <stdio.h>
#include <stdlib.h> 
typedef struct node{
    
    int data;
    struct node *next;

}Node;

Node *Top=NULL;
Node *Bottom=NULL;
void enque(Node *s,int d){
    
    Node *temp=(Node*)malloc(sizeof(Node));
    temp->data=d;
    temp->next=NULL;
    
        if(Top==NULL){
        
        Top=temp;
        Bottom=temp;
    
        }else{
        
        Bottom->next=temp;
        Bottom=temp;
        
        
        
    }
    
}


int main() {
	
	Node *st;
    int i,flag;
    flag=0;
    for(i=1;i<=10;i++){
        
        enque(st,i);
        
    }
    
    Node *temp;
    
    temp=Top;
    
    for(i=1;i<5;i++){
        
        temp=temp->next;
        
    }

    //Bottom->next=temp;
    
    temp=Top;
    Node *temp2;
    temp2=Top;
    temp=temp->next;
    temp2=temp2->next;
    temp2=temp2->next;
    
    
    while(temp!=temp2){
        
    temp=temp->next;
    if(temp==NULL){
        printf("NO LOOP!");
        flag=1;
        break;
        
    }
    temp2=temp2->next;
    if(temp2==NULL){
        printf("NO LOOP!");
        flag=1;
        break;
        
    }
    temp2=temp2->next;
    if(temp2==NULL){
        printf("NO LOOP!");
        flag=1;
        break;
        
    }    
    
    
        
    }
    
    if(flag==0)
    {printf("LOOP!!");}
    
    
    
    
	return 0;
}