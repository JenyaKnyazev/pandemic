#ifndef MYEXCEPTION_H
#define MYEXCEPTION_H
#include <string>
using namespace std;
class MyException:public exception
{
    public:
        MyException(char*);
        const char * what () const throw () {
            return exc;
        }
    private:
        const char* exc;
};

#endif // MYEXCEPTION_H
