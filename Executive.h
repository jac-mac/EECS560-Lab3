#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include <string>
#include <iostream>

using namespace std;

class Executive
{
  private:
  string fileName;

  public:
  Executive(string fileName);
  ~Executive();

  void run();

};
#endif
