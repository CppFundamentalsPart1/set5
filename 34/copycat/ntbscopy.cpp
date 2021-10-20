#include "copycat.ih"

void CopyCat::ntbsCopy(char *dest, char *src, size_t size)
{
    for (size_t idx = 0; idx < size; ++idx)  // copy each char from src
        dest[idx] = src[idx];
}