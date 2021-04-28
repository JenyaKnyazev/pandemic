#ifndef DRIVEEXCEPTION_H
#define DRIVEEXCEPTION_H
#include<exception>

struct driveException:public std::exception
{
    const char * what () const throw () {
            return "cannot drive to not connected city";
        }
};

#endif // DRIVEEXCEPTION_H
