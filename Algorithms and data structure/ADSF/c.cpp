#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <string>

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;


#include <iostream>
using namespace std;

char c[200200];
string s;
stack <char> st, st2;


int main(){

	// freopen(".in", "r", stdin);
	// freopen(".out", "w", stdout);


	scanf("%s", c);
	s = c;

	for(int i=0; i<s.size(); i++){
		if(st.empty()) st.push(s[i]);
		else{
			if(st.top() == 'S' && s[i] == 'T'){
				st2.push(s[i]);
				st.pop();
			}
			else{
				st.push(s[i]);
			}
		}
	}

	printf("%d\n", st.size());
	// fclose(stdin);
	// fclose(stdout);
	return 0;
}