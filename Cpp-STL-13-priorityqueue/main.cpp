#include <iostream>
#include <queue> // std::priority_queue

using namespace std;

int main()
{
  cout << "13 demonstrate  priority queue   in c++ STL" << endl;

  priority_queue<int> myPq;

  myPq.push(1);
  myPq.push(2);
  myPq.push(3);

  cout << "myPq.top() is: " << myPq.top() << '\n';

  return EXIT_SUCCESS;
};
