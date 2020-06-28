#include "my_app_utility_view.h"

#include "my_utility.h"

namespace my
{

UtilityView::UtilityView(int min, int max)
    : m_min{min}, m_max{max}
{}

int UtilityView::min() const
{
    return m_min;
}

int UtilityView::max() const
{
    return m_max;
}

int UtilityView::value() const
{
    Utility ut;
    return ut.getRandomInteger(m_min, m_max);
}

std::ostream & operator<<(std::ostream& os, const UtilityView & utv)
{
    Utility ut;
    os << "UtilityView(" << utv.min() << ", " << utv.max() << ") = " << utv.value();
    return os;
}

} //namespace my