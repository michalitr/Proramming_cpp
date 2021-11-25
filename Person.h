#pragma once
#include <iostream>
#include "string.h"
#include "Address.h"
#include "Job.h"

using namespace std;

class Person{
    public:
        Person();
        Person(const char* name,const char* phoneNumber,const char* email, const Address& address, const Job& job);
        Person(const Person&);//Copy constructor
        Person& operator=(const Person&);//Assigment operator
        ~Person();

        void    setName(char* name);
        char*   getName(char* name) const;
        void    setPhoneNumber(char* phoneNumber);
        char*   getPhoneNumber() const;
        void    setEmail(char* email);
        char*   getEmail() const;
        int     getSaving() const;
        char*   OrderFood(Address& address, int amount);
        void    printPerson();
        void     printPerson() const;
        bool    validateEmail(const char* m_email);
        Job     getJob() const;
        Address     getAddress() const;
        
    private:
        char* m_name;
        char* m_phoneNumber;
        char* m_email;
        int m_savings;
        Address m_address;
        Job m_job;
};