/*
MIT License

Copyright (c) 2023 Inha-Open-Source-Team-BBBig

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Created by 손예원, 박준영, 장태양, 주시현 on 11/16/23.
 */

#ifndef STL_SET_IMPLEMENT_AVLTREE_H
#define STL_SET_IMPLEMENT_AVLTREE_H
#include <iostream>
using namespace std;
struct Node {
    int key, height, subtreeSize;
    Node *left, *right;
};

typedef Node *NodePointer;

class AVLTree {
private:
    NodePointer root;
    int sizeOfTree;

public:
    AVLTree() {
        root = nullptr;
        sizeOfTree = 0;
    };

    int minimum();

    int maximum();

    void empty();

    void size();

    NodePointer find(int key);

    NodePointer findWithoutPrint(int key);

    int insert();

    void rank(int key);

    pair<int, int> rankAndDepth(Node* root, int key, int currentDepth, int currentRank);

    int erase();

    const NodePointer getRoot() const;
};

#endif //STL_SET_IMPLEMENT_AVLTREE_H
