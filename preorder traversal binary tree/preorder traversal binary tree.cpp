
#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* left, * right;
};
Node* newwNode(int data) {
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
void printpreorder(Node* node) {
	if (node == NULL)
		return;
	cout << node->data << " ";
	printpreorder(node->left);
	printpreorder(node->right);
}
int main() {
	Node* root = newwNode(1);
	root->left = newwNode(2);
	root->right = newwNode(3);
	root->left->left = newwNode(4);
	root->left->right = newwNode(5);
	printpreorder(root);
	return 0;
}