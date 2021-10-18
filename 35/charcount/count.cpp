#include "charcount.ih"

size_t CharCount::count(istream &in)
{
    size_t numChars = 0;

    char ch;

    while (in.get(ch))
    {
        ++numChars;
        processChar(ch);
    }

    return numChars;
}