//
// Created by Bergen Allison on 19/12/20.
//

#ifndef DATASTRUCTURES_NODE_H
#define DATASTRUCTURES_NODE_H


class Node {
private:
    Node *parent;
    Node *leftChild;
    Node *rightChild;

    int key;
    int sizeSubtree;
public:
    Node(int key, int sizeSubtree, Node *parent, Node *leftChild, Node *rightChild);

    int getKey();
    int getSizeSubtree();

    Node getParent();
    Node getLeftChild();
    Node getRightChild();

    void setSizeSubtree(int sizeSubtree);
    void setParent(Node *parent);
    void setLeftChild(Node *leftChild);
    void setRightChild(Node *rightChild);
};


#endif //DATASTRUCTURES_NODE_H
