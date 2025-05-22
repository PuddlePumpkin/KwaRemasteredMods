## Damage dealing: 
VPairedPawn:OnCombatHitDealt(FPairedOblivionHitEvent)

## Gamesettings - Magicka
Setting NewMagickaReturnLinearMult - regen in and out of combat

MagickaRegenOutsideCombatMult - regen out of combat 

MagickaRegenDelay - regen delay


## Lua Blueprint Weirdness
**Blueprint function return parameters:**

2 return properties: FloatValue, BoolValue: requires 2 table function parameters, FirstTable.FloatValue, FirstTable.BoolValue are valid, SecondTable is not filled

2 return properties: TArray\<FString\> Values, BoolValue: requires 2 table function parameters, FirstTable.Values is array, SecondTable.BoolValue is bool