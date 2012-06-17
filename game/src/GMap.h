/*
 * GMap.h
 *
 *  Created on: 17.06.2012
 *      Author: javamain
 */

#ifndef GMAP_h_
#define GMAP_h_

#include <vector>
#include <string>
#include "gametypedefs.h"

using namespace std;
using namespace alex_game;

namespace alex_game{

class React;
class Map;

typedef React Sector;
typedef vector<vector<Sector> > Playces;
typedef Point Cord;
typedef vector<alex_game::Map*> MapList;
typedef Id MapId;

class Map
{
public:
	MapId id;
	Hieght hieght;
	Width width;
	Name name;
	Playces gplayces;
	Map();
	Map(MapId i, Hieght h, Width w, Name n);
};

/*
 * класс квадрата , у него есть координаты, высота, ширина
 */
class React
{
public:
	Cord cord;
	Hieght hieght;
	Width width;
	React();
	React(Cord c, Hieght hieght, Width width);
};

/*
 *
 */
class Coordinat
{
public:
	Map* map;
	Position positipn;
};


/*
 * класс по управлению картой
 **/
class MapManager
{
	MapList maplist;
public:
	MapManager();
	None LoadMapFromFile();
	Map GetMap( MapId );

};

};
#endif /* GMAP_h_ */
