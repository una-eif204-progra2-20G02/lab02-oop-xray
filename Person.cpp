//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"

Person::Person(string firstName, string lastName, int documentId )
{ 
  this->firstName = firstName;
  this->lastName = lastName;
  this->documentId = documentId;
}

Person::~Person(){}

string Person::getFirstName() {return firstName;}
string Person::getLastName() {return lastName;}
int Person::getDocumentId() {return documentId;}

void Person::setFirstName(string firstName ) {this->firstName = firstName;}
void Person::setLastName(string lastName ) {this->lastName = lastName;}
void Person::setDocumentId(int documentId ) {this->documentId = documentId;}