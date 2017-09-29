#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	for( string string; getline( cin, string ); )
	{ int a;
        int s[ 10 ];
        int max1 = 0;
        
        istringstream stream( string );
        bool failure = false;
        for( int i = 0; i < 10; ++i ) 
	{if( !( stream >> s[ i ] ) )
	{failure = true;break;}
        }   if( !failure ) {
            max1 = s[0];
            for( int i = 0; i < 10; ++i )
            {if(max1<s[i])
                {max1=s[i];}
            }cout<<max1<<'\n';
        }
         int x[ 10 ];
         int max = 0;
           for( int i = 0; i < 10; ++i ) 
	{if( !( stream >> s[ i ] ) )
	{failure = true;break;}
        }   if( !failure ) {
            max = x[0];
            for( int i = 0; i < 10; ++i )
            {if(max<x[i])
                {max=x[i];}
            }cout<<max<<'\n';
        }
      a=max+max;
      cout <<a<<'\n';
    }
}
