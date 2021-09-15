/*
    **ULAB Data Structure Question**

Suppose that you joined a company Hyper Tech bd Ltd. as a C/C++ programmer. As a first task

you need to write a C/C++ program to create a Covid 19 patient management system. Your

program should contain the following modules,

1. It should maintain all the patient information in a data structure. Patient information contains the following data members:

- Patient Id

- Patient name

Patient address

Covid-19 test report date

- List of previous diseases (heart, kidney, etc.). Use dynamic memory allocation to

create a list of diseases for a specific patient. 2. Every time users gives an input it will collect

patient details and add the process information in a list. However, you do not know how many patients can be added to the system on a single day. Now create a list of patient information using a Linked List.

3. Create a queue to maintain patients information.

*/

/*

Need some Edit

*/

#include<stdio.h>
#include<stdlib.h>
typedef struct node2 node2;
struct node2
{
    char diseases[50];
    node2 *next;
};
 
typedef struct node node;
struct node
{
    int p_id;
    char p_name[50];
    char p_address[100];
    char covid_t_r_date[20];
    node2 *diseas;
    node *next;
};
 
struct node *front;
struct node *rear;
void insert();
void delet();
void display();
void display2(struct node2 *head);
void addDiseases(struct node **head);
int id_x=101,p_count=0;
 
void main ()
{
    int choice;
    while(choice != 4)
    {
        printf("\n*************************Main Menu*****************************\n");
        printf("\n=================================================================\n");
        printf("\n1.Insert covid-19 patient info\n2.Delete covid-19 patient info\n3.Show covid-19 patient info\n4.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",& choice);
        printf("\n*****************************************************************\n");
 
        if(choice==1)
        {
            insert();
        }
        else if(choice==2)
        {
            delet();
        }
        else if(choice==3)
        {
            display();
        }
        else if(choice==4)
        {
            exit(0);
        }
        else
        {
            printf("\nEnter valid choice??\n");
        }
    }
}
void insert()
{
    struct node *ptr;
    int x,y=1;
    char tmp_s[50];
    p_count++;
 
    ptr = (struct node *) malloc (sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    else
    {
 
        ptr->p_id=id_x++;
        printf("\nNew patient ID                           : %d \n\nEnter Patient Full Name                   : ",ptr->p_id);
        scanf("%*c");
        scanf("%[^\n]s",&ptr-> p_name);
 
        printf("\nEnter Patient Address                     : ");
        scanf("%*c");
        scanf("%[^\n]s",&ptr-> p_address);
 
        printf("\nEnter Covid-19 test report date(dd/mm/yy) : ");
        scanf("%*c");
        scanf("%[^\n]s",&ptr-> covid_t_r_date);
 
        printf("\nEnter patient diseases\n");
        ptr->diseas=NULL;
        while(y==1)
        {
            printf("\nInclude (1) | No Include (0)               : ");
            scanf("%d",&x);
            if(x==1)
            {
                printf("\nEnter Diseases Name                        : ");
                addDiseases(&ptr->diseas);
            }
            else if(x==0)
            {
                y=0;
            }
            else
            {
                printf("\nInvalid choice");
            }
        }
 
        if(front == NULL)
        {
            front = ptr;
            rear = ptr;
            front -> next = NULL;
            rear -> next = NULL;
        }
        else
        {
            rear -> next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
}
 
void addDiseases(struct node **head)
{
    struct node2 *newNode = malloc(sizeof(struct node2));
    scanf("%*c");
    scanf("%s",&newNode->diseases);
    newNode->next = *head;
    *head = newNode;
}
 
void delet ()
{
    struct node *ptr;
    if(front == NULL)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        ptr = front;
        front = front -> next;
        free(ptr);
    }
}
 
void display2(struct node2 *head)
{
    struct node2 *temp = head;
 
    while(temp != NULL)
    {
        printf("%s, ", temp->diseases);
        temp = temp->next;
    }
    printf("\n");
}
 
 
void display()
{
    struct node *ptr;
    ptr = front;
    if(front == NULL)
    {
        printf("\nEmpty Patient\n");
    }
    else
    {
        printf("\n printing %d Patient Info .....\n",p_count);
 
        while(ptr != NULL)
        {
            printf("\n=================================================================\n");
            printf("\nPatient ID                : %d\n",ptr -> p_id);
            printf("\nPatient Name              : %s\n",ptr -> p_name);
            printf("\nPatient Address           :%s\n",ptr -> p_address);
            printf("\nCovid-19 test report date : %s\n",ptr->covid_t_r_date);
            printf("\nPatient Diseases Name     : ");
            display2(ptr->diseas);
            ptr = ptr -> next;
        }
    }
}