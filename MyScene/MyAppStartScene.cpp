#pragma once
#include "MyAppStartScene.h"

using namespace saraApp;
using namespace cocos2d;

Scene* MyAppStartScene::createScene()
{
	return MyAppStartScene::create();
}

// Print useful error message instead of segfaulting when files are not there.
static void problemLoading(const char* filename)
{
	printf("Error while loading: %s\n", filename);
	printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}

bool MyAppStartScene::init()
{
	if (!Scene::init())
		return false;

	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();
}