#include <iostream>
#include <deque>

using namespace std;

int main(){
	deque<int> d;

	int t,n,m;
	cin>>t;
	for(int i=0; i<t; i++){
		cin>>n>>m;
		cout<<"Case "<<i+1<<":"<<endl;

		for(int i=0; i<m; i++){
			string choice;
			int numb;
			cin>>choice;

			if(choice == "pushLeft"){
				cin>>numb;
				if(d.size()>=n){
					cout<<"The queue is full"<<endl;
				}
				else{
					d.push_front(numb);
					cout<<"Pushed in left: "<<numb<<endl;
				}
			}

			if(choice == "pushRight"){
				cin>>numb;
				if(d.size()>=n){
					cout<<"The queue is full"<<endl;
				}
				else{
					d.push_back(numb);
					cout<<"Pushed in right: "<<numb<<endl;
				}
			}

			if(choice == "popLeft"){
				if(!d.empty()){
					cout<<"Popped from left: "<<d.front()<<endl;
					d.pop_front();
				}
				else{
					cout<<"The queue is empty"<<endl;
				}
			}

			if(choice == "popRight"){
				if(!d.empty()){
					cout<<"Popped from right: "<<d.back()<<endl;
					d.pop_back();
				}
				else{
					cout<<"The queue is empty"<<endl;
				}
			}
		}
		d.clear();
	}


	return 0;
}