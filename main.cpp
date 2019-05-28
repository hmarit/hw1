#include <iostream>
#include <string>
#include <set>
#include <fstream>
#include "func.h"
using namespace std;

int main()
{
  string word, fileName;
  set<string> dictionary;

  fileName = "reorderedDictionary.txt";

  createHashTable(fileName);

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
