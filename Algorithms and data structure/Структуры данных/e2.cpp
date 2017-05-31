#include <iostream>
#include <deque>

using namespace std;

int main(){
	deque <int> deq1;
	deque <int> deq2;
	deque <int>::iterator it;
	int n, value;
	char mod;
	int cnt = 0;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>mod;

		if(mod == '+'){
			cin>>value;
			cnt++;
				
			if(cnt == 1){
				deq1.push_back(value);
			}
			else if(cnt == 2){
				deq2.push_back(value);
			}
			else if(cnt%2==1){
				deq1.push_back(deq2.front());
				deq2.pop_front();
				deq2.push_back(value);
			}
			else{
				deq2.push_back(value);
			}
		}

		else if(mod == '*'){
			cin>>value;
			cnt++;
			if(cnt == 1){
				deq1.push_back(value);
			}
			else if(cnt == 2){
				deq2.push_front(value);
			}

			else if(cnt%2==1){
				deq1.push_back(value);
			}
			else{
				deq2.push_front(value);
			}
		}

		else if(mod == '-'){
			if(cnt%2==0){
				cout<<deq1.front()<<endl;
				deq1.pop_front();
				deq1.push_back(deq2.front());
				deq2.pop_front();
				cnt--;
			}
			else{
				cout<<deq1.front()<<endl;
				deq1.pop_front();
				cnt--;
			}

		}
	}

	return 0;
}