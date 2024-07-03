

#include<iostream>
using namespace std;
template<class T>
void sort(T u[],int k)
{
for(int x=0;x<k-1;x++)

 for(int y=x+1;y<k;y++)
 {
   if(u[x]>u[y])
   {
     T p;
     p=u[x];
     u[x]=u[y];
     u[y]=p;
     }
     }
     }
 int main()
 
 {
  int i[6]={5,9,-6,4,-9,0};
  float f[6]={1.1,0.7,-5.9,-7.0,0.1,8};
  char c[6]={'a','m','c','k','j','p'};
  sort(i,6);
  sort(f,6);
  sort(c,6);
  int x=0,y=0,z=0;
  cout<<"\n Integer elements in assecding order :\n" ;
  while(x<6)
  {
  cout<<i[x++]<<" \n ";
  }
  cout<<"\n float elements in assecding order :\n" ;
  while(y<6)
  {
  cout<<f[y++]<<" \n";
  }    
  cout<<"\n Character in asscending order :\n";
  while(z<6)
  {
   cout<<c[z++]<<" \n";
   }  
  return 0;
  }
  
