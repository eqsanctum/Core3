GeneratePatrol = {}

function GeneratePatrol:checkConditions(pAgent)
	return true
end

function GeneratePatrol:start(pAgent)
	return 0
end

function GeneratePatrol:terminate(pAgent)
	return 0
end

function GeneratePatrol:doAction(pAgent)
	if (pAgent ~= nil) then
		local agent = LuaAiAgent(pAgent)
		if (agent:generatePatrol(5, 10)) then
			return BEHAVIOR_SUCCESS
		else
			return BEHAVIOR_FAILURE
		end
	end
	return BEHAVIOR_FAILURE
end

addAiBehavior("GeneratePatrol")