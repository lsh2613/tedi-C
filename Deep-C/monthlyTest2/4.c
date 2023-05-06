#include <stdio.h>
#include <stdlib.h>
typedef struct linked_list
{
    int data;
    struct linked_list *next;
}list;

void printList(list *prt){
    prt=prt->next;
    while (prt->next!=NULL)
    {
        printf("%d번노드   ",prt->data);
        prt=prt->next;
    }
}

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

    printList(head);
}