#include "charcount.ih"

void CharCount::moveElements(Char *dest, size_t start, size_t end)
{
    for (; start < end; ++start)
        *dest++ = move(d_info.ptr[start]);  // move every element into dest
}