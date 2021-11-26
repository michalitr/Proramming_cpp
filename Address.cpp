#include <iostream>
#include <string>
#include "Address.h"

using namespace std;

            Address::Address()
            {
                setStreet("");
                setCity("");
                setPostalCode(-1);
                cout <<"A new person obj was created with " << endl;
                printAddress();
            }
            Address::Address(const char* street,const char* City, int postalCode)
            {
                cout <<"Making a new address.\n" << endl;
                setStreet(strdup(street));
                setCity(strdup(City));
                setPostalCode(postalCode);
                printAddress();
            }
            Address::Address(const Address& addr){
                *this = addr;
            }
            Address& Address::operator=(const Address& addr){
                if(this == &addr) return *this;
                setStreet(strdup(addr.getStreet()));
                setCity(strdup(addr.getCity()));
                setPostalCode(addr.getPostalCode());
                return *this;
            }
            Address::~Address() {
                 cout <<"Address is deleted" << endl;
            }

            void Address::setStreet(char* street) 
            {
                 char* str = "";
                if (strcmp == 0)
                {
                cout << getStreet() << "'s street updated to" << street <<"'s street.\n"  << endl;
                this->m_Street = strdup(street));
                }else{
                    cout <<"street is illegal" << endl;
                }
            }
            char* Address::getStreet() const
            {
                return this->m_Street;
            }
            void Address::setCity(char* city)
            {
                 char* str = "";
                if (strcmp(m_City, city) != 0)
                {
                    cout << getCity() << "'s city updated to "<< city << " 's city.\n" << endl;
                    strcpy(this->m_City, city);
                }else{
                    cout <<"city is illegal" << endl;
                }
            }
            char* Address::getCity() const
            {
                return this->m_City;
            }
            void Address::setPostalCode(int postalCode) 
            {
                if (postalCode != -1)
                {
                    cout <<  getPostalCode() << "'s postal code updated to " << postalCode << "'s postal code.\n"  << endl;
                    this->m_PostalCode = postalCode;
                }else{
                    cout <<"postal code is illegal" << endl;
                }
                
                
            }
            int Address::getPostalCode() const
            {
                return this->m_PostalCode;
            }
            void static Address::printAddress() const
            {
                cout <<"Street: " << getStreet() << "\n City: " << getCity() <<"\n Postal Code: "<< getPostalCode() << endl;
            }
        };