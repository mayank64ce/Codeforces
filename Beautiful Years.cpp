//author-paradox64ce
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	int n;
	cin>>n;
	n++;
	while(true)
	{
	    set<char> d;
	    string s=to_string(n);
	    int l=s.length();
	    for(int i=0;i<l;i++)
	    {
	        d.insert(s[i]);
	    }
	    if(d.size()==l)
	    {
	        cout<<n<<"\n";
	        break;
	    }
	    n++;
	}
 	
	return 0;
}
