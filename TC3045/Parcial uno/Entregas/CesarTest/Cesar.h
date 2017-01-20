#pragma once
#include <iostream>
#include <fstream>
#include <string>

class Cesar {
public:
  Cesar(){}

  std::string read (){
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
      int i = 1;
      for(; i < 27; i++); {
        word = decrypt(word,i);
        if(search(word)){
          break;
        }
      }
      word.clear();
    }
    file.close();
  }
  std::string decrypt(std::string encrypted, int offset){
    for(int i = 0; i < encrypted.size(); i++){
      encrypted[i]+=offset;
    }
    return encrypted;
  }

  bool search(std::string word){
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
