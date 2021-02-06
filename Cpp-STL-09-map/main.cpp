#include <iostream>
#include <map>
#include <string>
#include <string_view>

using namespace std;

void print_map(std::string_view comment, const std::map<std::string, int>& m)
{
    std::cout << comment;
    for (const auto& [key, value] : m) {
        std::cout << key << " = " << value << "; ";
    }
    std::cout << "\n";
}

int main()
{
  cout<<"09 demonstrate map in c++ STL"<<endl;
  // Create a map of three strings (that map to integers)
  std::map<std::string, int> m { {"LU", 90}, {"Lee", 75}, {"Zhang", 60}, };

  print_map("Initial map: ", m);

  m["LU"] = 95;  // update an existing value
  m["Lee"] = 80;  // insert a new value

  print_map("Updated map: ", m);
  
  return EXIT_SUCCESS;
}
