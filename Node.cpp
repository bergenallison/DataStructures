//
// Created by Bergen Allison on 19/12/20.
//

#include "Node.h"

Node::Node(int key, int sizeSubtree, Node *parent, Node *leftChild, Node *rightChild) {
    this->key = key;
    this->sizeSubtree = sizeSubtree;
    this->parent = parent;
    this->leftChild = leftChild;
    this->rightChild = rightChild;
}

int Node::getKey() {
    return key;
}

int Node::getSizeSubtree() {
    return sizeSubtree;
}

Node Node::getParent() {
    return *parent;
}

Node Node::getLeftChild() {
    return *leftChild;
}

Node Node::getRightChild() {
    return *rightChild;
}

void Node::setSizeSubtree(int sizeSubtree) {
    this->sizeSubtree = sizeSubtree;
}

void Node::setParent(Node *parent) {
    this->parent = parent;
}

void Node::setLeftChild(Node *leftChild) {
    this->leftChild = leftChild;
}

void Node::setRightChild(Node *rightChild) {
    this->rightChild = rightChild;
}