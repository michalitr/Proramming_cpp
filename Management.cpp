#include <iostream>
#include <string>
#include "Management.h"

using namespace std;

    Management::Management(): m_currPerson (0), m_maxPersons(1){
       
        if(m_currPerson <= m_maxPersons)
        {
            createPersonsArray(m_maxPersons);
            m_currPerson++;
        }else{
            doubleSize();
        }
        
    }
    Management::Management(const Management &mngr){
        m_currPerson = mngr.m_currPerson;
        m_maxPersons = mngr.m_maxPersons;
       createPersonsArray(m_maxPersons);
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
            createPersonsArray(m_maxPersons);
        }
        return *this;
    }
    bool Management::addPerson(const Person& person){
        if(person != nullptr)
        {
            if (prArray[++m_currPerson] == nullptr)
            {
                prArray[m_currPerson] = *person;
                m_currPerson++;
            }else{
                while (prArray[m_currPerson] != nullptr)
                {
                    m_currPerson <= m_maxPersons ?  m_currPerson++ , doubleSize();
                } 
            }
            &prArray[m_currPerson] = *person;
            m_currPerson++;
        }  else{
            perror("The person inserted is error");
        }     
    }
    void Management::doubleSize(){
        int double_max = 2 * m_maxPersons;
        createPersonsArray(double_max);


    }
    bool Management::removePerson(const Person& person){
        for (int i = 0; i < m_maxPersons; i++)
        {
            if (&prArray[i] == &person) // don't need to overload operator == we only compare addresses 
            {
                delete prArray[i];
                prArray[i] = nullptr;
                m_currPerson = i-1;
                return true;
            } 
        }
        return false;
    }
    void Management::printPersonsArray(){
        for (int i = 0; i < m_maxPersons; i++)
        {
            prArray[i]->printPerson(); 
        }
    }
    void Management::createPersonsArray(int m_maxPersons){
            &prArray = new Person*[m_maxPersons];
    }
