#include<iostream>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m>>a;
    int t_area = n*m;
    int f_area = a*a;
    if(t_area%f_area ==0)
    {
        cout<<t_area/f_area;
    }
    else{
        
    }
}
