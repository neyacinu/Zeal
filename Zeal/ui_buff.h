#pragma once
#include "hook_wrapper.h"
#include "memory.h"
#include "EqUI.h"
#include "ZealSettings.h"

struct TickTime {
	int hours;
	int minutes;
	int seconds;
};


class ui_buff
{
public:
	ui_buff(class ZealService* zeal, class UIManager* mgr);
	~ui_buff();
	ZealSetting<bool> BuffTimers = { true, "Zeal", "Bufftimers", false };
	ZealSetting<bool> RecastTimers = { false, "Zeal", "Recasttimers", false };
	ZealSetting<bool> RecastTimersLeftAlign = { false, "Zeal", "RecasttimersLeftAlign", false };
private:

	void InitUI();
	void Deactivate();
	void CleanUI();
	UIManager* ui;
};

