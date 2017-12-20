//
// Created by plato on 17-12-20.
//

#ifndef ALGORITHM_SORT_H
#define ALGORITHM_SORT_H

#include <iostream>
#include <vector>

using namespace std;

class Sort {
public:
    void insertSort(vector<int> &a);
    void mergeSort(vector<int> &a, int low, int hi);
    void merge(vector<int> &a, int low, int mid, int hi);

};


#endif //ALGORITHM_SORT_H
