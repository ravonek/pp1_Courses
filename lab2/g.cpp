#include <iostream>

using namespace std;

/*

#include<iostream>
#include<cmath>


using namespace std;


int main()
{

    int n, k;
    cin >> n >> k;
   
    if(n * 2 == k)
    {
        cout << 2;
    }
    else
    {
        cout << ceil((n * 2) / k);
    }

    return 0;
}



*/



int main() {
  int n, k;
  cin >> n >> k;
  int result;
  
  if (n < k) {
    result = 2;
  } else if (2 * n % k != 0) {
    result = 2 * n / k + 1;
  } else {
    result = 2 * n / k;
  }

  cout << result;
  return 0;
}
