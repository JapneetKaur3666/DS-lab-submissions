// file: bst_basic_funcs.cpp
#include <iostream>
using namespace std;

class Node {
public:
    int key;
    Node* left;
    Node* right;
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

    Node* searchRec(Node* r, int k) {
        if (!r || r->key == k) return r;
        if (k < r->key) return searchRec(r->left, k);
        return searchRec(r->right, k);
    }

    Node* searchIter(int k) {
        Node* cur = root;
        while (cur) {
            if (cur->key == k) return cur;
            cur = (k < cur->key) ? cur->left : cur->right;
        }
        return nullptr;
    }

    Node* findMin(Node* r) {
        if (!r) return nullptr;
        while (r->left) r = r->left;
        return r;
    }
    Node* findMax(Node* r) {
        if (!r) return nullptr;
        while (r->right) r = r->right;
        return r;
    }

    Node* successor(Node* r, int k) {
        Node* cur = r;
        Node* succ = nullptr;
        while (cur) {
            if (k < cur->key) { succ = cur; cur = cur->left; }
            else cur = cur->right;
        }
        return succ;
    }
    
    Node* predecessor(Node* r, int k) {
        Node* cur = r;
        Node* pred = nullptr;
        while (cur) {
            if (k > cur->key) { pred = cur; cur = cur->right; }
            else cur = cur->left;
        }
        return pred;
    }
};

int main() {
    BST tree;
    int vals[] = {50,30,70,20,40,60,80};
    for (int x: vals) tree.root = tree.insert(tree.root, x);

    cout << "Min: " << tree.findMin(tree.root)->key << "\n";
    cout << "Max: " << tree.findMax(tree.root)->key << "\n";

    int k = 40;
    Node* s = tree.successor(tree.root, k);
    Node* p = tree.predecessor(tree.root, k);
    cout << "Successor of " << k << " : " << (s ? s->key : -1) << "\n";
    cout << "Predecessor of " << k << " : " << (p ? p->key : -1) << "\n";

    Node* sr = tree.searchRec(tree.root, 60);
    Node* si = tree.searchIter(60);
    cout << "SearchRec 60: " << (sr ? "found" : "not") << "\n";
    cout << "SearchIter 60: " << (si ? "found" : "not") << "\n";

    return 0;
}
