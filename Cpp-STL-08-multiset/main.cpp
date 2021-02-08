#include <iostream>
#include <set>
#include <functional>   // std::greater

using namespace std;

class student
{
public:
    int iAge;
    string name;
    bool operator<(const student &rhs) const { return iAge < rhs.iAge; };
    bool operator>(const student &rhs) const { return iAge > rhs.iAge; };
};

int main()
{
    cout << "08 demonstrate multiset in c++ STL" << endl;

    set<int> s = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    cout << "the element of the set is: "
         << "\n";
    for (const auto &e : s)
    {
        cout << e << endl;
    }

    set<student> mStudent = {{15, "LU"}, {15, "Lee"}, {12, "Zhang"}, {13, "Wang"}};
    cout << "the element of the set is: "
         << "\n";
    for (const auto &e : mStudent)
    {
        cout << e.iAge << e.name << endl;
    }

    set<student, std::less<>> lStudent = {{15, "LU"}, {15, "Lee"}, {12, "Zhang"}, {13, "Wang"}};
    cout << "the element of the set is: "
         << "\n";
    for (const auto &e : lStudent)
    {
        cout << e.iAge << e.name << endl;
    }

    return EXIT_SUCCESS;
};
