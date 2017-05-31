#include <cmath>
#include <cstdio>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	stack<int> front;
	stack<int> rear;

	int q, choice, x;
	cin>>q;

	for(int i=0; i<q; i++){
		cin>>choice;

		if(choice == 1){
			cin>>x;
			if(front.empty() && rear.empty()){
				front.push(x);
			}
			else if(!front.empty() && rear.empty()){
				front.push(x);
			}
			else{
				rear.push(x);
			}
		}
		else if(choice == 2){
			if(!front.empty()){
				while(!front.empty()){
					rear.push(front.top());
					front.pop();
				}
				rear.pop();
			}
			else if(!rear.empty()){
				while(!rear.empty()){
					front.push(rear.top());
					rear.pop();
				}
				front.pop();
			}

		}
		else if(choice == 3){
			if(!front.empty()){
				while(!front.empty()){
					rear.push(front.top());
					front.pop();
				}
				cout<<rear.top()<<endl;
			}
			else if(!rear.empty()){
				while(!rear.empty()){
					front.push(rear.top());
					rear.pop();
				}
				cout<<front.top()<<endl;
			}
		}
	}
    return 0;
}
