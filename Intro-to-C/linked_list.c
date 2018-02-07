#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
typedef struct node_t{
    int data;
    struct node_t* next;
}node;
#define NUMBER_OF_ELEMENTS 10
node* create_dummy_head(void)
{
    node* newly = (node*) malloc(sizeof(node));
    if (newly == NULL) {
        printf("Oops: Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newly -> next = NULL;
    return newly;
}
void constructor(node* head)
{
    int i=0;
    node* prev;
    node* curr;
    for (i=0; i<NUMBER_OF_ELEMENTS; i++)
    {
        node* newly = (node*) malloc(sizeof(node));
        if (newly == NULL) {
            printf("\nOops: Memory allocation failed.\n");
            exit(EXIT_FAILURE);
        }
        printf("\nEnter the data:\n");
        fflush(stdin);
        scanf("%d", &(newly -> data));
        prev= head;
        curr= head -> next;
        while (curr->next != NULL) {
            prev= curr -> next;
            curr= prev -> next;
        }
        newly->next = curr -> next;
        curr-> next= newly;
    }
}
int count(node* head, int specific_num)
{
    node* curr;
    int counter=0;
    curr= head;
    while (curr!= NULL) {
        if (curr->data == specific_num) {
            counter++;
        }
        curr= curr -> next;
    }
    return counter;
}
node* create_one_node()
{
    node* newly = (node*) malloc(sizeof(node));
    if (newly == NULL) {
        printf("\nOops: Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    printf("\nEnter the data:\n");
    fflush(stdin);
    scanf("%d", &(newly -> data));
    return newly;
}
int getNth (node* head, int n)
{
    node* curr;
    int i;
    curr= head;
    for (i=0; i<n; i++) {
        curr= curr->next;
    }
    return curr->data;
}
void insertNth(node* head, node* new_node, int n)
{
    int i;
    node* curr;
    node* prev;
    prev=head;
    curr= head ->next;
    for (i=0; i<(n-1); i++) {
        prev= prev->next;
        curr=curr->next;
    }
    new_node-> next = curr;
    prev-> next= new_node;
}
void append_list(node* head1, node* head2)
{
    node* curr;
    curr= head1;
    while (curr->next != NULL) {
        curr= curr->next;
    }
    curr-> next= head2;
}
void sort(node* head)
{
    node* prev;
    node* curr;
    prev= head;
    curr= prev -> next;
    int i;
    for (i=0; i<=NUMBER_OF_ELEMENTS; i++) {
        while (curr->next != NULL) {
            if ((curr->data) >((curr->next)->data)) {
                prev->next= curr->next;
                (curr->next)->next= curr;
            }
            curr= curr->next;
            prev= prev->next;
        }
    }
}
int main()
{
    int repeat, specific_num, checkInput, n, dataNth, N;
    node* head;
    node* new_node;
    node* head2;
    node* reverse;
    /*making the linked list*/
    head= create_dummy_head();
    constructor(head);
    /*part one: finding the number of times a specific data is repeated*/
    do {
        printf("\nPlease enter the number you would like to see the number of repeat of:");
        checkInput= scanf("%d", &specific_num);
        if (checkInput==0) {
            printf("\ninvalid input!");
        }
    }while (checkInput==0);
    repeat= count(head, specific_num);
    printf("\nthe number of repeat is: %d", repeat);
    /*part two: printing the n'th node*/
    do{
        printf("enter the node you want to print");
        checkInput= scanf("%d", &n);
        if (checkInput==0) {
            printf("\ninvalid input!");
            continue;
        }
        if (n> NUMBER_OF_ELEMENTS) {
            printf("\nthere are only %d elements in this list", NUMBER_OF_ELEMENTS);
        }
    }while (checkInput==0);
    dataNth=getNth(head, n);
    printf("\n the data of this node is: %d", dataNth);
    /*part three: adding a node to the n'th place*/
    new_node= create_one_node();
    do{
        printf("enter where you want to add the node");
        checkInput= scanf("%d", &N);
        if (checkInput==0) {
            printf("\ninvalid input!");
            continue;
        }
        if (n> NUMBER_OF_ELEMENTS) {
            printf("\nthere are only %d elements in this list", NUMBER_OF_ELEMENTS);
        }
    }while (checkInput==0);
    (void) insertNth(head, new_node, N);
    head2= create_dummy_head();
    constructor(head2);
    /*part 4: adding a list to the end of this list*/
    (void) append_list(head, head2);
    /*part 5: sorting the list*/
    (void) sort(head);
    return 0;
}