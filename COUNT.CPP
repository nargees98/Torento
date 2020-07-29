#include<iostream.h>
using namespace std::string
int countpairs(string braces[],int num)
{
int cnt=0;
for(int i=0;i<num;i++)
{
string s=bracks[i];
int l=s.length();
int op=0,cl=0;

for(int j=0;j<l;j++)
{
if(s[j]=='{')
op++;
else
     {
     if(op)
     op--;
     else
     cl++;
     }
 }
 if (op&&!cl)
 open[op]++;
 if(cl&&!op)
 close[cl]++;
 if(!op&&!cl)
 cnt++;
 }
 cnt=cnt/2;
 for(auto it:open)cnt +=min(it.second,close[it.first]);
 return cnt;
 }
 int main()
 {
 string bracks[]={{test{}}};
 int num=sizeof(bracks)/sizeof(bracks[0]);
 cout<<countpairs(bracks,num);
 }