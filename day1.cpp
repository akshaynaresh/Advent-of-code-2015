#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void advent_of_code()
{
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '(')
            count += 1;
        else if(s[i] == ')')
            count -= 1;
        if(count == -1)
        {
            cout << i+1 << endl;
            break;
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE 
    freopen("input.txt","r",stdin);  
    freopen("output.txt","w",stdout);   
    #endif 
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    advent_of_code();

    return 0;
}

