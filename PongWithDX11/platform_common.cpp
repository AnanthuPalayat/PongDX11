struct Button_State
{
	bool isDown;
	bool changed;
};

enum {
	BUTTON_UP,
	BUTTON_DOWN,
	BUTTON_LEFT,
	BUTTON_RIGHT,

	BUTTON_COUNT,//Should be the last item
};

struct  Input
{
	Button_State buttons[BUTTON_COUNT];

};