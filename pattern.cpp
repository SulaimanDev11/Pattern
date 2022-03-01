#include<iostream>
#include<windows.h>
using namespace std;
main()
{
	system("color 4E");
	int i,j,k,no=1;
	for(i=0;i<=4;i++){
		for(j=0;j<(4-i);j++){
			cout<<"   ";
		}
		for(k=0;k<=i;k++){
			cout<<"  "<<no<<"   ";
			no=no*(i-k)/(k+1);
		}
		no++;
	cout<<"\n\n";
	}
	return 0;
}
