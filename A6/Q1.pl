//MENU PROGRAM FOR INSERTION, DELETION AND DISPLAY OF ELEMENTS IN A circular LINKED LIST
#include <iostream>
using namespace std;    
class Node {
public: 
    int data; 
    Node* next; 
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
int main(){
    int arr[]={2,4,6,8,10};
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i=0;i<5;i++){
        Node* temp=new Node(arr[i]);
        if(head==nullptr){
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
            tail->next=head;
        }
    }
    cout<<"enter the operation to be performed 1-insertion 2-deletion 3-display"<<endl;
    int op;
    switch(op){
        case 1:
            int val,x;
            cout<<"enter the position and value to be inserted"<<endl;
            cin>>x>>val;
            Node* newNode=new Node(val);
            if(head==nullptr){
                head=newNode;
                newNode->next=head;
            }
            
            else
              {if(x==1){
                newnode->next=head;
                head=newNode;
            }
            else{
                Node*curr=head;
                int n=1;
                while(n<x-1){
                    curr=curr->next;
                    n++;
                }
                if(curr->next==head){
                    curr->next=newNode;
                    newNode->next=head;
                }
                else{
                    newNode->next=curr->next;
                    curr->next=newNode;
                }
            }
        }
        case 2:
            int x;
            cout<<"enter the position to be deleted"<<endl;
            cin>>x;
            if(head==nullptr){
                cout<<"list is empty"<<endl;
            }
            else{
                if(pos==1){
                    if(head->next==head){
                        head=nullptr;
                    }
                    else{
                    node* temp=head;
                    node*tail=head;
                    while(tail->next!=head){
                        tail=tail->next;
                    }
                    tail->next=head->next;
                    head=head->next;
                    delete temp;
                    }
                    }
                else{
                        node* curr=head;
                        node*prev=nullptr;
                        int n=1;
                        while(n<x-1){
                            prev=curr;
                            curr=curr->next;
                            n++;
                        }
                        if(curr->next==head){
                            prev->next=head;
                            delete curr;
                        }
                        else{
                        prev->next=curr->next;
                        delete curr;
                        }                            
              }
              case 3:
                  if(head==nullptr){
                      cout<<"list is empty"<<endl;
                  }
                  else{
                      Node* curr=head;
                      do{
                          cout<<curr->data<<" ";
                          curr=curr->next;
                      }while(curr!=head);
                      cout<<endl;
                  }
    }
return 0;
}