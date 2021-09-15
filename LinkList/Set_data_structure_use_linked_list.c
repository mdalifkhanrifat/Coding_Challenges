

#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head, *tail = NULL;

void insert(int data);
void find(int value);
void delete_item(int value);
int size_check();
void empty_check();
void sortList();
void display();

int main()
{
    printf("Insert item 9,7,2,5,4,9\n");
    insert(9);
    insert(7);
    insert(2);
    insert(5);
    insert(4);
    insert(9);

    printf("Set items: ");
    display();

    printf("Find item: ");
    find(10);

    printf("Find set empty: ");
    empty_check();

    printf("Find set size: ");
    size_check();

    printf("Set end item ");
    end_item();



    printf("\n");
    return 0;
}


void insert(int data)
{
    node newNode = (node)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    sortList();
}


void sortList()
{
    node *current = head, *index = NULL;
    int temp;

    if(head == NULL)
    {
        return;
    }
    else
    {
        while(current != NULL)
        {
            index = current->next;

            while(index != NULL)
            {
                if(current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                if(current->data == index->data)
                {
                    delete_item(index->data);
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}


void delete_item(int value)
{
    struct node *myNode = head, *previous=NULL;
    int flag = 0;
    while(myNode!=NULL)
    {
        if(myNode->data==value)
        {
            if(previous==NULL)
                head = myNode->next;
            else
                previous->next = myNode->next;

            flag = 1;
            break;
        }

        previous = myNode;
        myNode = myNode->next;
    }

    if(flag==0)
        printf("Key not found!\n");
}

void find(int value)
{
    node *searchNode = head;
    int flag = 0;

    while(searchNode!=NULL)
    {
        if(searchNode->data==value)
        {
            printf("%d is present. Memory address is %d\n", value, searchNode);
            flag = 1;
            break;
        }
        else
            searchNode = searchNode->next;
    }

    if(flag==0)
        printf("%d is absent\n",value);

}


void display()
{
    node *current = head;
    if(head == NULL)
    {
        printf("List is empty \n");
        return;
    }
    while(current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void end_item()
{
    node *current= head;
    node *current1= head;
    int p=0,p1=0;
    if(head == NULL)
    {
        printf("List is empty \n");
        return;
    }
    else
    {
        while(current1 != NULL)
        {
            p1++;
            current1 = current1->next;
        }


        while(current != NULL)
        {
            p++;
            if(p==p1)
            {
                printf("%d ", current->data);
            }
            current = current->next;
        }
    }
    printf("\n");
}

void empty_check()
{
    if(head == NULL)
    {
        printf("List is empty \n");
    }
    else
    {
        printf("List non empty \n");
    }
}

int size_check()
{
    int siz=0;
    node *current = head;
    while(current != NULL)
    {
        siz++;
        current = current->next;
    }
    printf("set size : %d\n",siz);
    return siz;
}