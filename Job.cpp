#include <iostream>
#include <string>
#include "Job.h"

using namespace std;

            Job::Job()
            {
                cout << "Making a new job.\n" << endl;
                setTitle("");
                setSalary(-1);
                setDepartment(NONE);
            }
            Job::Job(const char* title, int salary, DepartmentEnum departmenmt)
            {
                cout << "Making a new job.\n" << endl;
                setTitle(strdup(title));
                setSalary(salary);
                setDepartment(departmenmt);
            }
            Job::Job(const Job& j){
                *this = j;
            }
            Job& Job::operator=(const Job& j){}
                if(this == strdup(j)) {return *this};
                setTitle(strdup(j.getTitle()));
                setSalary(j.getSalary());
                setDepartment(j.getDepartment());
                return *this;
            }
            
            void Job::setTitle(const char* title)
            {
                
                if (strcmp(this->m_title, "") == 0)
                {
                    cout <<  getTitle() << "'s title updated to " << title << "'s title.\n" << endl;
                    strcpy(this->m_title, title);
                }else{
                     cout <<"title is illegal" << endl;

                }
            }
            char* Job::getTitle() const
            {
                return this->m_title;
            }
            void Job::setSalary(int salary)
            {
                if (salary == -1)
                {
                     cout << getSalary() << "'s salary updated to " << salary << "'s salary.\n" << endl;
                     this->m_salary = salary;
                }else{

                }
    
            }
            int Job::getSalary() const
            {
                return this->m_salary;
            }
            void Job::setDepartment(DepartmentEnum department)
            {
                
                if (department == PRODUCT || department == SALES || department == MARKETING || department == ART )
                {
                    this->m_department = department;
                    cout << getDepartment() << "'s department updated to" << department << "'s department." << endl;
                }else{
                     cout <<"deprartment is illegal" << endl;
                }                
            }
            DepartmentEnum Job::getDepartment() const
            {
                return this->m_department;
            }
            int Job::Work()
            {
                if (this->m_salary == -1)
                {
                    cout << "This person isn't working.\n" << endl;
                    return 0;
                }
                return this->m_salary;
            }
            void Job::Retire()
            {                
                cout << "This person has retired.\n" << endl;
                setTitle("");
                setSalary(-1);
                setDepartment(NONE);
            }
            void static Job::printJob() const
            {
                cout <<"Title: " << getTitle() << "\n Salary: " << getSalary() <<  "\n Department: " << getDepartment() << endl;
            }
            Job::~Job() {
                 cout <<"Job is deleted" << endl;
            }
        }