#include <iostream>
#include <list>
using namespace std;
list <int> numbers;
void insertion()
{
    cout<<"Element to be inserted"<<endl;
    int ins;
    cin>>ins;
    cout<<"Index to be inserted (Enter -1 for inserting at last and 0 at front)"<<endl;
    int ind;
    cin>>ind;
    if(ind<-1)
    cout<<"Invalid Input"<<endl;
    else{
    if(ind==-1)
    {
        numbers.push_back(ins);
    }
    else
    {
        if(ind==0)
            numbers.push_front(ins);
        else
        {
            list<int>::iterator itr=numbers.begin();
            itr++;
            int count=1;
            while(itr!=numbers.end()&&count<ind)
            {
                itr++;
                count++;
            }
            if(itr==numbers.end())
                cout<<"Invalid"<<endl;
            else
                numbers.insert(itr,ins);

        }
    }}

}
void deletion()
{
    cout<<"Delete an element, press 1"<<endl;
    cout<<"Delete an index, press 2"<<endl;
    int ch;
    cin>>ch;
    list<int>::iterator itr=numbers.begin();
    switch(ch)
    {
    case 1:
        {cout<<"Enter Element to be deleted"<<endl;
        int del;
        cin>>del;
        itr=numbers.begin();
        while(itr!=numbers.end())
        {
            if(*itr==del)
            {
                numbers.erase(itr);
                break;
            }
            itr++;
        }
        if(itr==numbers.end())
            cout<<"Element not found"<<endl;}
        break;
    case 2:{cout<<"Enter index to be deleted"<<endl;
        int ind;
        cin>>ind;
        itr=numbers.begin();
        int count=0;
        while(itr!=numbers.end())
        {
            if(ind==count)
            {
                numbers.erase(itr);
                break;
            }
            count++;
            itr++;
        }
        if(itr==numbers.end())
          {
           cout<<"Invalid Index"<<endl;
          }}
        break;
    default: cout<<"Invalid Input"<<endl;
    }

}
void view()
{
    list<int>::iterator itr=numbers.begin();
    if(itr==numbers.end())
    {
        cout<<"List is Empty"<<endl;
    }
    else{
    while(itr!=numbers.end())
    {
        cout<<*itr<<"  ";
        itr++;
    }
    cout<<endl;
}}
int main()
{
    int valid=1;
    int choice;
            cout<<" Enter "<<endl;
        cout<<"    1 for Insertion"<<endl;
        cout<<"    2 for Deletion"<<endl;
        cout<<"    3 for Viewing"<<endl;
        cout<<"    4 to Exit"<<endl;
    while(valid==1)
    {
        cout<<"Enter Choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:insertion();
                break;
            case 2: deletion();
                break;
            case 3: view();
                break;
            case 4:
                valid=0;
                break;
            default: cout<<"Invalid Choice"<<endl;
        }
    }
    return 0;
}
