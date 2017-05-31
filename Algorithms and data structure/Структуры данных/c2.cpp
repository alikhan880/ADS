#include <iostream>
#include <stack>
using namespace std;
int main(){
	stack <int> st;
	string input;
	cin>>input;

	for(int i=0; i<input.size(); i++){
		if(input[i] == '(' || input[i] == '[' || input[i] == '{'){
			st.push(input[i]);
		}

		else if(input[i] == '}'){
			if(!st.empty()){
				if(st.top() == '{'){
					st.pop();
				}
				else{
					st.push(input[i]);
				}
			}
			else{
				st.push(input[i]);
			}
		}

		else if(input[i] == ')'){
			if(!st.empty()){
				if(st.top() == '('){
					st.pop();
				}
				else{
					st.push(input[i]);
				}
			}
			else{
				st.push(input[i]);
			}
		}

		else if(input[i] == ']'){
			if(!st.empty()){
				if(st.top() == '['){
					st.pop();
				}
				else{
					st.push(input[i]);
				}
			}
			else{
				st.push(input[i]);
			}
		}
	}

	if(st.empty()){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}

	return 0;
}