#include <iostream>
#include <vector>
#include <algorithm>


#define pb push_back
#define ll long long
using namespace std;

ll n, q;
vector<ll> prices(100100), cash(100100);


int poisk(ll p){
	int l = 0;
	int r = n-1;

	while(l<r){
		int mid = (l+r)/2;

		if(prices[mid]<p) l = mid+1;
		else r = mid;
	}

	if(prices[r] <= p) return r+1;
	else if(prices[r]>p) return r;
}


int main(){
	cin>>n;

	for(int i=0; i<n; i++) cin>>prices[i];

	cin>>q;
	for(int i=0; i<q; i++) cin>>cash[i];

	sort(prices.begin(), prices.begin() + n);

	for(int i=0; i<q; i++){
		cout<<poisk(cash[i])<<endl;
	}

	return 0;
}