/*
 * GPlayer.h
 *
 *  Created on: 17.06.2012
 *      Author: javamain
 */

#ifndef GPLAYER_H_
#define GPLAYER_H_


#include <vector>
#include <list>
#include <map>
#include "GObject.h"
#include "gametypedefs.h"
#include "GMap.h"


using namespace std;
using namespace alex_game;




namespace alex_game{

class Skill;
class SkillManager;
class PlayerManager;
class PlayerListManager;




typedef Skill 							PlayerSkill;
typedef vector<Object> 				Inventar;
typedef vector<Object> 				BodyInventar;

typedef int 							Score;
typedef int 							Expirienc;
typedef int 							Level;
typedef int 							Achivment;
typedef list<Achivment> 				AchivmentList;
typedef Dinamic_ptr 					SkillValue;
typedef Name 							SkillName;
typedef list<PlayerManager> 			PlayerManagerList;
typedef map<SkillName, SkillValue> 	SkillDictionary;



/*
 *
 */

class Skill
{
public:
	SkillDictionary skill_dictionary;
	Skill();
};

/*
 *
 */
class SkillManager
{

public:

	SkillManager();
	SkillValue GetSkill(SkillName skill_name);
	None SetSkill(SkillName skill_name, SkillValue skill_valie);
	Skill* p_skill;
};

/*
 *
 */
class Player
{
public:
	Player();

	Id 				id;
	Name 			name;
	BodyInventar 	body_inventar;
	Inventar 		inventar;
	AchivmentList 	achivmentlist;

	Coordinat		coordinat;
	SkillManager  	skill_manager;
};
/*
 *
 */
class PlayerManager
{

public:
	PlayerManager();
	Player CreateNewPlayer();
	Player* p_player;
};

/*
 *
 */

class PlayerListManager{
public:
	PlayerListManager();

	PlayerManager GetPlayerManager();
	PlayerManagerList player_list;
};

class abc{};
};

#endif /* GPLAYER_H_ */
