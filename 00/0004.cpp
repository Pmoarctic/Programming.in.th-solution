#include<iostream>
using namespace std;

int arr[200][200];

int main()
{
  string str;
  cin >> str;

  bool cap=0,sm=0;
  for(int i=0;i<str.length();i++)
  {
      if(str[i]>='A'&&str[i]<='Z')
      {
          cap = 1;
      }
      if(str[i]>='a'&&str[i]<='z')
      {
          sm = 1;
      }
  }

  if(sm==1&&cap==1)
  {
      cout << "Mix";
  }
  else if(sm == 1)
  {
      cout << "All Small Letter";
  }
  else if(cap == 1)
  {
      cout << "All Capital Letter";
  }
}