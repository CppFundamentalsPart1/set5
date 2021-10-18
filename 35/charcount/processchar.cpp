#include "charcount.ih"

void CharCount::processChar(char ch)
{
    switch (size_t insIdx; locate(&insIdx, ch))
    {
        case APPEND:
            append(ch);
            break;
        case INSERT:
            insert(insIdx, ch);
            break;
        case INC:
            inc(insIdx);
            break;
    }
}

