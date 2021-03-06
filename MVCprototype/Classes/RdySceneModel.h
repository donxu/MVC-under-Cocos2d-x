//
//  RdySceneModel.h
//  MVCprototype
//
//  Created by Shuaiying Hou on 12-5-9.
//  Copyright (c) 2012年 Pinidea. All rights reserved.
//

#ifndef MVCprototype_RdySceneModel_h
#define MVCprototype_RdySceneModel_h

#include "RdySceneModelDelegate.h"
#include "cocos2d.h"

USING_NS_CC;

class RdySceneViewDelegate;

class RdySceneModel : public CCObject
{
public:
  static RdySceneModel* model();
  void init(RdySceneModelDelegate* pDelegate);
  void update();
  
private:
  RdySceneModelDelegate* ObserverObj_;
};

#endif
