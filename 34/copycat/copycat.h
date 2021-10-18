#ifndef _COPY_CAT_H_
#define _COPY_CAT_H_

#include <cstddef>

class CopyCat
{
    size_t d_size;
    char **d_data;

public:
    CopyCat();  // copies environ
    CopyCat(int argc, char **argv);
    CopyCat(char **data);  // cp. any environ-like variable

private:
    static void ntbsCopy(char *dest, char *src);
    static size_t nElements(char **arr);
    static void duplicate(char **dest, char **src, size_t size);
};

#endif  // _COPY_CAT_H_