#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

ll n, k, a[100100], b[100100];

int bin(ll p){
	int l = 0;
	int r = n-1;

	while(r-l>1){
		int m = (l+r)/2;
		if(a[m] < p) l = m;
		else r = m;
	}
	// cout<<a[l]<<"    "<<a[r]<<"_";

	// if(a[r] == p) return a[r];
	if(p - a[l] <= a[r] - p) return a[l];
	else return a[r];

}


int main(){

	cin>>n>>k;
	for(int i=0; i<n; i++) cin>>a[i];
	for(int i=0; i<k; i++) cin>>b[i];

	for(int j=0; j<k; j++){
		cout<<bin(b[j])<<endl;
	}

	return 0;
}