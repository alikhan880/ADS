#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;


int main() {
	stack<string> st;
	string mainString = "";
	string append;
	int choice;
	int q,k;
	cin>>q;

	for(int i=0; i<q; i++){
		cin>>choice;
	
		if(choice == 1){
			cin>>append;
			st.push(mainString);
			mainString+=append;
		}
	
		else if(choice == 2){
			st.push(mainString);
			cin>>k;
			mainString = mainString.substr(0,mainString.size()-k);
		} 
	
		else if(choice == 3){
			cin>>k;
			cout<<mainString[k-1]<<endl;
		}
	
		else if(choice == 4){
			mainString = st.top();
			st.pop();
		}
	}
    return 0;
}
