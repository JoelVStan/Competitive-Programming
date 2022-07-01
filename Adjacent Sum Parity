#include <bits/stdc++.h>
using namespace std;

int expectedParity(int curr, vector<int> &B, int N)
{
    for (int i=0; i<N; i++)
    {
        if (curr == 1 && B[i] == 1)
        curr=0;
        else if (curr == 0 && B[i] == 1)
        curr=1;
    }
    return curr;
}

void solution()
{
    int N;
    cin>>N;
    vector<int> B(N);
    for (int i=0; i<N; i++)
    {
        cin>>B[i];
    }
    int first, first_exp;
    first = 1;
    first_exp = expectedParity(1,B,N);
    
    if(first==first_exp)
    {
        cout<<"YES\n";
        return;
    }
    first = 0;
    first_exp = expectedParity(0,B,N);
    
    if(first==first_exp)
    {
        cout<<"YES\n";
        return;
    }
    cout<<"No\n";
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) solution();
	return 0;
}
