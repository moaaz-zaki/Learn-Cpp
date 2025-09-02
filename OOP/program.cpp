#include <iostream>
#include <string>
using namespace std;

class employee{
protected:
    string name;
    int ID;
    double salary;

public:
    employee(string n, int id, double s) : name(n), ID(id), salary(s)
    {
    }
    double get_salary ()
    {
        return salary;
    }
    virtual float get_total_salary() = 0;
    virtual void display_info (){
        cout << "Information: \nName: " << name << "\nID: " << ID << "\nSalary: " << salary << endl;
    }
};

class engineer : public employee {
private:
    string specialty;
    int experience;
    int overtime_hours;
    float overtime_hour_rate;

public :
    engineer(string n, int id, double s , string sp , int ex , int ot , float otr):employee( n , id , s)
    {
        specialty = sp;
        experience = ex;
        overtime_hours = ot;
        overtime_hour_rate = otr;
    }
    void set_overtime_hours (int oh)
    {
        overtime_hours = oh;
    }
    void set_overtime_hour_rate (int ohr)
    {
        overtime_hour_rate = ohr;
    }
    float get_total_salary()
    {
        return salary + (overtime_hours * overtime_hour_rate);
    }
    void display_info ()
    {
        employee::display_info();
        cout << "Specialty: " << specialty << "\nExperience: " << experience << "\nOver Time Hours: " << overtime_hours << "\nOver Time Hours Rate: " << overtime_hour_rate << endl;
    }
};
class sales: public employee{
private:
    float goss_sales;
    float commission_rate;
public:
    sales(string n, int id, double s , float gs , float cr):employee( n , id , s)
    {
        goss_sales = gs;
        commission_rate = cr;
    }
    void set_goss_sales (float gs)
    {
        goss_sales = gs;
    }
    void set_commision_rate (float cr)
    {
        commission_rate = cr;
    }
    float get_total_salary()
    {
        return salary + (commission_rate * goss_sales);
    }
    void display_info ()
    {
        employee::display_info();
        cout << "Goss Sales: " << goss_sales << "\nCommission Rate: " << commission_rate << endl;
    }
};
int main ()
{
    engineer e("Moaaz", 100935, 15000, "Mechatronics", 5, 10, 50);
    employee *ptr = &e;
    ptr->display_info();
    cout << "Total Salary : " << ptr->get_total_salary() << endl;
    cout << "------------------------------------------\n";

    sales s("Moaaz", 100935, 15000, 50000 , 0.2);
    ptr = &s;
    ptr->display_info();
    cout << "Total Salary : " << ptr->get_total_salary() << endl;
    cout << "------------------------------------------\n";



    return 0;
}