//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <ostream>
using namespace std;

/**
 * Abstract Class of Person
 */
class Person {
  protected:
  string firtName;
  string lastName;
  int documentld;

  public:
  Person();
  Person(string,string,int);
  virtual ~Person();
  
  string getFisrtName();
  string getLastName();
  int getDocumentId();

  void setFirstName(string);
  void setLastName(string);
  void setDocumentId(int);
  
  virtual const double salary() = 0;
  virtual const string toString() = 0; 

};


#endif //LAB02_OOP_PERSON_H
