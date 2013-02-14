//
//  GameLayer.cpp
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-13.
//
//

#include "GameLayer.h"
GameLayer* GameLayer::create()
{
    GameLayer* layer=new GameLayer();
    if (layer&&layer->init()) {
        return layer;
    }
    return NULL;
}

bool GameLayer::init()
{
    if (!CCLayer::init()) {
        return false;
    }
    return true;
}

bool GameLayer::loadMap()
{
    //1.从内存中载入背景图片作为地图
    //2.载入初始的三个地图块（门厅，地下，台阶
}