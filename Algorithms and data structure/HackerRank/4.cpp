#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<string> v;
    string s;
    string sf;
    int n, k;
    int choice;

    cin>>n;

    for(int i=0; i<n; i++){
    	cin>>choice;

    	if(choice == 1){
    		cin>>s;
    		sf = sf + s;
    		v.push_back(sf);
    	}

    	else if(choice == 2){
    		cin>>k;
    		if(!sf.empty()){
	    		v.push_back(sf);
	    		sf = sf.substr(0, sf.size()-k);
    		}
    	}

    	else if(choice == 3){
    		cin>>k;
    		if(!sf.empty()){
	    		cout<<sf.at(k-1)<<endl;
    		}
    	}

    	else if(choice == 4){
   			if(!v.empty()){
	   			v.pop_back();
	    		sf = v.back();
   			}
    	}
    }
    return 0;
}
