/* sum of the series 1, 2, 3, 4, 5...n*/

#include <iostream>
using namespace std;
int main()
{
	int n, i=0, nt = 0;
    cout << "Enter the term you want to print: ";
    cin >> n;
	while(i<n)
	{
		nt = nt+1;
		i++;
	}
	cout << nt << endl;
	return 0;
}
