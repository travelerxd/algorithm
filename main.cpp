#include <iostream>
#include <vector>
#include "Sort.h"

using namespace std;


int main() {
    Sort mySolution;
    vector<int> a;
    a.push_back(4);
    a.push_back(6);
    a.push_back(2);
    a.push_back(5);
    a.push_back(9);
    a.push_back(1);
    a.push_back(7);
    cout << "befor insertSort:";
    for(int x:a)
        cout << x << " ";
    cout << endl;
    mySolution.shellSort(a);
    cout << "after insertSort: ";
    for(int x:a)
        cout << x << " ";
    cout << endl;
    return 0;
}