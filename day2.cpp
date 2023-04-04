#include<bits/stdc++.h>
using namespace std;

int main()
{
   // #ifndef ONLINE_JUDGE 
   // freopen("input.txt","r",stdin);  
   // freopen("output.txt","w",stdout);   
   // #endif 

    vector<string>a;
    string s;
    long long ans = 0, ans1 = 0;
    while(true)
    {
        getline(cin, s);
        if(s.empty())
            break;
        a.push_back(s);
    }
    int n = a.size();
    cout << n << endl;
    for(int i = 0; i < n; i++)
    {
        int sum = 0, sum1 = 0;
        int m = a[i].size();
        int a1 = 0, b = 0, c = 0, d = 1, count = 0;
        for(int j = m-1; j >= 0; j--)
        {
            if(a[i][j] != 'x')
            {
                if(count == 0)
                {
                    a1 += (a[i][j]-48)*d;
                    d *= 10;
                }
                else if(count == 1)
                {
                    b += (a[i][j] - 48)*d;
                    d *= 10;
                }
                else if(count == 2)
                {
                    c += (a[i][j] - 48)*d;
                    d *= 10;
                }
            }
            else 
            {
                count++;
                d = 1;
            }
        }
       // cout << a1 << " " << b << " " << c << endl;
      /*  vector<int>v;
        v.push_back(a1*b);
        v.push_back(b*c);
        v.push_back(c*a1);
        sort(v.begin(),v.end());
        int l = v.size();
        sum += v[0];
        for(int k = 0; k < l;k++)
        {
            sum += 2*v[i];
            cout << v[i] << " ";
        }
        cout << endl;*/
        
        sum += min({a1*b, b*c, c*a1}) + 2*a1*b + 2*b*c + 2*c*a1;
        ans += sum;

        if(a1 >= b && a1 >= c)
        {
            sum1 += b*2 + 2*c + a1*b*c;
        }
        else if(b >= a1 && b >= c)
        {
            sum1 += 2*a1 + 2*c + a1*b*c;
        }
        else {
        sum1 += 2*a1 + 2*b + a1*b*c;
        }
        ans1 += sum1;
    }
    cout << ans << endl << ans1 << endl;

    return 0;
}


