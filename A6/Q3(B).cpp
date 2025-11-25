//to find size of circular linked list
#include <iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int val) {
		data=val;
		next=NULL;
	}
};
int countelements(node *head) {
	int count;
	if(head==NULL)return 0;
	else{
	node* temp=head;
	count=1;
	while(temp->next!=head) {
		count++;
		temp=temp->next;
	}
	return count;
	}
}
int main() {
	int arr[]= {1,2,3,4,5};
	node *head=NULL;
	node* tail=NULL;
	for(int i=0; i<5; i++) {
	    node* temp=new node(arr[i]);
		if(head==NULL) {
			head=temp;
			tail=temp;
		}
		else {
			tail->next=temp;
			tail=tail->next;
			if(i==4) {
				tail->next=head;
			}
		}
	}
	cout<<countelements(head);
	return 0;
}