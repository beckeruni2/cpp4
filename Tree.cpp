#include "Tree.hpp"
#include "Node.hpp"
#include "Iterator.hpp"
using namespace std;

template <typename T, int k>
void Tree<T, k>::add_root(Node<T> &node){
    this.root = node;
    allNodes.push_back(&node);
}

template <typename T, int k>
void Tree<T, k>::add_sub_node(Node<T> &parent, Node<T> &child){
    if(!(allNodes.find(parent))){ 
        perror("ERROR, CAN'T FIND APPROPRIATE PARENT NODE");
        return;
    }
    for(<Node>* kid : parent.kids)
            if(kid != 0){ // then there is space in sub tree!
                allNodes.insert(&kid);// added to fully tree
                parent.kid = child;
                cout<< "Kid Added Successfully\n";
                return;
            }
    
    perror("ERROR, NO PLACE IN SUB TREE. TRY SOMEWHERE ELSE");
}
