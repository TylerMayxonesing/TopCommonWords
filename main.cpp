#include "TopCommonWords.h"

int main() {

  auto words = readFile("C:/Users/Tyler Mayxonesing/Desktop/test_files/shake_it_off.txt");
  int i = 0;
  while (i < words.size()){
    std::cout << words.at(i) << std::endl;
    i++;
  }
  return 0;
}