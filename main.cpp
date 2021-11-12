#pragma once
#include <iostream>
#include "string.h"
#include "Person.h"
#include "Job.h"
#include "Address.h"

using namespace std;

int main() {
    //Defualt Con's for p1
    Person p1 = new Person; 
    //New person 
    Address *adr1 = new Address("Berkovich", "LOD", 0);
    Job *job1 = new Job("Singer",10000, PRODUCT);
    Person p2 = new Person("", "", "orenwalla.com", adr1, job1);
    //new pointer person
    Address *adr2 = new Address;
    Job *job2 = new Job;
    Person *p3 = new Person("michal", "050", "michal@com", adr2, job2); 
    
    p1.getJob().Work();
    p1.OrderFood(p1.getAddress(), 20);
    p1.getJob().Retire();

    p2.getJob().Work();
    p2.OrderFood(p2.adr2, 50);
    p2.getJob().Retire();
    
    
    p3->getJob().Work();
    p3->OrderFood(p3.getAddress(), 50);
    p3->getJob().Retire();
    delete p3;


}