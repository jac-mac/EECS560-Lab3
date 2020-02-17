#include <iostream>
#include "Executive.h"

using namespace std;

int main(int argc, char* argv[])
{
  if(argc != 2)
  {
    cout << "\n\nInvalid number of parameters. Please include the executable name and file name in the command line\n\n";
  }

  else
  {
    Executive exec(argv[1]);
    exec.run();
  }

  return 0;
}
