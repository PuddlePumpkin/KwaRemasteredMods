# Todo:

---

## Config Panel:
### Blueprint:
remake oblivion button prefab

### Lua:
add parameter set get functions
fix up changed parameters
add new rows

---

## Notifications:
Move notification to hook
Add bool param option to disable save notificaitons
Add switch option for blacklist types










## Adding new rows:
Create widget of type TypeParam
Implement on param load/update -> **DO** call on change parent dispatcher
Override SetParameterValue (make sure parent call exists) (Only update visual (dont set param), do **not** call on changed, done in parent)
On Construct -> Setup visuals
On change -> Set Parameter -> Save Parameter