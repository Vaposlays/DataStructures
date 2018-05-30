//
//  Hashnode.hpp
//  DataStructures
//
//  Created by Childers, Mason on 5/30/18.
//  Copyright © 2018 Childers, Mason. All rights reserved.
//

#ifndef HashNode_hpp
#define HashNode_hpp

#include "Node.hpp"
template <class Type>
class HashNode : public Node<Type>
{
private:
    long key;
public:
    HashNode();
    HashNode(Type data);
    HashNode<Type> * get(long index);
    bool contains(HashNode<Type> * value);
    long getKey() const;
};

template <class Type>
HashNode<Type> :: HashNode()
{
    this->key = 0;
}

template <class Type>
HashNode<Type> :: HashNode(Type data) : Node<Type>(data)
{
    this->key = (long) &data;
}

template <class Type>
long HashNode<Type> :: getKey() const
{
    return this->key;
}



#endif /* HashNode_h */
