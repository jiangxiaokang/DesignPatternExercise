#include <iostream>
class SingleCore2
{
public:
	virtual void show()=0;
};
class SingleCore2A:public SingleCore2
{
public:
	void show(){std::cout<<"single core A"<<std::endl;}
};
class SingleCore2B:public SingleCore2
{
public:
	void show(){std::cout<<"single core B"<<std::endl;}
};
class MultiCore
{
public:
	virtual void show()=0;
};
class MultiCoreA:public MultiCore
{
public:
	void show(){std::cout<<"multi core A"<<std::endl;}
};
class MultiCoreB:public MultiCore
{
public:
	void show(){std::cout<<"multi core B"<<std::endl;}
};

//factory
class CoreFactory
{
public:
	virtual SingleCore2* CreateSingleCore()=0;
	virtual MultiCore*	createMultiCore()=0;
};
class FactoryA2:public CoreFactory
{
public:
	SingleCore2* CreateSingleCore(){
		return new SingleCore2A();
	}
	MultiCore* createMultiCore(){
		return new MultiCoreA();
	}
};
class FactoryB2:public CoreFactory
{
public:
	SingleCore2* CreateSingleCore(){
		return new SingleCore2B();
	}
	MultiCore* createMultiCore()
	{
		return new MultiCoreB();
	}
};