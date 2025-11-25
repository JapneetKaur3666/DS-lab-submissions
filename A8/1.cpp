// file: tree_traversals.cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int x): data(x), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    Node* root;
    BinaryTree(): root(nullptr) {}

    void buildSample() {
        root = new Node(1);
        root->left = new Node(2);
        root->right = new Node(3);
        root->left->left = new Node(4);
        root->left->right = new Node(5);
    }

    void preorder(Node* p) {
        if (!p) return;
        cout << p->data << " ";
        preorder(p->left);
        preorder(p->right);
    }
    void inorder(Node* p) {
        if (!p) return;
        inorder(p->left);
        cout << p->data << " ";
        inorder(p->right);
    }
    void postorder(Node* p) {
        if (!p) return;
        postorder(p->left);
        postorder(p->right);
        cout << p->data << " ";
    }
};
int main() {
    BinaryTree t;
    t.buildSample();
    cout << "Preorder: "; t.preorder(t.root); cout << "\n";
    cout << "Inorder: ";  t.inorder(t.root);  cout << "\n";
    cout << "Postorder: ";t.postorder(t.root);cout << "\n";
    return 0;
}
