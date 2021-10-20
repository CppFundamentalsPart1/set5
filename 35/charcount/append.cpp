#include "charcount.ih"

void CharCount::append(char ch)
{
    insert(d_info.nCharObj, ch);  // appending is equivalent to inserting at
                                  // the end
}