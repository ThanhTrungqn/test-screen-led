#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include "main.h"

extern uint16_t value_update;

Model::Model() : modelListener(0)
{
}

void Model::tick()
{
	UpdateValue();
}

void Model::UpdateValue (){
	//value_update ++;
	modelListener->UpdateValue(value_update);
}
