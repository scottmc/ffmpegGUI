/*
 * Copyright 2003, Zach Dykstra. All rights reserved.
 * Distributed under the terms of the MIT License.
 */

/* 
 	ffgui-application.h , 1/06/03
 	Zach Dykstra
*/

#include "MApplication.h"


class ffguiapp : public MApplication
{
	public: ffguiapp(char *);
			virtual void MessageReceived(BMessage*);
};

