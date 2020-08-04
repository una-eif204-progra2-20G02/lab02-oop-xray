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
  private:
  string firtName;
  string lastName;
  int documentld;

  public:
  Person();
  Person(string firtName, string lastName, int documentld);
};


#endif //LAB02_OOP_PERSON_H
