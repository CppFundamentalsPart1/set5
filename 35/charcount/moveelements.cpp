#include "charcount.ih"

void CharCount::moveElements(Char *dest, size_t begin, size_t end)
{
    for(; begin < end; ++begin)
        *dest++ = move(d_info.ptr[begin]);
}