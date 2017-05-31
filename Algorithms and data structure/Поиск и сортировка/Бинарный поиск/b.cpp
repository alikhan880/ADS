#include <iostream>

using namespace std;

int poisk(int n){
	int l = 1;
	int r = n;
	int c = 0;
	while(l<r){
		int m = (l+r)/2;
		r = m;
		c++;
	}

	return c;
}

int n;

int main(){

	int n;
	cin>>n;

	cout<<poisk(n);


	return 0;
}