#include "copycat.ih"

CopyCat::CopyCat(char **data)
  : CopyCat(nElements(data), data)  // delegate construction to
                                    // CopyCat(int argc, char **argv)
{
}