#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <string>
#include <iostream>
#include <fstream>
#include "ClosedHash.h"

using namespace std;

class Executive
{
  private:
  string fileName;
  ClosedHash* lin;
  ClosedHash* quad;

  public:
  Executive(string fileName);
  ~Executive();

  void run();
  void initializeHash();

};
#endif
