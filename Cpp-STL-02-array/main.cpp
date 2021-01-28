#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>

using namespace std;

int main()
{
  cout << "to demonstrate stl container array" << endl;
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
