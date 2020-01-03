#include<iostream>

using namespace std;

float findDistance(float u, float a, float t)
{
  float s;
  s=(u*t)+(0.5*a*t*t);
  return s;
}

int main()
{
  cout<<findDistance(0, 0.5, 1)<<"\n";
  cout<<findDistance(1.5, -1, 2)<<"\n";
  cout<<findDistance(5, 4, 3)<<"\n";

  return 0;
}
