#pragma once
#include "Cifrado.h"


class Cesar : public Cifrado{
public:
  Cesar(){}

  void read (){
    std::ifstream file;
    std::string word;
    std::string decriptedWord;
    bool decripted = false;
    file.open("encriptado.txt");
    word.clear();
    char x;
    while(file >> word){
      x = file.get();
      while(x != ' '){
        word = word + x;
        x = file.get();
      }
      for(int i = 1; i < 27; i++); {
        word = decrypt(word,i);
        if(search(word)){
          break;
        }
      }
      word.clear();
    }
    file.close();
  }
  string decrypt(std::string encrypted, int offset){
    for(int i = 0; i < encrypted.size(); i++){
      encrypted[i]+=offset;
    }
    return encrypted;
  }

  void search(std::string word){
    std::ifstream file;
    std::string line;
    file.open("diccionario.txt");
    while(file.is_open()){
      getline(file, line);
      if(word.compare(line) == 0)
        return true;
      if(file.eof()){
        file.close();
        return false;
      }
    }

  }
};
