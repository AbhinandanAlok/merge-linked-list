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
// int Max(struct Node *p){
//     int max=INT32_MIN;
//     while(p){
//         if(p->data>max)
//         max=p->data;
//         p=p->next;
//     }
//     return max;

// }
int Rmax(struct Node *p){
    int x=0;
     if(p==NULL)
      return INT32_MIN;
      x=Rmax(p->next);
      if(x>p->data)
      return x;
      else return p->data;
      
     
}
int main(){
    int A[]={3,5,7,10,15};
    create (A,5);
    // printf(" the greater linked list is %d",Max(first));
    printf("the greater element is %d",Rmax(first));
    return 0;
}