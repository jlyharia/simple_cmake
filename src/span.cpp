
#include "span.hpp"
using namespace std;
span::span() {
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
  cout << "in span\n";
  for (auto &i : vec) {
    cout << i << endl;
  }
}