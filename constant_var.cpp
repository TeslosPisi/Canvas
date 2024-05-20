// The purpose of this script is to see if we can change the data stored under a constant variable by pass-by-reference.

#include <iostream>
using namespace std;

int main(){
  double pi = 3.1415;
  cout << pi << endl;
  double* pi_address = &pi;
  cout<< "Address of variable 'pi':"<<endl;
  cout<< pi_address <<endl;

  // Attempt to change the value stored in pi_address
  *pi_address = 10;
  cout<< "Final value of pi"<<endl;
  cout<< pi << endl;

  return 0; 
}
