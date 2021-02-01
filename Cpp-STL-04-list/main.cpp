#include <iostream>
#include <chrono>
#include <vector>
#include <list>

using namespace std::chrono;
using namespace std;

template <typename Funct>
long long TimeFunct(Funct f)
{
  auto startTime = steady_clock::now();
  f();
  auto endTime = steady_clock::now();
  return duration_cast<milliseconds>(endTime - startTime).count();
}
void createVector(const int &size, vector<int> &v)
{
  for (int i = 0; i < size; i++)
  {
    int r = (int)rand();
    bool inserted = false;
    for (auto it = begin(v); it != end(v); it++)
    {
      if (*it > r)
      {
        v.insert(it, r);
        inserted = true;
        break;
      }
    }
    if (!inserted)
      v.push_back(r);
  }
}

void createList(const int &size, list<int> &l)
{
  for (int i = 0; i < size; i++)
  {
    int r = (int)rand();
    bool inserted = false;
    for (auto it = begin(l); it != end(l); it++)
    {
      if (*it > r)
      {
        l.insert(it, r);
        inserted = true;
        break;
      }
    }
    if (!inserted)
      l.push_back(r);
  }
}

int main()
{
  cout << "04 demonstrate the sequence container list in c++ STL" << endl;
  int const size = 10'0000;

  vector<int> v;
  v.push_back(0);

  list<int> l;
  l.push_back(0);

  auto vectorMilliseconds=TimeFunct([&](){createVector(size,v);});
  auto listMilliseconds=TimeFunct([&](){createList(size,l);});

  cout<<vectorMilliseconds<<"     "<<listMilliseconds<<endl;

  return EXIT_SUCCESS;
};
