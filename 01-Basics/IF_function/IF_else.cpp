#include<studio>
using namespace std;
int main()
{
  int a;
  cout<<"enter your number";
  cin>>a;
  if(a>18)
  {
    cout<<"eligible for voting";
  }
  else
  {
    cout<<"you are not eligible for voting\n"<<a;
  }
  return 0;
}
