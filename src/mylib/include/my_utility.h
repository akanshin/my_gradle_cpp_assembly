#ifndef MY_UTILITY_H
#define MY_UTILITY_H

#include <memory>

namespace my
{

class ImpUtility;

class Utility
{
public:
    Utility();
    virtual ~Utility();

    int getRandomInteger(int min, int max) const;

private:
    std::unique_ptr<ImpUtility> m_pImpl;
};

} //namespace my

#endif //MY_UTILITY_H