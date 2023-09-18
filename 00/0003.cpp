#include<iostream>
using namespace std;

int arr[200][200];

int main()
{
  int m,n;
  cin >> m >> n;

  for(int k=1;k<=2;k++)
  {
      for(int i=1;i<=m;i++)
      {
          for(int j=1;j<=n;j++)
          {
              int tmp;
              cin >> tmp;
              arr[i][j] += tmp;
          }
      }
  }

  for(int i=1;i<=m;i++)
      {
          for(int j=1;j<=n;j++)
          {
              cout << arr[i][j] << " ";
          }
          cout << endl;
      }

}