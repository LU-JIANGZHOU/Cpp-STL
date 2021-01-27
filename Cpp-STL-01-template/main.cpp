#include <iostream>
using namespace std;
// template function
template <class T>
T myMax(T x, T y)
{
  return (x > y) ? x : y;
};

template <typename T>
class myVector
{
private:
  T arr[100];
  int iSize;

public:
  myVector() : iSize(0){

               };
  ~myVector(){};
  void push(T x)
  {
    arr[iSize] = x;
    iSize++;
  }
  T get(int i) const {
    return arr[i];
  }
  void print(){
    for (auto i : arr) 
        std::cout << i << ' '; 
  }
};

int main()
{
  cout << "Demonstrate how template functions works" << endl;
  cout << myMax<int>(2, 5) << endl;                      //for int
  cout << myMax<double>(1.0, 9.0) << endl;               //for double
  cout << myMax<string>("habchll", "defgkkhkg") << endl; //for string, only compare the first character

  cout << "Demonstrate how template class works" << endl;
  myVector<int> mVector;
  mVector.print();
  mVector.push(12);
  mVector.print();

  return EXIT_SUCCESS;
};
