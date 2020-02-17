#include "ClosedHash.h"

ClosedHash::ClosedHash()
{
  arr = new Credentials[size];
  for(int i = 0; i < size; i++)
  {
    arr[i].setUsername("0"); //"0" signifies an empty index
  }
  loadFactor = 0;
}

ClosedHash::~ClosedHash()
{
  delete arr;
}

void ClosedHash::Add(string username, string password)
{
  if(arr[HashFunction(password)].getIsEmpty() != 0 || arr[HashFunction(password)].getUsername() != "!")
  {
    arr[HashFunction(password)].setUsername(username);
    arr[HashFunction(password)].setPassword(password);
  }

  else if(arr[HashFunction])
}

void ClosedHash::Remove(string username, string password)
{

}

int ClosedHash::HashFunction(string password)
{
  int totalSum;
  for(int i = 0; i < password.length(); i++)
  {
    totalSum = totalSum + (int)password[i];
  }

  return totalSum % size;
}

// int ClosedHash::getSize()
// {
//   return size;
// }
