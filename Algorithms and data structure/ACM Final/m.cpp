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
vector<pair<string, int> > v;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		int x;
		string s;
		cin>>s>>x;
		v.pb(mp(s, x));
	}

	int cnt = 0;

	for(int i=1; i<=100; i++){
		int temp = i;
		bool check = true;
		for(int j = 0; j<v.size(); j++){
			if(v[j].first == "SUBTRACT"){
				if(temp - v[j].second < 0) check = false;
			}
			if(v[j].first == "DIVIDE"){
				if(temp % v[j].second != 0) check = false;
			}
			if(v[j].first == "ADD") temp += v[j].second;
			if(v[j].first == "MULTIPLY") temp *= v[j].second;
		}
		if(!check) cnt++;
	}


	printf("%d\n", cnt);



	// fclose(stdin);
	// fclose(stdout);
	return 0;
}