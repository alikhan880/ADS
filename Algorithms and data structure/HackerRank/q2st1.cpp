#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	int q, choice, x;

	cin>>q;

	for(int i=0; i<q; i++){
		cin>>choice;

		if(choice == 1){
			cin>>x;
			v.push_back(x);
		}

		else if(choice == 2){
			if(!v.empty()){
				v.erase(v.begin());
			}
		}

		else if(choice == 3){
			if(!v.empty()){
				cout<<v.at(0)<<endl;
			}
		}
	}

	return 0;
}