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
#include <cstring>

#define pb push_back
#define ll long long
#define pii pair<int, int>
#define vi vector<int>
#define vll vector<long long>
#define mp make_pair
using namespace std;


#include <iostream>
using namespace std;

int t, r, c;
char a[110][110];
bool used[110][110], check = false;
const string s = "ALLIZZWELL";

int dx[]={-1,0,1,1,1,0,-1,-1};

int dy[]={-1,-1,-1,0,1,1,1,0};

void dfs(int x, int y, int ch, int fromX, int fromY){
	// cout<<x<<" "<<y<<endl;
	if(x<0 || x>=r || y<0 || y>=c || ch > s.size() || a[x][y] != s[ch]) return;
	used[x][y] = true;
	// printf("%c\n", a[x][y]);
	if(a[x][y] == s[ch]) ch++;
	// cout<<"CH "<<ch<<endl;
	if(ch == s.size()){
		check = true;
		return;
	}
	for(int i=0; i<8; i++) if(!used[x+dx[i]][y+dy[i]] || (x+dx[i] != fromX && y+dy[i] != fromY)){
		// cout<<x + dx[i]<<" "<<y+dy[i]<<endl;
		dfs(x+dx[i], y+dy[i], ch, x, y);
	}
}

int main(){

	scanf("%d", &t);

	while(t--){
		scanf("%d %d", &r, &c);
		int ukz = 0;
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cin>>a[i][j];
			}
		}

		bool check2 = false;
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				int ukz = 0;
				if(!used[i][j]) dfs(i, j, ukz, i, j);
				if(check){
					printf("%s\n", "YES");
					check2 = true;
					break;
				}
			}
			if(check) break;
		}

		if(!check) printf("%s\n", "NO");
		memset(used, false, sizeof(used)); 
		check = check2 = false;
	}


	

	// fclose(stdin);
	// fclose(stdout);
	return 0;
}