#include <iostream>
#include <string>
#include "Management.h"

using namespace std;

    Management::Management(): m_currPerson (0), m_maxPersons(1){
       Person* p = new Person[m_maxPersons];
       prArray = &p;
    }
    Management::Management(const Management &mngr){

    }

    Management::~Management{
        delete[] prArray;
    }
    Management& Management::operator= ( const Management &mngr){

    }
    bool Management::addPerson(const Person& person){

    }
    void Management::doubleSize(){

    }
     bool Management::removePerson(const Person& person){

    }
    void Management::printPersonsArray(){

    }
