#include <iostream>
using namespace std;

class Base{
public:
  int prueba [10] = {4,5,2,7,8,1,3,9,0,6};
  int length = 10;
  virtual void sort() = 0;
};

class BubbleSort : public Base {
public:

  BubbleSort(){
    sort();
  }

  void sort(){
    int tmp = 0;
    for(int i = 0;i<length;i++){
      for(int j = (length-1);j>=(i+1);j--){
        if(prueba[j]<prueba[j-1]){
          tmp = prueba[j];
          prueba[j]=prueba[j-1];
          prueba[j-1]=tmp;
        }
      }
    }
  }
};


/*class Child3: public Base{
  int value;
public:
  Child3(int value) : value(value){}

  int big2small(int data[]){
    cout<<"child3 big2small"<<value<<endl;
    return 1;
  }

};*/
