//
// Created by Bergen Allison on 19/12/20.
//

#include "Tree.h"

Tree::Tree() {
    root = nullptr;
}

Tree::Tree(Node *root) {
    this->root = root;
}

Node Tree::getRoot() {
    return *root;
}