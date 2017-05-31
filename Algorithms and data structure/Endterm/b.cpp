#include <iostream>
using namespace std;
int main(){
	int m,n,x=1;
	cin>>m>>n;
	string etv;
	string nts;
	cin>>etv>>nts;
	if (etv[0]==etv[m-1] || nts[0]==nts[n-1] || (etv[0]=='<' && nts[0]=='^') || (etv[0]=='>' && nts[0]=='v'))
	    cout<<"NO";
	else
	    cout<<"YES";
	return 0;
}