#include <iostream>
using namespace std;
//!function template
template <class T>
T myMax(T x, T y)
{
  return (x > y) ? x : y;
};

template <class T>
T mySquare(T x)
{
  return x * x;
};

//!class template
template <typename T>
class myVector
{
private:
  T arr[100];
  int iSize;

public:
  myVector() : iSize(0){};
  ~myVector(){};
  void push(T x)
  {
    arr[iSize] = x;
    iSize++;
  }
  T get(int i) const
  {
    return arr[i];
  }
  int getSize() const { return iSize; }
  void print()
  {
    for (auto i = 0; i < iSize; i++)
      std::cout << arr[i] << ' ';
    cout << endl;
  }
};

template <typename T>
myVector<T> operator*(const myVector<T> &rhs1, const myVector<T> &rhs2)
{
  myVector<T> ret;
  for (auto i = 0; i < rhs1.getSize(); i++)
  {
    ret.push(rhs1.get(i) * rhs2.get(i));
  }
  return ret;
}

//!variadic templates
template <typename T>
T myAdd(T v)
{
  return v;
}

template <typename T, typename... Args>
T myAdd(T first, Args... args)
{
  return first + myAdd(args...);
}

template <typename... Args>
void output_argus(Args &&...args)
{
  ((cout << args << "\n"), ...);
}

int main()
{
  cout << "Demonstrate how template functions works" << endl;
  cout << myMax<int>(2, 5) << endl;                      //for int
  cout << myMax<double>(1.0, 9.0) << endl;               //for double
  cout << myMax<string>("habchll", "defgkkhkg") << endl; //for string, only compare the first character

  cout << "\nDemonstrate how template class works" << endl;
  myVector<int> mVector;
  mVector.push(3);
  mVector.print();
  mVector.push(4);
  mVector.push(5);
  mVector.push(6);
  mVector.push(12);
  mVector.print();
  cout << "print square"
       << "\n";
  mVector = mySquare(mVector);
  mVector.print();

  cout << "\nDemonstrate how variadic template works" << endl;
  long sum = myAdd(1, 2, 3, 8, 7);
  cout << "the sum of 1,2,3,8,7 is: " << sum << "\n";

  std::string s1 = "x", s2 = "aa", s3 = "bb", s4 = "yy";
  std::string ssum = myAdd(s1, s2, s3, s4);
  cout << "the sum of x,aa,bb,yy is: " << ssum << "\n";

  cout << "\nDemonstrate how fold express template works" << endl;
  output_argus(3, "aaaa", 6.6f);

  return EXIT_SUCCESS;
};
