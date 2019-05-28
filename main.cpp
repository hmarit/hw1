#include <iostream>
#include <string>
#include <set>
#include <fstream>
#include "func.h"
using namespace std;

int main()
{
  string word;
  set<string> dictionary;

  fstream file ("reorderedDictionary.txt"); // reorderedDictionary.txt
  if (!file.is_open())
    cout << "File cannot be opened!" << endl;
  else
  {
    while (!file.eof())
    {
      file >> word;
      dictionary.insert(word);
    }
  }

  // Check
  for (set<string>::iterator it = dictionary.begin(); it != dictionary.end(); it++)
  {
    cout << *it << ' ';
  }


  /*
  cin >> input;
  upperInput = toUpper(input);
  sortedInput = sortAlphabetically(upperInput);
  */
}
