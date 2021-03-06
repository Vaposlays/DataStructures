//
//  BinaryTreeTester.hpp
//  DataStructures
//
//  Created by Childers, Mason on 3/29/18.
//  Copyright © 2018 Childers, Mason. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/Structures/NonLinear/BinarySearchTree.hpp"
#include <iostream>

class BinaryTreeTester
{
private:
    BinarySearchTree<int> testTree;
public:
    void doTreeStuff();
};

#endif /* BinaryTreeTester_hpp */
