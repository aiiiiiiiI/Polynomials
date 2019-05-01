#include<iostream>
using namespace std;
int main (){
	int x=1;
	int power=123%101;
	int a[10]={1,0,0,1,0,1,1,1,1,1};
	for(int i=0;i<10;i++){
		if(a[i]==1){
			x=x*power%101;
		}
		power=power*power%101;
		cout<<"x="<<x<<"   "<<"pow="<<power<<endl;
	}
} 
