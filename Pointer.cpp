#include <iostream>
using namespace std;
void recieverCHAR(int *pData)
{
	cout<<"recieverCHAR : "<<(char*)pData<<endl; 		//char
}
void recieverNUM(int *pData)
{
	cout<<"recieverNUM : "<<*pData<<endl; 					//num
}
int main()
{
	char *ptr = "KOMGRICH";
	cout<<"*ptr : "<<*ptr<<endl; 	//output = K
	cout<<" ptr : "<<ptr<<endl; 	//output = KOMGRICH
	char buff[] = "Tranganpaiboon";
	int Value = 10;
	int *iptr = &Value;
	cout<<*iptr<<endl;				//output = 10
	recieverCHAR((int*)buff); 			//char
	recieverCHAR((int*)ptr); 			//char
	
	recieverNUM((int*)iptr); 			//num ใช้แบบนี้ได้
	recieverNUM(&Value);				//same top แบบนี้ก็ได้ เหมือนกัน		
	
}
