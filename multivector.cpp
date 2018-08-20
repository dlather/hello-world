#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector < vector<int> > grid(3,vector<int> (4,7));  // 2d vector of size 3*4 initilised with 7
    grid[1].push_back(8);
    grid[1].push_back(8);
    vector<int> temp(10,1);
    grid.push_back(temp);
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[i].size();j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
