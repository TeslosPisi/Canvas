#include <iostream>

// Defining a function called "tenth_power".
/* This function takes an integer number as
an input and then outputs an integer which raises 10
 to the power specified by the input integer.  */
int tenth_power(int num){
for (int i=0;i<5;i++){
num=num*num;
}
return num;
}

int main() {
std::cout<< tenth_power(2) <<"\n";
}
