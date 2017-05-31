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
	Node *head, *tail;
	Queue(){
		head = NULL;
		tail = NULL;
	}
};

int main(){
	Queue *queue = new Queue();
	int value;
	int size = 0;
	string choice;

	while(true){
		cin>>choice;

		if(queue->head == NULL){
			queue->tail == NULL;
			size = 0;
		}

		if(choice == "push"){
			cin>>value;
			Node *node = new Node(value);

			if(queue->head == NULL){
				queue->head = node;
				queue->tail = node;
			}

			else{
				queue->tail->next = node;
				queue->tail = node;
			}
			
			size++;
			cout<<"ok"<<endl;
		}

		else if(choice == "pop"){
			if(size>0){
				cout<<queue->head->value<<endl;
				queue->head = queue->head->next;
				if(queue->head == NULL){
					queue->tail = NULL;
				}
				size--;
			}
			else{
				cout<<"error"<<endl;
			}
		}

		else if(choice == "front"){
			if(size>0){
				cout<<queue->head->value<<endl;;
			}
			else{
				cout<<"error"<<endl;
			}
		}
		
		else if(choice == "size"){
			cout<<size<<endl;
		} 

		else if(choice == "clear"){
			queue->head = NULL;
			queue->tail = NULL;
			size = 0;
			cout<<"ok"<<endl;
		}

		else if(choice == "exit"){
			cout<<"bye"<<endl;
			return 0;
		}

	}

	return 0;
}