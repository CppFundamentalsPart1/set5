#ifndef _COPY_CAT_H_
#define _COPY_CAT_H_

#include <cstddef>

class CopyCat
{
    size_t d_size;
    char **d_data;

    public:
        CopyCat();  // copies environ  (copycat1.cpp)
        CopyCat(int argc, char const *const *const argv);  // (copycat2.cpp)
        CopyCat(char const *const *const data);  // copies any environ-like
                                                 // variable (copycat3.cpp)
    private:
        // copy ntbs with size characters from src into dest
        static void ntbsCopy(char *dest, char const *const src, size_t size);

        // get number of elements in arr
        static size_t nElements(char const *const *const arr);

        // duplicate the first size characters from src into dest
        static void duplicate(char **dest, char const *const *const src,
                                  size_t size);
};

#endif  // _COPY_CAT_H_