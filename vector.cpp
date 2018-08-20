#include <iostream>
#include <vector>
using namespace std;
int main()
{
  //vector<string> strings(5);   // Vector is Like resizable array   Vector is a template class
  //  strings[3]="dogs";         WAS VALID
  //  strings[5]="Not happy";    NEVER DO IT, NO EXCEPTION THROWN BUT UNPREDICTED RESULT
  //  cout<<strings[5]<<endl;    VECTOR SIZE WAS FIXED 5,BUT ACCESING OR ASIGNING ELEMENT OUT OF SCOPE

    vector<string> strings;
    strings.push_back("Hi");
    strings.push_back("Hello");
    strings.push_back("Bonjour");

    for(int i=0;i<strings.size();i++)
    {
        cout<<strings[i]<<endl;
    }

 //   vector<string>::iterator it = strings.begin();   // This gives us a iterator, which points to the start of vector
 //   cout<<*it<<endl;    // value can be found by using *(value at) iterator     i.e it contains address of vector.begin
 //   it++;               // ++ makes it refer to next address
 //   cout<<*it<<endl;
           //    strings.end()       It returns address of element next to last element
           // ITS NOT THE LAST ELEMENT     BE CAREFULLL


    for(vector<string>::iterator itr=strings.begin();itr!=strings.end();itr++)
    {
        cout<<*itr<<endl;
    }


    //PRACTISE
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    for(vector<int>::iterator itr=arr.end()-1;itr!=arr.begin()-1;itr--)
    {
        cout<<*itr<<endl;
    }

    // IMPORTANT
    /* WHY TO USE ITERATOR OVER INDEX BASED ?
    WITH INDEX BASED VALUE POINTED CAN BE CHANGED
    BUT C++ PROVIDES const_iterator
    const_iterators don't allow you to change the values that they point to, regular iterators do.
As with all things in C++, always prefer const,
unless there's a good reason to use regular iterators
(i.e. you want to use the fact that they're not const to change the pointed-to value).   */


    return 0;

}
