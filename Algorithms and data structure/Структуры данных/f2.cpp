#include <iostream>
using namespace std;

class Node{
public:	
	int value;
	Node *next;

	Node(int value){
		this->value = value;
	}

};

class Queue{
public:
	int size;
	Node *head, *tail;

	Queue(){
		size = 0;
		head = NULL;
		tail = NULL;
	}

	void push(int value){
		Node *node = new Node(value);
		if(head == NULL || tail == NULL){
			head = node;
			tail = node;
		}
		else{
			tail->next = node;
			tail = node;
		}

		cout<<"ok"<<endl;
		size++;
	}

	void pop(){
		if(size<=0){
			cout<<"error"<<endl;
		}
		else{
			if(head == NULL){
				tail = NULL;
				size = 0;
			}
			else{
				cout<<head->value<<endl;
				head = head->next;
				size--;
			}
		}
	}

	void front(){
		if(size<=0){
			head = NULL;
			tail = NULL;
			cout<<"error"<<endl;
		}
		else{
			cout<<head->value<<endl;
		}
	}

	void size_(){
		cout<<size<<endl;
	}

	void clear(){
		size = 0;
		head = NULL;
		tail = NULL;
		cout<<"ok"<<endl;
	}
};


int main(){

	Queue *q = new Queue();

	int value;
	string choice;
	while(true){

		cin>>choice;
		
		if(choice == "push"){
			cin>>value;
			q->push(value);
		}

		else if(choice == "pop"){
			q->pop();
		}

		else if(choice == "front"){
			q->front();
		}
		
		else if(choice == "size"){
			q->size_();
		} 

		else if(choice == "clear"){
			q->clear();
		}

		else if(choice == "exit"){
			cout<<"bye"<<endl;
			return 0;
		}
	}
	return 0;
}