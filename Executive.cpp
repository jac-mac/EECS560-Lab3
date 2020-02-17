#include "Executive.h"

Executive::Executive(string fileName)
{
 this->fileName = fileName;
 lin = new ClosedHash();
 quad = new ClosedHash();
}

Executive::~Executive()
{

}

void Executive::run()
{
  initializeHash();
}

void Executive::initializeHash()
{
  ifstream inFile;
  inFile.open(fileName);

  while(!(inFile.is_open()))
  {
    cout << "\n\nFile could not be found! Make sure you have spelled it correctly.\n";
    cout << "File Name: ";
    cin >> fileName;
  }

  string username, password;
  while(inFile >> username)
  {
    username[username.length()-1] = '\0';

    inFile >> password;

    lin->Add(username, password);
    quad->Add(username, password);

  }

}
