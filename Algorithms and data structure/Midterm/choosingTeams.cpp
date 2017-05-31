#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n,k;
	vector<int> v;
	cin>>n>>k;

	int a[n];

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	for(int i=0; i<n; i++){
		if(a[i]+k<=5){
			v.push_back(a[i]);
		}
	}

	cout<<v.size()/3;

	return 0;
}