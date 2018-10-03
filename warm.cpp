#include<iostream>
using namespace std ;
class Account {
public :
Account ( double initalbalance )
{
x=initalbalance; 
}

void credit ( double amount )
{
x+=amount;
}

double getBalance ( )
{
return x;
}
private :
double x ; 
};
int main (  ) 
{
Account acct1 ( 100 ) ;
cout << "Account 1 Balance i s : " <<acct1 . getBalance ( ) <<endl;
Account acct2 ( 1000) ;
cout << "Account 1 Balance i s : " <<acct2 . getBalance ( ) <<endl;
acct1 . credit (22223);
cout << " Account 1 Balance i s : " <<acct1 . getBalance ( ) <<endl;
return 0 ;
}
