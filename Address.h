#pragma once
#include <iostream>
#include "string.h"

using namespace std;

class Address {
    public:
        Address();
        Address(const char* street,const char* City, int postalCode);
        ~Address();

        void    setStreet(char* street);
        char*   getStreet() const;
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