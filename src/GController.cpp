/*
 * GController.cpp
 *
 *  Created on: 17.06.2012
 *      Author: javamain
 */


#include "GController.h"






GameController::GameController() {
}

None GameController::GraphicalJob() {
}

None GameController::MouseKeybordJob() {
}

None GameController::PhisicsJob() {
}


None GameController::InitController() {
}

None GameController::start() {
	this->InitController();
	for(;1;)
	{
		this->MouseKeybordJob();
		this->PhisicsJob();
		this->GraphicalJob();
		// выход из цикла
		if( this->IsEndControllerCicle() ) break;
	}

}

Bool GameController::IsEndControllerCicle() {

	return false;
}

