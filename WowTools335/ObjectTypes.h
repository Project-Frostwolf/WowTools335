#pragma once
enum ObjectTypes
{
	TYPEMASK_NONE = 0x0,
	TYPEMASK_OBJECT = 0x1,
	TYPEMASK_ITEM = 0x2,
	TYPEMASK_CONTAINER = 0x4,
	TYPEMASK_UNIT = 0x8,
	TYPEMASK_PLAYER = 0x10,
	TYPEMASK_GAMEOBJECT = 0x20,
	TYPEMASK_DYNAMICOBJECT = 0x40,
	TYPEMASK_CORPSE = 0x80,
};