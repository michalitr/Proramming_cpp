#pragma once
#include "Person.h"

using namespace std;

class Management{
    public:
        Management();
        Management(const Management &mngr);//Copy constructor
        Management& operator= ( const Management &mngr);//Assigment operator
        ~Management();

    public:
	    bool addPerson(const Person& person);
	    //void removePerson(int idx, Position& pos);
        void doubleSize();
        int getFirstFree() { return ++m_currPerson};
        bool removePerson(const Person& person);
        void printPersonsArray();
    
    private:
        void Management::createPersonsArray(int m_maxPersons);

    private:
	    int	m_maxPersons;
	    int	m_currPerson;
	    Person** prArray;
        
};