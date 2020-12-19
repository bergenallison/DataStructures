/*
 Bergen Allison

 An area to reinforce data structure knowledge through practical coding

 ToDo: Trees, AVL trees, Red-Black trees, etc.


 */

#include <iostream>
#include <memory>

using namespace std;

#include "Node.cpp"
#include "Tree.cpp"

int main() {

    Node test = Node(1, 1, nullptr, nullptr, nullptr);
    cout << test.getKey() << endl;
    return 0;
}
