#ifndef _CHAR_COUNT_H_
#define _CHAR_COUNT_H_

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
        // count number of characters read from in, return total number of
        // characters found
        size_t count(std::istream &in);

        // return const reference to d_info
        CharInfo const &info() const;

    private:
        // get action to do with ch (using locate) and perform the action
        void processChar(char ch);

        // get the action to do with ch, if insert or inc then destIdx is the
        // index of where to insert or increment respectively
        Action locate(size_t *destIdx, unsigned char ch);

        // append ch to d_info.ptr
        void append(char ch);
        // insert ch into d_info.ptr at idx
        void insert(size_t idx, char ch);
        // increment the character in d_info.ptr at idx
        void inc(size_t idx);

        // move the elements d_info.ptr[start] to d_info.ptr[end] into dest
        void moveElements(Char *dest, size_t start, size_t end);
};

#endif