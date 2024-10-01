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
//  struct Node * search(struct Node *p,int key){
//     if(p==NULL)
//     return 0;
//     if(key==p->data)
//     return p;
//     return search(p->next,key);


// }
  struct Node *search(struct Node*p,int key){
    while(p){
        if(key==p->data)
        return p;
        p=p->next;
    }
return NULL;
}
int main(){
    struct Node * temp;
    int A[]={3,5,7,10,15};
    create (A,5);
    temp=search(first,15);
    if (temp)
    printf("key is found %d\n",temp->data);
    else
    printf(" key is not found ");
    // printf("the key is found at %d node ",search(first,10));
    
    return 0;
}