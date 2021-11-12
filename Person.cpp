#pragma once
#include <iostream>
#include "string.h"
#include "Person.h"
#include "Job.h"
#include "Address.h"

using namespace std;

        class Person{
        Person()
            {
                setName(NULL);
                setPhoneNumber(NULL);
                setEmail(NULL);
                Address();
                Job();
                cout <<"A new person obj was created with\n" << endl;
                printPerson();

            }
           Person(const char* name,const char* phoneNumber,const char* email, Address& address, Job& job)
            {
                setName(strdup(name));
                setPhoneNumber(strdup(phoneNumber));
                setEmail(strdup(email));
                Address(address.m_Street, address.m_City, address.m_PostalCode);
                Job(job.m_title, job.m_salary, job.m_department);
                cout <<"A new person obj was created with " << endl;
                printPerson();
                
            }
            ~Person() {}

            void setName(char* name)
            {
                cout << getName(name) << "'s name updated to " << name << ".\n" << endl;
                strcpy(this->m_name, name);
            }
            char* getName(char* name)
            {
                return this->m_name;
            }
            void setPhoneNumber(char* phoneNumber)
            {
                if (phoneNumber[0]!=0)
                {
                    cout << "This field must start with the digit '0'. Please re-enter a valid parameter.\n" << endl;
                    return;
                }
                strcpy(this->m_phoneNumber, phoneNumber);            
                cout << getName(this->m_name) << "'s phone number updated to " << phoneNumber <<  ".\n" << endl;           
            }
            char* getPhoneNumber() const
            {
                return this->m_phoneNumber;
            }
            void setEmail(char* email)
            {
                cout << getName(this->m_name) << "'s email updated to " << email << ".\n" << endl;
                strcpy(this->m_email, email);
            }
            char* getEmail() const
            {
                return this->m_email;
            }
            int getSaving() const
            {
                return this->m_savings;
            }
            char* OrderFood(Address& address, int amount)
            {
                if (getSaving()<=0)
                {
                    cout << getName(this->m_name) << ", you don't have enough saving to spend!\n Please wait for the next salary...\n" << endl;
                    return;
                }
                cout << getName(this->m_name) << ", you ordered your food to" << address.getStreet() << "," << address.getCity() <<
                    address.getPostalCode() << "the amount is " << amount << "ILS.\n" << endl;
                            
            }
            void printPerson() const
            { 
                cout <<"Name: " << getName(this->m_name) <<"\n Phone number: " << getPhoneNumber() << "\n Email:" <<  getEmail() <<  "\n" << endl;
            }

        }