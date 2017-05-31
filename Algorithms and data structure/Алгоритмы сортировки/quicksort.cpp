#include <iostream>
using namespace std;

int a[100];

void quickSort(int l, int r){
	int i = l;
	int j = r;
	int m = a[(l+r)/2];

	while(i<j){

		while(a[i]<m){
			i++;
		}

		while(a[j]>m){
			j--;
		}

		if(i<=j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}

	if(l<j){
		quickSort(l,j);
	}

	if(i<r){
		quickSort(i,r);
	}
}



int main(){
	int n;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>a[i];
	}

	quickSort(0, n-1);

	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}

	return 0;
}