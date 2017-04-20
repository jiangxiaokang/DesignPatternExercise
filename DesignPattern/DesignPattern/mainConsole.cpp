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
	singleCoreA* sa=fa.CreateSingleCore();
	singleCoreB* sb=fb.CreateSingleCore();
	(*sa).show();
	(*sb).show();
	return 0;
}
int showSimpleFactory()
{
	Factory fa;
	SingleCore* sa=fa.creatSingleCore(CORE_A);
	SingleCore* sb=fa.creatSingleCore(CORE_B);
	(*sa).show();
	(*sb).show();
	return 0;
}





