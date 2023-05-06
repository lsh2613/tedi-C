#include <stdio.h>
#include <stdlib.h>
typedef struct linked_list
{
    int data;
    struct linked_list *prev;
    struct linked_list *next;
}list;
int main(){

    list *head = (list*) malloc (sizeof(list));
    list *node = (list*) malloc (sizeof(list)*30);
    list *tail = (list*) malloc (sizeof(list));
    
    int n;
    int i=0;
    while (1)
    {
        scanf("%d", &n);
        if (n==0)
            break;

        (node+i) -> data = n;
        
        if (i==0){  // 첫 노드
            head->next=node;
            head->prev=NULL;
            (node+i)->prev = head;
        } 
        else if (i==n-1) // 마지막 노드
        {
            (node+i)->prev = (node+i-1);
            (node+i-1)->next = (node+i);
            (node+i)->next=tail;
            tail->next=NULL;
            tail->prev=(node+i);
        }
        else{ // 중간 노드
            (node+i)->prev = (node+i-1);
            (node+i-1)->next = (node+i);
        }

        i++;
    }

    list *prt = tail->prev;
    while (prt!=NULL)
    {
        if (prt!=head&&prt->data%2==0){
                printf("%d ",prt->data);
        }
        prt=prt->prev;
    }
}