#ifndef STATICTEST_H
#define STATICTEST_H

#include <vector>

template< class Dummy >
struct BaseClass_statics
{
  static std::vector<char> mTest;
};

template< class Dummy >
std::vector<char> BaseClass_statics<Dummy>::mTest = {0,1,2,3,4,5,6,7};

class StaticTest : public BaseClass_statics<void>
{

};

#endif // STATICTEST_H
