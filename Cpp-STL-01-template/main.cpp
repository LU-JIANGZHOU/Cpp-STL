#include <iostream>
using namespace std;
// template function 
template <class T> 
T myMax(T x, T y) 
{ 
   return (x > y)? x: y; 
} 

int main()
{
  cout<<"Demonstrate how template functions works"<<endl;
  cout << myMax<int>(2, 5) << endl;  //for int 
  cout << myMax<double>(1.0, 9.0) << endl; //for double 
  cout << myMax<string>("habchll", "defgkkhkg") << endl;   //for string, only compare the first character
   

  return EXIT_SUCCESS;
}
;
