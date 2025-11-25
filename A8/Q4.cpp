#include <iostream>
#include <limits>
using namespace std;

class Node {
public:
    int val; Node* left; Node* right;
    Node(int v): val(v), left(nullptr), right(nullptr) {}
};

class Checker {
public:
    bool isBSTUtil(Node* n, long minv, long maxv) {
        if (!n) return true;
        if (n->val <= minv || n->val >= maxv) return false;
        return isBSTUtil(n->left, minv, n->val) && isBSTUtil(n->right, n->val, maxv);
    }
    bool isBST(Node* root) {
        return isBSTUtil(root, LONG_MIN, LONG_MAX);
    }
};

int main() {
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->right->left = new Node(12);

    Checker c;
    cout << (c.isBST(root) ? "Is BST" : "Not BST") << "\n";

    root->right->left->val = 20;
    cout << (c.isBST(root) ? "Is BST" : "Not BST") << "\n";
    return 0;
}
