#include <iostream>
#include <deque>
using namespace std;

int main()
{
  cout << "06 demonstrate deque in c++ STL" << endl;

  deque<int> d = {7, 5, 16, 8};
  d.push_back(5);
  d.push_back(6);
  for (int i = 0; i < d.size(); i++)
    cout << d[i] << " "; //7,5,16,8.5.6
  cout << endl;

  d.push_front(4);
  d.push_front(3);
  for (int i = 0; i < d.size(); i++)
    cout << d[i] << " "; //3,4,7,5,16,8.5.6
  cout << endl;
  d.pop_back();
  for (int i = 0; i < d.size(); i++)
    cout << d[i] << " ";
  cout << endl;
  d.pop_front();
  for (int i = 0; i < d.size(); i++)
    cout << d[i] << " ";
  cout << endl;

  return EXIT_SUCCESS;
};
