#include "my_utility.h"
#include "my_imp_utility.h"

#include <cstdlib>
#include <ctime>

#include <algorithm>
#include <stdexcept>

namespace my
{

int ImpUtility::getRandomInteger(int min, int max) const
{
    if (min == max)
    {
        return min;
    }
    else if (min > max)
    {
        std::swap(min, max);
    }

    srand((unsigned) time(0));
    return min + (rand() % (max - min));
}

Utility::Utility()
    : m_pImpl{std::make_unique<ImpUtility>()}
{}

Utility::~Utility()
{}

int Utility::getRandomInteger(int min, int max) const
{
    if (m_pImpl == nullptr)
    {
        throw std::runtime_error("not implemented");
    }

    return m_pImpl->getRandomInteger(min, max);
}

} //namespace my
