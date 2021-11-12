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
            
            ~Job() {
                 cout <<"Job is deleted" << endl;
            }
            
            void setTitle(const char* title)
            {
                 char* str = "";
                if (strcmp == 0)
                {
                    cout <<  getTitle() << "'s title updated to " << title << "'s title.\n" << endl;
                    strcpy(this->m_title, title);
                }else{
                     cout <<"title is illegal" << endl;

                }
            }
            char* getTitle() const
            {
                return this->m_title;
            }
            void setSalary(int salary)
            {
                if (salary == -1)
                {
                     cout << getSalary() << "'s salary updated to " << salary << "'s salary.\n" << endl;
                     this->m_salary = salary;
                }else{

                }
    
            }
            int getSalary() const
            {
                return this->m_salary;
            }
            void setDepartment(DepartmentEnum department)
            {
                if (department == PRODUCT || department == SALES || department == MARKETING || department == ART )
                {
                    this->m_department = department;
                    cout << getDepartment() << "'s department updated to" << department << "'s department.\n" << endl;
                }else{
                     cout <<"deprartment is illegal" << endl;
                }                
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