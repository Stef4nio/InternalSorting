//
// Created by stef4 on 3/5/2020.
//

#include "Queue.h"

/*
template <typename T>
void Queue<T>::Push(T data)
{
    Node<T>* tempNode;
    tempNode->Data = data;
    if(length==0)
    {
        _list = tempNode;
        _lastElement = tempNode;
        return;
    }
    _lastElement->NextNode = tempNode;
    _lastElement = tempNode;
    length++;
}

template <typename T>
T Queue<T>::Pop()
{
    T data = _list->Data;
    if(length>1)
    {
        _list = _list->NextNode;
    }
    else if(length==1)
    {
        _list = nullptr;
        _lastElement = nullptr;
    }
    else
    {
        return nullptr;
    }
    length--;
    return data;
}

template <typename T>
T Queue<T>::Peek()
{
    if(length>0)
    {
    return _list->Data;
    }
    else
    {
        return nullptr;
    }
}

template <typename T>
int Queue<T>::GetLenght()
{
    return length;
}*/
