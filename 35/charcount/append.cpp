#include "charcount.ih"

void CharCount::append(char ch)
{
    insert(d_info.nCharObj, ch);
}