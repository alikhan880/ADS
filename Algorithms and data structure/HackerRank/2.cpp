#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
	vector<string> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    for(int i=0; i<v.size(); i++){
    	stack<char> st;
    	
    	for(int j=0; j<v[i].size(); j++){
    		if(v[i][j] == '(' || v[i][j] == '[' || v[i][j] == '{'){
    			st.push(v[i][j]);
    		}
    		
    		else if(v[i][j] == ')'){
    			if(!st.empty()){
    				if(st.top() == '('){
    					st.pop();
    				}
    				else{
    					st.push(v[i][j]);
    				}
    			}
    			else{
    				st.push(v[i][j]);
    			}
    		}

    		else if(v[i][j] == '}'){
    			if(!st.empty()){
    				if(st.top() == '{'){
    					st.pop();
    				}
    				else{
    					st.push(v[i][j]);
    				}
    			}
    			else{
    				st.push(v[i][j]);
    			}
    		}
    		
    		else if(v[i][j] == ']'){
    			if(!st.empty()){
    				if(st.top() == '['){
    					st.pop();
    				}
    				else{
    					st.push(v[i][j]);
    				}
    			}
    			else{
    				st.push(v[i][j]);
    			}
    		}

    	}

    		if(st.empty()){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    }

    return 0;
}
