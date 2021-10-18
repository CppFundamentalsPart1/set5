#ifndef _CHARCOUNT_H_
#define _CHARCOUNT_H_

#include <iosfwd>

struct CharCount
{
    struct Char
    {
        char ch;
        size_t count;
    };

    struct CharInfo
    {
        Char *ptr;
        size_t nCharObj;
    };

private:
    CharInfo d_info = { 0, 0 };

    enum Action
    {
        APPEND,
        INSERT,
        INC
    };

public:
    size_t count(std::istream &in);

    CharInfo const &info() const;

private:
    void processChar(char ch);
    Action locate(size_t *destIdx, char ch);

    void append(char ch);
    void insert(size_t idx, char ch);
    void inc(size_t idx);

    void moveElements(Char *dest, size_t begin, size_t end);
};

#endif