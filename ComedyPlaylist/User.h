#ifndef USER_H
#define USER_H

class User {
  public:            //public class functions
    User();
    User(string, string, string);
    string Printfirstname() const;
    string Printlastname() const;
    string PrintuserID() const;
  private:          //private variables
    string firstName;
    string lastName;
    string userID;
};

#endif           //Indicate end of header file
