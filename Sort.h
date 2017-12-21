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
    void bubbleSort(vector<int> &a);   // 冒泡法排序，从最后的两个数开始两两相比往第一个位置的数靠拢
    void bubbleSort2(vector<int> &a);  // 冒泡法的改进，防止了无休止的有序数的比较
    void selectSort(vector<int> &a); // 找到最小的那个数，然后和第一个位置交换，以此第二个第三个等等
    void insertSort(vector<int> &a); // 手中有一排好序的牌，新摸一张插入到合适的位置
    void mergeSort(vector<int> &a, int low, int hi); // 分治法的思想，将数组分为两个子序列，然后合并两个子序列。递归地进行这个方法。
    void merge(vector<int> &a, int low, int mid, int hi);

};


#endif //ALGORITHM_SORT_H
