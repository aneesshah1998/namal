#include<iostream>
#include<string>
using namespace std ;
class account {
public :
account ( string first_name,string last_name,double salv )
{
x=first_name; 
y=last_name;
s=salv;
}
double add_mon(double salv)
{
salv=12*salv;
interest=(10*salv)/100;
salv=salv+interest;
return salv;
}
void set_salery(double salv)
{
amount=salv;
}
double get_salery(double amount)
{
return amount;
}

private :
string x;
string y; 
double s,amount,salv,interest;
};
int main (  ) 
{
int k=0;
double salv,sal,s,added_money;
string first_name,last_name;
for (int m=0;m<2;m++)
{
cout<<"enter salery"<<endl;
cin>>salv;
cout<<"enter first name"<<endl;
cin>>first_name;
cout<<"enter last name"<<endl;
cin>>last_name;
if (k=0)
{account acct1(first_name,last_name,salv);
if (salv>0)
{
 s=salv;
 acct1.set_salery(s);
 cout<<first_name<<" "<<last_name<<" salery is "<<acct1.get_salery(s)<<endl;
 added_money=acct1.add_mon(s);
acct1.set_salery(added_money);
cout<<first_name<<" "<<last_name<<" salery after year with interest is "<<acct1.get_salery(added_money)<<endl;
}
else
{
salv=0;
acct1.set_salery(salv);
cout<<acct1.get_salery(salv)<<endl;

}

}
else if (k=1)
{account acct2(first_name,last_name,salv);
if (salv>0)
{
 s=salv;
 acct2.set_salery(s);
 cout<<first_name<<" "<<last_name<<" salery is "<<acct2.get_salery(s)<<endl;
 added_money=acct2.add_mon(s);
acct2.set_salery(added_money);
cout<<first_name<<" "<<last_name<<" salery after year with interest is "<<acct2.get_salery(added_money)<<endl;
}
else
{
salv=0;
acct2.set_salery(salv);
cout<<acct2.get_salery(salv)<<endl;
}

}}
return 0 ;
}
