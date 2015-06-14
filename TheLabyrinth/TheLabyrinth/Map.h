//
//  Map.h
//  TheLabyrinth
//
//  Created by Alexander Eisgruber on 14.06.15.
//  Copyright (c) 2015 Alexander Eisgruber. All rights reserved.
//

#ifndef __TheLabyrinth__Map__
#define __TheLabyrinth__Map__

#include <stdio.h>
#include <string>
using namespace std;

class Map
{
private:
    string map = "";
    
public:
    Map(string mapString);
};

#endif /* defined(__TheLabyrinth__Map__) */
