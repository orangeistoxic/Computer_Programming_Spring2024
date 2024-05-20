#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct linkedList
{
    int integer;
    struct linkedList *next;
};

int main()
{
    struct linkedList *first = NULL, *current, *newNode, *temp;
    int i;
    char input[100];

    while (fgets(input, sizeof(input), stdin))
    {
        char *command;
        // Determine the input have addtional information then command.
        if (input[strlen(input) - 2] >= '0' && input[strlen(input) - 2] <= '9')
        {
            command = strtok(input, ",");
        }
        else
        {
            command = strtok(input, "\n");
        }

        // "New" is basically the same as "Push" in this case.
        if (strcmp(command, "New") == 0)
        {
            char *token = strtok(NULL, ",");
            while (token != 0)
            {
                newNode = (struct linkedList *)malloc(sizeof(struct linkedList));
                (*newNode).integer = atoi(token);
                (*newNode).next = NULL;
                if (first == NULL)
                {
                    first = newNode;
                    current = newNode;
                }
                else
                {
                    (*current).next = newNode;
                    current = newNode;
                }
                token = strtok(NULL, ",");
            }
        }
        else if (strcmp(command, "Push") == 0)
        {
            char *token = strtok(NULL, ",");
            newNode = (struct linkedList *)malloc(sizeof(struct linkedList));
            (*newNode).integer = atoi(token);
            (*newNode).next = NULL;
            if (first == NULL)
            { // If the stack is empty, the first node is the new node.
                first = newNode;
                current = newNode;
            }
            else
            { // Push current node to the next node.
                (*current).next = newNode;
                current = newNode;
            }
        }
        else if (strcmp(command, "Print all") == 0)
        {
            if (first == NULL)
            {
                printf("Empty Stack\n");
            }
            else
            {
                temp = first;
                printf("%d", (*temp).integer);
                temp = (*temp).next;
                while (temp != NULL)
                {
                    printf(",%d", (*temp).integer);
                    temp = (*temp).next;
                }
                printf("\n");
            }
        }
        else if (strcmp(command, "Get") == 0)
        {
            if (first == NULL)
            {
                printf("Empty Stack\n");
            }
            else
            {
                temp = first;
                printf("%d\n", (*temp).integer);
                first = (*first).next;
                free(temp);
            }
        }
        else if (strcmp(command, "Is empty") == 0)
        {
            if (first == NULL)
            {
                printf("True\n");
            }
            else
            {
                printf("False\n");
            }
        }
        else
        { // Avoid unexpected result.
            printf("Invalid command\n");
        }
    }
}