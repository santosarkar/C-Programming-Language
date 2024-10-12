#include <stdio.h>  // Includes standard I/O functions.
#include <stdlib.h> // Includes standard library functions.

// Defining a node for a linked list.
struct Node {
    int data;            // Data part of the node.
    struct Node *next;   // Pointer to the next node.
};

int main() {  // Program execution starts here.
    // Creating nodes
    struct Node *head = NULL;  // Initializes head pointer to NULL.
    struct Node *second = NULL;
    struct Node *third = NULL;

    // Allocating memory for nodes in the linked list.
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Assigning data and linking nodes.
    head->data = 1;       // Assigns data to first node.
    head->next = second;  // Links first node to second node.

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;   // Last node points to NULL.

    // Traversing the linked list.
    struct Node *ptr = head;  // Sets pointer to the head of the list.
    printf("Linked List Elements:\n");
    while (ptr != NULL) {  // Loops until the end of the list.
        printf("%d ", ptr->data);  // Prints the data of current node.
        ptr = ptr->next;  // Moves to the next node.
    }
    printf("\n");

    // Freeing allocated memory.
    free(head);
    free(second);
    free(third);

    return 0;  // Program ends successfully.
}
