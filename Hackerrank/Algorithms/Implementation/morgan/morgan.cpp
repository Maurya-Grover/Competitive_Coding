#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int testcase;
    cin>>testcase;
    char a[100000],b[100000],c[200000];
    while(testcase)
        {
        	
        	cin>>a>>b;
            long long int i=0;
            long long int j=0;
            long long int k=0;
        	while(i<strlen(a)&&j<strlen(b))
        		{
        			if(a[i]<b[j])
        				{
        					c[k]=a[i];
        					i++;
                            k++;
        				}
        			else
        				{
        					c[k]=b[j];
        					j++;
                            k++;
        				}

        			
        		}
        	while(i<strlen(a))
        		{
        			c[k]=a[i];
        			i++;
        			k++;
        		}
        	while(j<strlen(b))
        		{
        			c[k]=b[j];
        			j++;
        			k++;
        		}
            cout<<c<<endl;
        	testcase--;        
        }
    
    
   
    return 0;
}