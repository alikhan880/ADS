#include <iostream>
#include <vector>	
using namespace std;

struct Node{
public:
	string name;

	Node *parent;

	vector<Node*> children;

	Node(string name){
		this->name = name;
	}
};

struct Tree{
public:
	vector<Node*> roots;

	void add(string father, string son){
		bool foundF = false, foundS = false;
		Node *f, *s;
		for(int i=0; i<roots.size(); i++){
			if(roots[i]->name == father){
				f = roots[i];
				foundF = true;
			}

			if(roots[i]->name == son){
				s = roots[i];
				foundS = true;
			}
		}

		if(!foundF){
			f = new Node(father);
			roots.push_back(f);
		}

		if(!foundS){
			s = new Node(son);
			roots.push_back(s);
		}

		s->parent = f;
		f->children.push_back(s);
	}

	void Children(string name){
		for(int i = 0; i<roots.size(); i++){
			if(roots[i]->name == name){
				for(int j = 0; roots[i]->children.size(); j++){
					cout<<roots[i]->children[j]->name<<" ";
				}
			}
		}
	}

	void Gsons(string name){
		vector<Node*> sons;

		for(int i=0; i<roots.size(); i++){
			if(roots[i]->name == name){
				for(int j=0; j<roots[i]->children.size(); j++){
					sons.push_back(roots[i]->children[j]);
				}
			}
		}

		for(int i=0; i<sons.size(); i++){
			for(int j=0; j<sons[i]->children.size(); j++){
				cout<<sons[i]->children[j]->name<<" ";
			}
		}
	}
};

int main(){
	int n;
	cin>>n;
	Tree *tree = new Tree();
	for(int i=0; i<n; i++){
		string father, son;
		cin>>father>>son;
		tree->add(father,son);
	}

	cout<<"1->Show children"<<endl;
	cout<<"2->Show grandsons"<<endl;
	int choice;
	cin>>choice;

	if(choice == 1){
		string name;
		cin>>name;
		tree->Children(name);
	}
	else if(choice == 2){
		string name;
		cin>>name;
		tree->Gsons(name);
	}	

	return 0;
}

