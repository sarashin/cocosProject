#pragma once
#ifndef __START_SCENE_H__
#define __START_SCENE_H__

#include "cocos2d.h"

namespace saraApp
{
	class MyAppStartScene : private cocos2d::Scene
	{
	public:
		static cocos2d::Scene* createScene();

		virtual bool init();

		// a selector callback
		void menuCloseCallback(cocos2d::Ref* pSender);

		// implement the "static create()" method manually
		CREATE_FUNC(MyAppStartScene);
	};
};
#endif