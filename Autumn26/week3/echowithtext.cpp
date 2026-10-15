#include <iostream>
#include <string>

int main(){
    std::string usertext;
    bool terminate = false;

    std::cin >> usertext;

    while(terminate == false){
        if ((usertext=="STOP")||(usertext=="Stop")||(usertext=="stop")){
            terminate = true;
        }
        else{
            std::cout << usertext << std::endl;
            std::cin >> usertext;
        }
    }
}