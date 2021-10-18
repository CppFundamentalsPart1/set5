#include "copycat.ih"

CopyCat::CopyCat(char **data)
  : CopyCat(nElements(data), data)
{
}