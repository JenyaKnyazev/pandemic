#ifndef LABEXCEPTION_H
#define LABEXCEPTION_H
#include <exception>

struct labException:public std::exception
{       const char * what () const throw () {
            return "there is no lab in the city or\nthere is no infection on the city or\nthere is no lab on current city or there is no lab on direction city to fly shuttle";
        }
};

#endif // LABEXCEPTION_H
