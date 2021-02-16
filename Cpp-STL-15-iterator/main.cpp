#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
  cout << "15 demonstrate iterator in c++ STL" << endl;

  vector v1 = {1, 2, 3, 4, 5, 6};
  vector<int>::iterator it;

  // iterate forward
  for (it = v1.begin(); it != v1.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;

  // iterate backward
  for (it = v1.end(); it != v1.begin();)
  {
    cout << *--it << " ";
  }
  cout << endl;

  // range-based for loop
  for (int i : v1)
  {
    cout << i << " ";
  }
  cout << endl;

  it = v1.begin() + 5;
  cout << "element begin + 5" << *it << endl;
  cout << "element [5]" << v1[5] << endl;

  it = v1.end() - 3;
  cout << "element end - 3" << *it << endl;

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
