//
// Created by stef4 on 3/5/2020.
//

#ifndef INTERNALSORTING_QUEUE_H
#define INTERNALSORTING_QUEUE_H

template <typename T>
struct Node
{
    T Data;
    Node<T>* NextNode;
};

template<typename T>
class Queue
{
private:
    Node<T>* _list;
    Node<T>* _lastElement;
    int length;
public:
    Queue()
    {
        length = 0;
    }

    void Push(T data)
    {
        Node<T>* tempNode = new Node<T>;
        tempNode->Data = data;
        if(length==0)
        {
            _list = tempNode;
            _lastElement = tempNode;

        }
        else
        {
            _lastElement->NextNode = tempNode;
            _lastElement = tempNode;
        }
        length++;
    }

    T Pop()
    {
        T data = _list->Data;
        if(length>1)
        {
            _list = _list->NextNode;
        }
        else if(length==1)
        {
            delete _list;
            _lastElement = nullptr;
        }
        else
        {
            return nullptr;
        }
        length--;
        return data;
    }

    T Peek()
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

    int GetLenght()
    {
        return length;
    }
};


#endif //INTERNALSORTING_QUEUE_H
