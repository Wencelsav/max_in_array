#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	for( string string; getline( cin, string ); )
	{
        int s[ 10 ];
        int max = 0;
        istringstream stream( string );
        bool failure = false;
        for( int i = 0; i < 10; ++i ) 
	{if( !( stream >> s[ i ] ) )
	{failure = true;break;}
        }   if( !failure ) {
            max = s[0];
            for( int i = 0; i < 10; ++i )
            {if(max<s[i])
                {max=s[i];}
            }cout<<max<<'\n';
        }else {
            cout << "smb will be upset" << endl;
        }
    }
}
