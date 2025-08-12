#pragma once

#include <limits>
#include <memory>
#include <random>
#include <thread>

// C++ Std Usings

using std::make_shared;
using std::shared_ptr;

// Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

// Utility Functions

inline double degrees_to_radians(double degrees)
{
    return degrees * pi / 180.0;
}

inline thread_local std::mt19937 rng(static_cast<unsigned>(std::hash<std::thread::id>{}(std::this_thread::get_id()) ^
                                                           std::random_device{}()));
inline std::uniform_real_distribution<double> dist(0.0, 1.0);

inline double random_double()
{
    return dist(rng);
}

inline double random_double(double min, double max)
{
    // Returns a random real in [min,max).
    return min + (max - min) * random_double();
}
