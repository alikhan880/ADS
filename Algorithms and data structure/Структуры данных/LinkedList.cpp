#include <iostream>

using namespace std;

class Node{
public:
	Node *prev, *next;
	int value;

	Node(int value){
		this->value = value;
	}

class LinkedList{};
	Node *front, *back;

	LinkedList(){
		front = NULL;
		back = NULL;
	}

	void push_back(int value){
		Node *node = new Node(value);

		if(back == NULL){
			front = node;
			back = node;
		}

		else{
			back->next = node;
			node->prev = back;
			back = node;
		}
	}

	void push_front(int value){
		Node *node = new Node(value);
		if(front == NULL){
			front = node;
			back = node;
		}
		else{
			front->prev = node;
			node->next = front;
			front = node;
		}
	}

	void pop_back(){
		if(back == NULL){
			cout<<"error"<<endl;
		}
		else{
			back = back->prev;
			back->next = NULL;
		}
	}

	void pop_front(){
		if(front == NULL){
			cout<<"error"<<endl;
		}

		else{
			front = front->next;
			front->prev = NULL;
		}
	}

	bool is_empty(){
		return (front==NULL);
	}

	void get_back(){
		if(!is_empty()){
			cout<<back->value<<endl;
		}
		else{
			cout<<"error"<<endl;
		}
	}

	void get_front(){
		if(!is_empty()){
			cout<<front->value<<endl;
		}
		else{
			cout<<"error"<<endl;
		}
	}

	Node* find(int value){
		Node *node = front;

		while(node != NULL && node->value != value){
			node = node->next;
		}

		if(node == NULL){
			return NULL;
		}
		else{
			return node;
		}
	}

	void delete(Node *node){
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}

	void insert(Node *node, int value){
		Node *node1 = new Node(value);
		node1->next = node->next;
		node->next->prev = node1;
		node1->prev = node;
		node->next = node1;
	}
};

int main(){
	string choice;
	int value;
	LinkedList *lt = new LinkedList();
	while(true){
		cin>>choice;

		if(choice == "push_back"){
			cin>>value;
			lt.push_back(value);
		}

		else if(choice == "push_front"){
			cin>>value;
			lt.push_front(value);
		}

		else if(choice == "pop_back"){
			lt.pop_back();
		}

		else if(choice == "pop_front"){
			lt.pop_front();
		}

		else if(choice == "is_empty"){
			if(lt.is_empty()){
				cout<<"yes"<<endl;
			}
			else{
				cout<<"no"<<endl;
			}
		}

		else if(choice == "get_front"){
			lt.get_front();
		}

		else if(choice == "get_back"){
			lt.get_back();
		}

		else if(choice == "find"){
			cin>>value;
		}
	}
	return 0;
}