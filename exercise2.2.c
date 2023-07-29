/*Write a C program to reverse a singly linked list.*/

#include <stdio.h>
#include <stdlib.h>

//Defining Node structure
typedef struct node
{
    int data;
    struct node *next;
}node;

int main(void)
{
    node *list = NULL;

    //Creating a linked list
    for (int i = 0 ; i < 10 ; i++)
    {
        int number;
        printf("Enter a number to add it in list: ");
        scanf("%d", &number);

        node *newnode = malloc(sizeof(node));
        
        newnode -> data = number;
        newnode -> next = NULL;
        newnode -> next = list;
        list = newnode;
    }
    node *tmp = list;
    
    //Printing linked list without reversing it.
    printf("Linked list without reversing is: ");
    while (tmp != NULL)
    {
        printf("%d", tmp -> data);
        tmp = tmp -> next;
    }
}