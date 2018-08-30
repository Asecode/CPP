#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int Random_No;
   cout <<"IS THIS NUMBER PRIME?, LET'S FIND OUT!!"<<endl;

   cout <<"Please enter your number, any...number"<<endl;

   cin>>Random_No;

  if (Random_No==2)
  {
      cout<<Random_No<<" is a prime number"<<endl;
  }
  else if (Random_No==3||Random_No==5||Random_No==7)
  {
      cout<<Random_No<<" is  a prime number"<<endl;
  }
  else if (Random_No%2==0)
  {
      cout<<Random_No<<" is not a prime number"<<endl;
  }
  else if (Random_No%5==0)
  {
      cout <<Random_No<<" is not a prime number"<<endl;
  }
  else if (Random_No%7==0)
  {
      cout <<Random_No<<" is not a prime number"<<endl;
  }
  else if (Random_No%3 == 2 || Random_No%3 == 1)
  {
      cout<<Random_No<<" is a prime number"<<endl;
  }
  else
  {
    cout<<Random_No<<" is not a prime number"<<endl;
  }
return 0;

}
