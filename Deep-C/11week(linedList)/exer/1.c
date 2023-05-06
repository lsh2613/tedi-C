#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list
{
    char station[10];
    struct linked_list *next;
}list;

int main(){

    int n;
    scanf("%d", &n);

    list *head = (list*) malloc (sizeof(list));
    list *node = (list*) malloc (sizeof(list)*n);
    list *tail = (list*) malloc (sizeof(list));

    for (int i = 0; i < n; i++)
    {
        scanf("%s", (node+i)->station);
        // scanf("%s", node[i].station);

        if (i==0) // 첫 노드
            head->next=node+i;
        else if (i==n-1) // 마지막 노드
        {
            (node+i-1)->next = (node+i);
            (node+i)->next=tail;
            tail->next=NULL;
        }
        else{ // 중간 노드
            (node+i-1)->next = (node+i);
        }
    }
    
    list *prt = node;
    while (prt!=NULL)
    {
        if (prt!=tail)
            printf("%s -> ",prt->station);
        else
            printf("끝");
        prt=prt->next;
    }
    

    

}