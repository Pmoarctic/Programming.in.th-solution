#include<bits/stdc++.h>
using namespace std;

int arr[200][200];
int n[4];
int main()
{

  cin >> n[0] >> n[1] >> n[2];
  sort(n,n+3);

  string str;
  cin >> str;
  for(int i=0;i<3;i++)
  {
      cout << n[str[i]-'A'] << " ";
  }
}