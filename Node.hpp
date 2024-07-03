#ifndef NODE_H
#define NODE_H

#include "Tree.hpp"

#include <vector>
using namespace std;
template<class T>
struct Node{
        T _data;
        vector<Node<T>*> kids;/////////////////////
        Node(T data){
                _data = data;
            };
};


#endif