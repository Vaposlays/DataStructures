//
//  Node.hpp
//  DataStructures
//
//  Created by Childers, Mason on 2/6/18.
//  Copyright © 2018 Childers, Mason. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp
#include Node.hpp

template <class type>
{
    //This section is available to ALL the subclasses of Node
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    this->data = data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

template <class Type>
class LinearNode : public Node<Type>
{
    //This section is available to the subclasses of LinearNode
protected:
    LinearNode<Type * next;
public:
    //Constructors
    LinearNode();
    LinearNode(Type data);
    LinearNode(Type data, LinearNode<Type> * next);
    //Methods
    void setNextNode(LinearNode<Type> * next);
    LinearNode<Type> * getNextNode();
};
    
template <class Type>
LinearNode<Type> :: LinearNode() : Node<Type>()
{
    this->next = nullptr;
}
    
template <class Type>
LinearNode<Type> :: LinearNode(Type data) : Node<Type>(data)
{
    this->next = nullptr;
}
    
template <class Type>
LinearNode<Type> :: LinearNode(Type data, LinearNode<Type> * next) : Node<Type>(data)
{
    this->next = next;
}

template <class Type>
void LinearNode<Type> :: setNextNode(LinearNode<Type> * nextNodePointer)
{
    this->next = nextNodePointer;
}
    
template <class Type>
LinearNode<Type> * LinearNode<Type> :: getNextNode()
{
    return next;
}
    
#endif /* Node_hpp */
