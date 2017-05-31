#include <iostream>
using namespace std;
int main(){
	int deque[100];
	int value;
	int size = 0;
	string choice;

	while(true){
		cin>>choice;

		if(choice == "push_front"){
			cin>>value;
		
			for(int i=99; i>0; i--){
				deque[i] = deque[i-1];
			}
				deque[0] = value;
				size++;
				cout<<"ok"<<endl;
			
		}

		else if(choice == "push_back"){
			cin>>value;
			deque[size] = value;
			size++;
			cout<<"ok"<<endl;
			
		}

		else if(choice == "pop_front"){
			if(size>0){
				cout<<deque[0]<<endl;

				for(int i=0	; i<100; i++){
					deque[i] = deque[i+1];
				}
				size--;
			}
		}

		else if(choice == "pop_back"){
			if(size>0){
				cout<<deque[size-1]<<endl;
				size--;
			}
		}

		else if(choice == "front"){
			if(size>0){
				cout<<deque[0]<<endl;
			}
		}

		else if(choice == "back"){
			if(size>0){
				cout<<deque[size-1]<<endl;
			}
		}

		else if(choice == "size"){
			cout<<size<<endl;
		}

		else if(choice == "clear"){
			size = 0;
			cout<<"ok"<<endl;
		}

		else if(choice == "exit"){
			cout<<"bye"<<endl;
			break;
		}
	}

	return 0;
}