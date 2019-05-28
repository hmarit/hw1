#ifndef FUNC_H
#define FUNC_H
#include <string>
#include <vector>
using namespace std;

// Mergesort algorithns.
string merge(string, int, int, int);

// Checks if there is a space in string.
//string deSpace(string word)


// Converts all characters in input to uppercase letters.
string toUpper(string input);

// Naive algorithm for reordering alphabetically.
string naiveReorder(string input);

// Reorders input string in alphabetical order, to be used in conjuction
// with toUpper function. Uses mergesort to reorder.
string reorderAlphabetically(string);

// Reorders a vector in alphabetical order.
vector<string> sortDictionary(vector<string> dictionary);


#endif
