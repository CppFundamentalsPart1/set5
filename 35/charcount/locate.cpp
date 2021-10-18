#include "charcount.ih"

CharCount::Action CharCount::locate(size_t *destIdx, char ch)
{
    for (size_t idx = 0, chVal = static_cast<unsigned char>(ch);
         idx < d_info.nCharObj;
         ++idx)
    {
        size_t uCh = static_cast<unsigned char>(d_info.ptr[idx].ch);

        if (chVal > uCh)
            continue;

        *destIdx = idx;
        return chVal == uCh ? INC : INSERT;
    }

    return APPEND;
}