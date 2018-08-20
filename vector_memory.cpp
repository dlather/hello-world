#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<double> numbers;       // Vector manages an array internally
 //   vector<double> numbers(20,0);    //   IT MAKES A VECTOR OF SIZE 20 AND INITILIZES IT WITH O TO ALL ELEMENT

    cout<<"Size of Vector is "<<numbers.size()<<endl;
    int capacity=numbers.capacity();    // It shows size of internal array
    for(int i=0;i<1000;i++)
    {
        numbers.push_back(i);
        if(capacity !=numbers.capacity())
            {
            capacity=numbers.capacity();
            cout<<"Capacity is :"<<capacity<<endl;
           }
    }
    /*      Size of Vector is 0
Capacity is :1
Capacity is :2
Capacity is :4                      CAPACITY IS INCREASING DOUBLE TIME
Capacity is :8
Capacity is :16
Capacity is :32
Capacity is :64
Capacity is :128
Capacity is :256
Capacity is :512
Capacity is :1024
                        */
            numbers.clear();
            cout<<"Size after clear " << numbers.size()<<endl;
            cout<<"Capacity after clear "<<numbers.capacity()<<endl;
      //      Size after clear 0
      //      Capacity after clear 1024           CAPACITY REMAINS SAME BUT SIZE BECOMES ZERO
            numbers.resize(100);                    // Only size changes capacity remains same
            cout<<"Size " << numbers.size()<<endl;
            cout<<"Capacity "<<numbers.capacity()<<endl;
            cout<<numbers[150];     // Elements were still preserved
            return 0;
}
