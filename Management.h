#include "Person.h"

using namespace std;

class Management{
    public:
        Management();
        Management(const Management &mngr);//Copy constructor
        Management& operator= ( const Management &mngr);//Assigment operator
        ~Management();

    public:
	    void addPerson(const Person& p);
	    //void removePerson(int idx, Position& pos);
        void doubleSize();

    private:
	    const char*	m_person;
	    int	m_maxPersons;
	    int	m_currPerson;
	    Person** prArray;
};