#include <iostream>
#include <vector>

#define ll long long 

using namespace std;

string s, t;
const int p = 31;
vector<ll> p_pow(max(s.size(), t.size()));

int main(){

	cin>>s>>t;
	p_pow[0] = 1;
	for(int i=1; i<p_pow.size(); i++){
		p_pow[i] = p_pow[i-1] * p; 
	}

	vector<ll> s_hash(s.size());
	for(int i=0; i<s.size(); ++i){
		s_hash[i] = (s[i] - 'a' + 1) * p_pow[i];
		if(i>0) s_hash[i] += s_hash[i-1];
	}

	ll t_hash = 0;

	for(int i=0; i<t.size(); ++i){
		t_hash += (t[i] - 'a' + 1) * p_pow[i];
	}

	for(int i=0; i+t.size()-1<s.size(); ++i){
		ll cur_hash = s_hash[i+t.size()-1];

		if(i>0) cur_hash -= s_hash[i-1];

		if(t_hash * p_pow[i] == cur_hash){
			cout<<i<<" ";
		}
	}


	return 0;
}