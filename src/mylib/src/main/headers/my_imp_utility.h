#ifndef MY_IMP_UTILITY_H
#define MY_IMP_UTILITY_H

namespace my
{

class ImpUtility
{
public:
    ImpUtility() = default;
    virtual ~ImpUtility() = default;

    int getRandomInteger(int min, int max) const;
};

} //namespace my

#endif //MY_IMP_UTILITY_H