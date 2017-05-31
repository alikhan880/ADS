#include <iostream>

#define ll long long

using namespace std;

ll n, k, a[100100], b[100100];

int poisk(ll p){
	int l = 0;
	int r = n-1;

	while(l<r){
		int mid = (l+r)/2;

		if(a[mid]<p) l = mid+1;
		else r = mid;
	}

	if(a[r] == p) return l;
	else return -1;
}


int main(){

	cin>>n>>k;

	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<k; i++) cin>>b[i];

	for(int i=0; i<k; i++){
		if(poisk(b[i]) == -1) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}