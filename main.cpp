/*
Nome : Giulio 
Cognome : Anyanwu 
Matricola : S4511135
Esercizio : La serie di Fibonacci è una successione di numeri interi i cui primi due elementi sono 1 e 1, e ciascun altro elemento è uguale alla somma dei due termini precedenti.
*/

#include <iostream>
using namespace std;

int main() 
{
    int n=0; 
	int n0=0;
	int n1=1;
	int n2;
    cin >> n;
	
    if (n==1) 
	{
        cout << "1" <<endl;
    }
    for (n2 = 0; n2 <= n; n2++) 
	{
        n2 = (n0 + n1);
        if (n2<=n) 
		{
            cout << n2 << endl;
        }
        n1 = n0;
        n0 = n2;
    }

    return 0;
}
