#include <iostream>
#include <vector>
#include "span.hpp"
using namespace std;

int main()
{
    span s;

    vector<int> sp = {6, 5, 4, 3};
    for (auto i : sp)
    {
        cout << i << endl;
    }
    return 0;
}