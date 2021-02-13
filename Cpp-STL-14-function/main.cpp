#include <iostream>
#include <functional>
using namespace std;

void printNone()
{
  cout << "Hello Function" << '\n';
}

void printNum(int i)
{
  cout << i << '\n';
}

int addTwo(int x)
{
  cout << x + 2 << '\n';
  return x + 2;
}

int myMinus(int x, int y)
{
  cout <<"the differnce of the two number is: " << x - y << '\n';
  return x - y;
}
struct PrintNum
{
  void operator()(int i) const
  {
    std::cout << i << '\n';
  }
};
int main()
{
  cout << "14 demonstrate function in c++ STL" << endl;
  //1) free function with none parameter and no return
  function fPrint = printNone;
  fPrint();

  //2) free function with one parameter and no return
  function<void(int)> fPrintNum = printNum;
  fPrintNum(5);

  //3) free function with parameter and return
  function<int(int)> fAddTwo = addTwo;
  fAddTwo(6);

  //4) create a new function using bind
  function<int(int)> fMinusTwo = bind(myMinus, std::placeholders::_1, 2);
  fMinusTwo(5); //3

  //5)create a new function using lambda
  //6) store a call to a member function

  return EXIT_SUCCESS;
};
