#include <iostream>
#include "string.h"
#include "Job.h"

using namespace std;

        class Job{
            Job()
            {
                cout << "Making a new job.\n" << endl;
                setTitle("");
                setSalary(-1);
                setDepartment("");
            }
            Job(const char* title, int salary, DepartmentEnum departmenmt)
            {
                cout << "Making a new job.\n" << endl;
                setTitle(strdup(title));
                setSalary(salary);
                setDepartment(departmenmt);
            }
            
            ~Job() {}
            
            void setTitle(const char* title)
            {
                cout <<  getTitle() << "'s title updated to " << title << "'s title.\n" << endl;
                strcpy(this->m_title, title);
            }
            char* getTitle() const
            {
                return this->m_title;
            }
            void setSalary(int salary)
            {
                cout << getSalary() << "'s salary updated to " << salary << "'s salary.\n" << endl;
                this->m_salary = salary;
            }
            int getSalary() const
            {
                return this->m_salary;
            }
            void setDepartment(DepartmentEnum department)
            {
                this->m_department = department;
                cout << getDepartment() << "'s department updated to" << department << "'s department.\n" << endl;
            }
            DepartmentEnum getDepartment() const
            {
                return this->m_department;
            }
            int Work()
            {
                if (this->m_salary == -1)
                {
                    cout << "This person isn't working.\n" << endl;
                    return 0;
                }
                return this->m_salary;
            }
            void Retire()
            {                
                cout << "This person has retired.\n" << endl;
                setTitle("");
                setSalary(-1);
                setDepartment("");
            }
            void static printJob() const
            {
                cout <<"Title: " << getTitle() << "\n Salary: " << getSalary() <<  "\n Department: " << getDepartment() << endl;
            }
        }