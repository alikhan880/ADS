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


vi prefix(string s){
	int n = s.size();
	vi p(n);
	for(int i=1; i<n; i++){
		int j = p[i-1];

		while(j>0 && s[i] != s[j]){
			j = p[j-1];
		} 

		if(s[i] == s[j]) j++;
		p[i] = j;
	}

	return p;
}

char c[100100];
string str;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);

	scanf("%s", c);
	str = c;

	vi pt = prefix(str);
	int n = str.size();
	printf("%d", n - pt[n-1]);
	// cout<<pt[n-1];

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}