//display values of circular linked list
#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node(int val) {
		data = val;
		next = NULL;
	}
};
void display(Node* head) {
	if (head == NULL) return;
	else {
		Node* temp = head;
		while (1) {
			cout << temp->data << " ";
			temp = temp->next;
			if(temp->next==head->next) {
				cout << temp->data;
				break;
			}
		}
	}
}
int main() {
	Node* head = new Node(1);
	Node* second = new Node(2);
	Node* third = new Node(3);
	head->next = second;
	second->next = third;
	third->next = head; // Making the list circular
	display(head);
	return 0;
}