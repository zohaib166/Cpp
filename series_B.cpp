/* sum of the series 2, 4, 6, 8, 10...n*/

#include <iostream>
using namespace std;
int main()
{
	int n, i=0, nt = 0;
    cout << "Enter the term you want to print: ";
    cin >> n;
	while(i<n)
	{
		nt = nt+2;
		i++;
	}
	cout << nt << endl;
	return 0;
}
