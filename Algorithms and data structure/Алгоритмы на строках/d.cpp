#include <iostream>
#include <vector>

using namespace std;

vector<int> p_function(string s){
	int n = s.size();
	vector<int> pi(n);
	for(int i=1; i<n; i++){
		int j = pi[i-1];
		while(j>0 && s[i]!=s[j]) j = pi[j-1];
		if(s[i] == s[j]) j++;
		pi[i] = j;
	}

	return pi;
}

int main(){
	string s;
	cin>>s;

	vector<int> res = p_function(s);

	for(int i=0; i<res.size(); i++){
		cout<<res[i]<<" ";
	}

	return 0;
}