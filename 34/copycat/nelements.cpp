#include "copycat.ih"

size_t CopyCat::nElements(char **arr)
{
    size_t size = 0;

    while (arr[size] != 0)
        ++size;

    return size;
}