#include "AVLTree.h"
#include <iostream>

int AVLTree::minimum() {
    int depth;
    return minimum(root, depth);
}

int AVLTree::minimum(NodePointer x, int &depth) {
    depth = 0;

    while (x->left != nullptr) {
        x = x->left;
        depth++;
    }

    std::cout << x->key << " " << depth << std::endl;
    return x->key;
}
