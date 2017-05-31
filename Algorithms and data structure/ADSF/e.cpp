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

string str;

char c[1000100];

vector<int> prefix_function (string s) {
	int n = (int) s.length();
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

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	// scanf("%s", c);
	// str = c;
	cin>>str;
	int n = str.size();
	vi v = prefix_function(str);
	// for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
	int max_p = -1;

	for(int i=0; i<v.size()-1; i++) max_p = max(max_p, v[i]);

	// for(int i=0; i<v.size(); i++) printf("%d", v[i]);
	// printf("\n");

	if(v[n-1] == 0){
		printf("%s\n", "Just a legend");
		return 0;
	}

	int temp = v[n-1];
	while(true){
		if(temp == 0) break;
		if(temp <= max_p){
			for(int i=0; i<temp; i++){
				printf("%c", str[i]);
				// cout<<v
			}
			return 0;
		}
		temp = v[temp-1];
	}
	printf("%s\n", "Just a legend");

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}