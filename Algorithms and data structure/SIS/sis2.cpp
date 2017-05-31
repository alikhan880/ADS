#include <iostream>

using namespace std;

struct Node{
public:
	string name;
	Node *parent;
	vector<Node*> children;


	Node(string name){
		parent = NULL;
		child = NULL;
	}
};

struct Tree{
public:
	Node *root;	

	Tree(){
		root = NULL;
	}


	void add(Node *root,string father, string son){
		Node *f = new Node(father);
		Node *s = new Node(son);
		if(root->children.empty()){
			
			f->parent = root;
			s->parent = f;
			f->children.push_back(s);
			root->children.push_back(f);
		}
		else{
			for(int i=0; i<root->children.size(); i++){
				if(root->children[i]->name == father){
					
				}
			}
		}
	}	
};