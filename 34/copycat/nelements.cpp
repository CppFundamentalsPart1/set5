#include "copycat.ih"

size_t CopyCat::nElements(char const *const *const arr)
{
    size_t size = 0;

    while (arr[size] != 0)  // increment size until null byte is found
        ++size;

    return size;
}