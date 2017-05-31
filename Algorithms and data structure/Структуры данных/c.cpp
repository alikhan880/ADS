#include <iostream>
#include <string>
using namespace std;
class Node{
	public:
		int value;
		Node *next;
		Node(int value){
			this->value = value;
		}
};

class Stack{
	public:
		Node *top;
		Stack(){
			top = NULL;
		}
};
int main(){
	Stack *stack = new Stack();
	string choice;
	int value;
	int size = 0;

	while(true){
		cin>>choice;

		if(choice == "push"){
			cin>>value;
			Node *node = new Node(value);
			node->next = stack->top;
			stack->top = node;
			size++;
			cout<<"ok"<<endl;
		}

		else if(choice == "pop"){
			if(stack->top == NULL){
				cout<<"error"<<endl;
			}
			else{
				cout<<stack->top->value<<endl;
				stack->top = stack->top->next;
				size--;
			}
		}

		else if(choice == "back"){
			if(stack->top == NULL){
				cout<<"error"<<endl;
			}
			else{
				cout<<stack->top->value<<endl;
			}
		}

		else if(choice == "size"){
			cout<<size<<endl;
		}

		else if(choice == "clear"){
			cout<<"ok"<<endl;
			size = 0;
			stack->top = NULL;
		}

		else if(choice == "exit"){
			cout<<"bye"<<endl;
			break;
		}
	}

	return 0;
}