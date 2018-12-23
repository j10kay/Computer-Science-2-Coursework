#include <iostream>
using namespace std;

#include "User.h"

User::User (){      //Default constructor
  firstName = "None";
  lastName = "None";
  userID = "None";
}

User::User(string fname, string lname, string ID){
  firstName = fname;
  lastName = lname;
  userID = ID;
}

string User::Printfirstname() const {
  return firstName;
}

string User::Printlastname() const {
  return lastName;
}

string User::PrintuserID() const {
  return userID;
}

