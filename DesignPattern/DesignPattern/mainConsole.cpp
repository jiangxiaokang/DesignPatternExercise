#include "factoryMethod.h"
#include "simpleFactory.h"
#include "global.h"
int main()
{
	showFactoryMethod();
	showSimpleFactory();
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





