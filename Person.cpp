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
                bool isValidate = validateEmail(email);
                if (isValidate)
                {
                    cout << getName(this->m_name) << "'s email updated to " << email << ".\n" << endl;
                    strcpy(this->m_email, email);
                 }
            }
            char* getEmail() const
            {
                return this->m_email;
            }
            int getSaving() const
            {
                return this->m_savings;
            }
            Job getJob() const
            {
                return this->m_job;
            }
            Address getAddress() const
            {
                return this->m_address;
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
             bool    validateEmail(const char* email){
                    // int x = 30; //random size enough to hold contents of array plus one for               null terminator
                    // char input[x]; //array to hold input
                    int sizeOf; //holds length of input array
                    char* ptr = nullptr; //pointer
                    char* ptr2 = nullptr; //pointer

                    // input = email;
                    
                    sizeOf = strlen(email);

                    for(int i = 0; i < sizeOf; i++)
                    {
                        ptr= strstr(email, "@"); //searches email array for "@" string
                        if(ptr != nullptr) 
                        {
                            break;
                        }
                    }

                    for(int i = 0; i < sizeOf; i++)
                    {
                        ptr2 = strstr(email, "."); //searches email array for "." string
                        if(ptr2 != nullptr && &ptr2 > &ptr)
                        {
                            break;
                        }
                    }

                    if(ptr != nullptr) //validates email of "@" sign
                    {
                        if(ptr2 != 0 && &ptr2 < &ptr) 
                            {
                                cout << "Email accepted.\n";
                                return true;
                            }

                        else
                            {
                                cout << "Missing . symbol after @\n";
                                return false;
                            }
                    }

                    else
                    {
                        cout << "Missing @ symbol\n";
                        return false;

                    }


             }

        };