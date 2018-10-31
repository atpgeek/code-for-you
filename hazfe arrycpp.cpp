#include <iostream>
#include<conio.h>
using namespace std;
 
void del(int[],int&,int);
void insert(int[],int);
void print(int[],int);
main()
{
int n,key;
int* a;
cout<<"enter n:";
cin>>n;
a=new int[n];
insert(a,n);
cout<<"\n\n"<<"enter a key:";
cin>>key;
del(a,n,key);
print(a,n);
getch();
return 0;
}

void insert(int a[],int n)
{
cout<<"\n\n";
for(int i=0;i<n;i++)
{
cout<<"a["<<i<<"]=";
cin>>a[i];
}//end of for
}//end of insert()

void del(int a[],int& n,int key)
{
for(int i=0;i<n;i++)
{
if(a[i]==key)
{
for(int j=i;j<n-1;j++)
a[j]=a[j+1];
--n;
return;
}//end of if
}//end of for
cout<<"\n\n"<<"can not found key in array.";
}//end of del()

void print(int a[],int n)
{
cout<<"\n\n"<<"a:\n\n";
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
}//end of print()
