#include<iostream>
#include<thread>
#include<atomic>

void hello()
{
    std::cout << "hello"<<std::endl;
}

int main()
{
    
    std::thread t1(hello);
    std::thread t2(hello); 
    t1.join();
    t2.join();
    std::cout << "hello2"<<std::endl;
    std::cout << "hello2"<<std::endl;
    std::atomic_flag f= ATOMIC_FLAG_INIT;
    
}
