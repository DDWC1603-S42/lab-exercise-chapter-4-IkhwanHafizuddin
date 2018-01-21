//Check whether a number is prime or not
//finish up this program, properly, and nicely.

#include <iostream>
using namespace std;

int main()
{

	int i=1,u,sum=0;
	bool isprime = true;
	cout<<"Enter a positive integer: "<<endl;
	cin>>u;
	

	for(i=2; i<=u/2;++i){
		if(i%u==0){
				isprime = false;
				break;
	}
}

		if(isprime){
			
			cout<<u<<" is a prime number. "<<endl;
	}else{
		cout<<u<<" is not a prime number.";
	}
	

}
