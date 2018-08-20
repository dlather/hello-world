#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> numbers;            // Cant use index for list
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);

    list<int>::iterator itr=numbers.begin();
    itr++;
    numbers.insert(itr,100);
    cout<<"Element is : "<<*itr<<endl;
    //Output     itr was pointing to 1 , we called insert (itr,100) then 100 was placed and itr still holds 1   IMPORTNAT TO UNDERSTAND

////Element is : 1
////0
////100
////1
////2
////3

    list<int>::iterator eraseit=numbers.begin();
    eraseit++;
    // As the erase method invalidates the pointer hence it returns a valid pointer pointing to the next element
//    output if
//    numbers.erase(eraseit
//Element is : 1
//Element was : 100
//0
//1
//2
//3
    eraseit= numbers.erase(eraseit);    // ERASE METHOD INVALIDATES THE ITERATOR
    cout<<"Element was : "<<*eraseit<<endl;   // may or maynot point to it as element pointed by iterator is deleyted
//    NEW OUTPUT using eraseit= numbers.erase(eraseit);
//    Element is : 1
//Element was : 1
//0
//1
//2
//3

    for(list<int>::iterator itr=numbers.begin();itr!=numbers.end();itr++)   // itr=itr+2 is invalid only itr++ and itr-- is allowed
    {
        cout<<*itr<<endl;
    }
    return 0;
}
