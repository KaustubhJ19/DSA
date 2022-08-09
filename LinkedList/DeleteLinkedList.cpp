#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data=val;
        next=NULL;
    }
};

void push(node*&head,int val){
    node *temp=new node(val);
    temp->next=head;
    head=temp;
}
void deleteLinkedList(node*&head){
    node*current=head;
    node*next=NULL;
    while(current!=NULL){
        next=current->next;
        delete (current);
        current=next;
    }
    head=NULL;
}

void print(node*&head){
    if(head==NULL){
    cout<<"no elements"<<endl;
        return;
    }
    cout<<head->data<<" ";
    print(head->next);
}

int main() {
    node* head = NULL;
    push(head, 10);
    push(head, 12);
    push(head, 14);
    push(head, 15);
    print(head);
    deleteLinkedList(head);
    print(head);
	return 0;
}
