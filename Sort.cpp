//
// Created by plato on 17-12-20.
//

#include "Sort.h"


void Sort::bubbleSort(vector<int> &a) {
    for(int i = 0; i < a.size(); i++){
        for(int j = a.size() - 2; j >= i; j--){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void Sort::bubbleSort2(vector<int> &a) {
    bool status = true;            // 引入一个状态量，来表明该序列是否有数据交换，如果有数据交换进行下一次排序，反之则已经完成排序
    for(int i = 0; i < a.size() && status; i++){
        status = false;
        for(int j = a.size() - 2; j >= i; j--){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                status = true;
            }

        }
    }
}

void Sort::selectSort(vector<int> &a) {
    for(int i = 0; i < a.size(); i++){
        int min = i;
        for(int j = i + 1; j < a.size(); j++) {
            if (a[min] > a[j]) {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}



void Sort::insertSort(vector<int> &a) {
    for(int i = 1; i < a.size(); i++){
        int key = a[i];
        int j = i - 1;
        while(j>=0 && key < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

void Sort::shellSort(vector<int> &a) {
    int n = a.size();
    int h = 1;
    while(h < n/3){
        h = 3*h + 1;
    }
    while(h>=1){
        for(int i = h; i < n; i++){
            for(int j = i; j >= h && a[j] < a[j-h]; j -= h){
                int temp = a[j];
                a[j] = a[j-h];
                a[j-h] = temp;
            }
        }
        h /= 3;
    }
}


void Sort::mergeSort(vector<int> &a, int low, int hi) { // in an vector, low == 0, hi == a.size()
    if(low < hi) {
        int mid = (low + hi) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, hi);
        merge(a, low, mid, hi);
    }
}

void Sort::merge(vector<int> &a, int low, int mid, int hi) {
    vector<int> copy(a);
    int i = low, j = mid + 1;
    for(int k = low; k <= hi; k++){
        if(i > mid){
            a[k] = copy[j++];
        }
        else if(j > hi){
            a[k] = copy[i++];
        }
        else{
            if(copy[i] <= copy[j]){
                a[k] = copy[i++];
            }
            else{
                a[k] = copy[j++];
            }
        }
    }

}