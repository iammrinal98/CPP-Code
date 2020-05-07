#include <iostream>

using namespace std;

int main()
{
    int dimension;
  cin>>dimension;

    for( int i = 1 ; i <= dimension ; i++ )
    {
        for( int j = 1 ; j <= dimension ; j++ )
            std::cout << i + (j == 1+((dimension-1)*(i%2))) ?  (i%2)*1 : 0;

        std::cout << "\n";
    }

    return 0;
}