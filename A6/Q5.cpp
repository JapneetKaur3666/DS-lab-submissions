
#include <iostream>
#include<vector>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
bool check(vector<node*>&visited,node* curr){
    for(int i=0;i<visited.size();i++){
        if(curr==visited[i])return 1;
    }
        return 0;
    }

int main()
{  
    node* head = new node(2);
    node* n1 = new node(4);
    node* n2 = new node(6);
    node* n3 = new node(7);
    node* n4 = new node(5);
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
     n4->next = head; 
    
    vector<node*>visited;
    node* curr=head;
    while(curr!=NULL){
        if(check(visited,curr)){cout<<"is circular"<<endl;
        return 0;
        }
        else {
            visited.push_back(curr);
            curr=curr->next;
        }
       
}
cout<<"not circular"<<endl;
    return 0;
}