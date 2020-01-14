#ifndef  _APP_DELEGATE_H_
#define  _APP_DELEGATE_H_

#pragma once
#include "cocos2d.h"

namespace saraApp
{
	/**
		@bref アプリケーションクラス
	*/
	class MyApp :private cocos2d::Application
	{
	public:
		MyApp();
		virtual ~MyApp();

		virtual void initGLContextAttrs();

		/**
		@brief    Implement Director and Scene init code here.
		@return true    Initialize success, app continue.
		@return false   Initialize failed, app terminate.
		*/
		virtual bool applicationDidFinishLaunching();

		/**
		@brief  Called when the application moves to the background
		@param  the pointer of the application
		*/
		virtual void applicationDidEnterBackground();

		/**
		@brief  Called when the application reenters the foreground
		@param  the pointer of the application
		*/
		virtual void applicationWillEnterForeground();
	};
}
#endif