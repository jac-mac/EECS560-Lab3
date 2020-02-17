#include "ClosedHash.h"

ClosedHash::ClosedHash()
{
  arr = new int[size];
}

ClosedHash::~ClosedHash()
{
  delete arr;
}
