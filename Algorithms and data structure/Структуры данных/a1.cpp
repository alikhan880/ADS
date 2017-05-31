#include <iostream>
#include <fstream>
#include <queue>

using namespace std;

int main(){
	queue<pair<int, string> > c_9;
	queue<pair<int, string> > c_10;
	queue<pair<int, string> > c_11;

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int c;
	string surname;

	while(cin>>c>>surname){
		if(c == 9){
			c_9.push(make_pair(c, surname));
		}

		else if(c == 10){
			c_10.push(make_pair(c, surname));
		}

		else if(c == 11){
			c_11.push(make_pair(c, surname));
		}
	}

	while(!c_9.empty()){
		cout<<c_9.front().first<<" "<<c_9.front().second<<endl;
		c_9.pop();
	}

	while(!c_10.empty()){
		cout<<c_10.front().first<<" "<<c_10.front().second<<endl;
		c_10.pop();
	}

	while(!c_11.empty()){
		cout<<c_11.front().first<<" "<<c_11.front().second<<endl;
		c_11.pop();
	}

	return 0;
}