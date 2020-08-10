//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University::University(){}

University::University(string name)
{
  this->name = name;
}
University::University(string name,Professor professor,Administrative administrative)
{
  this->name = name;
  this->professor = professor;
  this->administrative = administrative;
}

string University::getName(){return this->name;}
Professor University::getProfessor(){return this->professor;}
Administrative University::getAdministrative(){return this->administrative;}
Professor* University::getProfessorList(){return this->professorList;}
Administrative* University::getAdministrativeList(){return this->administrativeList;}

void University::setName(string name){this->name = name;}
void University::setProfessor(Professor professor){this->professor = professor;}
void University::setAdministrative(Administrative administrative){this->administrative = administrative;}

/*Professor addProfessor(Professor professor)
{
  profesorList->insert(professor);
}
Administrative addAdministrative(Administrative administrative)
{
  administrativeList->insert(administrative);
}*/
