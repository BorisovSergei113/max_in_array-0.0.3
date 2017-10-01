#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int max1 = 0;
    int max2 = 0;
    int n = 0;
    int place = 0;
    int mas1 [10];
    int mas2 [10];
    
    
    for (string string; getline(cin, string); )
    {
        istringstream stream(string);
        bool failure = false;
        for (int i = 0; i < 10; i++)
        {
            if ( ! (stream >> mas1 [i]))
            {
                failure = true;
                break;
            }
        }
        
        
        if ( failure==false )
        {
            for (int b = 0; b < place; b++)
            {
                if (mas1 [b] > max1)
                {
                    max1 = mas1 [b];
                }
            }
            
            break;
        }
        else {
            cout << "An error has occured while reading numbers from line" << '\n';
        }
    }
    
    
    
    
    for (string string; getline(cin, string); )
    {
        istringstream stream(string);
        bool failure = false;
        for (int y = 0; y < 10; y++)
        {
            if ( ! (stream >> mas2 [y])) {
                failure = true;
                break;
            }
        }
        
        max2 = mas2 [0];
        
        if (failure==false)
        {
            for ( n = 0; n < 10; n++)
            {
                if (mas2 [n] > max2)
                {
                    max2 = mas2 [n];
                    place = n;
                }
            }
            
            max1=mas1[0];
            
            for (int b = 0; b <= place; b++)
            {
                if (mas1 [b] > max1)
                {
                    max1 = mas1 [b];
                }
            }
            
            break;
        }
        else {
            cout << "An error has occured while reading numbers from line" << '\n';
        }
    }
    
    cout << max2+max1 << '\n';
    
    return 0;
}
