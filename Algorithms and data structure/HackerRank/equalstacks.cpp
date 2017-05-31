#include <iostream>
#include <stack>
#include <algorithm>
#include <fstream>
#include <deque>
using namespace std;

int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	deque<int> st1, st2, st3;
	int n1, n2, n3, q, h1 = 0, h2 = 0, h3 = 0;

	cin>>n1>>n2>>n3;

	for(int i=0; i<n1; i++){
		cin>>q;
		h1+=q;
		st1.push_front(q);
	}

	for(int i=0; i<n2; i++){
		cin>>q;
		h2+=q;
		st2.push_front(q);
	}

	for(int i=0; i<n3; i++){
		cin>>q;
		h3+=q;
		st3.push_front(q);
	}

	int result;

	while(true){
		
		result = max(h1, max(h2, h3));

		if(h1 == h2 && h2 == h3 && h1 == h3){
			break;
		}

		if(h1 == result){
			h1-=st1.back();
			st1.pop_back();
		}

		if(h2 == result){
			h2-=st2.back();
			st2.pop_back();
		}

		if(h3 == result){
			h3-=st3.back();
			st3.pop_back();
		}

	}

	cout<<h1;

	return 0;
}