#include <iostream>
#include <vector>

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

  return EXIT_SUCCESS;
};
