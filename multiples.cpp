#include<iostream>


using namespace std;

int main()
{
	//get inputs
	int input_1, input_2,multiple1,multiple2,frequency,f;
	cout<<"Enter the first number : ";
	cin>>input_1;
	cout<<"Enter the second number : ";
	cin>>input_2;
	f = 0;
	cout<<"Enter the number of common multiples : ";
	cin>>frequency;
	//iterate multiples of input_1
	for(int i=1;i<=1000;i++){
		multiple1 = i * input_1;
		//iterate multiple of input_2
		for(int j=1;j<=1000;j++){
			multiple2 = j * input_2;
			//compare multiples of input_1 and input_2 
			if(multiple1 == multiple2){
				cout<<multiple1<<endl;
				f = f + 1;
				//exit from loop
				if(f == frequency){
					exit(0);
				}
			}

		}	
	}	
	return 0;


}

