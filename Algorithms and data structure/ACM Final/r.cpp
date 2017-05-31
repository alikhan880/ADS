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
#include <cstring>

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;

int n;
vector<pair<string, string> > v;

bool comp(pair<string, string> s1, pair<string, string> s2){
	if(s1.second > s2.second) return true;
	else if(s1.second == s2.second){
		if(s1.first > s2.first) return true;
	}

	return false;
}

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n;

	for(int i=0; i<n; i++){
		string name, surname;
		cin>>name>>surname;
		v.pb(mp(name, surname));
	}

	sort(v.rbegin(), v.rend(), comp);

	for(int i=0; i<v.size(); i++){
		cout<<v[i].first<<" "<<v[i].second<<endl;
	}


}