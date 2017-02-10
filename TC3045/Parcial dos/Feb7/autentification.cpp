#include <stdio.h>
#include <cstring>


int fin(char* pass){
  int res = 0;
  char p[10 ];
  strcpy(p, pass);
  if(strcmp(p,"123456789") == 0){
    res = 1;
  }
  return res;
}


int main(int argc, char** argv){

  if(fin(argv[1]))
    printf("Access granted\n");
  else
    printf("Access denied\n");
  return 0;
}
