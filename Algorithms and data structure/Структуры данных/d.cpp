#include <iostream>
using namespace std;

int main(){
	int queue[100];
	int pointer = 0;
	int value;
	string choice;

	while(1!=0){
		if(pointer<0){
			pointer = 0;
		}

		cin>>choice;

		if(choice == "push"){
			cin>>value;
			queue[pointer] = value;
			pointer++;
			cout<<"ok"<<endl;
		}

		else if(choice == "pop"){
			if(pointer>0){
			cout<<queue[0]<<endl;
			for(int i=0; i<99; i++){
				queue[i] = queue[i+1];
			}
			pointer--;
			}
			else{
				continue;
			}
		}

		else if(choice == "front"){
			if(pointer>0){
			cout<<queue[0]<<endl;
			}
			else{
				continue;
			}
		}

		else if(choice == "size"){
			cout<<pointer<<endl;
		}

		else if(choice == "clear"){
			pointer = 0;
			cout<<"ok"<<endl;
		}

		else if(choice == "exit"){
			cout<<"bye"<<endl;
			return 0;
		}
	}

	return 0;
}