#ifndef SIMPLE_SINGLY_LL_H
#define SIMPLE_SINGLY_LL_H

//TEMPLATING
template <typename T>
class SinglyList{
    public:
        T data;
        SinglyList<T> *next = nullptr;

};

#endif