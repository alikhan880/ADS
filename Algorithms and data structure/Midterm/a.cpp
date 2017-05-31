#include <iostream>
#include <stack>

using namespace std;

stack<char> s;
int c = 0, op = 0;


int main(){

	int n;
	string str;

	cin>>n;
	cin>>str;

	for(int i=str.length()-1; i>=0; i--){
		s.push(str[i]);
	}


	while(!s.empty()){
		if(s.top()== 'R'){
			s.pop();
			c++;
		}		
		else if(s.top() == 'B'){
			op++;
			s.pop();
			s.push('R');
			while(c!=0){
				s.push('B');
				c--;
			}
		}
		
	}

	cout<<op;


	return 0;
}