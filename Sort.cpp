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

void Sort::selectSort(vector<int> &a) {
    for(int i = 0; i < a.size(); i++){
        int key = a[i];

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