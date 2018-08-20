#include <iostream>
using namespace std;

class CanGoWrong
{
public:
    CanGoWrong()
    {
        char *pMemory=new char[99999999999];
        delete [] pMemory;
    }

};

int main()
{
    // terminate called after throwing an instance of 'std::bad_alloc'
    //what():  std::bad_alloc
    try
    {
        CanGoWrong wrong;
    }
    // bad_alloc is a derived of class exception
    catch(bad_alloc &e)  // if exception is object, then bad_alloc is class name and we need to use &e to reference it
    {
        cout<<"Caught Exception :"<<e.what()<<endl;  // Output Caught Exception :std::bad_alloc
    }
    cout<<"Still Running "<<endl;


    return 0;
}
