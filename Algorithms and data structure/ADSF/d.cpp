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

vector<string>s;



int n,cnt;



int dx[]={-1, 0, 1,1,1,0,-1,-1};

int dy[]={-1,-1,-1,0,1,1, 1, 0};





void recursion(int r, int c){

    if(r<0 || r>=n || c<0 || c>=n || s[r][c]=='0') return;
    cnt++;
    s[r][c]='0';
    for(int i=0;i<8;i++) recursion(r+dx[i],c+dy[i]);
}

int main()

{

    int t,blank=0;

    string str;



    scanf("%d\n\n",&t);

    for(int k = 0; k < t; k++){
    	int res = 0;
        s.clear();
        vi v;

        while(getline(cin,str)){

            if(str=="") break;

            s.push_back(str);

        }


        n = s[0].size();



        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){

                  cnt=0;

                  recursion(i,j);

                  res=max(res,cnt);

			}
        }



		if(blank) printf("\n");

		printf("%d\n",res);

		blank=1;

    }

    return 0;

}