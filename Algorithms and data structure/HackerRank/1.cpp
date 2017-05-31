#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	vector<int> v;
	int choice; 
	int n, x, max = 0;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>choice;
		if(choice == 1){
			cin>>x;
			v.push_back(x);
			if(max<x){
				max = x;
			}
		}
		else if(choice == 2){
			v.pop_back();
			max = 0;
			for(int i=0; i<v.size(); i++){
				if(max<v[i]){
					max = v[i];
				}
			}
		}
		else if(choice == 3){
			cout<<max<<endl;
		}
	}    
    return 0;
}
