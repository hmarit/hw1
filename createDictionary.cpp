#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "func.h"
using namespace std;

int main()
{
  ifstream inputFile;
  // inputFile.open("/usr/share/dict/words");
  inputFile.open("dictionary.txt");
  if (!inputFile.is_open())
    cout << "File cannot be opened!" << '\n';
  else
  {
    ofstream outputFile;
    vector<string> reorderedDictionary, dictionary;
    outputFile.open("reorderedDictionary.txt");
    while(!inputFile.eof())
    {
      string word, upperWord, reorderedWord;

      getline(inputFile, word);
      upperWord = toUpper(word);
      reorderedWord = naiveReorder(upperWord);
      //reorderedWord = reorderAlphabetically(upperWord);
      dictionary.push_back(reorderedWord);
    }
    reorderedDictionary = sortDictionary(dictionary);
    for (int i = 0; i < reorderedDictionary.size(); i++)
    {
      outputFile << reorderedDictionary[i] << '\n';
    }
    outputFile.close();
  }
  inputFile.close();

  return 0;
}
