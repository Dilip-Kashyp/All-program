#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data ;
    struct node * next ; 
}node;
node * createlinkedlist(int n);
void printlinkedlist(node *  head);
int main(){
    int n = 0 ;
    node * HEAD = NULL;
    printf("How many node you want \n");
    scanf("%d",&n);
    HEAD = createlinkedlist(n);
    printlinkedlist(HEAD);
    
    return 0;
}
node * createlinkedlist(int n){
    int i = 0;
    node * head = NULL ;
    node * temp = NULL;
    node * p = NULL;
    for(i=0;i<n;i++){
        temp = (node*)malloc(sizeof(node));
        printf("Enter the date for %d node\n",i+1);
        scanf("%d",&(temp->data));
        temp->next=NULL;
        if(head==NULL){
            head = temp;
        }
        else{
            p=head;
            while(p->next!=NULL)
                p = p->next;
            p->next = temp;
            }
                }
    return head;
}
void printlinkedlist(node*  head){
    node * p = head;
    while (p!=NULL){
        printf("%d -->",p->data);
        p=p->next;
    }
    }