#include <iostream>

int main() {

    std::string email = "letersbefore@gmail.com";
    int z = (int)email.find('@');

    // Control statement
    std::cout<<z<< std::endl;

    std::string uName = email.substr(0,z);
    std::cout<<"user name is "<<uName<<std::endl;

    return 0;
}
