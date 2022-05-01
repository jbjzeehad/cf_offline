#include<bits/stdc++.h>
using namespace std;
 
 int main(){
 	int y,a[4];
 	cin>>y;
 	case '0' :
 		y=y+1;
 	for (int i = 0,j=0; i < 4,j<4; i++,j++)
 	{
 		a[i]=y%10;
 		a[j]=a[i];
 	}
 	for (int i = 0; i < 4; i++){
 		for (int j = i+1; j < 4; j++)
 		{
 			if (a[i]==a[j])
 			{
 				case = 0;

 			}
 			
 		}
 		
 	}
 	
 	cout<<y<<endl;

 } 