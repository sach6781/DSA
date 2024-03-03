#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;
	
};

int main(){
	Node* head = NULL;
    Node* first = NULL;
	head = new Node();
	first = new Node();
	head->data = 1;
	head->next = first;
	first->data = 2;
	first->next = NULL;
	Node* temp = head;
	while(temp){
		cout << temp->data << endl;
		temp = temp->next;
	}
	return 0;
}