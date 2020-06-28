#ifndef MY_APP_UTILITY_VIEW_H
#define MY_APP_UTILITY_VIEW_H

#include <iostream>

namespace my
{

class UtilityView
{
public:
    UtilityView() = default;
    UtilityView(int min, int max);
    ~UtilityView() = default;

    int min() const;

    int max() const;

    int value() const;

private:
    int m_min = 0;
    int m_max = 100;
};

std::ostream & operator<<(std::ostream& os, const UtilityView & utv);

} //namespace my

#endif //MY_APP_UTILITY_VIEW_H