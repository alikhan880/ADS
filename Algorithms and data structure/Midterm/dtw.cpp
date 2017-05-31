#include <iostream>
#include <stack>


using namespace std;

int main(){

	// freopen("input.txt", "r", stdin);


	int t;
	cin>>t;

	for(int i=0; i<t; i++){
		string cur = "http://www.lightoj.com/";
		stack<string> forward;
		stack<string> backward;
		cout<<"Case "<<i+1<<":"<<endl;
		string choice,url;
		choice = "";
		while(choice != "QUIT"){
			cin>>choice;
			if(choice == "BACK"){
				if(backward.empty()){
					cout<<"Ignored"<<endl;
				}
				else{
					forward.push(cur);
					cur = backward.top();
					backward.pop();
					cout<<cur<<endl;
				}
			}
			else if(choice == "FORWARD"){
				if(forward.empty()){
					cout<<"Ignored"<<endl;
				}
				else{
					backward.push(cur);
					cur = forward.top();
					forward.pop();
					cout<<cur<<endl;
				}
			}
			else if(choice == "VISIT"){
				backward.push(cur);
				cin>>url;
				cur = url;
				while(!forward.empty()){
					forward.pop();
				}
				cout<<cur<<endl;
			}
		}
	}

	// fclose(stdin);

	return 0;
}
