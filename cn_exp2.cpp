
//Implementation of framing methods -Bit Stuffing, Character Count, Character Stuffing.
#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;
void char_count() 
{ 
   int n, a[100], j=0,k,end,start=0; 
   string str; 
   cout<<"Enter the string data:"; 
   cin>>str; 
   n=str.length(); 
   for(int i=0;i<n;i++) 
   { 
     a[i]=int(str[i])-48; 
   } 
   int i=0,count=0; 
   end=a[0]; 
   while(i<n) 
   { 
     count++; 
     cout<<count<<"th frame contain "<<a[j]<<" characters:"<<endl; 
     for(j=start;j<end;j++) 
     { 
       cout<<a[j]<<" "; 
     } 
     cout<<endl; 
     start=j; 
     end=end+a[start]; 
     i=start; 
   } 
}
void char_stuff()
{
   int i=0,j=0,n;
   char a1[50],a2[50]; 
   cout<<"Enter string:\n"; 
   cin>>a1; 
   n=strlen(a1); 
   a2[0]='d'; 
   a2[1]='l'; 
   a2[2]='e'; 
   a2[3]='s'; 
   a2[4]='t'; 
   a2[5]='x'; 
   j=6; 
   while(i<n)
   {
       
        if(a1[i]=='d' && a1[i+1]=='l' && a1[i+2]=='e') 
        { 
            a2[j]='d'; 
            a2[j+1]='l'; 
            a2[j+2]='e'; 
            j=j+3; 
        } 
        a2[j]=a1[i]; 
        i++; 
        j++; 
    } 
    a2[j]='d'; 
    a2[j+1]='l'; 
    a2[j+2]='e'; 
    a2[j+3]='e'; 
    a2[j+4]='t'; 
    a2[j+5]='x'; 
    a2[j+6]='\0'; 
    cout<<"\nAfter stuffing:\n"; 
    cout<<a2; 
    cout<<endl;
}
void bit_stuff()
{
	int count=1,i,j,k,n;
	cout<<"Enter number of bits:";
	cin>>n;
    int arr1[50],arr2[50];
    cout<<"Enter bits:";
    for(i=0;i<n;i++)
    cin>>arr1[i];
    cout<<"After Bit stuffing: ";
    for(i=0,j=0;i<n;i++)
    {
        if(arr1[i]==1) 
        { 
           arr2[j]=arr1[i]; 
           for(k=i+1;k<n;k++) 
           { 
                if(count<5)
                {
                  j++; 
                  arr2[j]=arr1[k]; 
                  count++; 
                  if(count==5) 
                  { 
                    j++; 
                    arr2[j]=0;
                  } 
                  i=k; 
                }
            } 
        } 
        else 
        { 
           arr2[j]=arr1[i]; 
        } 
        j++; 
    } 
   for(i=0;i<j;i++) 
   cout<<arr2[i]; 
}
int main()
{
	int choice=0;
	cout<<"****MENU****\n";
	cout<<"1.Character Count\n2.Character Stuffing\n3.Bit Stuffing\n4.Exit";
	while(choice!=4)
	{
	    cout<<"\nEnter a choice number:";
	    cin>>choice;
	    switch(choice)
        {
            case 1:
                    char_count();
                    break;
 
            case 2:
                    char_stuff();
                    break;
             
            case 3:
                    bit_stuff();
                    break;
            case 4:
                	cout<<"\nExit";
        }
    }
    return 0;
}

