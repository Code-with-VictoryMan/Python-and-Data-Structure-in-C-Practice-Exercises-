#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head, *temp, *new_node;
int count=0;

int Node_Deletion_Beginning() {
    if (head == 0) {
        printf("List is empty, nothing to delete.\n");
        return 0;
    }

    struct node *temp_1 = head;
    head = head->next;
    free(temp_1);

    printf("After the Changes: ");
    temp = head;
    while (temp != 0) {         
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}

int Node_Deletion_End() {
    if (head == 0) {
        printf("List is empty, nothing to delete.\n");
        return 0;
    }

    struct node *temp_1 = head;
    struct node *prev_node = 0;

    while (temp_1->next != 0) {
        prev_node = temp_1;
        temp_1 = temp_1->next;
    }

    // temp_1 is last node
    if (temp_1 == head) {     // only one node
        head = 0;
    } else {
        prev_node->next = 0;
    }

    free(temp_1);

    printf("After the Changes: ");
    temp = head;
    while (temp != 0) {        
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}

int Node_Deletion_SpecificPosition(){
    printf("Delete Specific Position functionality not yet implemented.\n");
    return 0;
}

int Node_Position_Change() {
    int pos, i = 1;
    struct node *prev = NULL;

    printf("Enter position to insert (1 to %d): ", count + 1);
    scanf("%d", &pos);

    if (pos < 1 || pos > count + 1) {
        printf("Invalid Position\n");
        return 0;
    }

    //  allocate new node here
    new_node = (struct node*)malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    printf("Enter data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;

    //  insert at beginning
    if (pos == 1) {
        new_node->next = head;
        head = new_node;
    }
    else {
        temp = head;
        while (i < pos) {   // move to the node at position pos-1
            prev = temp;
            temp = temp->next;
            i++;
        }
        // prev is (pos-1)th node, temp is pos-th node
        new_node->next = temp;
        prev->next = new_node;
    }

    count++; // update count because list size increased

    printf("After the Changes: ");
    temp = head;
    while (temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    return 0;
}

int Node_Length_Finder(){
    while(temp != 0){
        count++;
        temp=temp->next;
    }

    printf("Count of the Linked List is %d", count);
    printf("\n");

    return 0;
}

int Node_Reverse_Order(){
    struct node *tail, *prev;
    struct node *current = head;
    prev = NULL;
    
    while(current != NULL){
        tail = current->next;
        current->next = prev;
        prev = current;
        current = tail;
    }
    
    head = prev;
    
    printf("After the Changes: ");
    temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    
    return 0;
}



int main() {
    int choice = 1;
    head = 0;

    while (choice) {
        new_node = (struct node*) malloc(sizeof(struct node));
        if (new_node == 0) {
            printf("Memory allocation failed.\n");
            return 0;
        }

        printf("Enter: ");
        scanf("%d", &new_node->data);

        new_node->next = 0;

        if (head == 0) {
            head = temp = new_node;
        } else {
            temp->next = new_node;
            temp = new_node;
        }

        printf("Do you want to add another node (0,1): ");
        scanf("%d", &choice);
    }

    printf("Before Changes: ");
    temp = head;
    while (temp != 0) {        
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    printf("\n");

    int program;
    printf("\nEnter the choice (1=Delete Begin, 2=Delete End, 3=Delete Specific Position, 4=Data Position Change, 5=Length/Count Of Nodes)\n");
    printf("Enter Choice: ");
    scanf("%d", &program);

    switch (program) {
        case 1: return Node_Deletion_Beginning();
        case 2: return Node_Deletion_End();
        case 3: return Node_Deletion_SpecificPosition();
        case 4: return Node_Position_Change();
        case 5: return Node_Length_Finder();
        default: return 0;
    }
}
