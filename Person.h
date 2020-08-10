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
  string firstName;
  string lastName;
  int documentId;

  public:
  Person();
  Person(string firstName ,string lastName ,int documentId);
  virtual ~Person();
  
  string getFirstName();
  string getLastName();
  int getDocumentId();

  void setFirstName(string firstName);
  void setLastName(string lastName);
  void setDocumentId(int documentId);
  
  virtual double salary() = 0;
  virtual string toString() = 0; 

};


#endif //LAB02_OOP_PERSON_H
