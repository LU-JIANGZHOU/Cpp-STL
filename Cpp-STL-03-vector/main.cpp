#include <iostream>
#include <vector>

using namespace std;

int main()
{
  cout << "03 demonstrate the vecotr in C++ STL" << endl;
  vector<int> v = {1, 2, 3};
  cout << "size = " << v.size() << ", capacity = " << v.capacity() << endl;
  cout << v.max_size() << endl;
  v.push_back(5);
  cout << "size = " << v.size() << ", capacity = " << v.capacity() << endl;
  int cap = v.capacity();
  for (int i = 0; i < 100; ++i)
  {
    v.push_back(i);
    if (cap != v.capacity())
    {
      cap = v.capacity();
      cout << "capacity = " << cap << endl;
    }
  }

  cout << "front = " << v.front() << ", back = " << v.back() << endl;

  v.insert(v.begin() + 2, -100);
  cout << v[2] << endl;
  cout << "size = " << v.size() << endl;
  v.pop_back();
  cout << "size = " << v.size() << endl;

  v.erase(v.begin() + 1, v.begin() + 3);
  cout << v[0] << ", " << v[1] << ", " << v[2] << endl;

  return EXIT_SUCCESS;
};
