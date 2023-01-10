#include"dog.h"
dog::dog(std::string name)
{
    this->name=name;   
}

void dog::bark()
{
    std::cout<<"go\n";
}