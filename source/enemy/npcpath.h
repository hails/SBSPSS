/*=========================================================================

	npcpath.h

	Author:		CRB
	Created: 
	Project:	Spongebob
	Purpose: 

	Copyright (c) 2000 Climax Development Ltd

===========================================================================*/

#ifndef __ENEMY_NCPPATH_H__
#define __ENEMY_NCPPATH_H__

class CNpcWaypoint
{
public:
	DVECTOR	pos;

	bool	isPointNear( DVECTOR testPos );
};

enum NPC_PATH_TYPE
{
	SINGLE_USE_PATH = 0,
	REPEATING_PATH = 1,
	PONG_PATH = 2,
};

class CNpcPath
{
	enum
	{
		NPC_MAX_WAYPOINTS = 4,
	};

private:
	CNpcWaypoint	waypoint[NPC_MAX_WAYPOINTS];
	NPC_PATH_TYPE	pathType;
	u8				currentWaypoint;
	u8				waypointCount;
	bool			reversePath;

public:
	void			initPath();
	void			addWaypoint( DVECTOR newPos );
	void			setPathType( NPC_PATH_TYPE newPathType );
	bool			incPath();
	void			think( DVECTOR currentPos );
};

#endif