
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node* next;
    
};
// working like append
void push(struct Node** head, int new_value)
{
  
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
 
    struct Node *last = *head;  
 
    new_node->value  = new_value;
 
    new_node->next = NULL;
 
    if (*head == NULL)
    {
       *head = new_node;
       return;
    }
 
    while (last->next != NULL)
        last = last->next;
 
    last->next = new_node;
    return;
}

void printing(struct Node *n)
{
  while (n != NULL)
  {
     printf("%d->", n->value);
     n = n->next;
  }
  printf("NULL\n");
}
void delete(struct Node **head, int key)
{
    struct Node* temp = *head, *prev;
 
    if (temp != NULL && temp->value == key)
    {
        *head = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }
 
    while (temp != NULL && temp->value != key)
    {
        prev = temp;
        temp = temp->next;
    }
 
    
    if (temp == NULL) return;
 
    
    prev->next = temp->next;
 
    free(temp); 
}

int main(){
    struct Node* begin = NULL; 
    push(&begin, 3);
    push(&begin, 4);
    push(&begin, 5);
    push(&begin, 6);
    push(&begin, 7);
    
    
    printing(begin);
    
    delete(&begin,6);
    delete(&begin,4);
    printing(begin);
    
    return 0;
}

