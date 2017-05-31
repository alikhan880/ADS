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


class BST{
public:
	Node *root;

	BST(){
		root = NULL;
	}

	void insert(int val, Node *p){
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

	void sortX(Node *p){
		if(p->left != NULL){
			sortX(p->left);
		}

		cout<<p->value<<" ";

		if(p->right != NULL){
			sortX(p->right);
		}
	}

	// Node* search(int value){
	// 	if(root->left == NULL && root->right == NULL){
	// 		return root;
	// 	}

	// 	if(root->value == value){
	// 		return root;
	// 	}
	// 	if(root->left != NULL)
	// 	search(root->left->value);
		
	// 	if(root->right != NULL)
	// 	search(root->right->value);
		

	// 	return root;
	// }

	void deleteX(Node *p, int value){
		if(p->value > value){
			if(left != NULL){
				deleteX(p->left, value);
			}
		}
		else if(p->value < value){
			if(p->right != NULL){
				deleteX(p->right, value);
			}
		}
		// else{
		// 	if(p->left != NULL && p->right != NULL){
		// 		p->value = findMin(p->right);
		// 	}
		// }
	}

	int findMin(Node *p){
		if(p->left == NULL){
			return p->value;
		}
		else{
			return findMin(p->left);
		}
	}
};

int main(){
	BST *bst = new BST();
	int n; 
	string choice;

	while(true){
		cin>>choice;

		if(choice == "insert"){
			cin>>n;
			bst->insert(n, bst->root);
		}

		if(choice == "sort"){
			bst->sortX(bst->root);
			cout<<endl;
		}

		if(choice == "delete"){
			cin>>n;
			bst->deleteX(bst->root, n);
		}

	}

	return 0;
}
