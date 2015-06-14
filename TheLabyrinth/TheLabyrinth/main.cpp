//
//  main.cpp
//  TheLabyrinth
//
//  Created by Alexander Eisgruber on 14.06.15.
//  Copyright (c) 2015 Alexander Eisgruber. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>
#include "map.h"
using namespace std;

string ReadMapFile(string filePath)
{
    string map;
    ifstream mapFile(filePath);
    if (mapFile.is_open())
    {
        string nextLine;
        while(getline(mapFile, nextLine))
        {
            map.append(nextLine);
            //cout << line << '\n';
        }
        mapFile.close();
        
        return map;
    }
    
    else cout << "Unable to open file";
    
    return NULL;
}

int main ()
{
    Map map = *new Map(ReadMapFile("/Users/aei/Temp/map.txt"));
    
    return 0;
}

