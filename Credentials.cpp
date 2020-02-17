#include "Credentials.h"

Credentials::Credentials(string u, string p)
{
  username = u;
  password = p;
}

Credentials::Credentials()
{
  username = "";
  password = "";
  isEmpty = 1;
}

string Credentials::getUsername()
{
  return username;
}

string Credentials::getPassword()
{
  return password;
}

bool Credentials::getIsEmpty()
{
  return isEmpty;
}

void Credentials::setUsername(string u)
{
  username = u;
}

void Credentials::setPassword(string p)
{
  password = p;
}
