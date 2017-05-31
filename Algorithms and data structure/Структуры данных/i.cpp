#include <iostream>
using namespace std;
class Node{
public:
	int value;
	Node *prev_node;
	Node *next_node;

	Node(int value){
		this->value = value;
	}
};

class Deque{
public:
	Node *head;
	Node *tail;

	Deque(){
		head = NULL;
		tail = NULL;
	}

};
int main(){
	Deque *dq = new Deque();

	int value;
	string choice;
	int size = 0;
	while(true){

		if(size == 0){
			dq->head = NULL;
			dq->tail = NULL;
		}
		
		cin>>choice;
		

		if(choice == "push_front"){
			cin>>value;

			Node *cur;
			Node *temp = new Node(value);

			if(dq->head == NULL){
				dq -> head = temp;
				dq -> tail = temp;
				size++;
				cout<<"ok"<<endl;
			}

			else{
				cur = dq->head;
				dq->head->prev_node = temp;
				dq->head = temp;
				dq->head->next_node = cur;
				size++;
				cout<<"ok"<<endl;
			}

		}

		else if(choice == "push_back"){
			cin>>value;
			Node *cur;
			Node *temp = new Node(value);

			if(dq->head == NULL){
				dq->head = temp;
				dq->tail = temp;
				size++;
				cout<<"ok"<<endl;
			}

			else{
				cur = dq->tail;
				dq->tail->next_node = temp;
				dq->tail = temp;
				dq->tail->prev_node = cur;
				size++;
				cout<<"ok"<<endl;
			}
		}

		else if(choice == "pop_front"){
			if(size>0){
				cout<<dq->head->value<<endl;
				dq->head = dq->head->next_node;
				size--;
			}
			else{
				dq->head = NULL;
				cout<<"error"<<endl;
				size = 0;
			}
		}

		else if(choice == "pop_back"){
			if(size>0){
				cout<<dq->tail->value<<endl;
				dq->tail = dq->tail->prev_node;
				size--;
			}
			else{
				dq->head = NULL;
				cout<<"error"<<endl;
				size = 0;
			}
		}

		else if(choice == "front"){
			if(size>0){
				cout<<dq->head->value<<endl;
			}
			else{
				cout<<"error"<<endl;
			}
		}

		else if(choice == "back"){
			if(size>0){
				cout<<dq->tail->value<<endl;
			}
			else{
				cout<<"error"<<endl;
			}
		}

		else if(choice == "size"){
			cout<<size<<endl;
		}

		else if(choice == "clear"){
			dq->head = NULL;
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