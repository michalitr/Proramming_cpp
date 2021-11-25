#include <iostream>
#include <string>
#include "Management.h"

using namespace std;

    Management::Management(): m_currPerson (0), m_maxPersons(1){
       
        if(m_currPerson <= m_maxPersons)
        {
            &prArray = new Person*[m_maxPersons];
            m_currPerson++;
        }else{
            doubleSize();
        }
        
    }
    Management::Management(const Management &mngr){
        m_currPerson = mngr.m_currPerson;
        m_maxPersons = mngr.m_maxPersons;
        &prArray = new Person*[m_maxPersons];
    }
    Management::~Management(){
        if (this != nullptr)
        {
             delete[] prArray;
        }
    }
    Management& Management::operator= ( const Management &mngr){
       
        if (this != &mngr)
        {
            m_currPerson = mngr.m_currPerson;
            m_maxPersons = mngr.m_maxPersons; 
            
                if (prArray != nullptr)
                {
                    delete[] prArray;
                }  
             prArray = new Person*[m_maxPersons];
        }
        return *this;
    }
    bool Management::addPerson(const Person& person){

    }
    void Management::doubleSize(){

    }
     bool Management::removePerson(const Person& person){

    }
    void Management::printPersonsArray(){

    }
