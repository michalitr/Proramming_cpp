#pragma once
#include <iostream>
#include <string>

using namespace std;

class Address {
    public:
        Address();
        Address(const char* street,const char* City, int postalCode);
        Address(const Address&);//Copy constructor
        Address& operator=(const Address&);//Assigment operator
        ~Address();

        void    setStreet(char* street);
        char*   getStreet() const; //Return here
        void    setCity(char* city);
        char*   getCity() const;
        void    setPostalCode(int postalCode);
        int     getPostalCode() const;
        void     printAddress() const;

    private:
        char* m_Street;
        char* m_City;
        int m_PostalCode;
};