#include "MyApp.h"

#if USE_AUDIO_ENGINE
#include "audio/include/AudioEngine.h"
using namespace cocos2d::experimental;
#endif

USING_NS_CC;

//更級のコード
using namespace saraApp;

static cocos2d::Size designResolutionSize = cocos2d::Size(480, 320);
static cocos2d::Size smallResolutionSize = cocos2d::Size(480, 320);
static cocos2d::Size mediumResolutionSize = cocos2d::Size(1024, 768);
static cocos2d::Size largeResolutionSize = cocos2d::Size(2048, 1536);

MyApp::MyApp()
{

}

MyApp::~MyApp()
{

}

void MyApp::initGLContextAttrs()
{

}

bool MyApp::applicationDidFinishLaunching()
{
	return false;
}