#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
	vector<string> v;
	int n;
	cin>>n;
	string s;
	for(int i=0; i<n; i++){
		cin>>s;
		v.push_back(s);
	}

	cout<<v[1][2];
	return 0;
}