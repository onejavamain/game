/*
 * GController.h
 *
 *  Created on: 17.06.2012
 *      Author: javamain
 */

#ifndef GCONTROLLER_H_
#define GCONTROLLER_H_

#include "gametypedefs.h"
#include "GMap.h"
#include "GPlayer.h"

using namespace alex_game;

namespace alex_game{


typedef int ControllerState;
class PlayerListManager;
/*
 *
 */
class GameController
{
	ControllerState controllerstate;
	MapManager map_manager;
	PlayerListManager players_manger_list;
public:

	GameController();
	None InitController();
	None GraphicalJob();
	None MouseKeybordJob();
	None PhisicsJob();
	None start();
	Bool IsEndControllerCicle();

};




};



#endif /* GCONTROLLER_H_ */
