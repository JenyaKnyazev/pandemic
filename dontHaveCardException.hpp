#include <exception>
#ifndef DONTHAVECARDEXCEPTION_H
#define DONTHAVECARDEXCEPTION_H

struct dontHaveCardException:public std::exception{
        const char * what () const throw () {
            return "don't have a enough cards or specific card for process";
        }
};

#endif // DONTHAVECARDEXCEPTION_H
