#ifndef CITYHAVELABEXCEPTION_H
#define CITYHAVELABEXCEPTION_H
#include <exception>

struct cityHaveLabException:public std::exception
{
        const char * what () const throw () {
            return "the city already have a lab";
        }
};


#endif // CITYHAVELABEXCEPTION_H
