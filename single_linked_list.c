#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head);
void print_linked_list(struct node *head);
int main(void)
{
    // creating the pointer to the first node
    struct node *head = NULL;
    // allocate memory for the node and creating the first node
    head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;
    // creating the second node and linking them using a pointer
    struct node *second = malloc(sizeof(struct node));
    second -> data = 98;
    second -> link = NULL;
    head -> link = second;
    // creating the third node and linkinh them using a pointer
    second = malloc(sizeof(struct node));
    second -> data = 3;
    second -> link = NULL;
    head -> link -> link = second;
    // counting how many node in a given list
    count_of_nodes(head);
    // printting the linked list
    print_linked_list(head);
    return (0);
}

// counting how many node in a given list
void count_of_nodes(struct node *head)
{
    int count = 0;
    
    if (head == NULL)
    {
        printf("Linked list is empty.\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        count++;
        ptr = ptr ->link;
    }
    printf("there are %d node(s) in this linked list.\n", count);
}
// printing the linked list
void print_linked_list(struct node *head)
{    
    if (head == NULL)
    {
        printf("Linked list is empty.\n");
    }
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d,", ptr ->data);
        ptr = ptr ->link;
    }
    printf("\n");
}