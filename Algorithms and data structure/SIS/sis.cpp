#include <iostream>
#include <vector>

using namespace std;

bool found = false, added = false;

struct Node{
public:
	string name;
	Node *parent;
	vector<Node*> children;

	Node(string name){
		this->name = name;
		parent = NULL;
	}
};

struct GenTree{
public:
	Node *root;
	vector<Node*> roots;

	GenTree(){
		root = NULL;
	}

	void add(string father, string son){
		if(roots.empty()){
			Node *f = new Node(father);
			Node *s = new Node(son);
			s->parent = f;
			f->children.push_back(s);
			root = f;
			roots.push_back(root);
		}
		else{
			for(int i=0; i<roots.size(); i++){
				Node *temp = roots[i];
				addEx(temp, father, son);		
			}

			if(!added){
				Node *fnode = new Node(father);
				Node *snode = new Node(son);
				snode->parent = fnode;
				fnode->children.push_back(snode);
				roots.push_back(fnode);
			}
		}
	}


	void addEx(Node* node, string father, string son){
		added = false;
		if(node->name == father){
			found = false;
			for(int i=0; i<roots.size(); i++){
				if(roots[i]->name == son){
					node->children.push_back(roots[i]);
					roots[i]->parent = node;
					roots.erase(roots.begin() + i);
					found = true;
					added = true;
					break;
				}
			}

			if(!found){
				Node *snode = new Node(son);
				snode->parent = node;
				node->children.push_back(snode);
				added = true;
			}
			

		}
		else{
			for(int i=0; i<node->children.size(); i++){
				addEx(node->children[i], father, son);
			}
		}
	}

	Node* find(string name){
		for(int i=0; i<roots.size(); i++){
			if(roots[i]->name == name){
				return roots[i];
			}
		}

		return NULL;
	}

	void showSons(Node *p){
		for(int i=0; i<p->children.size(); i++){
			cout<<p->children[i]->name<<" ";
		}
		cout<<endl;
	}

	void showGrandSons(Node *p){
		for(int i=0; i<p->children.size(); i++){
			for(int j=0; j<p->children[i]->children.size(); j++){
				cout<<p->children[i]->children[j]->name<<" ";
			}
			cout<<endl;
		}
	}

	bool checkEquality(string name1, string name2){
		Node *node1 = find(name1);
		Node *node2 = find(name2);
		if(node1->parent != NULL){
			while(node1->parent != NULL){
				node1 = node1->parent;
			}
		}

		if(node2->parent != NULL){
			while(node2->parent != NULL){
				node2 = node2->parent;
			}
		}

		if(node1 == node2){
			return true;
		}

		return false;
	}

	// Node* findAncestor(string name){
	// 	Node *temp = find(name);

	// 	while(temp->parent != NULL){
	// 		temp = temp->parent;
	// 	}

	// 	return temp;
	// }

};



int main(){

	freopen("sis.in", "r", stdin);
	// freopen(".out", "w", stdout);



	
	GenTree *tree = new GenTree();


	int n;

	string father, son, space;
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>father>>space>>son;
		tree->add(father, son);
		cout<<tree->roots.size()<<endl;
	}

	cout<<"1-Find all childrens"<<endl;
	cout<<"2-Find all grandsons"<<endl;
	cout<<"3-Find similarity"<<endl;
	int choice;

	cin>>choice;

	if(choice == 1){
		string name;
		cin>>name;
		tree->showSons(tree->find(name));
	}

	else if(choice == 2){
		string name;
		cin>>name;
		tree->showGrandSons(tree->find(name));
	}

	else if(choice == 3){
		string name1, name2;
		cin>>name1>>name2;
		if(tree->checkEquality(name1, name2)){
			// cout<<"They have common ancestor "<<tree->findAncestor(name1)->name<<endl;
		}
	}


	fclose(stdin);
	// fclose(stdout);
	return 0;
}