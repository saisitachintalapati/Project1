#include<iostream>
#include<string>

using namespace std;
class employee
{
 private:
      string e_name;
      int id_no;
      int month_working_days;
      int sick_leave;
 public:
 employee()
 {
     e_name="";
     id_no=0;
     month_working_days=22;
     sick_leave=0;
 }
 employee(string n,int id,int wd)
 {
     e_name=n;
     id_no=id;
     month_working_days=wd;
     sick_leave=0;
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
 int get_id()
 {
     return id_no;
 }
 
 void set_leave(bool leave)
 {
   if(leave)
       sick_leave++; 
 }


};


int main()
{
    
    employee e1("Rose",1000,22);
    e1.set_leave(true);
    e1.set_leave(false);
    e1.set_leave(true);
    e1.set_working_days();
    printf("Employee 1 details:\n");
    cout<<e1.get_name()<<endl;
    cout<<e1.get_id()<<endl;
    cout<<e1.get_working_days()<<endl;
    cout<<e1.get_sick_leave()<<endl;

}