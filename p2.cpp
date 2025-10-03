#include<iostream>
using namespace std;

class Math{
	private:
		int a,b;
		
	public:
		void setvalues(int x,int y){
			a=x;
			b=y;
	}
	
	int add(){
		return a+b;
	}
	
		
	 int Subtract(){
		return a-b;
	}
	
	int multiply(){
		return a*b;
	}
};

int main(){
	Math obj;
	
	int x,y;
	
	cout<<"enter two numbers: ";
	cin>>x>>y;
	obj.setvalues(x,y);
	cout<<"Addition: "<<obj.add()<<endl;
	cout<<"Subtraction: "<<obj.Subtract()<<endl;
	cout<<"multiplication: "<<obj.multiply()<<endl;
	return 0;
}
