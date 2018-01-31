//
//  Controller.cpp
//  DataStructures
//
//  Created by Childers, Mason on 1/31/18.
//  Copyright © 2018 Childers, Mason. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Print to the screen some text" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
    codeTimer.resetTimer();
    codeTimer.startTimer();
    for (int index = 0; index < 1000000; index++)
    {
        cout << "The index is " << index << "\t";
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
