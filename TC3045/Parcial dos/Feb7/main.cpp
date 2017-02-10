#include <stdio.h>
#include <cstring>



int main(int argc, char** argv){
  char array [9];
  char array2[9];
  int value = 10;


  strcpy(array, "arrayOne");
  strcpy(array2, "arrayTwo");


  strcpy(array, argv[1]);

  printf("Array is at %p with value %s\n", array, array);
  printf("Array is at %p with value %s\n", array2, array2);
  printf("Value is at %x with vaue %d\n", &value, value);

  return 0;
}
