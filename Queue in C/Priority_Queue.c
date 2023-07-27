#include <stdio.h>
#include <stdlib.h>
struct Priority_Queue
{
    int element;
    int priority;
};
typedef struct Priority_Queue prioq;
prioq pq[10];
static int rare = -1;
static int front = -1;
static int n = 0;
void Enqueue()
{
    front = 0;
    rare++;
    printf("Enter the elemenet and the priority of the element\n");
    int elm, pr;
    scanf("%d%d", &elm, &pr);
    pq[rare].element = elm;
    pq[rare].priority = pr;
}

int DelethighPriority()
{    int p=-1;
    if (front == -1)
    {
        printf("The priority queue is empty\n");
    }
    else
    {    int i;
        for( i=0;i<=rare;i++){
           if(pq[i].priority>p){
             p=pq[i].priority;
             n=i;
           }
        }
        for(i=n;i<=rare;i++){
            pq[i]=pq[i+1];
        }
        printf("Deleted Sucessfully\n");
    }
    rare--;
    return p;
}
void  FindhighPriority(){
    int p=-1,i;
    for( i=0;i<=rare;i++){
           if(pq[i].priority>p){
             p=pq[i].priority;
             n=i;
           }
        }
        printf("High priority element is %d with priority of %d\n",pq[n].element,p);
}
void Display(){
    printf("Elements in the priority queue is\n");
    printf("Element\tPriority\n");
    for(int i=0;i<=rare;i++){
        printf("%d\t%d\n",pq[i].element,pq[i].priority);
    }
}
int main()
{
    while (1)
    {
        printf("Enter\n");
        int choice;
        printf("1:To insert\n2:To del high priority queue\n3:To find high priority element\n4:To display\n5:To exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            DelethighPriority();
            break;
        case 3:
            FindhighPriority();
            break;
        case 4:
            Display();
            break;
        case 5:
            printf("Sucessfully exit from program\n");
            exit(1);
        default:
            printf("Opps! Wrong choice try again :(\n)");
            break;
        }
    }

    return 0;
}
