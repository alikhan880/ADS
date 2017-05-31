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


#include <iostream>
using namespace std;

int n;
char a[220];
string s;




int main(){

	scanf("%d", &n);

	scanf("%s", &a);
	// s = a;
	int sz = n;
	int szm = 2*n;
	bool check1 = true;
	bool check2 = true;
	vector<char> v1(n), v2(n);

	for(int i=0; i<sz; i++) v1[i] = a[i];

	for(int i=sz; i<szm; i++) v2[i-sz] = a[i];


	// cout<<v1.size()<<" "<<v2.size()<<endl;
	// quickSort(v1, 0, n-1);
	// quickSort(v2, 0, n-1);


	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(v1[i] > v1[j]) swap(v1[i], v1[j]);
			if(v2[i] > v2[j]) swap(v2[i], v2[j]);
		}
	}
	// for(int i=0; i<n; i++){
	// 	cout<<v1[i]<<" ";
	// }

	// cout<<endl;

	// for(int i=0; i<n; i++){
	// 	cout<<v2[i]<<" ";
	// }
	
	for(int i=0; i<sz; i++){
		if(v1[i] > v2[i]) continue;
		else check1 = false;
	}

	for(int i=0; i<sz; i++){
		if(v1[i] < v2[i]) continue;
		else check2 = false;
	}

	if(check1 || check2) printf("%s\n", "YES");
	else printf("%s\n", "NO");	


	return 0;
}