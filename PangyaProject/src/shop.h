#pragma once
#include "typedef.h"

#define MAX_BUY 10

class pc;

class ShopSystem {
private:
	void send_msg(pc* pc, uint32 code, bool success = false);
public:
	void pc_entershop(pc* pc);
	void pc_buyitem(pc* pc);
	void pc_buyitem_normal(pc* pc);
	void pc_buyitem_rent(pc* pc);
};

enum {
	BUY_SUCCESS = 0,
	BUY_FAIL = 1,
	PANG_NOTENOUGHT = 2,
	PASSWORD_WRONG = 3,
	ALREADY_HAVEITEM = 4,
	OUT_OF_TIME = 11,
	CANNOT_BUY_ITEM1 = 18,
	CANNOT_BUY_ITEM = 19,
	TOO_MUCH_ITEM = 21,
	COOKIE_NOTENOUGHT = 23,
	ITEM_EXPIRED = 35,
	ITEM_CANNOT_PURCHASE = 36,
	LEVEL_NOTENOUGHT = 44
};

enum {
	BUY_NORMAL = 0,
	BUY_RENT = 1
};

struct buy_data {
	uint32 un1;
	uint32 item_typeid;
	uint16 total_day;
	uint16 un2;
	uint32 amount;
	uint32 pang_price;
	uint32 cookie_price;
};

extern ShopSystem* shop;