//
// Created by Bergen Allison on 19/12/20.
//

#ifndef DATASTRUCTURES_TREE_H
#define DATASTRUCTURES_TREE_H

class Tree {
private:
    Node *root;
private:
    Tree();
    explicit Tree(Node *root);

    Node getRoot();
};


#endif //DATASTRUCTURES_TREE_H
