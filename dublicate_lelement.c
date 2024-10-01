#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[],int n){
    int i;
    struct Node *t,*last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=(struct Node*)malloc(sizeof( struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void Display( struct Node*p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;

    }
}
int count(struct Node *p){
    int l=0;
    while(p){
     l++;
     p=p->next;
    }
    return l;
}
     
void RemoveDublicate(struct Node *p){
     struct Node *q;
     while(p!=NULL){
        if(p->data!=q->data){
            p=q;
        q=q->next;
        }
    else {
        p->next=q->next;
        free(q);
        q=p->next;
    }
     }


     }
int main(){
    int A[]={10,20,20,20,30,40,50,};
    create (A,7);
    
RemoveDublicate(first);
    Display(first);
    printf("\n\n");
    return 0;
}