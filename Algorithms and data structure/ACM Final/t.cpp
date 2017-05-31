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

bool check1 = false , check2 = false;

int n1, m1, z1, n2, m2, z2;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);
	cin>>n1>>m1>>z1>>n2>>m2>>z2;

	if(n1 * n1 + m1 * m1 == z1 * z1 || m1 * m1 + z1 * z1 == n1 * n1 || z1 * z1 + n1 * n1 == m1 * m1){
		check1 = true;
	}

	if(n2 * n2 + m2 * m2 == z2 * z2 || m2 * m2 + z2 * z2 == n2 * n2 || z2 * z2 + n2 * n2 == m2 * m2){
		check2 = true;
	}
	// cout<<n1*n1 +/ m1 * m1<<endl;
	// cout<<check1<<" "<<check2<<endl;


	vi v1, v2;
	v1.pb(n1);
	v1.pb(m1);
	v1.pb(z1);
	v2.pb(n2);
	v2.pb(m2);
	v2.pb(z2);

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	bool check3 = true;
	for(int i=0; i<3; i++){
		if(v1[i] != v2[i]){
			check3 = false;
			break;
		} 
	}
	if(check3 && check1 && check2) cout<<"YES"<<endl;
	else cout<<"NO";
	// int res = n1 * n1 + m1 * m1;
	// int res2 = z1 * z1;
	// cout<<res<<" "<<res2;
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}