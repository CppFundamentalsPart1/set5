#include "copycat.ih"

CopyCat::CopyCat(int argc, char **argv)
  : d_size(argc),               // initialize size and data
    d_data(new char*[argc])
{
    duplicate(d_data, argv, d_size);    // duplicate argv into data
}