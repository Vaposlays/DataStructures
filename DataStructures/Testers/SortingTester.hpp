//
//  SortingTester.hpp
//  DataStructures
//
//  Created by Childers, Mason on 3/15/18.
//  Copyright © 2018 Childers, Mason. All rights reserved.
//

#ifndef SortingTester_hpp
#define SortingTester_hpp

#include <stdio.h>
#include "../Controller/FileController.hpp"
#include "../Controller/Tools/Timer.hpp"

class SortingTester
{
private:
    void quickSort(vector<CrimeData> data, int low, int high);
    int partition(vector<CrimeData> data, int low, int hight);
    void swap(vector<CrimeData> info, int small, int large);
public:
    void testSorts();
};

#endif /* SortingTester_hpp */
