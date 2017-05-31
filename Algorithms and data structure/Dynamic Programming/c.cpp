#include <iostream>

using namespace std;

int a[1010];
int n;


int main(){

	cin>>n;
	a[1] = 1;
	a[2] = 1;

	for(int i=3; i<=n; i++){
		a[i] = a[i-1] + a[i-2];
	}

	int temp = a[n];

	cout<<temp%10;

	return 0;
}