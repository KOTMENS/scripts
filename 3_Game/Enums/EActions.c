enum EActions
{
	GET_TOTAL_WEIGHT,
	GET_TOTAL_WEIGHT_RECALC,
	GET_PLAYER_WEIGHT,
	GET_PLAYER_WEIGHT_RECALC,
	SET_MAX_QUANTITY,
	ADD_QUANTITY,
	REMOVE_QUANTITY,
	SET_QUANTITY_0,
	INJECT_STRING_RABBIT,
	INJECT_STRING_TIGER,
	ADD_HEALTH,
	REMOVE_HEALTH,
	DESTROY_HEALTH,
	WATCH_ITEM,
	WATCH_PLAYER,
	USER_ACTION,
	ADD_TEMPERATURE,
	REMOVE_TEMPERATURE,
	FLIP_FROZEN,
	ADD_WETNESS,
	REMOVE_WETNESS,
	LIQUIDTYPE_UP,
	LIQUIDTYPE_DOWN,
	PRINT_BULLETS,
	SPIN,
	FOOD_STAGE_PREV,
	FOOD_STAGE_NEXT,
	MAKE_SPECIAL,
	DELETE,
	SEPARATOR,
	ACTIVATE_ENTITY,
	DEACTIVATE_ENTITY,
	FIX_ENTITY,
	BROOM_BURN_VERY_SHORT,
	BROOM_BURN_SHORT,
	BROOM_BURN_MEDIUM,
	BROOM_BURN_LONG,
	ALARM_SET_AHEAD,
	CAR_HORN_START_LONG,
	CAR_HORN_START_SHORT,
	CAR_HORN_STOP,
	CAR_FUEL_FULL,
	CAR_FUEL_EMPTY,
	CAR_FUEL_INCREASE,
	CAR_FUEL_DECREASE,
	CAR_COOLANT_FULL,
	CAR_COOLANT_EMPTY,
	CAR_COOLANT_INCREASE,
	CAR_COOLANT_DECREASE,
	GENERIC_FUEL_FULL,
	GENERIC_FUEL_EMPTY,
	GENERIC_FUEL_INCREASE,
	GENERIC_FUEL_DECREASE,
	BUILDING_OUTPUT_LOG,
	BUILDING_PLAY_DOOR_SOUND,
	BUILDING_OPEN_DOOR,
	BUILDING_CLOSE_DOOR,
	BUILDING_LOCK_DOOR,
	BUILDING_UNLOCK_DOOR,
	SPECIALIZED_ACTION1,
	SPECIALIZED_ACTION2,
	SPECIALIZED_ACTION3,
	SPECIALIZED_ACTION4,
	SPECIALIZED_ACTION5,
	SPECIALIZED_ACTION6,
	
	//<----add new individual types above this line
	
	
	DEBUG_AGENTS_RANGE_INJECT_START = 100,
	DEBUG_AGENTS_RANGE_INJECT_END = 199,
	
	DEBUG_AGENTS_RANGE_REMOVE_START = 200,
	DEBUG_AGENTS_RANGE_REMOVE_END = 299,
	
	DEBUG_ITEM_WATCH_BUTTON_RANGE_START = 300,
	DEBUG_ITEM_WATCH_BUTTON_RANGE_END = 309,
	
	PLAYER_BOT_INTERNAL_START = 400,
	PLAYER_BOT_STOP_CURRENT,
	
	PLAYER_BOT_START = 410,
	PLAYER_BOT_RANDOMIZE_STANCE,
	PLAYER_BOT_SPAM_USER_ACTIONS,
	PLAYER_BOT_TEST_ATTACH_AND_DROP_CYCLE,
	PLAYER_BOT_TEST_ITEM_MOVE_BACK_AND_FORTH,
	PLAYER_BOT_TEST_SPAWN_OPEN,
	PLAYER_BOT_TEST_SPAWN_OPEN_DESTROY,
	PLAYER_BOT_TEST_SPAWN_OPEN_EAT,
	PLAYER_BOT_TEST_SWAP_G2H,
	PLAYER_BOT_TEST_SWAP_C2H,
	PLAYER_BOT_TEST_SWAP_INTERNAL,
	PLAYER_BOT_END = 499,
	
	RECIPES_RANGE_START = 1000,
	RECIPES_RANGE_END = 3000,
}