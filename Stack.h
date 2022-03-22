//
// Created by HuaXue on 2022/3/22.
//

#ifndef UNTITLED_STACK_H
#define UNTITLED_STACK_H
template<typename T>
class Stack{
private:
    Stack<T> *it;
    T* data;
    int Ssize;
public:
    Stack(){
           this->it= nullptr;
           this->data= nullptr;
           this->Ssize=0;
        }
        int size(){
        return this->data-this->it;
    }
};
#endif //UNTITLED_STACK_H
