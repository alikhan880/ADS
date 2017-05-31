#include <iostream>
#include <fstream>
#include <stack>

using namespace std;

stack<int> st[550];
int main(){
	int n, q, el;

	cin>>n;

	for(int i=1; i<=n; i++){
		cin>>q;
		for(int j = 0; j < q; j++){
			cin>>el;
			st[i].push(el);
		}
	}

	// for(int i=0; i<n; i++){
	// 	while(!st[i].empty()){
	// 		cout<<st[i].top()<<" ";
	// 		st[i].pop();
	// 	}

	// 	cout<<endl;
	// }

	for(int i=1; i<=n; i++){
		while(!st[i].empty()){
			st[n].push(st[i].top());
			st[i].pop();
		}

		while(!st[n].empty()){
			if(st[n].top() == i){
				st[i].push(st[n].top());
				st[n].pop();
			}
			else{
				st[i+1].push(st[n].top());
				st[n].pop();
			}
		}
	}

	return 0;
}