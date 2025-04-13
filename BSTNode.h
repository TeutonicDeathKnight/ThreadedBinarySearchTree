// From the software distribution accompanying the textbook
// "A Practical Introduction to Data Structures and Algorithm Analysis,
// Third Edition (C++)" by Clifford A. Shaffer.
// Source code Copyright (C) 2007-2011 by Clifford A. Shaffer.

// This is the file to include for access to the complete binary node
// template implementation

#include "book.h"
#include "BinNode.h"

#ifndef BSTNODE_H
#define BSTNODE_H

// Simple binary tree node implementation
template <typename Key, typename E>
class BSTNode : public BinNode<E> {
private:
    Key k;                    // The node's key
    E it;                     // The node's value
    BSTNode* lc;              // Pointer to left child
    BSTNode* rc;              // Pointer to right child
    unsigned int lthread : 1; // Bitfield flag to store if left child is a thread
    unsigned int rthread : 1; // Bitfield flag to store if right child is a thread

public:
    // Two constructors -- with and without initial values
    BSTNode() { lc = rc = NULL; lthread = rthread = 0; }
    BSTNode(Key K, E e, BSTNode* l =NULL, BSTNode* r =NULL) {
        k = K;
        it = e;
        lc = l;
        rc = r;
        if (l == NULL) lthread = 1;
        else lthread = 0;
        if (r == NULL) rthread = 1;
        else rthread = 0;
    }
    ~BSTNode() {}             // Destructor

    // Functions to set and return the value and key
    E& element() { return it; }
    void setElement(const E& e) { it = e; }
    Key& key() { return k; }
    void setKey(const Key& K) { k = K; }
    
    // Functions to set and return the children
    inline BSTNode* left() const { return lc; }
    void setLeft(BinNode<E>* b) { lc = (BSTNode*)b; }
    inline BSTNode* right() const { return rc; }
    void setRight(BinNode<E>* b) { rc = (BSTNode*)b; }

    // Functions to set and return the thread flags
    inline unsigned int leftThread() const { return lthread; }
    void setLeftThread(unsigned int lt) { lthread = lt; }
    inline unsigned int rightThread() const { return rthread; }
    void setRightThread(unsigned int rt) { rthread = rt; }

    // Return true if it is a leaf, false otherwise
    bool isLeaf() { return (lthread == 1) && (rthread == 1); }
};

#endif