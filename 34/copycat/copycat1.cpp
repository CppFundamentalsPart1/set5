#include "copycat.ih"

extern char **environ;

CopyCat::CopyCat()
  : CopyCat(environ)
{
}