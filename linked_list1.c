#include <stdio.h>
#include <stdlib.h>

// struct Node{
//     int data;
//     struct Node* next;
// };

// int main(){
//     struct Node* head, *new_node;
//     head=(struct Node*) malloc(sizeof(struct Node));
//     head->data = 10;
//     head->next=(struct Node*)malloc(sizeof(struct Node));
//     head->next->data=20;                                   //k/w create a circular link list
//     head->next->next=NULL;

//     new_node=(struct Node*) malloc(sizeof(struct Node));
//     new_node->data=5;
//     new_node->next=head;
//     head=new_node;
    
//     return 0;
// }

struct node {
  int data;
  struct node *next;
};

int count=0;
struct node *head, *new_node, *temp;

int Position_Change(){

    int pos,i=0;

    printf("Enter the position: ");
    scanf("%d", &pos);

    if(pos>count){
        printf("Invalid Position\n");
    }
    else{
        temp=head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
    }

    printf("Enter data: ");
    scanf("%d",&new_node->data);
    new_node->next=temp->next;
    temp->next=new_node;

    return 0;
}


int main(void){
    int choice=1;

  head=0;

    while(choice){

     new_node=(struct node*) malloc(sizeof(struct node));

     printf("Enter the data: ");
     scanf("%d", &new_node->data);
     new_node->next=0;

     if(head==0){
        head=temp=new_node;
     }
     else{
        temp->next=new_node;
        temp=new_node;
     }
    
     printf("Do you want to continue(0,1): ");
     scanf("%d",&choice);
    } 

    temp=head;
    while(temp != 0){
        printf("%d ", temp->data);
        temp=temp->next;
        count++;
    }

    printf("\nThe length of Linked List is %d", count);

    
    return Position_Change();

    // return 0;
}


 
