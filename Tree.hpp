#ifndef TREE_H
#define TREE_H

#include<set>
#include <iostream>
#include "Node.hpp"
#include "Iterator.hpp"
using namespace std;
template<class T, int k>
class Tree{
    Tree(){
        NumOfKids = k;
    }
    public:
        Node<T>* root = nullptr;
        set<Node<T>*> allNodes;
        static void add_root(Node<T> &node);
        static void add_sub_node(Node<T>& parent, Node<T>& kid);
        const static int NumOfKids;
};





#endif