#include "charcount.ih"

void CharCount::processChar(char ch)
{
    // get action to perform with ch
    switch (size_t idx; locate(&idx, ch))
    {
        case APPEND:
            append(ch);  // append ch to d_info.ptr
        break;
        case INSERT:
            insert(idx, ch);  // insert ch into d_info.ptr at idx
        break;
        case INC:
            inc(idx);  // increment the count of the Char in d_info.ptr at idx
        break;
    }
}
