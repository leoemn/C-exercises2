/*Write a C program to reverse a singly linked list.*/

#include <stdio.h>
#include <stdlib.h>

//Defining Node structure
typedef struct node
{
    int data;
    struct node *next;
}node;

//Functions prototype
void ReverseLinkedList(node *list);

int main(void)
{
    node *list = NULL;

    //Creating a linked list
    for (int i = 0 ; i < 10 ; i++)
    {
        int number;
        printf("Enter a number to add it in list: ");
        scanf("%d", &number);

        node *NewNode = malloc(sizeof(node));
        
        NewNode -> data = number;
        NewNode -> next = NULL;
        NewNode -> next = list;
        list = NewNode;
    }

    //Printing linked list without reversing it.
    node *tmp = list;
    printf("Linked list without reversing is: ");
    while (tmp != NULL)
    {
        printf("%d", tmp -> data);
        tmp = tmp -> next;
    }
    printf("\n");
    ReverseLinkedList(list);
}

//Function to reverse the linked list
void ReverseLinkedList(node *list)
{
    node *current = list;
    node *prev = NULL;
    node *NextNode;

    while (current != NULL)
    {
        NextNode = current->next; // Save the next node
        current->next = prev;     // Reverse the link, point current node's next to the previous node
        prev = current;           // Move prev to the current node
        current = NextNode;       // Move current to the next node
    }

    //Printing linked list after reversing it.
    node *tmp = prev;
    printf("Linked list after reversing is: ");
    while (tmp != NULL)
    {
        printf("%d", tmp -> data);
        tmp = tmp -> next;
    }
}