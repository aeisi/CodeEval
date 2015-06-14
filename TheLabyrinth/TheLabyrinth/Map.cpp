//
//  Map.cpp
//  TheLabyrinth
//
//  Created by Alexander Eisgruber on 14.06.15.
//  Copyright (c) 2015 Alexander Eisgruber. All rights reserved.
//

#include "Map.h"

Map::Map(string mapString)
{
    map = *new string(mapString);
}