#include <iostream>
using namespace std;

void solution()
{
    int arr[5], one=1, zero=0, two=2;
    for(int i=0;i<=5;i++)
    {
        cin>>arr[i];
    }
    if(arr[0]==arr[2] || arr[0]==arr[3])
    {
        if (arr[1]==arr[2] || arr[1]==arr[3])
        {
            cout<<one<<"\n";
            return;
        }
    }
    else if (arr[0]==arr[4] || arr[0]==arr[5])
    {
        if (arr[1]==arr[4] || arr[1]==arr[5])
        {
            cout<<two<<"\n";
            return;
        }
    }
    cout<<zero<<"\n";
    return;
}


int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    solution();
	}
	return 0;
}
