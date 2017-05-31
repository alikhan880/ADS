#include <iostream>
#include <vector>
#include <queue>

#define pb push_back

using namespace std;

int n, s, f;
vector<int> v[110], d(110);
bool used[110];

int main(){

	freopen("bfs.in", "r", stdin);
	freopen("bfs.out", "w", stdout);

	int n, s, f;
	cin>>n>>s>>f;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			int r;
			cin>>r;
			if(r == 1) v[i].pb(j);
		}
	}

	// for(int i=1; i<=n; i++){
	// 	for(int j=0; j<v[i].size(); j++){
	// 		cout<<v[i][j]<<" ";
	// 	}

	// 	cout<<endl;
	// }
	queue<int> q;
	q.push(s);
	used[s] = true;
	d[s] = 0;
	while(!q.empty()){
		int temp = q.front();

		for(int i=0; i<v[temp].size(); i++){
			int to = v[temp][i];
			if(!used[to]){
				q.push(to);
				used[to] = true;
				d[to] = d[temp] + 1;
			}
		}

		q.pop();
	}

	if(!used[f]) cout<<0;
	else cout<<d[f];

	return 0;
}