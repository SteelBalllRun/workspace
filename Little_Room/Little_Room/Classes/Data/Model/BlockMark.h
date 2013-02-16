//
//  BlockMark.h
//  Little_Room
//
//  Created by 舒 方昊 on 13-2-15.
//
//

#ifndef __Little_Room__BlockMark__
#define __Little_Room__BlockMark__

#include <iostream>
#include "cocos2d.h"
#include "BlockModel.h"
using namespace cocos2d;
class BlockMark:public cocos2d:: CCObject
{
public:
    int mark_id;
    int mark_type;                  //1.楼上 2.地面 4.地下 （取值范围是1~7
    int detail_type;
    CCString* mark_name;
    Position mark_ext;               //传送型的标记就能用这个标记来传送到指定的房间
    int mark_value;                 //障碍型的标记就用这个值来设置标记对能力鉴定的削弱影响
    
    
    inline Position getPortalExt(int mark_type){return mark_ext;}
    inline void setPortalExt(int mark_type,Position _mark_ext){mark_ext=_mark_ext;}
    
};
#endif /* defined(__Little_Room__BlockMark__) */
