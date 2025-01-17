class ActionInteractBaseCB : ActionBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAInteract;
	}
	
	override void InitActionComponent()
	{
#ifdef ENABLE_LOGGING
		if ( LogManager.IsActionLogEnable() )
		{
			Debug.ActionLog("n/a", m_ActionData.m_Action.ToString() , "n/a", "InitActionComponent", m_ActionData.m_Player.ToString() );
		}
#endif
		m_Interrupted = false;
		m_Canceled = false;

		CreateActionComponent();
		if ( m_ActionData.m_ActionComponent ) 
		{
			m_ActionData.m_ActionComponent.Init(m_ActionData);
		}
		m_ActionData.m_State = UA_PROCESSING;
		RegisterAnimationEvent("ActionExec", UA_ANIM_EVENT);
		m_SoundObject = m_ActionData.m_Action.PlayActionSound(m_ActionData.m_Player);
	}	
	
	override void EndActionComponent()
	{
		SetCommand(DayZPlayerConstants.CMD_ACTIONINT_END);
		m_ActionData.m_State = UA_FINISHED;
	}	
};



class ActionInteractBase : AnimatedActionBase
{
	//deprecated
	string m_HUDCursorIcon;
	
	void ActionInteractBase() 
	{
		m_CallbackClass = ActionInteractBaseCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}
	
	//deprecated
	string GetHUDCursorIcon()
	{
		return "";
	}
	
	override typename GetInputType()
	{
		return InteractActionInput;
	}

	override int GetActionCategory()
	{
		return AC_INTERACT;
	}
	
	override bool UseMainItem()
	{
		return false;
	}
	
	override bool MainItemAlwaysInHands()
	{
		return false;
	}	
};