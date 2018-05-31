//
//  TestStacksAndQueues.hpp
//  DataStructures
//
//  Created by Childers, Mason on 5/31/18.
//  Copyright © 2018 Childers, Mason. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp
#include <iostream>
#include "../Controller/Tools/Timer.hpp"
#include "../Controller/FileController.hpp"
#include "../Model/Structures/Linear/Stack.hpp"
#include "../Model/Structures/Linear/Queue.hpp"
#include "../Model/Structures/Linear/List.hpp"

using namespace std;

class TestStacksAndQueues
{
public:
    void stackVersusList();
    void stackVersusQueue();
    void queueVersusList();
    
    
};

#endif /* TestingStacksAndQueues_hpp */
