#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list
{
    int data;
    struct linked_list *next;
}list;

int main(){
    list *head = (list*) malloc (sizeof(list));

    list *node1 = (list*) malloc (sizeof(list));
    head->next = node1;
    node1->data=1;
    
    list *node2 = (list*) malloc (sizeof(list));
    node2->data=2;
    node1->next=node2;
    
    list *node3 = (list*) malloc (sizeof(list));
    node3->data=3;
    node2->next=node3;
    
    list *tail = (list*) malloc (sizeof(list));
    node3->next=tail;
    tail->next=NULL;

    list *prt = node1;

    while (prt!=NULL)
    {
        if (prt!=tail)
            printf("%d번노드   ",prt->data);
        else
            printf("끝");
        prt=prt->next;
    }
    

    

}