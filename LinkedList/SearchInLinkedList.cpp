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

bool search(node*head,int x){
    node*curr=head;
    while(curr!=NULL){
        if(curr->data==x)
        return true;
        curr=curr->next;
    }
    return false;
    
}

//recursive
/*bool search(node*head,int x){
    node*curr=head;
    if(head==NULL)
    return false;
    if(head->data==x)
    return true;
    else
    return search(head->next,x);
    
    
}*/
int main() {
    node* head = NULL;
    push(head, 10);
    push(head, 12);
    push(head, 14);
    push(head, 15);
    print(head);
    cout<<endl;
    cout<<search(head,45)<<endl;
	return 0;
}
