#include <iostream>
#include <stack>
#include <string>
#include <cmath>

using namespace std;

int main(){
	stack<int> st;
	string s;
	getline(cin, s);

	for(int i=0; i<s.size(); i++){
		if(s[i]>='0' && s[i]<='9'){
			int c = s[i] - '0';
			st.push(c);
		}
		
		else if(s[i] == 32){
			continue;
		}
		
		else{
			if(s[i] == '+'){
				int a = st.top();
				st.pop();
				int b = st.top();
				st.pop();
				st.push(a+b);
			}
			else if(s[i] == '-'){
				int a = st.top();
				st.pop();
				int b = st.top();
				st.pop();
				st.push(b-a);
			}
			else if(s[i] == '*'){
				int a = st.top();
				st.pop();
				int b = st.top();
				st.pop();
				st.push(a*b);
			}
		}
	}

	cout<<st.top()<<endl;

	return 0;
}
