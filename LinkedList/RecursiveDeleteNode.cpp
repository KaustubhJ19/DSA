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

void print(node*&head){
    if(head==NULL){
    
        return;
    }
    cout<<head->data<<" ";
    print(head->next);
}

void deletenode(node*&head, int val){
    if(head==NULL){
       
        return;
    }
    node*t=head;
    if(t->data==val && cout<<endl
    ){
        head=head->next;
        delete (t);
        return;
    }
    deletenode(head->next,val);
}
int main() {
    node* head = NULL;
    push(head, 10);
    push(head, 12);
    push(head, 14);
    push(head, 15);
    print(head);
    deletenode(head, 20); 
    print(head);
 
    deletenode(head, 10);
    print(head);
 
    deletenode(head, 14);
    print(head);
	return 0;
}
