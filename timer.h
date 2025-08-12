#include <chrono>
#include <iostream>
#include <ostream>

class Timer
{
    const char* message;
    std::chrono::time_point<std::chrono::high_resolution_clock> start;

public:
    Timer(const char* message) : message(message)
    {
        start = std::chrono::high_resolution_clock::now();
    }

    ~Timer()
    {
        using namespace std::chrono;
        time_point<high_resolution_clock> end = high_resolution_clock::now();
        auto duration = end - start;

        auto count = duration_cast<milliseconds>(duration);
        std::clog << message << count.count() << "ms" << std::endl;
    }
};
