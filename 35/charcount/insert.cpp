#include "charcount.ih"

void CharCount::insert(size_t destIdx, char ch)
{
    Char *ptr = new Char[d_info.nCharObj + 1];

    moveElements(ptr, 0, destIdx);

    ptr[destIdx] = Char { ch, 1 };

    moveElements(ptr + destIdx + 1, destIdx, d_info.nCharObj);

    delete[] d_info.ptr;

    ++d_info.nCharObj;
    d_info.ptr = ptr;
}