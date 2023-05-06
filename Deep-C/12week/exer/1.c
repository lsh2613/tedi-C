#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct linked_list
{
    char station[20];
    int time;
    int cost;
    struct linked_list *prev;
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
        if (i==n-1){
            scanf("%s",(node+i)->station);
        }
        else
            scanf("%s %d %d", (node+i)->station, &(node+i)->time, &(node+i)->cost);


        if (i==0) //첫 노드
        {
            head->next = node+i;
            (node+i)->prev = head;
        }
        else if (i==n-1)  //마지막 노드
        {
            (node+i-1)->next = (node+i);
            (node+i)->next = tail;
            tail->next = NULL;

            tail->prev = (node+i);
            (node+i)->prev = (node+i-1);
        }
        else{  //중간노드
            (node+i-1)->next = (node+i);

            (node+i)->prev = (node+i-1);
        }
    }

    char start[20];
    char end[20];
    scanf("%s %s", start, end);

    int cnt=0, totalTime=0, totalCost=0;
    list *prt = head->next;
    
    while (prt!=NULL)
    {
        if (!strcmp(start, prt->station))
        {
            while (!strcmp(end, prt->station))
            {
                cnt++;
                totalTime+=prt->time;
                totalCost+=prt->cost;
                prt=prt->next;
            }
        }
        else
            prt=prt->next;
    }
    
    printf("%d %d %d", cnt, totalTime, totalCost);
}