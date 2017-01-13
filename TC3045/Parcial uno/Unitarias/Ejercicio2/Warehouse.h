#pragma once
#include <iostream>
#include <vector>
#include "Warehouse.h"
using namespace std;
template <class T>
class Warehouse{
private:
  int capacity;
public:
  std::vector<T> data;
  Warehouse(int n){
    vector<T> data(n);
  }

  Warehouse(){
    vector<T> data(10);
    capacity = 10;
  }

  int getCapacity(){
    return capacity;
  }

  void add(T value){
    data.push_back(end);
  }

  void borrar(int position){
    data.erase(data.begin()+ position - 1);
  }
  bool empty(){
    return data.empty();
  }

  int size(){
    return data.size();
  }
};
