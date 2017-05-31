#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;


vector<int> prefix_function (string s) {
	int n = s.size();
	vector<int> pi (n);
	for (int i=1; i<n; ++i) {
		int j = pi[i-1];
		while (j > 0 && s[i] != s[j])
			j = pi[j-1];
		if (s[i] == s[j]) ++j;
		pi[i] = j;
	}
	return pi;
}

#include <iostream>
using namespace std;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	// string temp = "";

	while(true){
		string s;
		cin>>s;
		if(s == "*") break;
		vi v = prefix_function(s);

		if(s.size() % (s.size() - v[s.size()-1]) == 0) cout<<s.size() / (s.size() - v[s.size()-1])<<endl;
		else cout<<1<<endl;
		// cout<<v.size()%v[v.size()-1] + 1<<endl;
		// for(int i = 0; i<v.size(); i++){
		// 	cout<<v[i]<<" ";
		// }
		// cout<<endl;
	}


	// fclose(stdin);
	// fclose(stdout);
	return 0;
}