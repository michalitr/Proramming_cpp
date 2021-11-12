#pragma once
#include <iostream>
#include "string.h"
#include "Person.h"
#include "Job.h"
#include "Address.h"

using namespace std;

int main() {
    Person person = new Person;
    Person Osnat  = new Person("Osnat", "0546767676", "Osnat@gmail.com", 30000, 
                                {"Blau","Tel Aviv", 5500}, {"Web developer", 15000, "Art"});
    Person Daniel = new Person("Daniel", "036718191", "Daniel@gmail.com", 20000, 
                                {"Machlof", "Natanya", 5555}, {"QA developer", 20000, "Product"});
    person.m_job.Work();
    person.OrderFood(Osnat.m_address, 60);
    person.m_job.Retire();

    Osnat.m_job.Work();
    Osnat.OrderFood(Osnat.m_address, 50);
    Osnat.m_job.Retire();
    
    Daniel.m_job.Work();
    Daniel.OrderFood(Osnat.m_address, 80);
    Daniel.m_job.Retire();

    Address& address = new Address();
    int x;
    int* ptr = x;
    ptr->8;
    Job& job = new Job();
    Person p1 = new ("michal", "050", "michal@com", address, job); // by rederence 
    Person p1 = new ("michal", "050", "michal@com", new Address(jvlfjvjfsdbv), new Job(ljdsnfjkdsbfkj)); // by value
    Person p3 = new Person();
    p1.m_job.Work();


}