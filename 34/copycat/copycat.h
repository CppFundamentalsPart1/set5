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
    // copy ntbs with size characters from src into dest
    static void ntbsCopy(char *dest, char *src, size_t size);

    // get number of elements in arr
    static size_t nElements(char **arr);

    // duplicate the first size characters from src into dest
    static void duplicate(char **dest, char **src, size_t size);
};

#endif  // _COPY_CAT_H_