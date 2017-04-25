#include "factoryMethod.h"
#include "simpleFactory.h"
#include "global.h"
#include "AbstractFactory.h"
int main()
{
	//showFactoryMethod();
	//showSimpleFactory();
	showAbstractFactory();
	return 0;
}
int showFactoryMethod()
{
	FactoryA fa;
	FactoryB fb;
	singleCore* sa=fa.CreateSingleCore();
	singleCore* sb=fb.CreateSingleCore();
	//(*sa).show();
	//(*sb).show();
	sa->show();
	sb->show();
	return 0;
}
int showSimpleFactory()
{
	Factory1 fa;
	SingleCore1* sa=fa.creatSingleCore(CORE_A);
	SingleCore1* sb=fa.creatSingleCore(CORE_B);
	(*sa).show();
	(*sb).show();
	return 0;
}
int showAbstractFactory()
{
	CoreFactory* f_a=new FactoryA2();//管理 a类型号 的工厂
	CoreFactory* f_b=new FactoryB2(); //管理 b类型号 的工厂
	SingleCore2* s_a=f_a->CreateSingleCore();//singlecore a
	MultiCore* m_a=f_a->createMultiCore();// multicore A
	SingleCore2* s_b=f_b->CreateSingleCore();//singlecore B
	MultiCore* m_b=f_b->createMultiCore();//multicore B
	//s_a->show();
	(*s_a).show();
	s_b->show();
	m_a->show();
	m_b->show();
	return 0;
}




