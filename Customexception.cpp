#include <iostream>
#include <exception>
using namespace std;

class MyException: public exception   // class name should describe error situation AND it is inherited from class exception
{
/*class exception {
public:
  exception () throw();
  exception (const exception&) throw();
  exception& operator= (const exception&) throw();
  virtual ~exception() throw();
  virtual const char* what() const throw();
}*/
    virtual const char* what() const throw()  // Method Overriding
    {
        // https://youtu.be/mqmK-b-3fHA?list=PLw_k9CF7hBpJKHeOFXOHOyy_KuR06aLqt&t=159
    }
};

int main()
{
    return 0;
}
