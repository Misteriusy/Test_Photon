// EasyFirebase - unreal engine 4 firebase plugin Copyright (C) 2020 feixuwu <feixuwu@outlook.com> All Rights Reserved.


#include "BasePlayerController.h"


void ABasePlayerController::TravelToMap(const FString& URL)
{
	ClientTravel(URL, TRAVEL_Relative, false, FGuid());
}

