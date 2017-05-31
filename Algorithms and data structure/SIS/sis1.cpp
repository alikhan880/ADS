#include <iostream>
#include <vector>
#include <map>

using namespace std;

struct Node{
public:
	string name;
	Node *parent;	

	Node(string name){
		this->name = name;
	}
};

multimap<string, Node*> tree;
map<string, Node*> fathers;

void add(string father, string son){
	tree.insert(pair<string, Node*>(father, new Node(son)));
	fathers[son] = new Node(father);
}

int main(){

	int n;
	string f,s;
	cout<<"Enter the number of query"<<endl;
	cin>>n;
	cout<<"Your query"<<endl;
	for(int i=0; i<n; i++){
		cin>>f>>s;
		add(f,s);
	}
	while(f != "stop"){
		int choice;
		cout<<"1-Show sons of parent"<<endl;
		cout<<"2-Show parent for the son"<<endl;
		cin>>choice;
		if(choice == 1){
			cout<<"Type the name of the parent"<<endl;
			cin>>f;

			pair<multimap<string, Node*>::iterator, multimap<string, Node*>::iterator> p;

			p = tree.equal_range(f);


			for(multimap<string, Node*>::iterator it = p.first; it!=p.second; it++){
				cout<<(*it).second->name<<" ";
			}
			cout<<endl;
		}
		else if(choice == 2){
			cin>>f;
			cout<<fathers[f]->name<<endl;
		}
		
	}

	return 0;

}






