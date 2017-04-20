#include <iostream>

class singleCore
{
public:
	virtual void show()=0;
};
class singleCoreA:public singleCore
{
public:
	void show(){std::cout<<"Single Core A"<<std::endl;}
};
class singleCoreB:public singleCore
{
public:
	void show(){std::cout<<"Single Core B"<<std::endl;}
};

class Factory
{
public:
	virtual singleCore* CreateSingleCore()=0;
};
class FactoryA:public Factory
{
public:
	singleCoreA* CreateSingleCore(){return new singleCoreA;}
};
class FactoryB:public Factory
{
public:
	singleCoreB* CreateSingleCore(){return new singleCoreB;}
};