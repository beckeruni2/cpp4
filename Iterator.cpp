#ifndef ITER_H
#define ITER_H

#include "Tree.hpp"
#include "Node.hpp"
#include "Iterator.hpp"
#include <vector>
#include <deque>



// Need to implement operators ++, !=

using namespace std;
template<typename T>
class PreTreeIterator
{
   public:
        PreTreeIterator<T>(T* ptr){
            _ptr = ptr;
        }


        PreTreeIterator<T>& operator++(){
            _ptr++;
            return *this;
        }

        PreTreeIterator<T> operator++(int){
            PreTreeIterator<T> temp(*this);
            ++(*this);
            return temp;
        }


        bool operator!=(const PreTreeIterator<T>& other){
            return _ptr != other._ptr;
        }


        PreTreeIterator<T> begin(){
            return PreTreeIterator<T>(&_vec.front());
        }

        PreTreeIterator<T> end(){
            return PreTreeIterator<T>(nullptr);
        }

        void createVector(Node<T>* Tree<T, k>::root){
            if (*Tree<T, k>::root == 0){
                return;
            }   
            _vec.insert(0, Tree<T, k>::root);
            Node<T>* next = Tree<T, k>::root.kids[0];
            Tree<T, k>::root.kids.erase(0);
            createVector(next);
        }

    private:
        T* _ptr;
        vector<Node<T>*> _vec;
};

template<typename T>
class PostTreeIterator{
    public:
        PostTree<T, k>Iterator(Node<T>* ptr){
            _ptr = ptr;
        }


        PostTree<T, k>Iterator& operator++(){
            _ptr++;
            return *this;
        }

        PostTree<T, k>Iterator operator++(int){
            PostTree<T, k>Iterator temp = *this;
            ++(*this);
            return temp;
        }


        bool operator!=(const PostTree<T, k>Iterator& other){
            return _ptr != other._ptr;
        }


        PreTree<T, k>Iterator begin(){
            return PreTree<T, k>Iterator(&_vec.front());
        }

        PreTree<T, k>Iterator end(){
            return PreTree<T, k>Iterator(nullptr);
        }

        void createVector(const Node* Tree<T, k>.root){
            if(NUMBEROFKIDS!= 2)  return PreTree<T, k>Iterator::createVector(Tree<T, k>.root);
            if (Tree<T, k>.root == nullptr){
                return;
            }   
            createVector(Tree<T, k>.root.kids[0]);
            createVector(Tree<T, k>.root.kids[1]);
            _vec.insert(0, *Tree<T, k>.root);
        }



    private:
        T* _ptr;
        vector <Node<T>*> _vec;
};


template<typename T>
class InTreeIterator{
    public:
        InTreeIterator<T>Iterator(Node<T>* ptr){
            _ptr = ptr;
        }


        InTreeIterator<T> Iterator& operator++(){
            _ptr++;
            return *this;
        }

        InTreeIterator<T> Iterator operator++(int){
            InTreeIterator<T> temp = *this;
            ++(*this);
            return temp;
        }


        bool operator!=(const BfsTree<T, k>Iterator& other){
            return _ptr != other._ptr;
        }


        InTreeIterator<T> Iterator begin(){
            return PreTree<T, k>Iterator(&_vec.front());
        }

        InTreeIterator<T> Iterator end(){
            return PreTree<T, k>Iterator(&_vec.front() + _vec.size() * (sizeof(Node<T>*) + 1));
        }

        void createVector(const Node<T>* Tree<T, k>.root){
            if(NUMBEROFKIDS!= 2)  return PreTree<T, k>Iterator::createVector(Tree<T, k>.root);
            if (Tree<T, k>::root == nullptr){
                return;
            }   
            createVector(Tree<T, k>.root.kids[0]);
            _vec.insert(0, *Tree<T, k>.root);
            createVector(Tree<T, k>.root.kids[1]);
        }

        vector<Node<T>*> getVec(const Node<T>* Tree<T, k><T, k>.root){
            createVector(const Node<T>* Tree<T, k>::root);
            return _vec;
        }
        

    private:
        T* _ptr; 
        vector<Node<T>*> _vec;
};




template<typename T>
class BfsTreeIterator{
    public:
        BfsTree<T>Iterator(Node<T>* ptr){
            _ptr = ptr;
        }


        BfsTreeIterator<T>& operator++(){
            _ptr++;
            return *this;
        }

        BfsTree<T, k>Iterator operator++(int){
            PostTreeIterator<T> temp = *this;
            ++(*this);
            return temp;
        }


        bool operator!=(const BfsTreeIterator<T>& other){
            return _ptr != other._ptr;
        }


        PreTreeIterator<T> begin(){
            return PreTreeIterator<T>(&_vec.front());
        }

        PreTreeIterator<T> end(){
            return PreTreeIterator<T>(&_vec.front + sizeof(_vec) * (sizeof(Node<T>*) + 1));
        }

        void createVector(const Node* Tree<T, k>.root){
            while(!(_deq.empty)){
                add_kids(*Tree<T, k>::root);
                _deq.pop_front;
            }
        }

        void add_kids(Node<T>* parent){
            for(Node<T>* kid: parent->kids)
                    _vec.push_back(kid);
                    _deq.push_back(kid);
        }

    private:
        T* _ptr; 
        vector<Node<T>*> _vec;
        deque<Node<T>*> _deq = {Tree<T, k>::root};

};


template<typename T>
class ToHeap{
        public:
        Tree<T, k>ToHeap<T>(T* ptr){
            _ptr = ptr;
        }


        BfsTree<T, k>Iterator& operator++(){
            _ptr++;
            return *this;
        }

        BfsTree<T, k>Iterator operator++(int){
            PostTree<T, k>Iterator temp = *this;
            ++(*this);
            return temp;
        }


        bool operator!=(const BfsTree<T, k>Iterator& other){
            return _ptr != other._ptr;
        }


        PreTree<T, k>Iterator begin(){
            return PreTree<T, k>Iterator(&_vec.front());
        }

        PreTreeIterator<T> end(){
            return PreTree<T, k>Iterator(&_vec.front + sizeof(_vec) * (sizeof(Node<T>*) + 1));
        }

        void createVector(const Node<T>* Tree<T, k>::root){
            while(!(_deq.empty)){
                add_kids(*Tree<T, k>::root);
                _deq.pop_front;
            }
        }

        void add_kids(Node<T>* parent){
            for(Node<T>* kid: parent->kids)
                    _vec.push_back(kid);
                    _deq.push_back(kid);
        }

        void binaryToSearchTree<T, k>(){
            InTreeIterator<T> Iterator<T>:
        }

    private:
        T* _ptr; 
        vector<Node<T>*> _vec;
        deque<Node<T>*> _deq = {Tree<T, k>::root};
};



#endif