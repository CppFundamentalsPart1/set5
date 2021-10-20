#include "copycat.ih"

CopyCat::CopyCat(char const *const *const data)
  : CopyCat(nElements(data), data)  // delegate construction to
                                    // CopyCat(int argc, char **argv)
{
}