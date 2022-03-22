//
// Created by HuaXue on 2022/3/22.
//

#ifndef UNTITLED_LIST_H
#define UNTITLED_LIST_H
template<typename  T>
class List{
private:
    List<T>* head;
    int Max_Size;

public:
    List(){
        this->head= nullptr;
        Max_Size=0;
    }
    int size(){
        return Max_Size;
    }
    void List_Require(int len){
        this->head=new T[len];
        this->Max_Size=len;
    }
    bool empty(){
        if(this->head== nullptr)return false;
        return true;
    }
    T operator[](int index)const{
//        if(index>=MaxSize)throw OutOfRange(MaxSize,index);//越界抛出异常
        return *(head+index);
    }

};
#endif //UNTITLED_LIST_H
