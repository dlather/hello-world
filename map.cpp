#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> ages;      //Keys are Unique
    ages["Mike"]=40;
    ages["Raj"]=20;
    ages["Vicky"]=30;
    cout<<ages["Raj"]<<endl;
    ages["Raj"]=70; // Overwritten age of Raj




    pair<string,int> addToMap("Peter",80);  //Pair
    ages.insert(addToMap);

    //Or

    ages.insert(pair<string,int>("Alpha",45));  //Without giving name to pair
    // pair<string,int> (" hjdk",87) is redundant so we have a method which returns of right type

    //or

    ages.insert(make_pair("Hare",60));




    //If you want to test whether a value is there in map or not
    cout<<ages["Sue"]<<endl;   // Sue was not initially present in ages  Using array subscript
//    Mike : 40
//Raj : 70
//Sue : 0
//Vicky : 30   But Sue was added in map with zero value

    if(ages.find("Vicky1")!=ages.end())   //ages.find returns a iterator to the correct element if it is found
        cout<<"Found Vicky1"<<endl;       // else it points to end of ages if element is not found
    else
        cout<<"Element Not found"<<endl;  // Element was not added to map if it was not present
 // Map are composed of pair
    for(map<string,int>::iterator itr=ages.begin();itr!=ages.end();itr++)
    {
        pair<string,int> age=*itr;
        cout<<age.first<<" :"<<age.second<<endl;
    }


    for(map<string,int>::iterator itr=ages.begin();itr!=ages.end();itr++)
    {
        cout<<itr->first<<" : "<<itr->second<<endl;
    }
    return 0;
}
