/* Codeforces Educational Codeforces Round 65 (Rated for Div. 2)
Problem A: Telephone Number
Author: paradox64ce
*/


#include <iostream>
#include <string>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    string s="";
    cin>>s;
    if(n<11)
    {
        cout<<"NO\n";
    }
    else if(n==11)
    {
        if(s[0]=='8')
        {
            cout<<"YES\n";
            
        }
        else{
            cout<<"NO\n";
        }
    }
    else if(n>11){
        int c=n-11;
        bool r=false;
        for(int i=0;i<=c;i++)
        {
            if(s[i]=='8')
            {
                r=true;
                break;
                
            }
        }
        if(r)
        {
            cout<<"YES\n";
        }
        else {
            cout<<"NO\n";
        }
    }
    
}

	return 0;
}
