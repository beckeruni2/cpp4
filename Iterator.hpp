#ifndef ITER_H
#define ITER_H

#include "Tree.hpp"
#include "Node.hpp"
#include <vector>
#include <deque>


// Need to implement operators ++, !=

using namespace std;
template<typename T>
class PreTreeIterator
{
   public:
        PreTreeIterator(T* ptr){
            _ptr = ptr;
        }


        PreTreeIterator& operator++(){};

        PreTreeIterator operator++(int);


        bool operator!=(const PreTreeIterator&);

        PreTreeIterator begin();

        PreTreeIterator end();

        void createVector(const Node*);

    private:
        T* _ptr;
        vector<Node<T>*> _vec;
};




template<typename T>
class PostTreeIterator{
    public:
        PostTreeIterator(Node<T>* ptr){
            _ptr = ptr;
        }


        PostTreeIterator& operator++();

        PostTreeIterator operator++(int);


        bool operator!=(const PostTreeIterator&);

        PreTreeIterator begin();

        PreTreeIterator end();

        void createVector(const Node*);



    private:
        T* _ptr;
        vector <Node<T>*> _vec;
};


template<typename T>
class InTreeIterator{
    public:
        InTreeIterator(Node<T>* ptr){
            _ptr = ptr;
        }


        InTreeIterator& operator++();

        InTreeIterator operator++(int);


        bool operator!=(const BfsTreeIterator& );


        InTreeIterator begin();

        InTreeIterator end();

        void createVector(const Node<T>*);

        vector<Node<T>*> getVec(const Node<T>*) ;

    private:
        T* _ptr; 
        vector<Node<T>*> _vec;
};




template<typename T>
class BfsTreeIterator{
    public:
        BfsTreeIterator(Node<T>* ptr){
            _ptr = ptr;
        }


        BfsTreeIterator& operator++();

        BfsTreeIterator operator++(int);


        bool operator!=(const BfsTreeIterator& other);


        PreTreeIterator begin();

        PreTreeIterator end();

        void createVector(const Node<T>* );

        void add_kids(Node<T>* parent);

    private:
        T* _ptr; 
        vector<Node<T>*> _vec;
        deque<Node<T>*> _deq = {Tree.root};

};


template<typename T>
class TreeToHeap{
    public:
        TreeToHeap<T>(T* ptr){
            _ptr = ptr;
        }


        BfsTreeIterator& operator++();

        BfsTreeIterator operator++(int);


        bool operator!=(const BfsTreeIterator& );


        PreTreeIterator begin();

        PreTreeIterator end();

        void createVector(const Node*);

        void add_kids(Node<T>* );

        void binaryToSearchTree();

    private:
        T* _ptr; 
        vector<Node<T>*> _vec;
        deque<Node<T>*> _deq = {Tree.root};
};



#endif