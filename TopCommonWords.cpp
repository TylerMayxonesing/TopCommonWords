//
// Created by Tyler Mayxonesing on 6/25/2019.
//

#include "TopCommonWords.h"

std::vector<std::string> readFile(std::string fileName) {
  std::vector <std::string> wordHolder;
  std::ifstream file;
  std::string words;
  file.open(fileName);
  while (file>>words){
    wordHolder.push_back(words);
  }
  return wordHolder;
}

std::string clean(std::string word) {
    if (ispunct(word.front())){
      (word.erase(word.front()));
    }
  return word ;
}
