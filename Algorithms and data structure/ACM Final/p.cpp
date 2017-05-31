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


string s;
map<char, bool> used, used2;
map<char, int> pov;

int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>s;
	int minX = 100100;
	bool check = false;
	int cnt = 0;
	int cntR = 0;

	for(int i=0; i<s.size(); i++) pov[s[i]]++;
	for(int i = 0; i<s.size(); i++){
		if(!used[s[i]]){
			cnt++;
			used[s[i]] = true;
		}
		else{
			if(!used2[s[i]]){
				cntR++;
				check = true;
				used2[s[i]] = true;
			}
			else minX = min(minX, pov[s[i]]);
		}
	}


	// cout<<cnt<<" "<<cntR<<" "<<minX<<endl;
	if(cnt < 2){
		cout<<0;
		return 0;
	}

	else if(cnt > 2 && cntR > 1){
		if(cnt > cntR){
			cout<<cnt - cntR + minX;
			return 0;
		}
		else{
			cout<<minX;
			return 0;
		}
	}
	// else cnt = cnt - 2;


	// if(cntR < 1 && cnt > 2) cnt = cnt - 2;
	// else cnt = cntR / 2 + cntR % 2;
	// if(cntR < 1 && cnt > 2) cnt = cnt - 2;
	cout<<cnt;

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}