#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
  cout << "15 demonstrate iterator in c++ STL" << endl;

  vector v1 = {1, 2, 3, 4, 5, 6};
  vector<int>::iterator it;
  vector<int>::iterator iBegin = v1.begin();
  vector<int>::iterator iEnd = v1.end();

  for (it = iBegin; it < iEnd; it++)
  {
    cout << *it << endl;
  }
  cout << endl;

  set<int> s1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  set<int>::iterator it1; // iterator object

  // iterate forward
  for (it1 = s1.begin(); it1 != s1.end(); ++it1)
  {
    cout << *it1 << " ";
  }
  cout << endl;

  // iterate backward
  for (it1 = s1.end(); it1 != s1.begin();)
  {
    cout << *--it1 << " ";
  }
  cout << endl;

  // range-based for loop
  for (int i : s1)
  {
    cout << i << " ";
  }
  cout << endl;

  return EXIT_SUCCESS;
};
