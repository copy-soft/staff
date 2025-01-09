#include <cstdio>
#include <iostream>
class Weapon{



};

int main(int argc,char *argv[]){    
    FILE* file = popen("ls", "r");
    char buffer[99];
    fscanf(file, "%s", buffer);
    pclose(file);
    std::cout<<"buffer is :"<< buffer << std::endl;
    return 0;
}
