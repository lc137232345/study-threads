#include<iostream>
#include<thread>

void hello()
{
    std::cout << "hello"<<std::endl;
}

int main()
{
    std::thread t1(hello);
    std::thread t2(hello); 
    t1.detach();
    t2.detach();
    std::cout << "hello2"<<std::endl;
    std::cout << "hello2"<<std::endl;
}