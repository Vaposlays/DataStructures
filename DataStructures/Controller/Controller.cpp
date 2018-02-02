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
    cout << "Lock code on the screen" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    codeTimer.resetTimer();
    codeTimer.startTimer();
    
    vector<CrimeData> myData = FileController :: readCrimeDataToVector(/Users/mchi3485/Documents/DataStructures/DataStructures/DataStructures/Data/crime.csv);
    
    codeTimer.resetTimer();
    codeTimer.startTimer();
    for (int index = 234; index < 1444; index += 30)
    {
        cout << index << " is " << myData[index] << endl;
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}

void Controller :: findMaxAndMin()
{
    vector<CrimeData> myData = FileController :: readCrimeDataToVector(/Users/mchi3485/Documents/DataStructures/DataStructures/DataStructures/Data/crime.csv);
    int maxIndex = 0;
    int minIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
        if (myData [minIndex] < myData [index])
        {
            minIndex = index;
        }
        
        if (myData [maxIndex] > myData[index])
        {
            maxIndex = index;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation);
}
