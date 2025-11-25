#include <iostream>
#include <algorithm>
using namespace std;

class Node {
public:
    int key; Node* left; Node* right;
    Node(int k): key(k), left(nullptr), right(nullptr) {}
};

class BST {
public:
    Node* root;
    BST(): root(nullptr) {}

    Node* insert(Node* r, int k) {
        if (!r) return new Node(k);
        if (k < r->key) r->left = insert(r->left, k);
        else if (k > r->key) r->right = insert(r->right, k);
        return r;
    }

    Node* findMin(Node* r) {
        while (r && r->left) r = r->left;
        return r;
    }

    Node* remove(Node* r, int k) {
        if (!r) return nullptr;
        if (k < r->key) r->left = remove(r->left, k);
        else if (k > r->key) r->right = remove(r->right, k);
        else {
            if (!r->left) {
                Node* t = r->right; delete r; return t;
            } else if (!r->right) {
                Node* t = r->left; delete r; return t;
            } else {
                Node* succ = findMin(r->right);
                r->key = succ->key;
                r->right = remove(r->right, succ->key);
            }
        }
        return r;
    }

    int maxDepth(Node* r) {
        if (!r) return 0;
        return 1 + max(maxDepth(r->left), maxDepth(r->right));
    }
    int minDepth(Node* r) {
        if (!r) return 0;
        if (!r->left) return 1 + minDepth(r->right);
        if (!r->right) return 1 + minDepth(r->left);
        return 1 + min(minDepth(r->left), minDepth(r->right));
    }

    void inorder(Node* r) {
        if (!r) return;
        inorder(r->left); cout << r->key << " "; inorder(r->right);
    }
};

int main() {
    BST t;
    int a[] = {50,30,70,20,40,60,80};
    for (int x : a) t.root = t.insert(t.root, x);

    cout << "Inorder before delete: "; t.inorder(t.root); cout << "\n";
    t.root = t.remove(t.root, 30);
    cout << "Inorder after delete 30: "; t.inorder(t.root); cout << "\n";

    cout << "Max depth: " << t.maxDepth(t.root) << "\n";
    cout << "Min depth: " << t.minDepth(t.root) << "\n";
    return 0;
}
