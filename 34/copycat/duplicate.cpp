#include "copycat.ih"
#include <cstring>

void CopyCat::duplicate(char **dest, char **src, size_t size)
{
    for (size_t idx = 0; idx < size; ++idx)
    {
        size_t strSize = string{ src[idx] }.size();
        dest[idx] = new char[strSize];
        ntbsCopy(dest[idx], src[idx]);
    }
}