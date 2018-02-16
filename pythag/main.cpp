#include <iostream>
#include <cmath>

using namespace std;



int main() 
{
	double dblALength = 0;
	double dblBLength = 0;
	double dblCLength = 0;
	double dblALenSquare = 0;
	double dblBLenSquare = 0;
	double dblCLenSquare = 0;
	int base = 2;
	
	cout << "enter length of the A side" << endl;
	cin >> dblALength;
	cout << "enter length of the B side" << endl;
	cin >> dblBLength;
	
	dblALenSquare =  pow(dblALength,base);
	dblBLenSquare =  pow(dblBLength,base);
	dblCLenSquare = dblALenSquare + dblBLenSquare;
	dblCLength = sqrt(dblCLenSquare);

	

	
	
	
	cout << "Your C length is " << dblCLength << " units" <<endl; 
	return 0;
}
