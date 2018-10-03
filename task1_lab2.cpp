#include<iostream>
using namespace std ;
class Account {
public :
Account ( double initalbalance )
{
x=initalbalance; 
}

void credit ( double with_amount )
{
double p=x;
y=with_amount;
x=p-y;
}
double set_totalmoney(double initialbalance)
{
m=initialbalance;
}
double get_totalmoney(double m)
{
return m;
}
double remained_money ( )
{
return x;
}
double withdraw_money ( )
{
return y;
}
private :
double x,y,m ; 
};
int main (  ) 
{
Account acct1 ( 5000 ) ;
cout<<"your account balance is"<<endl;
cout<<acct1.get_totalmoney(5000)<<endl;
double money=acct1.remained_money();
double with;
cout<<"how much you want to withdraw"<<endl;
cin>>with;
if (with>money)
{
cout<<"you dont have enough money"<<endl;
}
else
{
acct1 . credit (with);
cout << " Account remained Balance is : " <<acct1.remained_money ( ) <<endl;
cout << " withdraw Balance is : " <<acct1.withdraw_money ( ) <<endl;
return 0 ;
}}
