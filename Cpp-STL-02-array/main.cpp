#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>

using namespace std;

int main()
{
  cout << "to demonstrate stl container array" << endl;

  array<int, 5> a = {1, 5, 2, 4, 3};
  cout << "\nSize of array is " << a.size() << endl;
  auto pos = a.begin();
  cout << endl;
  while (pos != a.end())
    cout << *pos++ << "\t";
  cout << endl;

  array<int, 6> b;
  for (int j = 0; j<b.size(); j++)
    b[j] = j + 100;

  cout << "\nPrint values in original order ..." << endl;

  for (int j : b)
    cout << j << "\t";
  cout << endl;

  cout << "\nPrint values in reverse order ..." << endl;

  auto rpos = a.rbegin();
  while (rpos != a.rend())
    cout << *rpos++ << "\t";
  cout << endl;

  //initialization
  array<int, 5> ar1{{50, 4, 1, 1, 2}};
  array<int, 5> ar2 = {1, 20, 30, 4, 5};
  array<string, 2> ar3 = {{string("a"), "b"}};

  //capacities
  cout << "Sizes of arrays are" << endl;
  cout << ar1.size() << endl;
  cout << ar2.size() << endl;
  cout << ar3.size() << endl;

  // range-based loop
  cout << "\nInitial ar1 : ";
  for (auto i : ar1)
    cout << i << ' ';

  // container iterator
  sort(ar1.begin(), ar1.end());

  cout << "\nsorted ar1 : ";
  for (auto i : ar1)
    cout << i << ' ';

  // Filling ar2 with 10
  ar2.fill(160);

  cout << "\nFilled ar2 : ";
  for (auto i : ar2)
    cout << i << ' ';

  // ranged for loop is supported
  cout << "\nar3 : ";
  for (auto &s : ar3)
    cout << s << ' ';

  return EXIT_SUCCESS;
};
