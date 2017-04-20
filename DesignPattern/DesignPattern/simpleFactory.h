#include <iostream>
enum CoreType{
	CORE_A,
	CORE_B
};

class SingleCore{
public:
	virtual void show()=0{};
};
class SingleCoreA:public SingleCore
{
	void show()
	{
		std::cout<<"core A"<<std::endl;
	}
};
class SingleCoreB:public SingleCore
{
	void show()
	{
		std::cout<<"core B"<<std::endl;
	}
};
class Factory{
public:
	SingleCore* creatSingleCore(CoreType c_type){
		if(c_type==CORE_A){
			return new SingleCoreA();
		}
		else if(c_type==CORE_B){
			return new SingleCoreB();
		}
		else 
			return NULL;
	}
};