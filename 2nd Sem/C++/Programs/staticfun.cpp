#include <iostream>
using namespace std;
class sample
{
	static int index;
public:
	sample()
	{
		index++;
	}
	static int display()  //static function
	{
		return index;
	}
};
int sample :: index=0;

int main()
{
	cout<<"now there are "<<sample::display()<<"objects"<<endl;
	sample s1, s2;
	cout<<"now there are "<<sample::display()<<"objects"<<endl;
	sample s3;
	cout<<"now there are "<<sample::display()<<"objects"<<endl;

}