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

void deleteForGivenKey(Node* head, int key){
	Node* temp = head;
	Node* prev = NULL;
	if(temp && temp->data == key){
		head = temp->next;
		delete(temp);
		return;
	}
	else{
		while(temp && temp->data != key){
			prev = temp;
			temp = temp->next;
		}
		if(temp == NULL){
			return;
		}
		prev->next = temp->next;
		delete(temp);
	}
	return;
}

int main(){
	Node* head = create_list();
	printList(head);
    deleteForGivenKey(head, 2);
    cout << "After deletion for given key!" << endl;
	printList(head);
	
 //    cout << "After insertion in last!" << endl;
	// printList(head);
	
	// cout << "After insertion at given position!" << endl;
	// printList(head);
	return 0;
}