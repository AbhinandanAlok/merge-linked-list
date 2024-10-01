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
      int isSorted(struct Node *p){ 
        int x1= -65536;
        struct Node *q=NULL;
        int x=-1,i;
        while(p!=NULL){
            if(p->data<x)
            return 0;
            x=p->data;
            p=p->next;

        }
        return 1;
      }
int main(){
    int A[]={10,20,30,40,50,};
    create (A,5);
    // if( isSorted("first\n")){
    //     printf("sorted \n");
    // }
    // else{
    //     printf("not sorted");
    // }
    printf("%d\n",isSorted(first));


    Display(first);
    printf("\n\n");
    return 0;
}