#include "copycat.ih"

void CopyCat::duplicate(char **dest, char const *const *const src,
                            size_t size)
{
    for (size_t idx = 0; idx < size; ++idx)  // copy each ntbs from src to
    {                                        // dest

        size_t strSize = string{ src[idx] }.size();  // get size of the ntbs
        dest[idx] = new char[strSize];  // allocate memory for the ntbs

        ntbsCopy(dest[idx], src[idx], strSize);  // copy the ntbs into
                                                 // dest[idx]
    }
}