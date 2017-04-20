#include <iostream>
enum CoreType{
	CORE_A,
	CORE_B
};

class SingleCore1{
public:
	virtual void show()=0{};
};
class SingleCoreA1:public SingleCore1
{
	void show()
	{
		std::cout<<"core A"<<std::endl;
	}
};
class SingleCoreB1:public SingleCore1
{
	void show()
	{
		std::cout<<"core B"<<std::endl;
	}
};
class Factory1{
public:
	SingleCore1* creatSingleCore(CoreType c_type){
		if(c_type==CORE_A){
			return new SingleCoreA1();
		}
		else if(c_type==CORE_B){
			return new SingleCoreB1();
		}
		else 
			return NULL;
	}
};