#include<iostream>
#include<string>

using namespace std;
enum designation 
{
    Band_L3=1,
    Band_L2,
    Band_L1,
    Band_E3,
    Band_E2,
    Band_E1
};
class employee
{
 private:
      string e_name;
      int id_no;
      int month_working_days;
      int sick_leave;
      int des;
      double salary;
 public:
 employee()
 {
     e_name="";
     id_no=0;
     month_working_days=22;
     sick_leave=0;
     des=0;
     
 }
 employee(string n,int id,int wd,int d)
 {
     e_name=n;
     id_no=id;
     month_working_days=wd;
     sick_leave=0;
     des=d;
 }
 
 void set_working_days()
 {
     month_working_days=month_working_days-sick_leave;
 }
 
 int get_working_days()
 {
     return month_working_days;
 }
 int get_sick_leave()
 {
     return sick_leave;
 }
 string get_name()
 {
     return e_name;
 }
 int get_designation()
 {
     return des;
 }
 int get_id()
 {
     return id_no;
 }
 
 void set_leave(bool leave)
 {
   if(leave)
       sick_leave++; 
 }
 double get_salary()
 {
     return salary;
 }
     
 
 void calculate_salary()
 {
     int pf=2000;
     switch(get_designation())
     {
    case 1: salary=(double)(3560000/12)-(get_sick_leave()*10000)-pf;
    break;
    case 2: salary=(double)(2960000/12)-(get_sick_leave()*8000)-pf;
    break;
    case 3: salary=(double)(2160000/12)-(get_sick_leave()*6000)-pf;
    break;
     case 4:salary=(double)(1770000/12)-(get_sick_leave()*5000)-pf;
     break;
     case 5: salary=(double)(1050000/12)-(get_sick_leave()*3000)-pf;
     break;
     case 6: salary=(double)(696000/12)-(get_sick_leave()*2000)-pf;
     break;
     default:printf("Enter proper designation");
     break;
     }
     
 }

};


int main()
{
    int i;
    employee e[2]=
    { employee("Rose",1000,22,1),
      employee("Chris",403,22,4)
    };
    e[0].set_leave(true);
    e[1].set_leave(true);
    e[1].set_leave(true);
    e[1].set_working_days();
    e[0].set_working_days();
    e[0].calculate_salary();
    e[1].calculate_salary();
    for(i=0;i<2;i++)
    {
    printf("Employee %d details:\n",i);
    cout<<e[i].get_name()<<endl;
    cout<<e[i].get_id()<<endl;
    cout<<e[i].get_working_days()<<endl;
    cout<<e[i].get_sick_leave()<<endl;
    cout<<e[i].get_salary()<<endl;


    }
}