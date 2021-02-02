#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
  cout << "05 demonstrate forwardlist in c++ STL" << endl;
  forward_list<int> flist1 = {1, 2, 3};
  forward_list<int> flist2;
  forward_list<int> flist3;
  flist2 = flist1;
  cout << "The contents of 2nd forward list"
          " after copy are : ";
  for (int &x : flist2)
    cout << x << " ";
  cout << endl;

  flist3.assign(flist1.begin(), flist1.end());

  flist1.merge(flist2);
  cout << "The contents of forward list "
          "after merge are : ";
  for (int &x : flist1)
    cout << x << " ";
  cout << endl;

  return EXIT_SUCCESS;
};
