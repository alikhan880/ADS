#include <iostream>
using namespace std;

int n, a[100];

void make_h(int i, int n){
	int l = i;
	int max = a[i];

	if (2 * i + 1 < n && a[2 * i + 1] > max) {
		max = a[2 * i + 1];
		l = 2 * i + 1;
	}

	if (2 * i + 2 < n && a[2 * i + 2] > max) {
		max = a[2 * i + 2];
		l = 2 * i + 2;
	}

	if (l != i) {
		swap(a[i], a[l]);
		make_h(l, n);
	}
}

void heap_sort() {
	int k = n;

	for (int i = 0; i < n; i++){
		swap(a[0], a[k - 1]);
		k--;
		make_h(0, k);
	}
}
int main(){
	// freopen("input.txt", "r", stdin);
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = (n - 1) / 2; i >= 0; i--){
		make_h(i, n);
	}

	heap_sort();
	
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}