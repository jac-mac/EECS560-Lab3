#ifndef CLOSED_HASH_H
#define CLOSED_HASH_H

#include <string>
#include "Credentials.h"

using namespace std;

class ClosedHash
{
  private:
    Credentials* arr;
    int size = 7;
    double loadFactor;

  public:
    ClosedHash();
    ~ClosedHash();

    void Add(string username, string password);
    void Remove(string username, string password);

    int HashFunction(string password);
};
#endif
