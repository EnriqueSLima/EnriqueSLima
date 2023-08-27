That implementation is a example for collisions treatements

---> To compile WITH collisions problems:

    $ g++ basic.cpp student.cpp hash_application.cpp

---> To compile WITHOUT collisions problems:

    $ g++ linear_probing.cpp student.cpp hash_application.cpp

Will result in error if you try to compile all files
    
    $ g++ *.cpp (Doesn't work, oly if you separate basic.cpp and linear_probing.cpp)