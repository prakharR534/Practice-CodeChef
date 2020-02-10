
#include <iostream>
using namespace std;


int main() {
char s[4],s1[4];
int p;
cin>>p;
   while(p--)
{
    
   int k=0;
 
   cin>>s;
   cin>>s1;   
   if((s[0]=='o'||s1[0]=='o')&&(s[1]=='b'||s1[1]=='b')&&(s[2]=='b'||s1[2]=='b'))
   
 {
        cout<<"yes"<<endl;
    }
   
   else  if((s[0]=='b'||s1[0]=='b')&&(s[1]=='o'||s1[1]=='o')&&(s[2]=='b'||s1[2]=='b'))
    {
        cout<<"yes"<<endl;
    }
    else if((s[0]=='b'||s1[0]=='b')&&(s[1]=='b'||s1[1]=='b')&&(s[2]=='o'||s1[2]=='o'))
    
{
        cout<<"yes"<<endl;
    }
  
  else 
        cout<<"no"<<endl;

}
return 0;

}
