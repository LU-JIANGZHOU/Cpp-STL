#include <iostream>
#include <set>
#include <functional>   // std::greater

using namespace std;

class myDay
{
public:
    int iday;
    string sday;
    bool operator<(const myDay &rhs) const { return iday < rhs.iday; };
    bool operator>(const myDay &rhs) const { return iday > rhs.iday; };
};

int main()
{
    cout << "07 demonstrate set in c++ STL" << endl;

    set<int> s = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};
    cout << "the element of the set is: "
         << "\n";
    for (const auto &e : s)
    {
        cout << e << endl;
    }

    set<myDay> mDay = {{7, "Sunday"}, {1, "Monday"}, {2, "Tuesday"}, {3, "wednesday"}};
    cout << "the element of the set is: "
         << "\n";
    for (const auto &e : mDay)
    {
        cout << e.iday << e.sday << endl;
    }

    set<myDay, std::greater<>> gDay = {{7, "Sunday"}, {1, "Monday"}, {2, "Tuesday"}, {3, "wednesday"}};
    cout << "the element of the set is: "
         << "\n";
    for (const auto &e : gDay)
    {
        cout << e.iday << e.sday << endl;
    }

    return EXIT_SUCCESS;
};
