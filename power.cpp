#include <iostream>

int tenth_power(int num){
for (int i=0;i<5;i++){
num=num*num;
}
return num;
}

int main() {
std::cout<< tenth_power(2) <<"\n";
}
