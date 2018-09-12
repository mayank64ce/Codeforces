//author-paradox64ce
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int a[]={777,774,747,477,474,447,444,77,74,47,44,7,4};
	bool al=false;
	for(int i=0;i<13;i++)
	{
	    if(n%a[i]==0)
	    {
	        al=true;
	        break;
	    }
	}
	if(al)
	{
	    cout<<"YES\n";
	}
	else
	{
	    cout<<"NO\n";
	}
	
	return 0;
}
