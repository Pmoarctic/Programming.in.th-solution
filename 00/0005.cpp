#include<iostream>
#include<math.h>
using namespace std;

int arr[200][200];

int main()
{
  double a,b;
  cin >> a >> b;
  double c = sqrt(a*a + b*b);
  printf("%.6f",c);
}