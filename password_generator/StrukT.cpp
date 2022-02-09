#include <iostream>
using namespace std;
#include "StructTabl.h"
int main()
{
    srand(time(0));
    StructTabl a(rand()%10);
    
    for (int i = 0; i < 10; i++) {
        a.addTabl(rand() % 10);
    }
    a.display();
    cout << endl;
    cout << endl;

    for(int i = 1;i <= 9;i++)
    a.SearchCopy(i);

    a.display();
    a.CoinClear();
    cout << endl;
    
  
}
