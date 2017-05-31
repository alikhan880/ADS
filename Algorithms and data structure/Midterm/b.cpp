#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
	stack<int> s;
	queue<int> q;
	deque<int> d;
	int cnt = 0;

	int n, command;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>command;

		if(command == 0){
			int a = 0;
			string str1 = "", str2 = "", str3 = "";
			if(!s.empty()){
				a++;
				str1 = "popStack";
				s.pop();
			}

			if(!q.empty()){
				a++;
				str2 = "popQueue";
				q.pop();
			}

			if(!d.empty()){
				a++;
				str3 = "popFront";
				d.pop_front();
			}
			cnt = 0;
			cout<<a<<" "<<str1<<" "<<str2<<" "<<str3<<endl;
			a = 0;
		}

		else{
			cnt++;
			if(cnt == 1){
				s.push(command);
				cout<<"pushStack"<<endl;
			}

			else if(cnt == 2){
				q.push(command);
				cout<<"pushQueue"<<endl;
			}

			else if(cnt == 3){
				d.push_front(command);
				cnt = 0;
				cout<<"pushFront"<<endl;
			}
		}
	}


	return 0;
}