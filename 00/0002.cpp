#include<iostream>
using namespace std;

int main()
{
  int mn=2000000001;
  int mx=-2000000001;

  int n;
  cin >> n;
  for(int i=0;i<n;i++)
  {
    int tmp;
    cin >> tmp;
    if(tmp>mx)
    {
      mx=tmp;
    }
    if(tmp<mn)
    {
      mn=tmp;
    }
  }

  cout << mn << endl << mx ;

}