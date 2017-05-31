#include <iostream>
#include <queue>

using namespace std;
int main(){
	queue <int> p1;
	queue <int> p2;
	int n;

	for(int i=0; i<5; i++){
		cin>>n;
		p1.push(n);
	}
	
	for(int i=0; i<5; i++){
			cin>>n;
			p2.push(n);
	}
	
	int i = 0;
	while(!p1.empty() && !p2.empty()){
	
		int card1 = p1.front();
		p1.pop();
		int card2 = p2.front();
		p2.pop();
		
		if(i>1000000){
			cout<<"botva"<<endl;
			return 0;
		}

		if(card1 == 0 && card2 == 9){
			p1.push(card1);
			p1.push(card2);
			i++;
		}

		else if(card2 == 0 && card1 == 9){
			p2.push(card1);
			p2.push(card2);
			i++;
		}

		else{
			if(card1>card2){
				p1.push(card1);
				p1.push(card2);
				i++;
			}
			else{
				p2.push(card1);
				p2.push(card2);
				i++;
			}
		}
	}

	if(p1.empty()){
		cout<<"second"<<" "<<i<<endl;
	}

	else if(p2.empty()){
		cout<<"first"<<" "<<i<<endl;
	}

	return 0;
}