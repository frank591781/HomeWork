#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long m,t,n,i,j, origin;
   	cin >> n;
   	for(i=0;i<n;i++)
       {
		cin >> m;
		origin = m;
		if(m <= 1)
        {
			cout << 1;
			continue;
		}
		//cout << sqrt(m) << endl;
		for(j = 2; j <= (sqrt(m)+1) && j < origin; ++j)
        {
			if((m % j) == 0)
            {
				cout << j << " ";
				while(m!=1 && m%j==0)
                {
					m /= j;
				}
			}
		}
		if(origin == m)
        {
			cout << "1" << endl;
		}
        else if(m != 1)
        {
			cout << m << endl;
		}
        else
        {
			cout << endl;
		}
	}
	return 0;
}