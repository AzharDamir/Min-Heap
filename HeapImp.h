#pragma once
#include <iostream>
#include <vector>


using namespace std;
class HeapImp
{
public:
    vector<int> l;
    int nbrelement = -1;
    HeapImp();
    void insert(int);
    void display();
    void HeapMin(int);
    int parent(int i);
    int left(int i);
    int right(int i);
    void swap(int* i, int* j);
};
