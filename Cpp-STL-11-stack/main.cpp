#include <iostream>
#include <stack>
using namespace std;

int main()
{
  cout << "11 demonstrate stack in c++ STL" << endl;

  stack<int> myStack;
  int sum(0);

  for (int i = 1; i <= 10; i++)
    myStack.push(i);

  while (!myStack.empty())
  {
    cout << myStack.top() << " ";
    sum += myStack.top();
    myStack.pop();
  }
  cout << endl;

  return EXIT_SUCCESS;
};
