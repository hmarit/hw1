#include <iostream>
#include <string>
#include <fstream>
#include <cctype>
#include <algorithm>
#include <vector>
#include "func.h"
using namespace std;

string merge(string word, int l, int m, int r)
{

}

/*string deSpace(string word)
{
  for (int i = 0; i < word.size(); i++)
  {
    if (word[i] == ' ')
      word.erase()
  }
  return false;
}*/

string toUpper(string input)
{
  char c;
  string output;
  for (int i = 0; i < input.size(); i++)
  {
    c = toupper(input[i]);
    output.push_back(c);
  }
  return output;
}

string naiveReorder(string input)
{
  char temp;
  for (int i = 0; i < input.size(); i++)
  {
    for (int j = 0; j < input.size(); j++)
    {
      if (input[j] > input[i])
      {
        temp = input[j];
        input[j] = input[i];
        input[i] = temp;
      }
    }
  }
  return input;
}

string reorderAlphabetically(string input)
{

}

bool compareFunction(string a, string b)
{
  return a < b;
}

vector<string> sortDictionary(vector<string> dictionary)
{
  sort(dictionary.begin(), dictionary.end(), compareFunction);
  return dictionary;
}
