/* 
 This script is to demonstrate the difference between
 pass by value and pass by reference.
 These two notions are about how a function takes and alters 
 a variable it receives from outside.

 In pass by value, the function uses the value that is represented by a variable and
 does not alter the value of this variable after its execution.
 On the other hand, in pass by reference, the function receives the value from the address
 where the variable is stored. Thus, when the function alters the value stored in this address
 it also alters the value that variable represents.

 This concept shares the same idea behind immutable and mutable functions in Julia. 
   */

  #include <iostream>

  void pass_by_value(int i){
    i = 10; 
  }

 // The address of the function argument (in this case num) is attained by the "address-of" operator &.
  void pass_by_reference(int &i) {
    std::cout << &i<<"\n";  //Prints the address of the provided argument
    i = 10;                 // Assigns a new value to the variable stored in the argument
  }


  int main(){
    int num = 5; 

    pass_by_value(num);
    std::cout<<num<<"\n";

    pass_by_reference(num);
    std::cout << num<<"\n";
  }