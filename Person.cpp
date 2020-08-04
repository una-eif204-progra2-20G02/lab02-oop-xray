//
// Created by Maikol Guzman on 8/2/20.
//

#include "Person.h"

int Person::Person(string f, string l, int d) : firstName(f), lastName(l), documentId(d) {}

virtual Person::~Person(){}

string Person::getFirstName() {return firstName;}
string Person::getLastName() {return lastName;}
int Person::getDocumentId() {return documentId;}

void Person::setFirstName(string f) { firstName = f;}
void Person::setLastName(string l) {lastName = l;}
void Person::setDocumentId(int d) {documentId = d;}