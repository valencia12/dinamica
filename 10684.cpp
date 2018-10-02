#include <iostream>
#include <vector>
//#include <queue>


using namespace std;

int main()
{
  long n, t;
  long acu = 0;
  long max_m = 0;
  vector<int> vec;

  while(cin >> n && n)
  {
    acu = 0;
    max_m = 0;

    for(int i = 0; i < n; i++)
    {
      cin >> t;

      acu += t;

      if(acu < 0)
      {
        acu = 0;
      }

      if(acu > max_m) {
        max_m = acu;
      }
    }

    vec.push_back(max_m);
  }

  for(int &max_m : vec)
  {
    if(max_m > 0)
    {
      cout << "The maximum winning streak is " << max_m << "." << endl;
    } else {
      cout << "Losing streak." << endl;
    }
  }

  return 0;
}
