#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double P, S;
    int i, k;
    P = 1;
    i = 1;

    while (i <= 10)
    {
        S = 0;
        k = 1;

        while (k <= i)
        {
            S += 1.0 / k;
            k++;
        }

        P *= (i + S) / sqrt(S);
        i++;
    }


    cout << P << endl;

    P = 1;
     k = 1;
    do
     {
       S = 0;
       i = 1;
       do
       {
         S += 1.0 / i;
         i++;
       } while (i <= k);
       P *= (k + S) / sqrt(S);
       k++;
     } while (k <= 10);
     cout << P << endl;
     P = 1;
     for (k = 1; k <= 10; k++)
    
     {
       S = 0;
       for (i = 1; i <= k; i++)
    
       {
         S += 1.0 / i;
    
       }
       P *= (k + S) / sqrt(S);
    
     }
     cout << P << endl;
     P = 1;
     for (k = 10; k >= 1; k--
       )
    
     {
       S = 0;
       for (i = k; i >= 1; i--
         )
    
       {
         S += 1.0 / i;
    
       }
       P *= (k + S) / sqrt(S);
     }
     cout << P << endl;

    return 0;
}
