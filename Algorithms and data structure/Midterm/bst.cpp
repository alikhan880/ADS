#include <iostream>

using namespace std;

class Node{
public:
	int value;
	Node *left;
	Node *right;
	Node *parent;

	Node(int value){
		this->value = value;
		left = NULL;
		right = NULL;
		parent = NULL;
	}
};


int c = 0;

class BST{
public:
	Node *root;

	BST(){
		root = NULL;
	}

	void insert(int val, Node *p){
		c++;
		Node *node = new Node(val);
		
		if(p == NULL){
			p = node;
		}
		else{
			if(val <= p->value){
				if(p->left == NULL){
					p->left = node;
					p->left->parent = p;
				}
				else{
					insert(val, p->left);
				}
			}
			else{
				if(p->right == NULL){
					p->right = node;
					p->right->parent = p;
				}
				else{
					insert(val, p->right);
				}
			}
		}
	}
};

int main(){
	BST *bst = new BST();
	int n,q; 
	cin>>n;

	for(int i=0; i<n; i++){
		cin>>q;
		bst->insert(q, bst->root);
		cout<<c<<endl;
	}
	
	return 0;
}
