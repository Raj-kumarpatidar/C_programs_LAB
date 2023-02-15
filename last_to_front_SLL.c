#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;


void create(int n)
{
    struct node *NEW =(struct node*)malloc(sizeof(struct node));
    NEW->data=n;
    NEW->next=NULL;
    head=NEW;
}


void insert(int n)
{
    struct node *NEW=(struct node*)malloc(sizeof(struct node));
    NEW->data=n;
    NEW->next=head;
    head=NEW;
}
void traverse(){
    struct node *t=head;
    while(t)
    {
        printf("%d->",t->data);
        t=t->next;
    }
    printf("\n");
}

void LastToFront()
{
    struct node *t=head;
    while(t->next->next!=NULL)
    {
        t=t->next;

    }
    t->next->next=head;
    head=t->next;
    t->next=NULL;
}
void main(void)
{
    create(1);
    insert(2);
    insert(3);
    insert(4);

    traverse();
    LastToFront();
    traverse();
}