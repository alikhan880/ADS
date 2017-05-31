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


// vector<int> v1, v2;
int n, k;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	scanf("%d%d", &n, &k);
	int maxFNB = 1, minFB = k;

	for(int i=0; i<n; i++){
		int x;
		string s;
		cin>>x>>s;
		if(s == "SAFE") maxFNB = max(x, maxFNB);
		else minFB = min(minFB, x);
		// else v2.pb(x);
	}

	if(minFB - maxFNB > 1){
		int temp1 = maxFNB + 1;
		int temp2 = minFB - 1;
		if(temp1 < k)minFB = temp1;
		if(temp2 > 1)maxFNB = temp2;
	}

	cout<<minFB<<" "<<maxFNB;




	// fclose(stdin);
	// fclose(stdout);
	return 0;
}