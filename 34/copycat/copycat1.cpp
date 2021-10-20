#include "copycat.ih"

extern char **environ;

CopyCat::CopyCat()
  : CopyCat(environ)    // delegate construction to CopyCat(char **data)
{
}