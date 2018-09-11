//auuthor-paradox64ce
#include <iostream>
using namespace std;

int main() 
{
	int n,a,b,c;
	int count=0 ,l=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a>>b>>c;
	    if(a==1)
	    {
	        l++;
	    }
	    if(b==1)
	    {
	        l++;
	    }
	    if(c==1)
	    {
	        l++;
	    }
	    
	    if(l>=2)
	    {
	        count++;
	    }
	    l=0;
	}
	cout<<count<<"\n";
	return 0;
}
