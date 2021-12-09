#include <stdio.h>
#include<iostream>

using namespace std;

int main() 
{
 int a[10],b[10],d[10],i,j,s,c=0,t,n;
 double avg=0,tt=0,end;
  cout<<"Enter the number of Processes:\n";
  cin>>n;
  
 cout<<"Enter the arrival time\n";

 for(i=0;i<n;i++)
 
 cin>>a[i];
 
 cout<<"Enter burst time\n";
 
 for(i=0;i<n;i++)
 
 cin>>b[i];
  
 for(i=0;i<n;i++)
 d[i]=b[i];

  b[9]=9999;
  
 for(t=0;c!=n;t++)
 {
   s=9;
  for(i=0;i<n;i++)
  {
   if(a[i]<=t && b[i]<b[s] && b[i]>0 )
   s=i;
  }
  b[s]--;
  if(b[s]==0)
  {
   c++;
   end=t+1;
   avg=avg+end-a[s]-d[s];
   tt= tt+end-a[s];
  }
 }
    cout<<"\n\nAverage waiting time = "<<avg/n;
    cout<<"\n\nAverage Turnaround time = "<<tt/n;
    return 0;
}
