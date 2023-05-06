#include <stdio.h>
#include <stdlib.h>
typedef struct linked_list
{
    int data;
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
        
        if (i==0) // 첫 노드
            head->next=node;
        else if (i==n-1) // 마지막 노드
        {
            (node+i-1)->next = (node+i);
            (node+i)->next=tail;
            tail->next=NULL;
        }
        else{ // 중간 노드
            (node+i-1)->next = (node+i);
        }

        i++;
    }

    list *prt = node;
    int max=0;
    while (prt!=NULL)
    {
        if (prt!=tail)
            if (prt->data > max)
                max=prt->data;
        prt=prt->next;
    }
    printf("%d", max);
}