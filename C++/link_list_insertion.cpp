#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	
};

Node* create_list(){
	Node* head = new Node();
	Node* first = new Node();
    Node* second = new Node();
	head->data = 1;
	head->next = first;
	first->data = 2;
	first->next = second;
	second->data = 3;
	second->next = NULL;
	return head;
}



void printList(Node* head){
	Node* temp = head;
	while(temp){
		cout << temp->data << endl;
		temp = temp->next;
	}
}


void push(Node** head, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = *head;
	*head = new_node;
	return;
}

void append(Node** head, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = NULL;
	if(*head == NULL){
		*head = new_node;
		return;
	}
	Node* temp = *head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = new_node;
	return;
}

void insertAtGivenPosition(Node* prev, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = prev->next; 
	prev->next = new_node;
	return;
}

int main(){
	Node* head = create_list();
	printList(head);
    push(&head, 4);
    cout << "After insertion in start!" << endl;
	printList(head);
	append(&head, 5);
    cout << "After insertion in last!" << endl;
	printList(head);
	insertAtGivenPosition(head->next->next, 6);
	cout << "After insertion at given position!" << endl;
	printList(head);
	return 0;
}