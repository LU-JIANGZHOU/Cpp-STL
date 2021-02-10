#include <iostream>
#include <queue>
using namespace std;

int main()
{
  cout<<"12 demonstrate queue in c++ STL"<<endl;
  queue<int> myQueue;
     myQueue.push(0); //0
     myQueue.push(1); //0,1
     myQueue.push(2); //0,1,2

     myQueue.pop(); //1,2
     myQueue.pop(); //2

     // Printing content of queue
     while (!myQueue.empty()) {
         cout << ' ' << myQueue.front();
         myQueue.pop();
     }
  
  return EXIT_SUCCESS;
}
;
