#include <iostream>
#include <vector>

using namespace std;


int n, m, a[20200], b[20200];
vector<pair<int, int> > v;
int binpoiskLR(int p){
	int l = 1; 
	int r = n;

	while(l<r){
		int mid = (l+r)/2;

		if(a[mid]<p) l = mid+1;
		else r = mid;
	}
	if(a[r] == p) return r;
	else return 0;

}

int binpoiskRL(int p){
	int l = 1;
	int r = n;

	while(l<r){
		int mid = r - (r - l)/2;
		if(a[mid]<=p) l = mid;
		else r = mid - 1;
	}

	if(a[l] == p) return l;
	else return 0;
}


int main(){

	cin>>n>>m;

	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=m; i++) cin>>b[i];

	for(int i=1; i<=m; i++){
		v.push_back(make_pair(binpoiskLR(b[i]), binpoiskRL(b[i])));
	}

	for(int i=0; i<v.size(); i++){
		if(v[i].first!=0){
			cout<<v[i].first<<" "<<v[i].second<<endl;
		}
		else cout<<0<<endl;
	}

	return 0;
}