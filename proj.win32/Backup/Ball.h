#ifndef __BALL_H__
#define __BALL_H__

#include "cocos2d.h"
#include <stdio.h>

class Ball //: public cocos2d::Layer
{
public:
	Ball();

	static Ball* sharedBall();
	void Update(float dt);

	void SetBall(cocos2d::Layer *layer);

	void AddToAcceleration(int speed);
	void ResetAcceleration();

protected:
	cocos2d::CCArray *_balls;

private:
	cocos2d::Size WinSize;
	cocos2d::Vec2 origin;

	cocos2d::Vec2 ballPos;
	cocos2d::Vec2 force;


	static Ball* instance;

	int acceleration;
};

#endif //__BALL_H__