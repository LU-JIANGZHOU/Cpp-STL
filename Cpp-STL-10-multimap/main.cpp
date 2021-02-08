#include <iostream>
#include <map>

using namespace std;

int main()
{
  cout << "10 demonstrate multimap in c++ STL" << endl;
  // initialize
  std::multimap<int, std::string, std::greater<int>> mmap{{1, "abc"}, {2, "def"}, {3, "ghi"}, {1, "jkl"}, {5, "opq"}};

  //insert
  mmap.insert(decltype(mmap)::value_type(5, "rst"));
  for (const auto &e : mmap)
    cout << e.first << e.second << endl;

  //make_pair
  mmap.insert(std::make_pair(6, "uvw"));
  for (const auto &e : mmap)
    cout << e.first << e.second << endl;

  mmap.insert({7, "xyz"});
  for (const auto &e : mmap)
    cout << e.first << e.second << endl;

  // insert list
  mmap.insert({{6, "one"}, {6, "two"}});
  for (const auto &e : mmap)
    cout << e.first << e.second << endl;

  // erase all 5
  mmap.erase(5);
  for (const auto &e : mmap)
    cout << e.first << e.second << endl;

  // find and erase a specific entry
  auto pos = mmap.begin();
  while (pos->second != "abc" && pos != mmap.end())
    ++pos;
  mmap.erase(pos);
  for (const auto &e : mmap)
    cout << e.first << e.second << endl;

  return EXIT_SUCCESS;
};
