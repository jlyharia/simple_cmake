#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <vector>

class span
{
  public:
    span();

    virtual ~span(){};

  private:
    std::vector<int> vec;
};
#endif