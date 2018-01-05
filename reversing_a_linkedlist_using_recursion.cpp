#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
}*start,*ptr,*save,*newptr,*newStart;

Node *createNode(int);
void insertEnd(Node *,Node *);
Node* reverseLinkedList(Node *);
void display(Node *);

int main(){
    start=NULL;
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;i++)
    {
        newptr=createNode(arr[i]);
        insertEnd(start,newptr);
        display(start);
    }

    newStart=reverseLinkedList(start);
    display(newStart);

}

Node* createNode(int val){
    Node *np=new Node;
    np->data=val;
    np->next=NULL;
    return np;
}

void insertEnd(Node *head,Node *np){
    if(start==NULL){
        start=np;
    }
    else{
        if(head->next!=NULL){
            insertEnd(head->next,np); 
        }
        else{
            head->next=np;
        }
    }
}

void display(Node *p){
    if(p==NULL)
        cout<<"UNDERFLOW!\n";
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

Node* reverseLinkedList(Node *head){
    if(head->next==NULL)
        {
            return head;
        }
    else{
        newStart=reverseLinkedList(head->next);//A
        head->next->next=head;
        head->next=NULL;
        return newStart;
    }
}
