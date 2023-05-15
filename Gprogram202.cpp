#include<iostream>
using namespace std;

class Demo
{
	public:
   //Addition@ii
   
	int Addition(int ino1 ,int ino2)
	{
		int ans =0;
		ans = ino1+ino2 ;
		return ans;
	}
		int Addition(int ino1 ,int ino2,int no3)
	{
		int ans =0;
		ans = ino1+ino2 +no3 ;
		return ans;
	}

	int Addition(int ino1 ,int ino2,int no3 ,int no4)
	{
		int ans =0;
		ans = ino1+ino2 +no3 +no4;
		return ans;
	}

};
int main()
{
	Demo obj;
	int a=10,b= 11,c=31,d=12;
	int iRet =0;

	iRet = obj.Addition(10,11);  // addition(&obj)
	cout<<iRet;

	iRet= obj.Addition(11,1,2);
	cout<<iRet;

	iRet = obj.Addition(4,5,4,1);
	cout<<iRet;

	


	return 0;
}