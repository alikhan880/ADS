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

using namespace std;
int a[30][30], b[30][30];
int n,m;


int main(){
	cin>>n>>m;

	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>a[i][j];
		}
	}
	b[0][0] = a[0][0];
	
	for(int i=1; i<n; i++){
		b[i][0] = b[i-1][0] + a[i][0];
		// cout<<b[i][0]<<" ";
	}

	for(int i=1; i<m; i++){
		b[0][i] = b[0][i-1] + a[0][i];
	}


	for(int i=1; i<n; i++){
		for(int j=1; j<m; j++){
			b[i][j] = min(b[i-1][j], b[i][j-1]) + a[i][j];
		}
	}

	cout<<b[n-1][m-1];


	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);




	// fclose(stdin);
	// fclose(stdout);
	return 0;
}