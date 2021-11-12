#pragma once
#include <iostream>
#include "string.h"

using namespace std;

enum DepartmentEnum{PRODUCT, SALES, MARKETING, ART};

class Job {
    public:
        Job();
        Job(const char* title, int salary, DepartmentEnum departmenmt);
        ~Job();
        
        void    setTitle(const char* title);
        char*   getTitle() const;
        void    setSalary(int salary);
        int     getSalary() const;
        void    setDepartment(DepartmentEnum department);
        DepartmentEnum getDepartment() const;
        int     Work();
        void    Retire();
        void  printJob() const;

    private:
        char* m_title;
        int m_salary;
        DepartmentEnum m_department;
};
