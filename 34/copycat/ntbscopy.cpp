#include "copycat.ih"

void CopyCat::ntbsCopy(char *dest, char *src)
{
    while (*src != '\0')
    {
        *dest = *src;
        ++dest;
        ++src;
    }
}