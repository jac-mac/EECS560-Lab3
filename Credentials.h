#ifndef CREDENTIALS_H
#define CREDENTIALS_H

#include <string>

using namespace std;


class Credentials
{
  private:
  string username;
  string password;
  bool isEmpty;

  public:
  Credentials(string u, string p);
  Credentials();

  string getUsername();
  string getPassword();
  bool getIsEmpty();

  void setUsername(string u);
  void setPassword(string p);
};
#endif
