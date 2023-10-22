Name | Flags | Description
---- | ----- | -----------
+cl_show_team_equipment | cl, release | 
+lookatweapon | cl, release | 
+quickbuyradial | cl, release | 
+quickgrenaderadial | cl, release | 
+quickinv | cl, release | 
+radialradio | cl, release | 
+radialradio2 | cl, release | 
+radialradio3 | cl, release | 
+spray_menu | cl, release | 
-cl_show_team_equipment | cl, release | 
-lookatweapon | cl, release | 
-quickbuyradial | cl, release | 
-quickgrenaderadial | cl, release | 
-quickinv | cl, release | 
-radialradio | cl, release | 
-radialradio2 | cl, release | 
-radialradio3 | cl, release | 
-spray_menu | cl, release | 
CS_WarnFriendlyDamageInterval | sv, cheat | Default: 3<br>Defines how frequently the server notifies clients that a player damaged a friend
CreatePredictionError | sv, cheat | Create a prediction error
Test_CreateEntity | sv, cheat | 
Test_EHandle | sv, cheat | 
Test_ExitProcess | cheat | Test_ExitProcess &lt;exit code&gt; - immediately kill the process.
Test_RandomPlayerPosition | sv, cheat | 
_record | norecord, release | Record a demo incrementally.
adsp_debug | a | Default: 0<br>
ai_debug_dyninteractions | sv, cheat | Default: 0<br>Debug the NPC dynamic interaction system.
ai_debug_los | sv, cheat | Default: 0<br>NPC Line-Of-Sight debug mode. If 1, solid entities that block NPC LOC will be highlighted with white bounding boxes. If 2, it'll show non-solid entities that would do it if they were solid.
ai_debug_off_nav | sv, cheat | Default: false<br>
ai_debug_shoot_positions | sv, cl, rep, cheat | Default: 0<br>
ai_disabled | sv, cl, rep, cheat | Default: false<br>
ai_show_current_nav | sv, cheat | Default: false<br>
alias | release | Alias a command.
ammo_338mag_max | sv, cl, rep, release | Default: 30<br>
ammo_357sig_max | sv, cl, rep, release | Default: 52<br>
ammo_357sig_min_max | sv, cl, rep, release | Default: 12<br>
ammo_357sig_p250_max | sv, cl, rep, release | Default: 26<br>
ammo_357sig_small_max | sv, cl, rep, release | Default: 24<br>
ammo_45acp_max | sv, cl, rep, release | Default: 100<br>
ammo_50AE_max | sv, cl, rep, release | Default: 35<br>
ammo_556mm_box_max | sv, cl, rep, release | Default: 200<br>
ammo_556mm_max | sv, cl, rep, release | Default: 90<br>
ammo_556mm_small_max | sv, cl, rep, release | Default: 40<br>
ammo_57mm_max | sv, cl, rep, release | Default: 100<br>
ammo_762mm_max | sv, cl, rep, release | Default: 90<br>
ammo_9mm_max | sv, cl, rep, release | Default: 120<br>
ammo_buckshot_max | sv, cl, rep, release | Default: 32<br>
ammo_grenade_limit_breachcharge | sv, cl, rep, release | Default: 3<br>
ammo_grenade_limit_bumpmine | sv, cl, rep, release | Default: 3<br>
ammo_grenade_limit_snowballs | sv, cl, rep, release | Default: 3<br>
ammo_grenade_limit_tripwirefire | sv, cl, rep, release | Default: 1<br>
ammo_item_limit_adrenaline | sv, cl, rep, release | Default: 5<br>
anim_resource_validate_on_load | release | Default: true<br>Validates the animation group channel list against the animations on load for every animation
animated_material_attributes | cl, cheat | Default: true<br>
animevents_dump | sv, cheat | List all the currently registered anim events.<br>
animgraph_debug | sv, cl, rep, cheat | Default: false<br>Debug animation graph
animgraph_debug_entindex | sv, cl, rep, cheat | Default: 0<br>The entity to specifically debug
animgraph_footlock_ik_enable | cheat | Default: true<br>Enable IK.
animgraph_record_all | sv, cl, rep, cheat | Default: false<br>Automatically start recording AnimGraphs when they get created, and save them to disk when they are destroyed
animgraph_slope_draw_raycasts | sv, cl, rep, cheat | Default: false<br>
animgraph_slope_enable | sv, cl, rep, cheat | Default: true<br>
animgraph_trace_static_only | sv, cl, rep, cheat | Default: false<br>
autobuy | cl, clientcmd_can_execute | Attempt to purchase items with the order listed in cl_autobuy
axis | sv, cheat | Draw an axis<br>	Arguments:  x y z pitch yaw roll &lt;lifetime = 10.0&gt; &lt;r g b a&gt;<br>
battery_saver | a | Default: false<br>OBSOLETE replaced by mobile_fps_* - Battery saver mode. 0=off, 1=on
benchframe | release | Takes a snapshot of a particular frame in a time demo.
bind | release | Bind a key.
binddefaults | release | Bind all keys to their default values.
bindss | release | Bind a key for a particular splitscreen player.
bot_add | sv, release | bot_add &lt;t\|ct&gt; &lt;type&gt; &lt;difficulty&gt; &lt;name&gt; - Adds a bot matching the given criteria.
bot_add_ct | sv, release | bot_add_ct &lt;type&gt; &lt;difficulty&gt; &lt;name&gt; - Adds a Counter-Terrorist bot matching the given criteria.
bot_add_t | sv, release | bot_add_t &lt;type&gt; &lt;difficulty&gt; &lt;name&gt; - Adds a terrorist bot matching the given criteria.
bot_all_weapons | sv, release | Allows the bots to use all weapons
bot_allow_grenades | sv, rep, release | Default: true<br>If nonzero, bots may use grenades.
bot_allow_machine_guns | sv, rep, release | Default: true<br>If nonzero, bots may use the machine gun.
bot_allow_pistols | sv, rep, release | Default: true<br>If nonzero, bots may use pistols.
bot_allow_rifles | sv, rep, release | Default: true<br>If nonzero, bots may use rifles.
bot_allow_shotguns | sv, rep, release | Default: true<br>If nonzero, bots may use shotguns.
bot_allow_snipers | sv, rep, release | Default: true<br>If nonzero, bots may use sniper rifles.
bot_allow_sub_machine_guns | sv, rep, release | Default: true<br>If nonzero, bots may use sub-machine guns.
bot_controllable | sv, rep, release | Default: true<br>Determines whether bots can be controlled by players
bot_coop_force_throw_grenade_chance | sv, cheat | Default: 0.3<br>
bot_crouch | sv, cheat | Default: false<br>
bot_debug | sv, rep, cheat | Default: 0<br>For internal testing purposes.
bot_debug_target | sv, rep, cheat | Default: 0<br>For internal testing purposes.
bot_dont_shoot | sv, rep, cheat, release | Default: false<br>If nonzero, bots will not fire weapons (for debugging).
bot_freeze | sv, cheat | Default: false<br>
bot_goto_mark | sv, cheat | Sends a bot to the marked nav area (useful for testing navigation meshes)
bot_goto_selected | sv, cheat | Sends a bot to the selected nav area (useful for testing navigation meshes)
bot_ignore_enemies | sv, rep, cheat | Default: false<br>If nonzero, bots will ignore enemies (for debugging).
bot_ignore_players | sv, cheat | Default: false<br>Bots will not see non-bot players.
bot_join_after_player | sv, rep, release | Default: true<br>If nonzero, bots wait until a player joins before entering the game.
bot_join_team | sv, rep, release | Default: any<br>Determines the team bots will join into. Allowed values: 'any', 'T', or 'CT'.
bot_kick | sv, release | bot_kick &lt;all&gt; &lt;t\|ct&gt; &lt;type&gt; &lt;difficulty&gt; &lt;name&gt; - Kicks a specific bot, or all bots, matching the given criteria.
bot_kill | sv, cheat | bot_kill &lt;all&gt; &lt;t\|ct&gt; &lt;type&gt; &lt;difficulty&gt; &lt;name&gt; - Kills a specific bot, or all bots, matching the given criteria.
bot_knives_only | sv, release | Restricts the bots to only using knives
bot_loadout | sv, cheat | Default: <br>bots are given these items at round start
bot_max_visible_smoke_length | sv, rep, release | Default: 200<br>Bots will see players through smoke clouds up to this length.
bot_mimic | sv, cl, rep, cheat | Default: 0<br>Bot uses usercmd of player by index.
bot_mimic_spec_buttons | cl, cheat | Default: true<br>+attack, +jump etc are used for spectator control instead of being passed on to spectated bot
bot_mimic_yaw_offset | sv, cheat | Default: 180<br>
bot_pistols_only | sv, release | Restricts the bots to only using pistols
bot_place | sv, cheat | bot_place - Places a bot from the map at where the local player is pointing.
bot_randombuy | sv, cheat | Default: false<br>should bots ignore their prefered weapons and just buy weapons at random?
bot_show_battlefront | sv, cheat | Default: false<br>Show areas where rushing players will initially meet.
bot_show_nav | sv, rep, cheat | Default: false<br>For internal testing purposes.
bot_show_occupy_time | sv, cheat | Default: false<br>Show when each nav area can first be reached by each team.
bot_snipers_only | sv, release | Restricts the bots to only using sniper rifles
bot_stop | sv, rep, cheat | Default: 0<br>bot_stop &lt;1\|all&gt; \| &lt;not_bomber&gt; \| &lt;t&gt; \| &lt;ct&gt;
bot_traceview | sv, rep, cheat | Default: 0<br>For internal testing purposes.
bot_zombie | sv, rep, cheat | Default: false<br>If nonzero, bots will stay in idle mode and not attack.
box | sv, cheat | Draw a bbox<br>	Arguments:  minx miny miny maxx maxy maxz &lt;lifetime = 10.0&gt; &lt;r g b a&gt;<br>
buddha | sv, nf, cheat | Default: false<br>Player takes damage but won't die
buddha_ignore_bots | sv, nf, cheat | Default: false<br>Bots always buddha 0
buddha_reset_hp | sv, nf, cheat | Default: 1<br>HP to set when damaged below zero in Buddha Mode
bug_submitter_override | a | Default: <br>
buymenu | cl, server_can_execute | Show or hide main buy menu
buyrandom | sv | Buy random primary and secondary. Primarily for deathmatch where cost is not an issue.
c_maxdistance | cl, a | Default: 200<br>
c_maxpitch | cl, a | Default: 90<br>
c_maxyaw | cl, a | Default: 135<br>
c_mindistance | cl, a | Default: 30<br>
c_minpitch | cl, a | Default: 0<br>
c_minyaw | cl, a | Default: -135<br>
c_orthoheight | cl, a | Default: 100<br>
c_orthowidth | cl, a | Default: 100<br>
c_thirdpersonshoulder | cl, a | Default: false<br>
c_thirdpersonshoulderaimdist | cl, a | Default: 120<br>
c_thirdpersonshoulderdist | cl, a | Default: 40<br>
c_thirdpersonshoulderheight | cl, a | Default: 5<br>
c_thirdpersonshoulderoffset | cl, a | Default: 20<br>
callvote | sv | Start a vote on an issue.
cam_collision | cl, a | Default: 1<br>When in thirdperson and cam_collision is set to 1, an attempt is made to keep the camera from passing though walls.
cam_command | cl, cheat | Tells camera to change modes
cam_idealdelta | cl, a | Default: 4<br>Controls the speed when matching offset to ideal angles in thirdperson view
cam_idealdist | cl, a | Default: 150<br>
cam_ideallag | cl, a | Default: 4<br>Amount of lag used when matching offset to ideal angles in thirdperson view
cam_idealpitch | cl, a | Default: 0<br>
cam_idealyaw | cl, a | Default: 0<br>
cam_showangles | cl, cheat | Default: false<br>When in thirdperson, print viewangles/idealangles/cameraoffsets to the console.
cam_snapto | cl, a | Default: false<br>
camortho | cl, cheat | Switch to orthographic camera.
cancelselect | cl, server_can_execute | 
cash_team_winner_bonus_consecutive_rounds | sv, cl, nf, rep, release | Default: 0<br>
cast_aabb | sv, cheat | Tests box collision detection
cast_bullet | sv, cheat | Tests bullet cast
cast_capsule | sv, cheat | Tests capsule collision detection
cast_convex | sv, cheat | Tests convex hull collision detection
cast_cylinder | sv, cheat | Tests cylinder collision detection
cast_intervals | sv, cheat | Tests interval ray cast
cast_obb | sv, cheat | Tests cylinder collision detection
cast_physics | sv, cheat | Tests physics shape collision detection
cast_ray | sv, cheat | Tests ray cast
cast_sphere | sv, cheat | Tests sphere cast
cc_delay_time | cl, a | Default: 0.25<br>Close caption delay before showing caption.
cc_lang | cl, a | Default: <br>Current close caption language (emtpy = use game UI language)
cc_linger_time | cl, a | Default: 1<br>Close caption linger time.
cc_spectator_only | cl, a | Default: false<br>
cc_subtitles | cl, a | Default: false<br>If set, don't show sound effect captions, just voice overs (i.e., won't help hearing impaired players).
cc_vr_caption_speed | cl, a | Default: 1<br>0 = slow, 1 = medium (default), 2 = fast
cc_vr_font_size | cl, a | Default: 1<br>0 = small, 1 = med (default), 2 = large
cc_vr_width | cl, a | Default: 1<br>0 = narrow, 1 = med (default), 2 = wide
changelevel | release | changelevel &lt;mapname&gt; :Multiplayer change level.
cl_allow_animated_avatars | cl, a, release | Default: true<br>Whether or not to allow animated avatars
cl_auto_cursor_scale | a | Default: true<br>Automatic cursor size scaling.
cl_autobuy | cl, release | Default: <br>The order in which autobuy will attempt to purchase items
cl_autohelp | cl, a, user | Default: true<br>Auto-help
cl_avatar_convert_png | cl, cheat, release | Converts all rgb avatars in the avatars directory to png
cl_avatar_convert_rgb | cl, cheat, release | Converts all png avatars in the avatars directory to rgb
cl_axis | cl, cheat | Draw an axis<br>	Arguments:  x y z pitch yaw roll &lt;lifetime = 10.0&gt; &lt;r g b a&gt;<br>
cl_borrow_music_from_player_slot | cl, release | Default: -1<br>
cl_box | cl, cheat | Draw a bbox<br>	Arguments:  minx miny miny maxx maxy maxz &lt;lifetime = 10.0&gt; &lt;r g b a&gt;<br>
cl_buywheel_donate_key | cl, a, per_user, release | Default: 0<br>Set the key to use for donation in the buy menu. 0: Left Control; 1: Left Alt; 2: Left Shift.
cl_buywheel_nonumberpurchasing | cl, a, per_user, release | Default: false<br>Set non-zero to prevent buy wheel from purchasing via number keys
cl_change_callback_limit | cl, release | Default: 0.2<br>change callback msec warning limit
cl_chatfilters | cl, a | Default: 63<br>Stores the chat filter settings 
cl_checkdeclareclasses | cheat | Check game code serializers
cl_clock_correction | cheat | Default: true<br>Enable/disable clock correction on the client.
cl_clock_correction_adjustment_max_amount | cheat | Default: 200<br>Sets the maximum number of milliseconds per second it is allowed to correct the client clock. It will only correct this amount if the difference between the client and server clock is equal to or larger than cl_clock_correction_adjustment_max_offset.
cl_clock_correction_adjustment_max_offset | cheat | Default: 90<br>As the clock offset goes from cl_clock_correction_adjustment_min_offset to this value (in milliseconds), it moves towards applying cl_clock_correction_adjustment_max_amount of adjustment. That way, the response is small when the offset is small.
cl_clock_correction_adjustment_min_offset | cheat | Default: 10<br>If the clock offset is less than this amount (in milliseconds), then no clock correction is applied.
cl_clock_correction_force_server_tick | cheat | Default: 999<br>Force clock correction to match the server tick + this offset (-999 disables it).
cl_clockdrift_max_ticks | cheat | Default: 3<br>Maximum number of ticks the clock is allowed to drift before the client snaps its clock to the server's.
cl_clutch_mode | cl, release | Default: false<br>Silence voice and other distracting sounds until the end of round or next death.
cl_color | cl, a, user | Default: 3<br>Preferred teammate color
cl_connectionretrytime_p2p | release | Default: 20<br>Number of seconds over which to spread retry attempts for P2P.
cl_cq_min_queue | cl, user | Default: 0<br>Allows client to disable (=-1), defer to server (=0), or request a certain min-command queue size for games that support the command queue (IsUsingCommandQueue()) for CUserCmds.
cl_crosshair_drawoutline | cl, a, per_user | Default: true<br>Draws a black outline around the crosshair for better visibility
cl_crosshair_dynamic_maxdist_splitratio | cl, a, per_user | Default: 1<br>If using cl_crosshairstyle 2, this is the ratio used to determine how long the inner and outer xhair pips will be. \[inner = cl_crosshairsize*(1-cl_crosshair_dynamic_maxdist_splitratio), outer = cl_crosshairsize*cl_crosshair_dynamic_maxdist_splitratio\]  \[0 - 1\]
cl_crosshair_dynamic_splitalpha_innermod | cl, a, per_user | Default: 0<br>If using cl_crosshairstyle 2, this is the alpha modification that will be used for the INNER crosshair pips once they've split. \[0 - 1\]
cl_crosshair_dynamic_splitalpha_outermod | cl, a, per_user | Default: 1<br>If using cl_crosshairstyle 2, this is the alpha modification that will be used for the OUTER crosshair pips once they've split. \[0.3 - 1\]
cl_crosshair_dynamic_splitdist | cl, a, per_user | Default: 3<br>If using cl_crosshairstyle 2, this is the distance that the crosshair pips will split into 2. (default is 7)
cl_crosshair_friendly_warning | cl, a, release | Default: 1<br>0: off, 1: on
cl_crosshair_outlinethickness | cl, a, per_user | Default: 1<br>Set how thick you want your crosshair outline to draw (0-3)
cl_crosshair_recoil | cl, a, per_user | Default: true<br>
cl_crosshair_sniper_show_normal_inaccuracy | cl, a, per_user | Default: false<br>Include standing inaccuracy when determining sniper crosshair blur
cl_crosshair_sniper_width | cl, a, per_user | Default: 1<br>If &gt;1 sniper scope cross lines gain extra width (1 for single-pixel hairline)
cl_crosshair_t | cl, a, per_user | Default: false<br>T style crosshair
cl_crosshairalpha | cl, a, per_user | Default: 200<br>
cl_crosshaircolor | cl, a, per_user | Default: 5<br>Set crosshair color as defined in game_options.consoles.txt
cl_crosshaircolor_b | cl, a, per_user | Default: 0<br>
cl_crosshaircolor_g | cl, a, per_user | Default: 255<br>
cl_crosshaircolor_r | cl, a, per_user | Default: 0<br>
cl_crosshairdot | cl, a, per_user | Default: false<br>
cl_crosshairgap | cl, a, per_user | Default: -2.2<br>
cl_crosshairgap_useweaponvalue | cl, a, per_user | Default: true<br>If set to 1, the gap will update dynamically based on which weapon is currently equipped
cl_crosshairsize | cl, a, per_user | Default: 3.9<br>
cl_crosshairstyle | cl, a, per_user | Default: 2<br>0 = DEFAULT (DISABLED), 1 = DEFAULT STATIC (DISABLED), 2 = DEFAULT (accurate recoil/spread feedback with a fixed inner part), 3 = ACCURATE DYNAMIC (DISABLED) (accurate recoil/spread feedback), 4 = DEFAULT STATIC, 5 = LEGACY (fake recoil - inaccurate feedback)
cl_crosshairthickness | cl, a, per_user | Default: 0.6<br>
cl_crosshairusealpha | cl, a, per_user | Default: true<br>
cl_cursor_scale | a | Default: 1<br>Cursor size scaling factor.
cl_dangerzone_approaching_sound_radius | cl, cheat, release | Default: 700<br>
cl_dangerzone_moving_sound_volume | cl, cheat, release | Default: 0.5<br>
cl_dangerzone_sound_volume | cl, cheat, release | Default: 0.2<br>
cl_deathcam_audio_mix_phase1_fade_amount | cl, release | Default: 0.15<br>Sets the amount of ducking to do on death cam fade out. When set to 1, full DeathFadeLayer is applied.
cl_deathcam_audio_mix_phase1_fade_time | cl, release | Default: 2<br>Sets the amount of time we fade out over.
cl_deathcam_audio_mix_phase2_fade_amount | cl, release | Default: 0.5<br>Sets the amount of ducking to do on death cam fade out. When set to 1, full DeathFadeLayer is applied.
cl_deathcam_audio_mix_phase2_fade_time | cl, release | Default: 0.4<br>Sets the amount of time we fade out over.
cl_deathcampanel_position_dynamic | cl, a | Default: 1<br>Turn on/off deathcam's kill panel dynamic Y movement
cl_debounce_zoom | cl, a, user, per_user | Default: true<br>Whether or not to disable holding secondary fire to cycle zoom levels
cl_debug_overlays_broadcast | release | Default: false<br>Render debug overlays from server.
cl_debugoverlay_cycle_domain | cl, cheat | Toggles visibility of the debug overlay system.
cl_debugoverlay_cycle_state | cl, cheat | Toggles visibility of the debug overlay system.
cl_debugoverlay_hide_imgui | cl, cheat | Hides the overlay.
cl_debugoverlay_toggle | cl, cheat | Toggles visibility of the debug overlay system.
cl_disable_deathcam_audio_mix_fade_out | cl, release | Default: false<br>When set to true, disables audio being silenced while the death cam fades out.
cl_disable_ragdolls | cl, cheat | Default: false<br>
cl_disable_round_end_report | cl, a, release | Default: false<br>
cl_display_game_events | cl, cheat | Default: false<br>
cl_dm_buyrandomweapons | cl, a, release | Default: true<br>Player will automatically receive a random weapon on spawn in deathmatch if this is set to 1 (otherwise, they will receive the last weapon)
cl_draw_only_deathnotices | cl, release | Default: false<br>For drawing only the crosshair and death notices (used for moviemaking)
cl_drawcross | cl, cheat | Draws a cross at the given location<br>	Arguments: x y z
cl_drawhud | cl, cheat | Default: true<br>Enable the rendering of the hud
cl_drawhud_force_deathnotices | cl, release | Default: 0<br>0: default; 1: draw deathnotices even if hud disabled; -1: force no deathnotices
cl_drawhud_force_radar | cl, release | Default: 0<br>0: default; 1: draw radar even if hud disabled; -1: force no radar
cl_drawhud_force_teamid_overhead | cl, release | Default: 0<br>0: default; 1: draw teamid even if hud disabled; -1: force no teamid
cl_drawhud_specvote | cl, release | Default: true<br>1: default; 0: disables vote UI for spectators
cl_drawline | cl, cheat | Draws line between two 3D Points.<br>	Green if no collision<br>	Red is collides with something<br>	Arguments: x1 y1 z1 x2 y2 z2
cl_dumpentity | cl, cheat | Dumps info about an entity
cl_ent_absbox | cl, cheat | Displays the total bounding box for the given entity(s) in green.  Some entites will also display entity specific overlays.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_actornames | cl, cheat | Displays the entity name for all entities that have ShouldDisplayInActorNames true in code
cl_ent_animgraph_debug | cl, cheat | Displays debug draws about the given entity(ies) animgraph<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_animgraph_record | cl, cheat | Toggles recording of animgraph replay of the given entity(s)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_attachments | cl, cheat | Displays the attachment points on an entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_bbox | cl, cheat | Displays the movement bounding box for the given entity(ies) in orange.  Some entites will also display entity specific overlays.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_call | cl, cheat | ent_call &lt;funcname&gt; &lt;option:entname&gt; calls function on current look target or filtername, checks on ent, then root, then mode, then map scope
cl_ent_clear_debug_overlays | cl, cheat | Clears all debug overlays
cl_ent_find | cl, cheat | Find and list all entities with classnames or targetnames that contain the specified substrings.<br>Format: find_ent &lt;substring&gt;<br>
cl_ent_find_index | cl, cheat | Display data for entity matching specified index.<br>Format: find_ent_index &lt;index&gt;<br>
cl_ent_grab | cl, cheat | grabs the object in front of the player. Options: -loose -multiple -toggle
cl_ent_hierarchy | cl, cheat | Prints the entity hierarchy tree rooted at the specified ent(s)
cl_ent_hitbox | cl, cheat | Displays the hitboxes for the given entity(ies).<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_joints | cl, cheat | Displays the joint names + axes an entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_messages | cl, cheat | Toggles input/output message display for the selected entity(ies).  The name of the entity will be displayed as well as any messages that it sends or receives.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_name | cl, cheat | Displays the entity name
cl_ent_picker | cl, cheat | Toggles 'picker' mode.  When picker is on, the bounding box, pivot and debugging text is displayed for whatever entity the player is looking at.<br>	Arguments:	full - enables all debug information
cl_ent_pivot | cl, cheat | Displays the pivot for the given entity(ies).<br>	(y=up=green, z=forward=blue, x=left=red). <br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_pivot_size | cl, a, cheat | Default: 20<br>
cl_ent_remove | cl, cheat | Removes the given entity(s)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_remove_all | cl, cheat | Removes all entities of the specified type<br>	Arguments:   	{entity_name} / {class_name} 
cl_ent_scale | cl, cheat | Scales entities.	Arguments: &lt;scale factor&gt; &lt;{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}&gt;
cl_ent_scenehierarchy | cl, cheat | Prints the entity scenenode hierarchy tree rooted at the specified ent(s)
cl_ent_script_dump | cl, cheat | Dumps the names and values of this entity's script scope to the console<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_select | cl, cheat | Select or deselects the given entities(s) for later manipulation<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_setang | cl, cheat | Set entity angles
cl_ent_setname | cl, cheat | Sets the targetname of the given entity(s)<br>	Arguments:   	&lt;new entity name&gt; &lt;{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}&gt;
cl_ent_setpos | cl, cheat | Move entity to position
cl_ent_show_contexts | cl, cheat | Default: false<br>Show entity contexts in ent_text display
cl_ent_show_damage | cl, cheat | Sets damage display mode.  When on, you will see the amount of damage dealt over the target's head.
cl_ent_showonlyattachment | cl, cheat | Default: <br>
cl_ent_showonlyhitbox | cl, cheat | Default: -1<br>
cl_ent_skeleton | cl, cheat | Displays the skeleton for the given entity(ies).<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_text | cl, cheat | Displays text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_text256 | cl, cheat | Displays text debugging information about the given entity(ies) \[within 256 units of the player\] on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_text_clear | cl, cheat | Hide text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_text_filter | cl, cheat | Set which ent_text filters you want: 
cl_ent_text_flags_active | cl, a, cheat | Default: -1<br>
cl_ent_text_no_name_really_i_mean_it | cl, cheat | Default: false<br>
cl_ent_text_radius | cl, cheat | Displays text debugging information about the given entity(ies) \[near the player\] on top of the entity (See Overlay Text)<br>	2 Arguments:   	&lt;Radius&gt; &lt;{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}&gt;
cl_ent_text_sticky_add | cl, cheat | Adds to list of names to display text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_text_sticky_clear | cl, cheat | Clears the list of names to display text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_text_sticky_dump | cl, cheat | Spews the list of names to display text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_text_sticky_remove | cl, cheat | Removes from the list of names to display text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_ungrab | cl, cheat | un-grabs all objects
cl_ent_vcollide_wireframe | cl, cheat | Displays the interpolated vcollide wireframe pm am entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_viewoffset | cl, cheat | Displays the eye position for the given entity(ies) in red.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_error_report_time | cl, release | Default: 0<br>Minimum time in seconds that must elapse before printing prediction error summary. 0 to disable.
cl_extrapolate | cl, cheat | Default: true<br>Enable/disable extrapolation if interpolation history runs out.
cl_extrapolate_amount | cl, cheat | Default: 0.25<br>Set how many seconds the client will extrapolate entities for.
cl_eye_occlusion_debug | cl, cheat | Default: false<br>
cl_fixedcrosshairgap | cl, a, per_user | Default: 3<br>For crosshair style 1: How big to make the gap between the pips in the fixed crosshair
cl_flushentitypacket | cheat | Default: 0<br>For debugging. Force the engine to flush an entity packet.
cl_fullupdate | cheat | Force uncompressed update
cl_glow_brightness | cl, cheat | Default: 1<br>Brightness of player halos
cl_glow_item_far_b | cl, release | Default: 1<br>
cl_glow_item_far_g | cl, release | Default: 0.4<br>
cl_glow_item_far_r | cl, release | Default: 0.3<br>
cl_hide_avatar_images | cl, a | Default: 0<br>Hide avatar images for other players. <br>	0 - Off.<br>	1 - Block All<br>	2 - Block all but friends
cl_http_log_enable | cl, norecord, release, clientcmd_can_execute | Default: false<br>Allows sending HTTP log from client main menu.
cl_hud_color | cl, a, release | Default: 0<br>0 = team color, 1 =  white, 2 = bright white, 3 = light blue, 4 = blue, 5 = purple, 6 = red, 7 = orange, 8 = yellow, 9 = green, 10 = aqua, 11 = pink, 12 = teammate color.
cl_hud_radar_scale | cl, a, release | Default: 1<br>
cl_ignorepackets | cheat | Default: false<br>Force client to ignore packets (for debugging).
cl_imgui_set_selection | cl, cheat | Sets ImGui selection
cl_imgui_set_status_text | cl, cheat | Sets ImGui header status text
cl_import_csgo_config | cl, a, release | Default: true<br>
cl_interp_hermite | cl, cheat | Default: true<br>Set to zero do disable hermite interpolation.
cl_interpolate_report | cl, a | Default: false<br>Enable to show interpolation profile timing<br>
cl_inventory_debug_tooltip | cl, release | Default: false<br>
cl_inventory_radial_immediate_select | cl, a, per_user | Default: true<br>In inventory selection radials. Select weapons the moment the cursor highlights them. Otherwise, only select the selected item on exit.
cl_inventory_radial_tap_to_cycle | cl, a, per_user | Default: true<br>In inventory selection radials. Select weapons the moment the cursor highlights them. Otherwise, only select the selected item on exit.
cl_inventory_saved_filter2 | cl, a, release | Default: all<br>
cl_inventory_saved_sort2 | cl, a, release | Default: inv_sort_age<br>
cl_invites_only_friends | cl, a, release | Default: false<br>If turned on, will ignore in-game invites from recent teammates or other non-friends
cl_invites_only_mainmenu | cl, a, release | Default: false<br>If turned on, will ignore all invites when user is playing a match
cl_itemimages_dynamically_generated | cl, a, release | Default: 2<br>2: use render-targets, fallback to cache and disk; 1: no render targets, but use cache and fallback to disk; 0: disk assets only
cl_jiggle_bone_debug | cheat | Default: false<br>Display physics-based 'jiggle bone' debugging information
cl_jiggle_bone_debug_pitch_constraints | cheat | Default: false<br>Display physics-based 'jiggle bone' debugging information
cl_jiggle_bone_debug_yaw_constraints | cheat | Default: false<br>Display physics-based 'jiggle bone' debugging information
cl_jiggle_bone_invert | cheat | Default: false<br>
cl_join_advertise | cl, a | Default: 1<br>Advertise joinable game in progress to Steam friends, otherwise need a Steam invite (2: all servers, 1: official servers, 0: none)
cl_lagcompensation | cl, user | Default: true<br>Perform server side lag compensation of weapon firing events.
cl_latch_report | cl, a | Default: false<br>Enable to output stats about latching
cl_leveloverview | cl, cheat | Default: 0<br>
cl_lightquery_debug | cl, cheat | Default: false<br>
cl_loadout_saved_sort | cl, a, release | Default: inv_sort_age<br>
cl_lock_camera | cl, cheat | Default: false<br>
cl_mouselook | cl, a, user, per_user, notconnected | Default: true<br>Set to 1 to use mouse for look, 0 for keyboard look. Cannot be set while connected to a server.
cl_mute_all_but_friends_and_party | cl, a | Default: 0<br>Only allow communication from friends and matchmaking party members. Set to 1 to apply the in non-competitive game modes. Set to 2 will apply the setting in all modes.<br>
cl_mute_enemy_team | cl, a | Default: false<br>Block all communication from players on the enemy team.
cl_new_user_phase | cl, a, release | Default: 0<br>0: Not Started, 1: Needs Training, 2: Training Complete, -1: Disabled
cl_obs_interp_enable | cl, a | Default: true<br>Enables interpolation between observer targets
cl_obs_interp_pos_rate | cl, a | Default: 0.27<br>
cl_observed_bot_crosshair | cl, a, release | Default: 2<br>Control the crosshair shown when observing a bot. 0: Show player crosshair. 1: Show player crosshair only when bot can be taken over, otherwise show default.. 2: Always show default crosshair for bots.
cl_paintkit_override | cl, cheat, release | Default: <br>
cl_particle_retire_cost | cheat | Default: 0<br>
cl_particle_simulate | cheat | Default: true<br>Enables/Disables Particle Simulation
cl_pclass | cl, cheat | Default: <br>Dump entity by prediction classname.
cl_pdump | cl, cheat | Default: -1<br>Dump info about this entity to screen.
cl_phys_debug_callback_entities | cl, cheat | Default: false<br>Print all entities that get touch callbacks. Each entity is printed only once.
cl_phys_enabled | cl, cheat | Default: true<br>Enable all physics simulation
cl_phys_sleep_enable | cl, cheat | Default: true<br>Enable sleeping for dynamic physics bodies.
cl_phys_stop_at_collision | cl, cheat | Default: <br>
cl_ping_fade_deadzone | cl, a, release | Default: 60<br>Distance from the crosshair over which the ping is completely invisible
cl_ping_fade_distance | cl, a, release | Default: 300<br>Distance from the crosshair over which the ping fades
cl_pitchdown | cl, cheat | Default: 89<br>
cl_pitchup | cl, cheat | Default: 89<br>
cl_player_ping_mute | cl, a, release | Default: 0<br>If 1, player pinging will make a sound, if 0, pings will be silent
cl_player_proximity_debug | cl, rep, cheat | Default: false<br>
cl_player_ragdolls_collide | cl, cheat, release | Default: false<br>
cl_playerspray_auto_apply | cl, a, release | Default: true<br>Automatically apply graffiti when graffiti menu closes
cl_playerspraydisable | cl, a | Default: false<br>Disable player sprays.
cl_predict | cl, user, cheat | Default: true<br>Perform client side prediction.
cl_predictweapons | cl, user | Default: true<br>Perform client side prediction of weapon effects.
cl_promoted_settings_acknowledged | cl, a | Default: 0:0<br>
cl_prop_debug | cl, cheat | Toggle prop debug mode. If on, props will show colorcoded bounding boxes. Red means ignore all damage. White means respond physically to damage but never break. Green maps health in the range of 100 down to 1.
cl_querycache_stats | cl, cheat | Display status of the query cache (client only)
cl_quickinventory_filename | cl, a, release | Default: radial_quickinventory.txt<br>
cl_quickinventory_lastinv | cl, a, release | Default: true<br>
cl_quickinventory_line_update_speed | cl, a, release | Default: 65<br>
cl_radar_always_centered | cl, a, release | Default: true<br>If set to 0, the radar is maximally used. Otherwise the player is always centered, even at map extents.
cl_radar_icon_scale_min | cl, a, release | Default: 0.6<br>Sets the minimum icon scale. Valid values are 0.4 to 1.25.
cl_radar_rotate | cl, a, release | Default: true<br>1
cl_radar_scale | cl, a, release | Default: 0.7<br>Sets the radar scale. Valid values are 0.25 to 1.0.
cl_radar_square_with_scoreboard | cl, a, release | Default: true<br>If set, the radar will toggle to square when the scoreboard is visible.
cl_radial_radio_tab | cl, release | Default: 0<br>
cl_radial_radio_tab_0_text_1 | cl, a, release | Default: #Chatwheel_quiet<br>
cl_radial_radio_tab_0_text_2 | cl, a, release | Default: #Chatwheel_requestecoround<br>
cl_radial_radio_tab_0_text_3 | cl, a, release | Default: #Chatwheel_bplan<br>
cl_radial_radio_tab_0_text_4 | cl, a, release | Default: #Chatwheel_requestweapon<br>
cl_radial_radio_tab_0_text_5 | cl, a, release | Default: #Chatwheel_midplan<br>
cl_radial_radio_tab_0_text_6 | cl, a, release | Default: #Chatwheel_droppedbomb<br>
cl_radial_radio_tab_0_text_7 | cl, a, release | Default: #Chatwheel_aplan<br>
cl_radial_radio_tab_0_text_8 | cl, a, release | Default: #Chatwheel_requestspend<br>
cl_radial_radio_tab_1_text_1 | cl, a, release | Default: #Chatwheel_bombcarrierspotted<br>
cl_radial_radio_tab_1_text_2 | cl, a, release | Default: #Chatwheel_requestecoround<br>
cl_radial_radio_tab_1_text_3 | cl, a, release | Default: #Chatwheel_multipleenemieshere<br>
cl_radial_radio_tab_1_text_4 | cl, a, release | Default: #Chatwheel_requestweapon<br>
cl_radial_radio_tab_1_text_5 | cl, a, release | Default: #Chatwheel_rotatetome<br>
cl_radial_radio_tab_1_text_6 | cl, a, release | Default: #Chatwheel_ihavethebomb<br>
cl_radial_radio_tab_1_text_7 | cl, a, release | Default: #Chatwheel_oneenemyhere<br>
cl_radial_radio_tab_1_text_8 | cl, a, release | Default: #Chatwheel_requestspend<br>
cl_radial_radio_tab_2_text_1 | cl, a, release | Default: #Chatwheel_bombcarrierspotted<br>
cl_radial_radio_tab_2_text_2 | cl, a, release | Default: #Chatwheel_requestecoround<br>
cl_radial_radio_tab_2_text_3 | cl, a, release | Default: #Chatwheel_multipleenemieshere<br>
cl_radial_radio_tab_2_text_4 | cl, a, release | Default: #Chatwheel_requestweapon<br>
cl_radial_radio_tab_2_text_5 | cl, a, release | Default: #Chatwheel_rotatetome<br>
cl_radial_radio_tab_2_text_6 | cl, a, release | Default: #Chatwheel_ihavethebomb<br>
cl_radial_radio_tab_2_text_7 | cl, a, release | Default: #Chatwheel_oneenemyhere<br>
cl_radial_radio_tab_2_text_8 | cl, a, release | Default: #Chatwheel_requestspend<br>
cl_radial_radio_tap_to_ping | cl, a, release | Default: true<br>When tapping the radial radio button, leave a ping if nothing is selected within the time in seconds set in cl_radial_menu_tap_duration
cl_radial_radio_version_reset | cl, a, release | Default: 2<br>
cl_radialmenu_deadzone_size | cl, release | Default: 0.4<br>
cl_radialmenu_deadzone_size_joystick | cl, a, release | Default: 0.17<br>
cl_ragdoll_limit | cl, a | Default: 20<br>Maximum number of ragdolls to show (-1 disables limit)
cl_ragdoll_lru_debug | cl, rep, cheat | Default: false<br>
cl_ragdoll_workaround_threshold | cl, release | Default: 4<br>Mainly cosmetic, client-only effect: when client doesn't know the last position of another player that spawns a ragdoll, the ragdoll creation is simplified and ragdoll is created in the right place. If you increase this significantly, ragdoll positions on your client may be dramatically wrong, but it won't affect other clients
cl_rebuy | cl, release | Default: <br>The order in which rebuy will attempt to repurchase items
cl_redemption_reset_timestamp | cl, a, release | Default: 0<br>
cl_removedecals | cl, cheat | Remove the decals from the entity under the crosshair.
cl_resend | release | Default: 0.5<br>Delay in seconds before the client will resend the 'connect' attempt
cl_rr_reloadresponsesystems | cl, cheat | Reload all response system scripts.
cl_sanitize_muted_players | cl, release | Default: true<br>Hide names and avatars of muted players.
cl_sanitize_player_names | cl, a | Default: false<br>Replace names of other players with something non-offensive.
cl_save_animgraph_recording | cl, cheat | Saves all active animgraph recordings to disk
cl_scoreboard_mouse_enable_binding | cl, a | Default: +attack2<br>Name of the binding to enable mouse selection in the scoreboard
cl_scoreboard_survivors_always_on | cl, a, release | Default: false<br>
cl_script_add_debug_filter | cl, cheat | Add a filter to the game debug overlay
cl_script_add_watch | cl, cheat | Add a watch to the game debug overlay
cl_script_add_watch_pattern | cl, cheat | Add a watch to the game debug overlay
cl_script_attach_debugger | cl, cheat | Connect the vscript VM to the script debugger
cl_script_clear_watches | cl, cheat | Clear all watches from the game debug overlay
cl_script_debug | cl, cheat | Toggle the in-game script debug features
cl_script_dump_all | cl, cheat | Dump the state of the VM to the console
cl_script_find | cl, cheat | Find a key in the VM 
cl_script_help | cl, cheat | Output help for script functions
cl_script_reload | cl, cheat | Reload scripts
cl_script_reload_code | cl, cheat | Execute a vscript file, replacing existing functions with the functions in the run script
cl_script_reload_entity_code | cl, cheat | Execute all of this entity's VScripts, replacing existing functions with the functions in the run scripts
cl_script_remove_debug_filter | cl, cheat | Remove a filter from the game debug overlay
cl_script_remove_watch | cl, cheat | Remove a watch from the game debug overlay
cl_script_remove_watch_pattern | cl, cheat | Remove a watch from the game debug overlay
cl_script_resurrect_unreachable | cl, cheat | Use the garbage collector to track down reference cycles
cl_script_trace_disable | cl, cheat | Turn off a particular trace output by file or function name
cl_script_trace_disable_all | cl, cheat | Turn off all trace output
cl_script_trace_disable_key | cl, cheat | Turn off a particular trace output by table/instance
cl_script_trace_enable | cl, cheat | Turn on a particular trace output by file or function name
cl_script_trace_enable_all | cl, cheat | Turn on all trace output
cl_script_trace_enable_key | cl, cheat | Turn on a particular trace output by table/instance
cl_server_graphic1_enable | cl, release | Default: true<br>When enabled, 360x60 (&lt;16kb) image file will be displayed to on-server spectators.
cl_server_graphic2_enable | cl, release | Default: true<br>When enabled, 220x45 (&lt;16kb) image file will be displayed to on-server spectators.
cl_show_clan_in_death_notice | cl, a, release | Default: true<br>Is set, the clan name will show next to player names in the death notices.
cl_show_equipped_character_for_player_avatars | cl, a | Default: false<br>
cl_show_observer_crosshair | cl, a, release | Default: 2<br>Show the crosshair of the player being observed. 0: off 1: friends and party 2: everyone 
cl_showents | cl, cheat | Dump entity list to console.
cl_showerror | cl, release | Default: 0<br>Show prediction errors, 2 for above plus detailed field deltas, 3 to filter out serverside known prediction errors, -entindex for specific entity.
cl_showfps | cl, release | Default: 0<br>Draw fps meter at top of screen (1 = fps, 2 = smooth fps, 3 = server MS, 4 = Show FPS and Log to file )
cl_showloadout | cl, a, per_user | Default: true<br>Toggles display of current loadout.
cl_showmem | cl, release | Default: 0<br>Draw approximate memory use at top of screen
cl_showpos | cl, cheat, release | Default: 0<br>Draw current position at top of screen
cl_silencer_mode | cl, a, user, per_user | Default: 0<br>0: cannot detach; 1: press secondary fire to detach
cl_sim_grenade_trajectory | cl, cheat | Draw trajectory of the deployed grenade if thrown from this position. Takes an optional parameter for how long the drawn trajectory will last.
cl_skel_constraints_enable | rep, cheat | Default: true<br>
cl_skeleton_instance_smear_boneflags | cl, cheat | Default: false<br>Smear boneflags across the model.  Costs computation, but tests to make sure your bone flags are consistent.
cl_smoke_player_particle_effect | cl, cheat | Default: true<br>
cl_snd_new_visualize | cl, cheat | Default: false<br>Displays soundevent name played at it's 3d position
cl_sniper_auto_rezoom | cl, a, user, per_user | Default: true<br>Auto-rezoom snipers after a shot
cl_sniper_delay_unscope | cl, a, release | Default: false<br>
cl_sos_test_get_opvar | cl, cheat | 
cl_sos_test_set_opvar | cl, cheat | 
cl_soundscape_flush | cl, cheat, server_can_execute | Flushes the client side soundscapes
cl_spec_show_bindings | cl, release, clientcmd_can_execute | Default: true<br>Toggle the visibility of the spectator bindings.
cl_spec_stats | cl, release | Default: true<br>
cl_spec_swapplayersides | cl, release | Default: false<br>Toggle set the player names and team names to the opposite side in which they are are on the spectator panel.
cl_spec_use_tournament_content_standards | cl, release | Default: false<br>
cl_spewserializers | cheat | Spew serializers
cl_teamcounter_playercount_instead_of_avatars | cl, a, release | Default: false<br>
cl_teamid_overhead_colors_show | cl, a, release | Default: true<br>Show team overhead id in teammate color
cl_teamid_overhead_maxdist | cl, cheat, per_user | Default: 6000<br>max distance at which the overhead team id icons will show
cl_teamid_overhead_maxdist_spec | cl, cheat, per_user | Default: 4000<br>max distance at which the overhead team id icons will show when a spectator
cl_teamid_overhead_mode | cl, a, release | Default: 2<br>Always show team id over teammates. 1 = pips; 2 = pips, name, and equipment
cl_teammate_colors_show | cl, a, release | Default: 1<br>In competitive, 1 = show teammates as separate colors in the radar, scoreboard, etc., 2 = show colors and letters
cl_test_list_entities | cl, cheat | test-list entities
cl_timeout | a | Default: 30<br>After this many seconds without receiving a packet from the server, the client will disconnect itself
cl_track_aim_head_log_closest | cl, release | Default: false<br>Log when closest distance to head was reached and what it was
cl_track_aim_head_threshold | cl, release | Default: 0<br>Notify render device when rendering a frame with enemy head within threshold distance
cl_track_render_eye_angles | cl, release | Default: false<br>Spew render eye angles
cl_use_opens_buy_menu | cl, a, user, per_user | Default: false<br>Pressing the +use key will open the buy menu if in a buy zone (just as if you pressed the 'buy' key).
cl_usercmd_maxcount | release | Default: 4<br>max number of CUserCmds to send in one packet
cl_versus_intro | cl, a, release | Default: true<br>
cl_wallbang_heavy_threshold | cl, cheat, release | Default: 22<br>The Threshold where to switch from Light to Heavy Wallbang tracer
cl_weapon_clip_thinwalls | cl, rep, cheat | Default: true<br>
cl_weapon_clip_thinwalls_debug | cl, rep, cheat | Default: false<br>
cl_weapon_clip_thinwalls_lock | cl, rep, cheat | Default: false<br>
cl_weapon_clip_thinwalls_pitchlimit_down | cl, rep, cheat | Default: 67<br>
cl_weapon_clip_thinwalls_pitchlimit_up | cl, rep, cheat | Default: 77<br>
cl_weapon_debug_show_accuracy | cl, cheat, release | Default: 0<br>Draws a circle representing the effective range with every shot.
cl_weapon_debug_show_accuracy_duration | cl, cheat, release | Default: 10<br>
cl_wpn_sway_scale | cl, cheat | Default: 1<br>
clear | norecord, release | Clear console output.
clear_bombs | sv, cheat | 
clearall | norecord, release | Clear console output from all views.
cli_ent_attachments | cl, cheat | Displays the interpolated attachment points on an entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cli_ent_hitbox | cl, cheat | Displays the skeleton for the given entity(ies).<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cli_ent_pivot | cl, cheat | Displays the interpolated pivot for the given entity(ies).<br>	(y=up=green, z=forward=blue, x=left=red). <br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cli_ent_skeleton | cl, cheat | Displays the skeleton for the given entity(ies).<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cli_ent_vcollide_wireframe | cl, cheat | Displays the interpolated vcollide wireframe pm am entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
clientport | release | Default: 0<br>If non-zero, client binds port to specific address.  Usually you should leave this blank to use a different random system-assigned port for each connection.
closecaption | cl, a, user | Default: false<br>Enable close captioning.
clutch_mode_toggle | cl, release | Toggle clutch mode convar
collect_entity_model_name | sv, cheat | Collect model names of the entities you're pointing at
commentary | sv, a | Default: false<br>Desired commentary mode state.
commentary_finishnode | sv | 
con_enable | a | Default: false<br>Allows the console to be activated.
condump | release | dump the text currently in the console to condumpXX.log
connect | release | Connect to a remote server.
connect_hltv | release | Connect to a remote HLTV server.
consoletool | norecord, release | Open a VConsole subtool.
cq_netgraph | cl, user | Default: 0<br>Display command queue statistics on the hud
cq_netgraph_problem_show_auto | cl, a, release | Default: false<br>Automatically activate/deactivate cq_netgraph when network conditions degrade
crash | cheat | Crash the client. Optional parameter -- type of crash:<br> 0: read from NULL<br> 1: write to NULL<br> 2: force an Assert<br> 3: infinite loop<br> 4: stack buffer overrun<br> 5: multiple asserts across multiple threads
crash_error | cheat | Cause the engine to crash by Plat_FatalError on main thread (Debug!!)
crash_error_job | cheat | Cause the engine to crash by Plat_FatalError on job thread (Debug!!)
crash_error_thread | cheat | Cause the engine to crash by Plat_FatalError on non-main thread (Debug!!)
crash_job | cheat | Cause the engine to crash in a job thread (Debug!!)
crash_thread | cheat | Cause the engine to crash in a brand new non-main thread (Debug!!)
create_flashlight | sv, cheat | 
crosshair | cl, a, per_user | Default: true<br>
cs_ShowStateTransitions | sv, cheat | Default: -2<br>cs_ShowStateTransitions &lt;ent index or -1 for all&gt;. Show player state transitions.
cs_enable_player_physics_box | sv, release | Default: false<br>
cs_hostage_near_rescue_music_distance | sv, cheat | Default: 2000<br>
cs_logtouchexpansion | sv, cheat | Default: -2<br>cs_logtouchexpansion &lt;ent index or -1 for all&gt;. Log player touch expansion component.
cs_minimap_create_output_size | cl, cheat | Default: 512<br>Size of minimap texture generated with cs_minimap_create (512 default)
cs_quit_prompt | cl, release | Quit the game
csgo_download_match | cl, norecord, clientcmd_can_execute | Downloads a match via serial code and starts playback
csgo_fatdemo_enable | sv, cl, rep, release | Default: false<br>
csgo_fatdemo_output | sv, cl, rep, release | Default: test.fatdem<br>
csgo_map_preview_scale | cl, a | Default: 0<br>
csgo_use_fullsort_for_opaque | cl, cheat | Default: true<br>fullsort the opaque pass when there wasn't a depth prepass
csgo_video_settings_restore_previous | cl, release | csgo_video_settings_restore_previous
csm_bias_override_0 | cheat | Default: 1<br>
csm_bias_override_1 | cheat | Default: 1<br>
csm_bias_override_2 | cheat | Default: 1<br>
csm_bias_override_3 | cheat | Default: 1<br>
csm_cascade0_override_dist | cheat | Default: -1<br>
csm_cascade1_override_dist | cheat | Default: -1<br>
csm_cascade2_override_dist | cheat | Default: -1<br>
csm_cascade3_override_dist | cheat | Default: -1<br>
csm_cascade_viewdir_shadow_bias_scale | cheat | Default: 2<br>
csm_res_override_0 | cheat | Default: 0<br>
csm_res_override_1 | cheat | Default: 0<br>
csm_res_override_2 | cheat | Default: 0<br>
csm_res_override_3 | cheat | Default: 0<br>
csm_slope_scale_db_override | cheat | Default: 3<br>
csm_split_log_scalar | cheat | Default: 0.85<br>
csm_viewdir_shadow_bias | cheat | Default: 0<br>
csm_viewmodel_farz | cheat | Default: 30<br>
csm_viewmodel_max_shadow_dist | cheat | Default: 21<br>
csm_viewmodel_max_visible_dist | cheat | Default: 1000<br>
custom_bot_difficulty | sv, cl, rep, release | Default: 2<br>Bot difficulty for offline play.
cv_bot_ai_bt_debug_target | sv, rep, cheat | Default: -1<br>Draw the behavior tree of the given bot.
cv_bot_ai_bt_hiding_spot_show | sv, rep, cheat | Default: false<br>Draw hiding spots.
cv_bot_ai_bt_moveto_show_next_hiding_spot | sv, rep, cheat | Default: false<br>Draw the hiding spot the bot will check next.
cvar_unhide |  | 
cvarlist | release | Show the list of convars/concommands.
cvarlist_md |  | List all convars/concmds in Markdown format. Format: \[hidden\]
cyclevar | norecord, release | Cycle through specified convar values.
debug_entity_outline_highlight | cl, cheat | Default: false<br>
debug_purchase_defidx | cl, release, clientcmd_can_execute | Purchase an item by defindex
debug_takedamage_summaries | sv, cheat | Default: false<br>
debug_visibility_monitor | sv, cheat | Default: 0<br>
debugoverlay_cycle_domain | sv, cheat | Toggles visibility of the debug overlay system.
debugoverlay_cycle_state | sv, cheat | Toggles visibility of the debug overlay system.
debugoverlay_draw_current | cheat | Default: false<br>Tell debugoverlay to not draw any entries that have aged out by the time of rendering. Useful if sim runs more often than rendering.
debugoverlay_force_respect_ttl | cheat | Default: false<br>Force respect TTL even when clearing scopes
debugoverlay_hide_imgui | sv, cheat | Hides the overlay.
debugoverlay_ignore_source | cheat | Default: false<br>Draw everything normal and ignore the source for rendering
debugoverlay_show_text_outline | cheat | Default: false<br>Toggle display of box around text
debugoverlay_toggle | sv, cheat | Toggles visibility of the debug overlay system.
default_fov | cl, cheat | Default: 90<br>
demo_flush | a | Default: false<br>Flush writing the demo file every network update
demo_goto | release | Skips to location in demo.
demo_gotomark | release | Skips the current demo playback to the marked tick
demo_gototick | release | Skips to a tick in demo.
demo_info | release | Print information about currently playing demo.
demo_marktick | release | Marks the current demo playback tick for later use
demo_pause | release | Pauses demo playback.
demo_quitafterplayback | release | Default: false<br>Quits game after demo playback.
demo_recordcommands | cheat | Default: true<br>Record commands typed at console into .dem files.
demo_resume | release | Resumes demo playback.
demo_timescale | release | Sets demo replay speed.
demo_togglepause | release | Toggles demo playback.
demolist | release | Print demo sequence list.
demoui | cl, release | Show/hide demo playback ui
dev_add_onground_on_spawn | sv, release | Default: false<br>Should we mess with the ground flag when we spawn? (I don't think we should). If we don't hit the assert in CCSPlayer_MovementServices::ProcessMovement, we should remove this by Dec 2022.
developer | release | Default: 0<br>Set developer message level.
differences | release | Show all convars which are not at their default values (optional restricted to specific flags).
disable_dynamic_prop_loading | sv, cheat | Default: false<br>If non-zero when a map loads, dynamic props won't be loaded
disconnect | release | Disconnect from server
display_game_events | sv, cheat | Default: false<br>
dlight_debug | cl, cheat | Creates a dlight in front of the player
dm_togglerandomweapons | cl, server_can_execute, clientcmd_can_execute | Turns random weapons in deathmatch on/off
dota_enable_spatial_audio | release | Default: false<br>Flag to enable spatial audio in Dota 2.
dota_spatial_audio_mix | release | Default: 1<br>Mix value to blend spatial and non-spatial audio in Dota 2.
drawcross | sv, cheat | Draws a cross at the given location<br>	Arguments: x y z
drawline | sv, cheat | Draws line between two 3D Points.<br>	Green if no collision<br>	Red is collides with something<br>	Arguments: x1 y1 z1 x2 y2 z2
dsp_dist_max | cheat, demo | Default: 1440<br>
dsp_dist_min | cheat, demo | Default: 0<br>
dsp_off | cheat | Default: false<br>
dsp_volume | a, demo | Default: 0.8<br>
dump_entity_report | cl, cheat | List all client-side entities in the scene
dump_panorama_css_properties | release | Prints out all valid panorama CSS properties and their documentation
dump_panorama_events | release | print panorama event types and their documentation
dumpparticlelist | release | Print out information on existing particle systems
echo | server_can_execute | Echo text to console.
echoln | release | Echo the command arguments on the console
enable_boneflex | cl, a | Default: true<br>
endmatch_votenextmap | cl, clientcmd_can_execute | Votes for the next map at the end of the match
endround | sv, cheat | End the current round.
engine_low_latency_sleep_after_client_tick | release | Default: false<br>When r_low_latency is enabled, this moves the low latency sleep on tick frames to happen after client simulation.
engine_no_focus_sleep | a | Default: 20<br>
english | cl, user | Default: true<br>If set to 1, running the english language set of assets.
ent_absbox | sv, cheat | Displays the total bounding box for the given entity(s) in green.  Some entites will also display entity specific overlays.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_actornames | sv, cheat | Displays the entity name for all entities that have ShouldDisplayInActorNames true in code
ent_actornames_font | sv, cl, rep, cheat | Default: Consolas<br>ent_actornames font name
ent_actornames_fontsize | sv, cl, rep, cheat | Default: 24<br>ent_actornames font size
ent_animgraph_debug | sv, cheat | Displays debug draws about the given entity(ies) animgraph<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_animgraph_record | sv, cheat | Toggles recording of animgraph replay of the given entity(s)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_animgraph_setvar | sv, cheat | Sets a variable on the animgraph of the given entity(s)<br>	Arguments:   &lt;varname&gt;=&lt;value&gt;	&lt;{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}&gt;
ent_attachments | sv, cheat | Displays the attachment points on an entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_autoaim | sv, cheat | Displays the entity's autoaim radius.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_bbox | sv, cheat | Displays the movement bounding box for the given entity(ies) in orange.  Some entites will also display entity specific overlays.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_call | sv, cheat | ent_call &lt;funcname&gt; &lt;option:entname&gt; calls function on current look target or filtername, checks on ent, then root, then mode, then map scope
ent_clear_debug_overlays | sv, cheat | Clears all debug overlays
ent_create | sv, cheat | Creates an entity of the given designer or subclass name where the player is looking.
ent_find | sv, cheat | Find and list all entities with classnames or targetnames that contain the specified substrings.<br>Format: find_ent &lt;substring&gt;<br>
ent_find_index | sv, cheat | Display data for entity matching specified index.<br>Format: find_ent_index &lt;index&gt;<br>
ent_fire | sv, cheat | Usage:<br>   ent_fire &lt;target&gt; \[action\] \[value\] \[delay\]<br>
ent_fire_output | sv, cheat | Usage:<br>   ent_fire_output &lt;target&gt; \[output name\] \[value\] \[delay\]<br>
ent_grab | sv, cheat | grabs the object in front of the player. Options: -loose -multiple -toggle
ent_hierarchy | sv, cheat | Prints the entity hierarchy tree rooted at the specified ent(s)
ent_hitbox | sv, cheat | Displays the hitboxes for the given entity(ies).<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_info | sv, cheat | Usage:<br>   ent_info &lt;class name&gt;<br>
ent_joints | sv, cheat | Displays the joint names + axes an entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_kill | sv, cheat | Kills the given entity(s)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_messages | sv, cheat | Toggles input/output message display for the selected entity(ies).  The name of the entity will be displayed as well as any messages that it sends or receives.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_messages_draw | sv, cl, rep, cheat | Default: false<br>Visualizes all entity input/output activity.
ent_name | sv, cheat | Displays the entity name
ent_orient | sv, cheat | Orient the specified entity to match the player's angles. By default, only orients target entity's YAW. Use the 'allangles' option to orient on all axis.<br>	Format: ent_orient &lt;entity name&gt; &lt;optional: allangles&gt;
ent_picker | sv, cheat | Toggles 'picker' mode.  When picker is on, the bounding box, pivot and debugging text is displayed for whatever entity the player is looking at.<br>	Arguments:	full - enables all debug information
ent_pivot | sv, cheat | Displays the pivot for the given entity(ies).<br>	(y=up=green, z=forward=blue, x=left=red). <br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_pivot_size | sv, a, cheat | Default: 20<br>
ent_rbox | cl, cheat | Displays the total bounding box for the given entity(s) in green.  Some entites will also display entity specific overlays.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_remove | sv, cheat | Removes the given entity(s)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_remove_all | sv, cheat | Removes all entities of the specified type<br>	Arguments:   	{entity_name} / {class_name} 
ent_rotate | sv, cheat | Rotates an entity by a specified # of degrees
ent_scale | sv, cheat | Scales entities.	Arguments: &lt;scale factor&gt; &lt;{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}&gt;
ent_scenehierarchy | sv, cheat | Prints the entity scenenode hierarchy tree rooted at the specified ent(s)
ent_script_dump | sv, cheat | Dumps the names and values of this entity's script scope to the console<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_select | sv, cheat | Select or deselects the given entities(s) for later manipulation<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_setang | sv, cheat | Set entity angles
ent_setname | sv, cheat | Sets the targetname of the given entity(s)<br>	Arguments:   	&lt;new entity name&gt; &lt;{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}&gt;
ent_setpos | sv, cheat | Move entity to position
ent_show_contexts | sv, cheat | Default: false<br>Show entity contexts in ent_text display
ent_show_damage | sv, cheat | Sets damage display mode.  When on, you will see the amount of damage dealt over the target's head.
ent_show_response_criteria | sv, cheat | Print, to the console, an entity's current criteria set used to select responses.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_showonlyattachment | sv, cheat | Default: <br>
ent_skeleton | sv, cheat | Displays the skeleton for the given entity(ies).<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_skeleton_duration | sv, cl, rep, cheat | Default: 0<br>Duration of ent_skeleton display
ent_teleport | sv, cheat | Teleport the specified entity to where the player is looking.<br>	Format: ent_teleport &lt;entity name&gt;
ent_text | sv, cheat | Displays text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_text256 | sv, cheat | Displays text debugging information about the given entity(ies) \[within 256 units of the player\] on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_text_clear | sv, cheat | Hide text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_text_filter | sv, cheat | Set which ent_text filters you want: 
ent_text_flags_active | sv, a, cheat | Default: -1<br>
ent_text_no_name_really_i_mean_it | sv, cheat | Default: false<br>
ent_text_radius | sv, cheat | Displays text debugging information about the given entity(ies) \[near the player\] on top of the entity (See Overlay Text)<br>	2 Arguments:   	&lt;Radius&gt; &lt;{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}&gt;
ent_text_sticky_add | sv, cheat | Adds to list of names to display text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_text_sticky_clear | sv, cheat | Clears the list of names to display text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_text_sticky_dump | sv, cheat | Spews the list of names to display text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_text_sticky_remove | sv, cheat | Removes from the list of names to display text debugging information about the given entity(ies) on top of the entity (See Overlay Text)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_ungrab | sv, cheat | un-grabs all objects
ent_vcollide_wireframe | sv, cheat | Displays the interpolated vcollide wireframe pm am entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_viewoffset | sv, cheat | Displays the eye position for the given entity(ies) in red.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
entity_log_load_unserialize | sv, cl, rep, cheat | Default: 0<br>Output unserialization of entities on map load. 0 - off, 1 - client/server, 2 - server, 3 - client
escape | release, clientcmd_can_execute | Escape key pressed.
exec | norecord, release | Execute a cfg file
exec_async | cheat, norecord | Execute a cfg file over time
execifexists | norecord, release | Execute a cfg file if file exists
execute_command_every_frame | cheat | Default: <br>
explode | sv, cheat | Kills the player with explosive damage
explodevector | sv, cheat | Kills a player applying an explosive force. Usage: explodevector &lt;player&gt; &lt;x value&gt; &lt;y value&gt; &lt;z value&gt;
fadein | sv, cheat | fadein {time r g b}: Fades the screen in from black or from the specified color over the given number of seconds.
fadeout | sv, cheat | fadeout {time r g b}: Fades the screen to black or to the specified color over the given number of seconds.
ff_damage_decoy_explosion | sv, cl, rep, release | Default: false<br>Enables or disables team damage from decoy detonation
find | release | Find concommands with the specified string in their name/help text.
findflags | release | Find concommands by flags.
firetarget | sv, cheat | 
firstperson | cl, release, per_tick | Switch to firstperson camera.
fish_debug | cl, cheat | Default: false<br>Show debug info for fish
fish_dormant | sv, rep, cheat | Default: false<br>Turns off interactive fish behavior. Fish become immobile and unresponsive.
fog_color | cl, cheat | Default: -1 -1 -1<br>
fog_colorskybox | cl, cheat | Default: -1 -1 -1<br>
fog_enable | cl, cheat | Default: true<br>Enable fog
fog_enableskybox | cl, cheat | Default: true<br>
fog_end | cl, cheat | Default: -1<br>
fog_endskybox | cl, cheat | Default: -1<br>
fog_hdrcolorscale | cl, cheat | Default: -1<br>
fog_hdrcolorscaleskybox | cl, cheat | Default: -1<br>
fog_maxdensity | cl, cheat | Default: -1<br>
fog_maxdensityskybox | cl, cheat | Default: -1<br>
fog_override | cl, cheat | Default: 0<br>Overrides the map's fog settings (-1 populates fog_ vars with map's values)
fog_override_color | cheat | Sets the fog color override
fog_override_enable | cheat | Default: false<br>Use fog_override convars instead of world fog data
fog_override_end | cheat | Default: 3500<br>
fog_override_exponent | cheat | Default: 2<br>
fog_override_max_density | cheat | Default: 0.4<br>
fog_override_start | cheat | Default: 1000<br>
fog_start | cl, cheat | Default: -1<br>
fog_startskybox | cl, cheat | Default: -1<br>
fov_cs_debug | cl, cheat | Default: 0<br>Sets the view fov if cheats are on.
fov_desired | cl, a, user | Default: 75<br>Sets the base field-of-view.
fps_max | a, release | Default: 400<br>Frame rate limiter.  0=no limit.  Does not apply to dedicated server.
fps_max_tools | a | Default: 120<br>Additional frame rate limit while in tools mode and a window other than the game window has focus. Note that fps_max still applies, this only allows the maximum frame rate for tools mode to be lower. 0=no tools specific limit.
fps_max_ui | a | Default: 120<br>Frame rate limiter while the game UI is displayed.  0=no limit.  Does not apply to dedicated server.
fs_report_sync_opens | release | Default: 0<br>0:Off, 1:Always, 2:Not during load
fs_spew_readfieldlist | cheat | index &lt;threshold bytes&gt;: spew changes to ent index, optionally only spewing if update is &gt; than threshold bytes
func_break_max_pieces | sv, a, rep | Default: 15<br>
g_debug_angularsensor | sv, cheat | Default: false<br>
g_debug_constraint_sounds | sv, cheat | Default: false<br>Enable debug printing about constraint sounds.
g_debug_ragdoll_visualize | cl, cheat | Default: false<br>
game_alias | release | Set the configuration of game type and mode based on game alias like "deathmatch".
game_mode | sv, cl, rep, release | Default: 1<br>The current game mode (based on game type). See GameModes.txt.
game_type | sv, cl, rep, release | Default: 0<br>The current game type. See GameModes.txt.
gameinstructor_dump_open_lessons | cl, cheat | Gives a list of all currently open lessons.
gameinstructor_dump_run_lesson_counts | cl, cheat | Gives a list of lessons that been completed or shown
gameinstructor_enable | cl, release | Default: false<br>Display in game lessons that teach new players.
gameinstructor_find_errors | cl, cheat | Default: false<br>Set to 1 and the game instructor will run EVERY scripted command to uncover errors.
gameinstructor_verbose | cl, cheat | Default: 0<br>Set to 1 for standard debugging or 2 (in combo with gameinstructor_verbose_lesson) to show update actions.
gameinstructor_verbose_lesson | cl, cheat | Default: <br>Display more verbose information for lessons have this name.
gameui_hide | release | Hides the game UI
getpos | cl, cheat | dump position and angles to the console
getpos_exact | cl, cheat | dump origin and angles to the console
give | sv | Give item to player.<br>	Arguments: &lt;item_name&gt;
givecurrentammo | sv, cheat | Give a supply of ammo for current weapon..<br>
gl_clear_gray | cl, cheat | Default: false<br>Clear the back buffer to gray every frame.
gl_clear_randomcolor | cl, cheat | Default: false<br>Clear the back buffer to random colors every frame. Helps spot open seams in geometry.
global_set | sv, cheat | global_set &lt;globalname&gt; &lt;state&gt;: Sets the state of the given env_global (0 = OFF, 1 = ON, 2 = DEAD).
glow_outline_width | cl, cheat | Default: 6<br>Width of glow outline effect in screen space.
glow_use_tolerance | cl, rep, cheat | Default: 0.85<br>
god | sv, cheat | Toggle by default, or 0 to disable and 1 to enable. Player becomes invulnerable.
gotv_theater_container | cl, release | Default: <br>Enables GOTV theater mode for the specified container, setting it to 'live' will play top live matches
grep | release | grep line for pattern, print out matching lines only
help | release | Find help about a convar/concommand.
hideconsole | norecord, release | Hide the console.
hidehud | cl, cheat | Default: 0<br>bitmask: 1=weapon selection, 2=flashlight, 4=all, 8=health, 16=player dead, 32=needssuit, 64=misc, 128=chat, 256=crosshair, 512=vehicle crosshair, 1024=in vehicle
host_framerate | release | Default: 0<br>Set to lock per-frame time elapse.
host_timescale | rep, cheat | Default: 1<br>Prescale the clock by this amount.
host_timescale_dec | cheat | Decrement the timescale by one step
host_timescale_inc | cheat | Increment the timescale by one step
host_writeconfig | release | Saves out the user config values.
hostage_debug | sv, cl, rep, cheat | Default: 0<br>Show hostage AI debug information
hostage_is_silent | sv, cl, rep, cheat | Default: false<br>When set, the hostage won't play any code driven response rules lines
hostfile | sv, release | Default: host.txt<br>The HOST file to load.
hostip | release | Default: 0<br>Host game server ip
hostname | release | Default: <br>Hostname for server.
hostname_in_client_status | release | Default: false<br>Show server hostname in client status.
hostport | release | Default: 27015<br>Host game server port
hud_fastswitch | cl, a | Default: 0<br>
hud_scaling | cl, a | Default: 1<br>Scales hud elements
hud_showtargetid | cl, a, per_user | Default: true<br>Enables display of target names
hurtme | sv, cheat | Hurts the player.<br>	Arguments: &lt;health to lose&gt;
ik_debug_chain_to_filter_by | sv, cl, rep, cheat | Default: <br>
ik_enable | cheat | Default: true<br>Enable IK.
ik_hinge_debug_bone_index | sv, cl, rep, cheat | Default: -1<br>
imgui_set_selection | sv, cheat | Sets ImGui selection
imgui_set_status_text | sv, cheat | Sets ImGui header status text
impulse | cl, release | Triggers impulse command
incrementvar | norecord, release | Increment specified convar value.
inferno_child_spawn_interval_multiplier | sv, cheat | Default: 0.1<br>Amount spawn interval increases for each child
inferno_child_spawn_max_depth | sv, rep, release | Default: 4<br>
inferno_damage | sv, cheat | Default: 40<br>Damage per second
inferno_debug | sv, cheat | Default: false<br>
inferno_dlight_spacing | cl, cheat | Default: 7200<br>Inferno dlights are at least this far apart
inferno_flame_lifetime | sv, rep, release | Default: 7<br>Average lifetime of each flame in seconds
inferno_flame_spacing | sv, cheat | Default: 42<br>Minimum distance between separate flame spawns
inferno_forward_reduction_factor | sv, cheat | Default: 0.9<br>
inferno_friendly_fire_duration | sv, cheat | Default: 6<br>For this long, FF is credited back to the thrower.
inferno_initial_spawn_interval | sv, cheat | Default: 0.02<br>Time between spawning flames for first fire
inferno_max_child_spawn_interval | sv, cheat | Default: 0.5<br>Largest time interval for child flame spawning
inferno_max_flames | sv, rep, release | Default: 16<br>Maximum number of flames that can be created
inferno_max_range | sv, rep, release | Default: 150<br>Maximum distance flames can spread from their initial ignition point
inferno_per_flame_spawn_duration | sv, cheat | Default: 3<br>Duration each new flame will attempt to spawn new flames
inferno_scorch_decals | sv, cheat | Default: false<br>
inferno_smoke_volume_density | sv, cheat | Default: 0.1<br>
inferno_spawn_angle | sv, cheat | Default: 45<br>Angular change from parent
inferno_surface_offset | sv, cheat | Default: 20<br>
inferno_velocity_decay_factor | sv, cheat | Default: 0.2<br>
inferno_velocity_factor | sv, cheat | Default: 0.003<br>
inferno_velocity_normal_factor | sv, cheat | Default: 0<br>
input_button_code_is_scan_code | a | Default: true<br>Bind keys based on keyboard position instead of key name
input_filter_relative_analog_inputs | cl, a | Default: false<br>
input_forceuser | cheat | Default: -1<br>Force user input to this split screen player.
install_dlc_workshoptools_cvar | cl, release | Default: -1<br>DLC Install Status
invnext | cl, server_can_execute | 
invnextselect | cl, server_can_execute | 
invprev | cl, server_can_execute | 
invprevselect | cl, server_can_execute | 
ip | release | Default: <br>Overrides IP for multihomed hosts
iv_debugbone | release | Default: <br>Debug bone name for interpolation spew of CAnimationState.
joy_advanced | cl, a | Default: false<br>
joy_advaxisr | cl, a | Default: 0<br>
joy_advaxisu | cl, a | Default: 0<br>
joy_advaxisv | cl, a | Default: 0<br>
joy_advaxisx | cl, a | Default: 0<br>
joy_advaxisy | cl, a | Default: 0<br>
joy_advaxisz | cl, a | Default: 0<br>
joy_axisbutton_threshold | a | Default: 0.3<br>Analog axis range before a button press is registered.
joy_axisr_deadzone | a, per_user | Default: 0.15<br>
joy_axisr_relative | a, per_user | Default: false<br>
joy_axisu_deadzone | a, per_user | Default: 0.15<br>
joy_axisu_relative | a, per_user | Default: false<br>
joy_axisv_deadzone | a, per_user | Default: 0.15<br>
joy_axisv_relative | a, per_user | Default: false<br>
joy_axisx_deadzone | a, per_user | Default: 0.15<br>
joy_axisx_relative | a, per_user | Default: false<br>
joy_axisy_deadzone | a, per_user | Default: 0.15<br>
joy_axisy_relative | a, per_user | Default: false<br>
joy_axisz_deadzone | a, per_user | Default: 0.15<br>
joy_axisz_relative | a, per_user | Default: false<br>
joy_circle_correct_mode | cl, a, per_user | Default: 1<br>
joy_circle_correct_mode_vehicle | cl, a, per_user | Default: 2<br>
joy_display_input | cl, a | Default: false<br>
joy_forward_sensitivity | cl, a, per_user | Default: 1<br>
joy_movement_stick | cl, a, per_user | Default: false<br>Which stick controls movement (0 is left stick)
joy_name | cl, a | Default: joystick<br>
joy_pitch_sensitivity | cl, a, per_user | Default: 3<br>
joy_pitchsensitivity | cl, a, per_user | Default: 1<br>
joy_response_look | cl, a, per_user | Default: 0<br>
joy_response_move | cl, a, per_user | Default: 9<br>
joy_side_sensitivity | cl, a, per_user | Default: 1<br>
joy_sidesensitivity | cl, a | Default: 1<br>
joy_wingmanwarrior_centerhack | a | Default: false<br>Wingman warrior centering hack.
joy_wingmanwarrior_turnhack | a | Default: false<br>Wingman warrior hack related to turn axes.
joy_yaw_sensitivity | cl, a, per_user | Default: 3<br>
joy_yawsensitivity | cl, a, per_user | Default: -1<br>
joystick | cl, a | Default: false<br>True if the joystick is enabled, false otherwise.
key_findbinding | release | Find key bound to specified command string.
key_listboundkeys | release | List bound keys with bindings.
kick | norecord, release | Kick a player by name.
kickid | norecord, release | Kick a player by userid or uniqueid, with a message.
kickid_hltv | norecord, release | Kick a player by userid or uniqueid, with a message.
kill | sv, cheat | Kills the player with generic damage
killvector | sv, cheat | Kills a player applying force. Usage: killvector &lt;player&gt; &lt;x value&gt; &lt;y value&gt; &lt;z value&gt;
labelled_debug_helper_arc_segments | sv, cl, rep, cheat | Default: 20<br>
labelled_debug_helper_enabled | sv, cl, rep, cheat | Default: true<br>
labelled_debug_helper_scale | sv, cl, rep, cheat | Default: 1<br>
labelled_debug_helper_show_position | sv, cl, rep, cheat | Default: false<br>
labelled_debug_helper_show_text | sv, cl, rep, cheat | Default: true<br>
labelled_debug_helper_skeleton_show_bone_names | sv, cl, rep, cheat | Default: true<br>
lastinv | cl, server_can_execute | 
launch_warmup_map | cl, norecord, clientcmd_can_execute | Launches warmup map
lb_barnlight_shadowmap_scale | release | Default: 1<br>Scale for computed barnlight shadowmap size
lb_shadow_map_culling | cheat | Default: true<br>
lb_show_light_fog_clipmap_cb_cost | cheat | Default: false<br>Show cost of lights in fog clipmap constant buffer. yellow = 1 cost, red = 6 cost
lightquery_debug_direct_lighting | sv, cl, rep, cheat | Default: true<br>
lightquery_debug_indirect_lighting | sv, cl, rep, cheat | Default: true<br>
listdemo | release | List demo file contents.
listissues | sv | List all the issues that can be voted on.
lobby_default_privacy_bits2 | cl, a, release | Default: 1<br>Lobby default permissions (0: private, 1: public)
lockMoveControllerRet | cl, a | Default: false<br>
log | release | Enables logging to file, console, and udp &lt; on \| off &gt;.
log_color | norecord, release | Set the color of a logging channel.
log_dumpchannels | norecord, release | Dumps information about all logging channels.
log_flags | norecord, release | Set the flags on a logging channel.
log_level | norecord, release | Set the spew level of a logging channel.
log_verbosity | norecord, release | Set the verbosity of a logging channel.
logaddress_add_http | sv, unlogged, release | Set URI of a listener to receive logs via http post. Wrap URI in double quotes.
logaddress_add_http_delayed | sv, unlogged, release | Set a delay and URI of a listener to receive logs via http post. Wrap URI in double quotes.
logaddress_delall_http | sv, unlogged, release | Remove all http listeners from the dispatch list.
logaddress_list_http | sv, unlogged, release | List all URIs currently receiving server logs
logaddress_token_secret | sv, release | Default: <br>Set a secret string that will be hashed when using logaddress with explicit token hash.
logic_npc_counter_debug | sv, rep, cheat | Default: false<br>
m_pitch | cl, a, per_user | Default: 0.022<br>Mouse pitch factor.
m_yaw | cl, a, per_user | Default: 0.022<br>Mouse yaw factor.
map | release | map &lt;mapname&gt; :Load a new map.
map_enable_background_maps | cl, cheat | Enables/disables portrait background maps
map_setbombradius | sv, cheat | Sets the bomb radius for the map.
map_showbombradius | sv, cheat | Shows bomb radius from the center of each bomb site and planted bomb.
mapgroup | sv, norecord, release | Specify a map group
mapoverview_allow_client_draw | cl, release | Default: false<br>Allow a client to draw on the map overview
mapoverview_icon_scale | cl, a, release | Default: 1<br>Sets the icon scale multiplier for the overview map. Valid values are 0.5 to 3.0.
maps | release | Displays list of maps.
markup_group_ent_bbox | sv, cheat | markup_group_ent_bbox &lt;markup_group name&gt; -&gt; toggle ent_bbox for all members of the named markup group
markup_group_ent_text | sv, cheat | markup_group_ent_text &lt;markup_group name&gt; -&gt; toggle ent_text for all members of the named markup group
markup_group_spew | sv, cheat | Spew all current markup groups and their members
mat_colcorrection_forceentitiesclientside | cl, cheat | Default: false<br>Forces color correction entities to be updated on the client
mat_disable_normal_mapping | cl, cheat | Default: false<br>
mat_fullbright | cheat | Default: 0<br>
mat_lpv_luxels | cheat | Default: false<br>
mat_luxels | cheat | Default: false<br>
mat_max_lighting_complexity | cheat | Default: 8<br>
mat_overdraw | cheat | Default: 0<br>Visualize overdraw
mat_overdraw_color | cheat | Default: 0.075 0.15 0.3<br>
mat_shading_complexity | cheat | Default: false<br>Visualize shading complexity
mat_shading_complexity_color | cheat | Default: 1 0.5 0.25<br>
mat_shading_complexity_max_instruction_count | cheat | Default: 1024<br>
mat_shading_complexity_max_register_count | cheat | Default: 128<br>
mat_show_distance_field | cheat | Default: 0<br>0=Off, 1=Visualize trace from camera, 2=Visualize occlusion
mat_tonemap_bloom_scale | cheat | Default: -1<br>
mat_tonemap_bloom_start_value | cheat | Default: -1<br>
mat_tonemap_force_accelerate_exposure_down | cheat | Default: -1<br>
mat_tonemap_force_average_lum_min | cheat | Default: -1<br>Override. Old default was 3.0
mat_tonemap_force_log_lum_max | cheat | Default: -1<br>
mat_tonemap_force_log_lum_min | cheat | Default: -1<br>
mat_tonemap_force_max | cheat | Default: -1<br>
mat_tonemap_force_min | cheat | Default: -1<br>
mat_tonemap_force_percent_bright_pixels | cheat | Default: -1<br>Override. Old value was 1.0
mat_tonemap_force_percent_target | cheat | Default: -1<br>Override. Old default was 45.
mat_tonemap_force_rate | cheat | Default: -1<br>
mat_tonemap_force_scale | cheat | Default: 0<br>
mat_tonemap_force_use_alpha | cheat | Default: -1<br>
mat_tonemap_uncap_exposure | cheat | Default: 0<br>
mat_wireframe | cheat | Default: 0<br>0=Off, 1=Surface Wireframe, 2=Transparent Wireframe
menuselect | cl, clientcmd_can_execute | menuselect
mesh_calculate_curvature_smooth_invert | sv, cl, rep, cheat | Default: false<br>
mesh_calculate_curvature_smooth_pass_count | sv, cl, rep, cheat | Default: 3<br>
mesh_calculate_curvature_smooth_weight | sv, cl, rep, cheat | Default: 1<br>
minimap_create | cl, cheat | Does a bunch of work to create a minimap
mm_csgo_community_search_players_min | a, release | Default: 3<br>When performing CSGO community matchmaking look for servers with at least so many human players
mm_dedicated_force_servers | release | Default: <br>Comma delimited list of ip:port of servers used to search for dedicated servers instead of searching for public servers.<br>Use syntax `publicip1:port\|privateip1:port,publicip2:port\|privateip2:port` if your server is behind NAT.<br>If the server is behind NAT, you can specify `0.0.0.0\|privateip:port` and if server port is in the list of `mm_server_search_lan_ports` its public address should be automatically detected.
mm_dedicated_search_maxping | a | Default: 150<br>Longest preferred ping to dedicated servers for games
mm_queue_show_stats | cl, clientcmd_can_execute | Display global server stats
mm_server_search_lan_ports | a, release | Default: 27015,27016,27017,27018,27019,27020<br>Ports to scan during LAN games discovery. Also used to discover and correctly connect to dedicated LAN servers behind NATs.
mm_session_search_qos_timeout | release | Default: 15<br>
mm_session_sys_kick_ban_duration | release | Default: 180<br>
mm_session_sys_pkey | release | Default: <br>
mobile_fps_increase_during_charging | a | Default: false<br>MOBILE_FPS_CONTROL: If true we increase framerate limit while charging
mobile_fps_increase_during_touch | a | Default: true<br>MOBILE_FPS_CONTROL: If true we increase framerate limit during touch
mobile_fps_limit | a | Default: 30<br>MOBILE_FPS_CONTROL: Mobile FPS limit - 15, 30, 60
model_default_preview_sequence_name | sv, cl, a, rep | Default: <br>
motdfile | sv, release | Default: motd.txt<br>The MOTD file to load.
mouse_inverty | cl, a | Default: false<br>
mp_backup_restore_list_files | sv, release | Lists recent backup round files matching the prefix, most recent files first, accepts a numeric parameter to limit the number of files displayed
mp_backup_restore_load_autopause | sv, release | Default: true<br>Whether to automatically pause the match after restoring round data from backup
mp_backup_restore_load_file | sv, release | Loads player cash, KDA, scores and team scores; resets to the next round after the backup
mp_backup_round_auto | sv, release | Default: true<br>If enabled will keep in-memory backups to handle reconnecting players even if the backup files aren't written to disk
mp_backup_round_file | sv, release | Default: backup<br>If set then server will save all played rounds information to files filename_date_time_team1_team2_mapname_roundnum_score1_score2.txt
mp_backup_round_file_last | sv, release | Default: <br>Every time a backup file is written the value of this convar gets updated to hold the name of the backup file.
mp_backup_round_file_pattern | sv, release | Default: %prefix%_round%round%.txt<br>If set then server will save all played rounds information to files named by this pattern, e.g.'%prefix%_%date%_%time%_%team1%_%team2%_%map%_round%round%_score_%score1%_%score2%.txt'
mp_bot_ai_bt_clear_cache | sv, release | Clears the cache for behavior tree files.
mp_competitive_endofmatch_extra_time | sv, release | Default: 15<br>After a competitive match finishes rematch voting extra time is given for rankings.
mp_consecutive_loss_aversion | sv, rep, release | Default: 1<br>How loss streak is affected with round win: 0 = win fully resets loss bonus, 1 = first win steps down loss bonus, 2 = first win holds loss bonus and step down starting with second win
mp_coopterrorhunt_kill_add_time | sv, cl, rep, release | Default: 10<br>The number of seconds added to the clock when players get a kill.
mp_coopterrorhunt_num_enemies | sv, cl, rep, release | Default: 20<br>The number of enemies CTs have to hunt and kill.
mp_death_drop_breachcharge | sv, cl, rep, release | Default: true<br>Drop breachcharge on player death
mp_death_drop_healthshot | sv, cl, rep, release | Default: true<br>Drop healthshot on player death
mp_death_drop_taser | sv, cl, rep, release | Default: true<br>Drop taser on player death
mp_disable_autokick | sv, release | Prevents a userid from being auto-kicked
mp_disconnect_kills_bots | sv, release | Default: false<br>When a bot disconnects, kill them first.  Requires mp_disconnect_kills_players.
mp_disconnect_kills_players | sv, release | Default: true<br>When a player disconnects, kill them first (triggering item drops, stats, etc.)
mp_dm_bonus_length_max | sv, cl, rep, release | Default: 30<br>Maximum time the bonus time will last (in seconds)
mp_dm_bonus_length_min | sv, cl, rep, release | Default: 30<br>Minimum time the bonus time will last (in seconds)
mp_dm_healthshot_killcount | sv, cl, rep, release | Default: 3<br>Grant healthshots in deathmatch after n kills
mp_dm_time_between_bonus_max | sv, cl, rep, release | Default: 40<br>Maximum time a bonus time will start after the round start or after the last bonus (in seconds)
mp_dm_time_between_bonus_min | sv, cl, rep, release | Default: 30<br>Minimum time a bonus time will start after the round start or after the last bonus (in seconds)
mp_endmatch_votenextleveltime | sv, release | Default: 20<br>If mp_endmatch_votenextmap is set, players have this much time to vote on the next map at match end.
mp_endmatch_votenextmap | sv, cl, rep, release | Default: true<br>Whether or not players vote for the next map at the end of the match when the final scoreboard comes up
mp_endmatch_votenextmap_keepcurrent | sv, cl, rep, release | Default: true<br>If set, keeps the current map in the list of voting options.  If not set, the current map will not appear in the list of voting options.
mp_endmatch_votenextmap_wargames_modes | sv, release | Default: <br>Modes available for endmatch voting during War Games. Separate names with spaces.
mp_endmatch_votenextmap_wargames_nummaps | sv, release | Default: 3<br>Maximum number of maps to include in endmatch voting during War Games
mp_endmatch_votenextmap_wargames_nummodes | sv, release | Default: 1<br>Maximum number of other War Games to include in endmatch voting during War Games
mp_endwarmup_player_count | sv, cl, rep, release | Default: 0<br>Number of players required to be connected to end warmup early. 0 to require maximum players for mode.
mp_footsteps_serverside | sv, release | Default: true<br>Makes the server always play footstep sounds. Clients never calculate footstep sounds locally, instead relying on the server.
mp_fraglimit | sv, nf, release | Default: 0<br>
mp_guardian_bomb_plant_custom_x_mark_location | sv, cl, rep, release | Default: <br>x,y,z to display an X for the bomb plant in guardian missions with custom bomb plant boundaries.
mp_halftime_duration | sv, cl, rep, release | Default: 15<br>Target number of seconds that halftime lasts; shortened if team intros are active
mp_halftime_pausematch | sv, cl, rep, release | Default: 0<br>Set to 1 to pause match after halftime countdown elapses. Match must be resumed by vote or admin.
mp_hostages_rescuetime | sv, cl, rep, release | Default: 1<br>Additional time added to round time if a hostage is reached by a CT.
mp_hostages_run_speed_modifier | sv, rep, release | Default: 1<br>Default is 1.0, slow down hostages by setting this to &lt; 1.0.
mp_hostages_spawn_farthest | sv, rep, release | Default: false<br>When enabled will consistently force the farthest hostages to spawn.
mp_hostages_spawn_force_positions_xyz | sv, rep, release | Default: <br>Comma separated list of xyz locations to force spawn positions, e.g. 'x1 y1 z1,x2 y2 z2'
mp_hostages_takedamage | sv, cl, rep, release | Default: false<br>Whether or not hostages can be hurt.
mp_humanteam | sv, rep, release | Default: any<br>Restricts human players to a single team {any, CT, T}
mp_ignore_round_win_conditions | sv, rep, release | Default: false<br>Ignore conditions which would end the current round
mp_join_grace_time | sv, cl, rep, release | Default: 0<br>Number of seconds after round start to allow a player to join a game
mp_logdetail | sv, release | Default: 0<br>Logs attacks.  Values are: 0=off, 1=enemy, 2=teammate, 3=both)
mp_logdetail_items | sv, release | Default: false<br>Logs a line any time a player acquires or loses an item.
mp_logdistance_2d | sv, release | Default: 250<br>Enables distance logging every so many units
mp_logdistance_sec | sv, release | Default: 15<br>Enables distance logging every so many seconds
mp_logloadouts | sv, release | Default: true<br>Enables distance logging with full loadouts
mp_logmoney | sv, release | Default: false<br>Enables money logging.  Values are: 0=off, 1=on
mp_match_end_restart | sv, cl, rep, release | Default: false<br>At the end of the match, perform a restart instead of loading a new map
mp_match_restart_delay | sv, cl, rep, release | Default: 25<br>Time (in seconds) until a match restarts.
mp_min_halftime_duration | sv, cl, rep, release | Default: 8.5<br>Minimum number of seconds that halftime lasts even if team intros are active
mp_overtime_enable | sv, cl, rep, release | Default: false<br>If a match ends in a tie, use overtime rules to determine winner
mp_overtime_halftime_pausetimer | sv, cl, rep, release | Default: 0<br>If set to 1 will set mp_halftime_pausetimer to 1 before every half of overtime. Set mp_halftime_pausetimer to 0 to resume the timer.
mp_overtime_limit | sv, cl, rep, release | Default: 0<br>When overtime is enabled, only so many overtimes can be played
mp_overtime_maxrounds | sv, cl, rep, release | Default: 6<br>When overtime is enabled play additional rounds to determine winner
mp_overtime_startmoney | sv, cl, rep, release | Default: 10000<br>Money assigned to all players at start of every overtime half
mp_pause_match | sv, release | Pause the match in the next freeze time
mp_playerid | sv, cl, rep, release | Default: 0<br>Controls what information player see in the status bar: 0 all names; 1 team names; 2 no names
mp_playerid_delay | sv, cl, rep, release | Default: 0.4<br>Number of seconds to delay showing information in the status bar
mp_playerid_hold | sv, cl, rep, release | Default: 0.1<br>Number of seconds to keep showing old information in the status bar
mp_require_gun_use_to_acquire | sv, release | Default: false<br>Whether guns must be +used to acquire or default is touch-to-pickup
mp_restartgame | sv, release | Default: 0<br>If non-zero, game will restart in the specified number of seconds
mp_retake_ct_count | sv, cl, rep, release | Default: 4<br>Number of CT's when playing retakes.
mp_retake_t_count | sv, cl, rep, release | Default: 3<br>Number of terrorists when playing retakes.
mp_roundtime_deployment | sv, release | Default: 5<br>How many minutes deployment for coop mission takes.
mp_scrambleteams | sv, release | Scramble the teams and restart the game
mp_shield_speed_deployed | sv, cl, rep, release | Default: 170<br>The max speed of a player when they have a shield deployed
mp_shield_speed_holstered | sv, cl, rep, release | Default: 200<br>The max speed of a player when they have a shield holstered
mp_shorthanded_cash_bonus_ignore_kicked | sv, cl, rep, release | Default: true<br>Determines whether kicked players are included in the assessment for short-handedness
mp_shorthanded_cash_bonus_round_delay | sv, cl, rep, release | Default: 2<br>number of previous rounds that a team needs to have been shorthanded before they are eligible for the short-handed bonus
mp_spawnprotectiontime | sv, rep, release | Default: 5<br>Kick players who team-kill within this many seconds of a round restart.
mp_spec_swapplayersides | sv, cl, rep, release | Default: false<br>Toggle set the player names and team names to the opposite side in which they are are on the spectator panel.
mp_spectators_max | sv, cl, rep, release | Default: 2<br>How many spectators are allowed in a match.
mp_swapteams | sv, release | Swap the teams and restart the game
mp_td_dmgtokick | sv, rep, release | Default: 300<br>The damage threshhold players have to exceed in a match to get kicked.
mp_td_dmgtowarn | sv, rep, release | Default: 200<br>The damage threshhold players have to exceed in a match to get warned that they are about to be kicked.
mp_td_spawndmgthreshold | sv, rep, release | Default: 50<br>The damage threshold players have to exceed at the start of the round to be warned/kick.
mp_team_timeout_max | sv, cl, rep, release | Default: 1<br>Number of timeouts each team gets per match.
mp_team_timeout_ot_add_each | sv, cl, rep, release | Default: 0<br>Number of timeouts to add for each team when match goes to 2nd and each next overtime.
mp_team_timeout_ot_add_once | sv, cl, rep, release | Default: 0<br>Number of timeouts to add for each team when regulation time ends and match goes to overtime.
mp_team_timeout_ot_max | sv, cl, rep, release | Default: 1<br>Max number of timeouts each team can have per OT after all OT timeouts got added.
mp_team_timeout_time | sv, cl, rep, release | Default: 60<br>Duration of each timeout.
mp_teamflag_1 | sv, release | Default: <br>Enter a country's alpha 2 code to show that flag next to team 1's name in the spectator scoreboard.
mp_teamflag_2 | sv, release | Default: <br>Enter a country's alpha 2 code to show that flag next to team 2's name in the spectator scoreboard.
mp_teamlogo_1 | sv, release | Default: <br>Enter a team's shorthand image name to display their logo. Images can be found here: 'resource/flash/econ/tournaments/teams'
mp_teamlogo_2 | sv, release | Default: <br>Enter a team's shorthand image name to display their logo. Images can be found here: 'resource/flash/econ/tournaments/teams'
mp_teammatchstat_1 | sv, release | Default: <br>A non-empty string sets first team's match stat.
mp_teammatchstat_2 | sv, release | Default: <br>A non-empty string sets second team's match stat.
mp_teammatchstat_cycletime | sv, release | Default: 45<br>Cycle match stats after so many seconds
mp_teammatchstat_holdtime | sv, release | Default: 5<br>Decide on a match stat and hold it additionally for at least so many seconds
mp_teammatchstat_txt | sv, release | Default: <br>A non-empty string sets the match stat description, e.g. 'Match 2 of 3'.
mp_teamname_1 | sv, release | Default: <br>A non-empty string overrides the first team's name.
mp_teamname_2 | sv, release | Default: <br>A non-empty string overrides the second team's name.
mp_teamprediction_pct | sv, release | Default: 0<br>A value between 1 and 99 will show predictions in favor of CT team.
mp_teamprediction_txt | sv, release | Default: #SFUIHUD_Spectate_Predictions<br>A value between 1 and 99 will set predictions in favor of first team.
mp_teamscore_1 | sv, release | Default: 0<br>A non-empty string for best-of-N maps won by the first team.
mp_teamscore_2 | sv, release | Default: 0<br>A non-empty string for best-of-N maps won by the second team.
mp_teamscore_max | sv, release | Default: 0<br>How many maps to win the series (bo3 max=2; bo5 max=3; bo7 max=4)
mp_tkpunish | sv, rep, release | Default: 0<br>Will TK'ers and team damagers be punished in the next round?  {0=no,  1=yes}
mp_unpause_match | sv, release | Resume the match
mp_verbose_changelevel_spew | sv, cl, rep, release | Default: 1<br>
mp_warmup_end | sv, release | End warmup immediately.
mp_warmup_offline_enabled | sv, cl, rep, release | Default: false<br>Whether or not to do a warmup period at the start of a match in an offline (bot) match.
mp_warmup_online_enabled | sv, cl, rep, release | Default: true<br>Whether or not to do a warmup period at the start of an online match.
mp_warmup_start | sv, release | Start warmup.
mp_weapon_melee_touch_time_after_hit | sv, cheat, release | Default: 5<br>
mp_weapon_next_owner_touch_time | sv, cheat, release | Default: 1.3<br>
mp_weapon_prev_owner_touch_time | sv, cheat, release | Default: 1.5<br>
multvar | norecord, release | Multiply specified convar value.
name | a, per_user | Default: unnamed<br>
nav_add_to_selected_set | sv, cheat | Add current area to the selected set.
nav_add_to_selected_set_by_id | sv, cheat | Add specified area id to the selected set.
nav_avoid | sv, cheat | Toggles the 'avoid this area when possible' flag used by the AI system.
nav_avoid_obstacles | sv, cheat | Default: true<br>
nav_begin_deselecting | sv, cheat | Start continuously removing from the selected set.
nav_begin_drag_deselecting | sv, cheat | Start dragging a selection area.
nav_begin_drag_selecting | sv, cheat | Start dragging a selection area.
nav_begin_selecting | sv, cheat | Start continuously adding to the selected set.
nav_bfs_debug | sv, cheat | Default: 0<br>
nav_check_connectivity | sv, cheat | Checks to be sure every (or just the marked) nav area can get to every goal area for the map (hostages or bomb site).
nav_clear_attribute | sv, cheat | Remove given nav attribute from all areas in the selected set.
nav_clear_attributes | sv, cheat | Clear all nav attributes of selected area.
nav_clear_selected_set | sv, cheat | Clear the selected set.
nav_corner_adjust_adjacent | cheat | Default: 18<br>radius used to raise/lower corners in nearby areas when raising/lowering corners.
nav_curve_alt | sv, cheat | Default: false<br>
nav_curve_iter | sv, cheat | Default: 0<br>
nav_curve_lock | sv, cheat | Default: -1<br>
nav_curve_max_step | sv, cheat | Default: 10<br>
nav_curve_set | sv, cheat | Default: -1<br>
nav_curve_step | sv, cheat | Default: 0.02<br>
nav_debug_blocked | sv, cheat | Default: false<br>
nav_delete | sv, cheat | Deletes the currently highlighted Area.
nav_delete_all_hull | sv, cheat | Deletes all areas with given hull category.
nav_delete_marked | sv, cheat | Deletes the currently marked Area (if any).
nav_disconnect | sv, cheat | To disconnect two Areas, mark an Area, highlight a second Area, then invoke the disconnect command. This will remove all connections between the two Areas.
nav_draw_area_connections | sv, cheat | Default: false<br>
nav_draw_area_filled | sv, cheat | Default: true<br>
nav_draw_area_ground | sv, cheat | Default: false<br>
nav_draw_area_hull_support | sv, cheat | Default: false<br>
nav_draw_area_ids | sv, cheat | Default: false<br>
nav_draw_area_inset_margin | sv, cheat | Default: 0<br>
nav_draw_area_should_be_destroyed | sv, cheat | Default: false<br>
nav_draw_area_split_by_nav_link_mgr | sv, cheat | Default: false<br>
nav_draw_area_split_by_obstacle_mgr | sv, cheat | Default: false<br>
nav_draw_area_ztest | sv, cheat | Default: false<br>
nav_draw_attribute_dynamic | sv, cheat | Default: <br>Draw all nav areas with this dynamic attribute
nav_draw_attribute_game | sv, cheat | Default: <br>Draw all nav areas with this game attribute
nav_draw_blocked | sv, cheat | Default: true<br>
nav_draw_blocked_connections | sv, cheat | Default: false<br>
nav_draw_connected_area_radius | sv, cheat | Default: 1000<br>
nav_draw_dangerareas | sv, cheat | Default: false<br>
nav_draw_externally_created | sv, cheat | Default: false<br>
nav_draw_hidingspots | sv, cheat | Default: false<br>
nav_draw_jump_links | sv, cheat | Default: false<br>
nav_draw_limit | sv, cheat | Default: 300<br>The maximum number of areas to draw in edit mode
nav_draw_link_alignment | sv, cheat | Default: false<br>
nav_draw_links | sv, cheat | Default: false<br>
nav_draw_markup | sv, cheat | Default: true<br>
nav_draw_markup_offset | sv, cheat | Default: 4<br>
nav_draw_mesh | sv, cheat | Default: true<br>
nav_draw_mesh_grid | sv, cheat | Default: false<br>Draw the mesh's spatial grid structure around the edit cursor position.
nav_draw_mesh_offset | sv, cheat | Default: 1<br>Vertical offset for drawing the mesh (useful for flat planes where the mesh is often a fixed offset from the physical ground
nav_draw_space_cells | sv, cheat | Default: false<br>
nav_draw_space_fly | sv, cheat | Default: false<br>
nav_draw_space_neighbors | sv, cheat | Default: false<br>
nav_draw_space_portals | sv, cheat | Default: false<br>
nav_draw_space_radius | sv, cheat | Default: 0<br>
nav_draw_space_swim | sv, cheat | Default: false<br>
nav_draw_vertex_normal | sv, cheat | Default: false<br>
nav_edit | sv, cheat | Default: 0<br>Set to one to interactively edit the Navigation Mesh. Set to zero to leave edit mode.
nav_edit_validate | sv, cheat | Default: false<br>Validate navmesh structures.
nav_end_deselecting | sv, cheat | Stop continuously removing from the selected set.
nav_end_drag_deselecting | sv, cheat | Stop dragging a selection area.
nav_end_drag_selecting | sv, cheat | Stop dragging a selection area.
nav_end_selecting | sv, cheat | Stop continuously adding to the selected set.
nav_gen_add_jumps | cheat | Default: true<br>
nav_gen_agent_radius_buffer | cheat | Default: 0.75<br>Buffer to add to agent radius before passing to nav gen
nav_gen_clip_polys_to_clearance | cheat | Default: true<br>
nav_gen_clip_polys_to_clearance_debug | cheat | Default: false<br>
nav_gen_connect_allow_multiple | cheat | Default: true<br>
nav_gen_connect_angle | cheat | Default: 0.75<br>
nav_gen_connect_angle_ignore_z | cheat | Default: true<br>
nav_gen_connect_dist_a | cheat | Default: 1<br>
nav_gen_connect_dist_b | cheat | Default: 1.5<br>
nav_gen_connect_dist_z_mult | cheat | Default: 0.5<br>
nav_gen_connect_overlap | cheat | Default: 0.5<br>
nav_gen_degen_limit | cheat | Default: 0.001<br>
nav_gen_false | cheat | Default: false<br>Always false
nav_gen_island_removal | cheat | Default: false<br>
nav_gen_island_removal_all_hulls | cheat | Default: true<br>
nav_gen_join_nonzup | cheat | Default: true<br>
nav_gen_jump_connection_min_overlap_ratio | cheat | Default: 0.1<br>Minimum edge overlap required for jump connection consideration as a percentage of agent radius
nav_gen_markup_split_expand | cheat | Default: 2<br>
nav_gen_markup_split_tol_base | cheat | Default: 1<br>
nav_gen_markup_split_tol_nonav | cheat | Default: 1<br>
nav_gen_markup_split_tol_nonentity | cheat | Default: 8<br>
nav_gen_match_ground | cheat | Default: false<br>
nav_gen_max_bottleneck_width | cheat | Default: 128<br>
nav_gen_max_bottleneck_width_do_clip | cheat | Default: true<br>
nav_gen_max_edge_len | cheat | Default: 512<br>
nav_gen_max_edge_len_do_clip | cheat | Default: true<br>
nav_gen_max_edge_len_split_tol | cheat | Default: 24<br>
nav_gen_opt_to_quads | cheat | Default: true<br>
nav_gen_opt_to_quads_angle_limit | cheat | Default: 8<br>
nav_gen_opt_to_quads_num_steps | cheat | Default: 6<br>
nav_gen_opt_to_quads_planar_deviation_limit | cheat | Default: 4<br>
nav_gen_opt_to_quads_se_limit_end | cheat | Default: 0.1<br>
nav_gen_opt_to_quads_se_limit_start | cheat | Default: 1e-05<br>
nav_gen_opt_to_quads_weld_limit_end | cheat | Default: 0.01<br>
nav_gen_opt_to_quads_weld_limit_start | cheat | Default: 1e-07<br>
nav_gen_remove_vertical_polys | cheat | Default: true<br>
nav_gen_split_boundary_polys | cheat | Default: false<br>
nav_gen_split_multi_connection_polys | cheat | Default: true<br>
nav_gen_split_multi_connection_polys_tol | cheat | Default: 0.01<br>
nav_gen_true | cheat | Default: true<br>Always true
nav_gen_vertical_limit | cheat | Default: 88<br>
nav_genrt_debug | sv, cheat | Default: false<br>
nav_genrt_no_splice | sv, cheat | Default: false<br>
nav_genrt_no_split | sv, cheat | Default: false<br>
nav_genrt_step | sv, cheat | Default: -1<br>
nav_lower_drag_volume_max | sv, cheat | Lower the top of the drag select volume.
nav_lower_drag_volume_min | sv, cheat | Lower the bottom of the drag select volume.
nav_mark | sv, cheat | Marks the Area or Ladder under the cursor for manipulation by subsequent editing commands.
nav_mark_attribute | sv, cheat | Set nav attribute for all areas in the selected set.
nav_max_view_distance | sv, cheat | Default: 0<br>Maximum range for precomputed nav mesh visibility (0 = default 1500 units)
nav_max_vis_delta_list_length | cheat | Default: 64<br>
nav_obstacle_genrt | sv, cheat | Default: false<br>
nav_obstacle_validate | sv, cheat | Default: false<br>
nav_obstruction_draw | sv, cheat | Default: 0<br>
nav_obstruction_draw_change | sv, cheat | Default: false<br>
nav_obstruction_draw_dist | sv, cheat | Default: -1<br>
nav_obstruction_draw_island | sv, cheat | Default: 0<br>
nav_obstruction_draw_island_hull | sv, cheat | Default: -1<br>
nav_obstruction_draw_movefail_blocking | sv, cheat | Default: false<br>
nav_path_debug | sv, cheat | Default: false<br>
nav_path_debug_compute_with_open_goal | sv, cheat | Default: 0<br>
nav_path_draw_areas | sv, cheat | Default: false<br>
nav_path_draw_arrow | sv, cheat | Default: true<br>
nav_path_draw_climb_segments | sv, cheat | Default: true<br>
nav_path_draw_connected_areas | sv, cheat | Default: false<br>
nav_path_draw_ground_segments | sv, cheat | Default: true<br>
nav_path_draw_jump_segments | sv, cheat | Default: true<br>
nav_path_draw_ladder_segments | sv, cheat | Default: true<br>
nav_path_draw_link_segments | sv, cheat | Default: true<br>
nav_path_draw_tick | sv, cheat | Default: 0<br>
nav_path_fixup_climb_up_segments | sv, cheat | Default: true<br>
nav_path_fixup_gap_segments | sv, cheat | Default: false<br>
nav_path_jump_process_debug | sv, cheat | Default: false<br>
nav_path_optimize | sv, cheat | Default: true<br>
nav_path_optimize_portals | sv, cheat | Default: true<br>
nav_path_optimizer_debug | sv, cheat | Default: 0<br>
nav_path_record_draw_last_fail | sv, cheat | Default: false<br>
nav_path_record_enable | sv, cheat | Default: 1<br>
nav_pathfind_debug_log | sv, cheat | Default: 0<br>
nav_pathfind_draw | sv, cheat | Default: 0<br>
nav_pathfind_draw_blocked | sv, cheat | Default: 0<br>
nav_pathfind_draw_costs | sv, cheat | Default: false<br>
nav_pathfind_draw_fail | sv, cheat | Default: 0<br>
nav_pathfind_draw_total_costs | sv, cheat | Default: false<br>
nav_pathfind_inadmissable_heuristic_factor | sv, cheat | Default: 1<br>
nav_potentially_visible_dot_tolerance | sv, cheat | Default: 0.98<br>
nav_precise | sv, cheat | Toggles the 'dont avoid obstacles' flag used by the AI system.
nav_raise_drag_volume_max | sv, cheat | Raise the top of the drag select volume.
nav_raise_drag_volume_min | sv, cheat | Raise the bottom of the drag select volume.
nav_recall_selected_set | sv, cheat | Re-selects the stored selected set.
nav_remove_from_selected_set | sv, cheat | Remove current area from the selected set.
nav_select_allow_blocked | sv, cheat | Default: true<br>When selecting an area under nav_edit, allow area marked as blocked.
nav_select_area_id | sv, cheat | Default: -1<br>Select nav area with matching ID.
nav_select_block_id | sv, cheat | Default: -1<br>Select nav space block with matching ID.
nav_select_hull | sv, cheat | Default: 0<br>Restrict area selection to areas that can support a hull of the given category
nav_select_radius | sv, cheat | Adds all areas in a radius to the selection set
nav_select_with_attribute | sv, cheat | Selects areas with the given attribute.
nav_show_area_connections | sv, cheat | Default: true<br>Show connections to selected area when true
nav_show_area_info_font | sv, cheat | Default: Consolas<br>
nav_show_area_info_font_size | sv, cheat | Default: -1<br>
nav_show_area_info_font_voffset | sv, cheat | Default: -11<br>
nav_show_area_verts | sv, cheat | Default: true<br>Show area vertex positions
nav_show_area_water_info | sv, cheat | Default: true<br>
nav_show_potentially_visible | cheat | Default: 0<br>Show areas that are potentially visible from the current nav area
nav_smooth_calc_z | sv, cheat | Default: true<br>
nav_smooth_constrain_results | sv, cheat | Default: true<br>
nav_smooth_constrain_results_relax | sv, cheat | Default: 0.006<br>
nav_smooth_constrain_spring | sv, cheat | Default: 2<br>
nav_smooth_constrain_spring_relax | sv, cheat | Default: 0.01<br>
nav_smooth_draw_accel | sv, cheat | Default: 0<br>
nav_smooth_draw_boundary | sv, cheat | Default: 0<br>
nav_smooth_draw_calc | sv, cheat | Default: false<br>
nav_smooth_draw_constraint_spline | sv, cheat | Default: false<br>
nav_smooth_draw_constraint_spring | sv, cheat | Default: 0<br>
nav_smooth_draw_speed | sv, cheat | Default: 0<br>
nav_smooth_enable | sv, cheat | Default: true<br>
nav_smooth_relax | sv, cheat | Default: true<br>
nav_smooth_relax_use_timesteps | sv, cheat | Default: false<br>
nav_smooth_separating_dist_override | sv, cheat | Default: 0<br>
nav_smooth_spring_const_override | sv, cheat | Default: -1<br>
nav_smooth_spring_factor_deriv | sv, cheat | Default: 0<br>
nav_smooth_spring_factor_dist | sv, cheat | Default: 0<br>
nav_smooth_spring_factor_speed | sv, cheat | Default: 0<br>
nav_smooth_spring_forward_dist_base | sv, cheat | Default: 50<br>
nav_smooth_spring_forward_dist_time_limit | sv, cheat | Default: 1<br>
nav_smooth_spring_max_dist | sv, cheat | Default: 36<br>
nav_smooth_spring_tension_max_override | sv, cheat | Default: -1<br>
nav_smooth_spring_timestep_factor_accel | sv, cheat | Default: 100<br>
nav_smooth_spring_timestep_factor_speed | sv, cheat | Default: 100<br>
nav_smooth_spring_timestep_max | sv, cheat | Default: 0.5<br>
nav_smooth_spring_timestep_min | sv, cheat | Default: 0.1<br>
nav_smooth_spring_yaw_rotation_speed | sv, cheat | Default: 50<br>
nav_smooth_spring_yaw_threshold | sv, cheat | Default: 20<br>
nav_smooth_use_opt | sv, cheat | Default: true<br>
nav_space_select_dist | sv, cheat | Default: 200<br>
nav_split | sv, cheat | To split an Area into two, align the split line using your cursor and invoke the split command.
nav_split_place_on_ground | cheat | Default: false<br>If true, nav areas will be placed flush with the ground when split.
nav_split_show_line | sv, cheat | Default: false<br>Show the free split line.
nav_store_selected_set | sv, cheat | Stores the current selected set for later retrieval.
nav_test_bfs_lattice_dist_0 | sv, cheat | Default: -1<br>
nav_test_bfs_lattice_dist_1 | sv, cheat | Default: -1<br>
nav_test_bfs_lattice_dist_2 | sv, cheat | Default: -1<br>
nav_test_bfs_lattice_hex | sv, cheat | Default: false<br>Demonstrates searching hexagonal lattice over nav mesh.
nav_test_bfs_lattice_mark | sv, cheat | Default: 2<br>
nav_test_bfs_lattice_simple | sv, cheat | Default: false<br>
nav_test_bfs_lattice_spacing_0 | sv, cheat | Default: 24<br>
nav_test_bfs_lattice_spacing_1 | sv, cheat | Default: 48<br>
nav_test_bfs_lattice_spacing_2 | sv, cheat | Default: 96<br>
nav_test_bfs_simple | sv, cheat | Default: false<br>
nav_test_boundary_zone_circle | sv, cheat | Default: 0<br>
nav_test_boundary_zone_force | sv, cheat | Default: false<br>
nav_test_boundary_zone_grid_dim | sv, cheat | Default: 90<br>
nav_test_boundary_zone_path | sv, cheat | Default: 0<br>
nav_test_boundary_zone_rays | sv, cheat | Default: 100<br>
nav_test_boundary_zone_rays_margin | sv, cheat | Default: -1<br>
nav_test_boundary_zone_rays_random | sv, cheat | Default: false<br>
nav_test_curve_opt | sv, cheat | Default: 0<br>
nav_test_detour | sv, cheat | Default: false<br>
nav_test_find_nearest | sv, cheat | Default: false<br>Calculate the nearest point on the navmesh to the trace point.  Uses selection from nav_select_hull.
nav_test_find_nearest_clear | sv, cheat | Default: false<br>Calculate the nearest point on the navmesh to the trace point.  Uses selection from nav_select_hull.
nav_test_find_random_connected | sv, cheat | Default: false<br>Demonstrates finding random points that are connected in the nav mesh to the start point.
nav_test_find_random_connected_dist_max | sv, cheat | Default: 1000<br>
nav_test_find_random_connected_dist_min | sv, cheat | Default: 100<br>
nav_test_find_z | sv, cheat | Default: 0<br>
nav_test_force_npc_repath | sv, cheat | Default: false<br>
nav_test_genrt | sv, cheat | Default: false<br>
nav_test_genrt_place | sv, cheat | Default: false<br>
nav_test_level_hull | sv, cheat | Find entities that intrude into the nav mesh.  List those entities in console output, and display bounding boxes around them for a while.
nav_test_level_hull_move | sv, cheat | 
nav_test_multi_connection | sv, cheat | Default: false<br>
nav_test_npc_area | sv, cheat | Default: 0<br>
nav_test_npc_collision | sv, cheat | Default: 0<br>
nav_test_npc_collision_range | sv, cheat | Default: 250<br>
nav_test_npc_collision_show_geometry | sv, cheat | Default: false<br>
nav_test_path | sv, cheat | Default: false<br>Calculate and draw a path from player/camera position to the test position.
nav_test_path_expansion_search | sv, cheat | Default: 0<br>Extend nav_test_path by doing an expansion search on that path.  Convar value defines dist.
nav_test_path_lock_goal | sv, cheat | Default: false<br>Lock the pathfinding goal to the current intersection point.
nav_test_path_lock_start | sv, cheat | Default: false<br>Lock the pathfinding start to the current intersection point.
nav_test_path_move | sv, cheat | Default: false<br>
nav_test_path_opt | sv, cheat | Default: true<br>Enable path optimization for nav_edit_path paths.
nav_test_path_opt_transitions | sv, cheat | Default: false<br>
nav_test_path_return | sv, cheat | Default: false<br>Calculate a return path from cursor position to the path calculated by nav_test_path.
nav_test_path_space | sv, cheat | Default: 0<br>Should nav_test_path test 3d navigation?  1 = space to space, 2 = multi-modal space/ground
nav_test_path_space_fly | sv, cheat | Default: true<br>Test flight paths
nav_test_path_space_swim | sv, cheat | Default: true<br>Test swim paths
nav_test_ray_space | sv, cheat | Default: false<br>
nav_test_rays | sv, cheat | Default: false<br>
nav_test_smooth | sv, cheat | Default: false<br>
nav_test_smooth_extern_push | sv, cheat | Default: 0<br>
nav_test_smooth_in_speed | sv, cheat | Default: 120<br>
nav_test_smooth_in_yaw | sv, cheat | Default: 0<br>
nav_test_smooth_path_speed | sv, cheat | Default: -1<br>
nav_test_smooth_separating_dist | sv, cheat | Default: -1<br>
nav_test_smooth_spring_const | sv, cheat | Default: -1<br>
nav_test_smooth_spring_tension_max | sv, cheat | Default: -1<br>
nav_test_spline | sv, cheat | Default: 0<br>
nav_test_split_obstacle | sv, cheat | Default: 0<br>
nav_test_split_obstacle_dirty | sv, cheat | Default: false<br>
nav_test_split_obstacle_leave | sv, cheat | Default: false<br>
nav_test_split_obstacle_size | sv, cheat | Default: 30<br>
nav_test_split_obstacle_update_pos | sv, cheat | Default: true<br>
nav_toggle_deselecting | sv, cheat | Start or stop continuously removing from the selected set.
nav_toggle_in_selected_set | sv, cheat | Remove current area from the selected set.
nav_toggle_selected_set | sv, cheat | Toggles all areas into/out of the selected set.
nav_toggle_selecting | sv, cheat | Start or stop continuously adding to the selected set.
nav_unmark | sv, cheat | Clears the marked Area or Ladder.
nav_validate | cheat | Default: 0<br>Level of validation for nav system.  Higher will be slower.
nav_volume_debug | sv, cheat | Default: 0<br>Draw or print debug information about nav volume queries.
navspace_create_water_smooth_connections | sv, cheat | Default: true<br>
navspace_create_water_transition_connections | sv, cheat | Default: true<br>
navspace_debug_pathfind | sv, cheat | Default: -1<br>
navspace_debug_stringpull | sv, cheat | Default: 1<br>
navspace_debug_trace | sv, cheat | Default: 0<br>
navspace_debug_transition_calc | sv, cheat | Default: 0<br>
navspace_draw_water_changes | sv, cheat | Default: 0<br>Draw changes in water volumes
navspace_path_use_water_level_locator | sv, cheat | Default: true<br>
net_allow_multicast | a, release | Default: true<br>
net_channels | release | Shows net channel info
net_client_steamdatagram_enable_override | cl, release | Default: 0<br>0: Use connect method requested by GC.  &gt;0: Always use SDR if possible.  &lt;0: Always use direct UDP if possible
net_connections_stats | release | Print detailed network statistics for each network connection
net_fakelag | release | Shorthand for 'net_option FakePacketLag_Recv'
net_listallmessages | cheat | List all registered net messages
net_maxroutable | a, user | Default: 1200<br>Requested max packet size before packets are 'split'.
net_messageinfo | cheat | Display info about a message (by classname or id)
net_option | release | Get or set SteamNetworkingSockets options such as fake packet lag and loss
net_public_adr | release | Default: <br>For servers behind NAT/DHCP meant to be exposed to the public internet, this is the public facing ip address string: ("x.x.x.x" )
net_showudp | release | Default: false<br>Dump UDP packets summary to console
net_showudp_remoteonly | release | Default: true<br>Dump non-loopback udp only
net_status | release | Shows current network status
net_validatemessages | cheat | Activates/deactivates net message validation
nextdemo | release | Play next demo in sequence.
nextlevel | sv, nf, release | Default: <br>If set to a valid map name, will trigger a changelevel to the specified map at the end of the round
nextmap_print_enabled | sv, release | Default: false<br>When enabled prints next map to clients
nextmode | sv, nf, rep, release | Default: <br>Sets the game mode to be played when the next level loads
noclip | sv, cheat | Toggle. Player becomes non-solid and flies.  Optional argument of 0 or 1 to force enable/disable
noclip_fixup | sv, cheat | Default: true<br>
notarget | sv, cheat | Toggle. Player becomes hidden to NPCs.
option_duck_method | cl, a, user, per_user | Default: false<br>Input toggle control
option_speed_method | cl, a, user, per_user | Default: false<br>Input toggle control
panorama_debugger_theme | cl, a | Default: Light<br>
panorama_focus_world_panels | cl, a | Default: false<br>when set request key focus when a world panel is enabled
particle_test_attach_attachment | sv, cheat | Default: 0<br>Attachment index for attachment mode
particle_test_attach_mode | sv, cheat | Default: follow_attachment<br>Possible Values: 'start_at_attachment', 'follow_attachment', 'start_at_origin', 'follow_origin'
particle_test_create | sv, cheat | Creates the named particle system where the player is looking.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
particle_test_destroy | sv, cheat | Destroys all particle systems matching the specified name.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
particle_test_file | sv, cheat | Default: <br>Name of the particle system to dynamically spawn
particle_test_start | sv, cheat | Dispatches the test particle system with the parameters specified in particle_test_file,<br> particle_test_attach_mode and particle_test_attach_param on the entity the player is looking at.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
particle_test_stop | sv, cheat | Stops all particle systems on the selected entities.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
particles_multiplier | cheat | Default: 1<br>Multiply # of rendered particles by this for perf testing
password | a, norecord, server_cannot_query | Default: <br>Current server access password
pause | release | Toggle the server pause state.
phys_debug_showdefaultmaterial | cheat | Default: false<br>If enabled, surfaces with default material are highlighted in physics debug geometry.
phys_dynamic_scaling | sv, cl, rep, cheat | Default: true<br>
phys_expensive_shape_threshold | cl, cheat | Default: 6<br>
phys_highlight_expensive_objects | cheat | Default: false<br>Highlight expensive physics objects
phys_highlight_expensive_objects_strength | cheat | Default: 0.02<br>Highlight expensive physics objects strength
phys_joint_teleport | sv, cheat | Default: true<br>Teleport joint anchors if connected to world
phys_length_damping_ratio | sv, cheat | Default: 2<br>Spring damping ratio for length constraint
phys_length_frequency | sv, cheat | Default: 5<br>Spring stiffness for length constraint
phys_mark_debug | sv, cheat | Mark object for debug
phys_shoot | sv, cheat | Shoots a phys object.
phys_use_block_solver | sv, cheat | Default: true<br>Use block solving for constraint entities
phys_visualize_traces | sv, cl, rep, cheat | Default: false<br>
pixelvis_debug | cheat | Dump debug info
plant_bomb | sv, cheat | Plant a bomb where the player is looking.
play | server_can_execute | Play a sound.
playcast | release | Play a broadcast
playdemo | release | Play a recorded demo file (.dem ).
player0_using_joystick | a | Default: false<br>
player_botdifflast_s | cl, a, release | Default: 2<br>
player_competitive_maplist_2v2_10_0_C8D88986 | cl, a | Default: mg_de_inferno,mg_de_nuke,mg_de_vertigo,mg_de_overpass<br>
player_competitive_maplist_8_10_0_5069769 | cl, a | Default: mg_de_dust2,mg_de_ancient,mg_de_inferno,mg_de_nuke,mg_de_vertigo,mg_de_mirage,mg_cs_office,mg_de_anubis,mg_lobby_mapveto,mg_de_overpass<br>
player_debug_off_nav | sv, cheat | Default: false<br>
player_debug_print_damage | sv, cheat | Default: false<br>When true, print amount and type of all damage received by player to console.
player_nevershow_communityservermessage | cl, a, per_user | Default: 0<br>
player_ping | sv | Creates a ping notification where the player is looking.
player_ping_token_cooldown | sv, cheat, release | Default: 20<br>Cooldown for how long it takes for a player's ping token to refresh allowing them to ping again (they get 5 tokens).
player_survival_list_10_0_303 | cl, a | Default: mg_dz_blacksite,mg_dz_sirocco,mg_dz_vineyard,mg_dz_ember<br>
player_teamplayedlast | cl, a, per_user | Default: 3<br>
player_use_radius | sv, cl, rep, cheat | Default: 80<br>
player_wargames_list2_10_0_0 | cl, a | Default: <br>
playsoundscape | cl, cheat | Forces a soundscape to play
print_mapgroup | cl, release | Prints the current mapgroup and the contained maps
print_mapgroup_sv | sv, release | Prints the current mapgroup and the contained maps
prop_debug | sv, cheat | Toggle prop debug mode. If on, props will show colorcoded bounding boxes. Red means ignore all damage. White means respond physically to damage but never break. Green maps health in the range of 100 down to 1.
prop_debug_collision | sv, cheat | Default: false<br>Highlights props based on their collision group: COLLISION_GROUP_PROPS(white), COLLISION_GROUP_INTERACTIVE_DEBRIS(green), COLLISION_GROUP_DEBRIS and will return to COLLISION_GROUP_INTERACTIVE_DEBRIS on sleeping(bright red), COLLISION_GROUP_DEBRIS permanently (dark red), COLLISION_GROUP_DEBRIS(blue), OTHER(grey)
prop_dynamic_create | sv, cheat | Creates a dynamic prop with a specific .vmdl aimed away from where the player is looking.<br>	Arguments: {.vmdl name}
prop_physics_create | sv, cheat | Creates a physics prop with a specific .vmdl aimed away from where the player is looking.<br>	Arguments: {.vmdl name}
pvs_debugentity | sv, release | Default: -1<br>Verbose spew for this entity when doing IsInPVS computation.
pvs_flowtype | sv, release | Default: 0<br>Flow through spawn groups for vis (0 == default, 1 == always visible, 2 == never visible.
pwatchent | cl, cheat | Default: -1<br>Entity to watch for prediction system changes.
pwatchvar | cl, cheat | Default: <br>Entity variable to watch in prediction system for changes.
quit | release | Quit the game
r_AirboatViewDampenDamp | sv, cl, nf, rep, cheat | Default: 1<br>
r_AirboatViewDampenFreq | sv, cl, nf, rep, cheat | Default: 7<br>
r_AirboatViewZHeight | sv, cl, nf, rep, cheat | Default: 0<br>
r_JeepViewDampenDamp | sv, cl, nf, rep, cheat | Default: 1<br>
r_JeepViewDampenFreq | sv, cl, nf, rep, cheat | Default: 7<br>
r_JeepViewZHeight | sv, cl, nf, rep, cheat | Default: 10<br>
r_aoproxy_debug | cl, cheat | Default: false<br>
r_aoproxy_show | cl, cheat | Default: false<br>
r_csgo_cubemap_normalization | cl, cheat | Default: true<br>
r_csgo_debug_reflection_rects | cl, cheat | Default: 0<br>
r_csgo_decal_debug | cl, cheat | Default: false<br>
r_csgo_depth_prepass | cl, cheat | Default: true<br>
r_csgo_depth_prepass_cull_threshold | cl, cheat | Default: 60<br>
r_csgo_depth_prepass_reflections_large | cl, cheat | Default: true<br>
r_csgo_depth_prepass_reflections_small | cl, cheat | Default: true<br>
r_csgo_depth_prepass_skybox_alpha_tested | cl, cheat | Default: true<br>
r_csgo_depth_prepass_small_cull_threshold | cl, cheat | Default: 10<br>
r_csgo_depth_prepass_viewmodel | cl, cheat | Default: true<br>
r_csgo_directional_lightmaps | cl, cheat | Default: true<br>
r_csgo_effects_bloom | cl, cheat | Default: true<br>
r_csgo_effects_bloom_when_smoked | cl, cheat | Default: false<br>
r_csgo_enable_glows | cl, cheat | Default: true<br>
r_csgo_enable_high_precision_lighting | cl, cheat | Default: true<br>
r_csgo_enable_tonemapping | cl, cheat | Default: true<br>
r_csgo_enable_translucent_screen_space | cl, cheat | Default: true<br>
r_csgo_mboit | cl, cheat | Default: true<br>
r_csgo_mboit_bias | cl, cheat | Default: 5e-06<br>
r_csgo_mboit_debug | cl, cheat | Default: false<br>
r_csgo_mboit_overestimation | cl, cheat | Default: 0.01<br>
r_csgo_mboit_use_4_moments | cl, cheat | Default: false<br>
r_csgo_mixed_resolution_color_slices | cl, cheat | Default: false<br>
r_csgo_mixed_resolution_particles_minmax | cl, cheat | Default: false<br>
r_csgo_mixed_resolution_particles_scale | cl, cheat | Default: 2<br>
r_csgo_no_shader_resolve | cl, cheat | Default: false<br>
r_csgo_override_global_time | cl, cheat | Default: true<br>
r_csgo_postprocess_enable | cl, cheat | Default: true<br>
r_csgo_readonly_depth_stencil_enable | cl, cheat | Default: true<br>
r_csgo_reconstruct_normals | cl, cheat | Default: false<br>
r_csgo_reconstruct_normals_method | cl, cheat | Default: 0<br>
r_csgo_reflection_min_far_plane | cl, cheat | Default: 5000<br>
r_csgo_render_decals | cl, cheat | Default: true<br>
r_csgo_render_decals_on_translucent | cl, cheat | Default: true<br>
r_csgo_render_dither_scale | cl, cheat | Default: 1<br>
r_csgo_render_dynamic_objects | cl, cheat | Default: true<br>
r_csgo_render_inferno_decals | cl, cheat | Default: true<br>
r_csgo_render_opaque | cl, cheat | Default: true<br>
r_csgo_render_overlays | cl, cheat | Default: true<br>
r_csgo_render_post_bloom | cl, cheat | Default: 1<br>
r_csgo_render_post_bloom_strength | cl, cheat | Default: -1<br>
r_csgo_render_post_colorcorrection | cl, cheat | Default: 0<br>
r_csgo_render_post_film_grain | cl, cheat | Default: 0<br>
r_csgo_render_post_local_contrast | cl, cheat | Default: true<br>
r_csgo_render_post_mirror_horizontal | cl, cheat | Default: 0<br>
r_csgo_render_post_mirror_vertical | cl, cheat | Default: 0<br>
r_csgo_render_translucent | cl, cheat | Default: true<br>
r_csgo_shadows_debug | cl, cheat | Default: 0<br>
r_csgo_volume_mboit_optimization | cl, cheat | Default: true<br>
r_csgo_water_effects | cl, cheat | Default: true<br>
r_csgo_water_refraction | cl, cheat | Default: true<br>
r_cubemap_debug_colors | cheat | Default: 0<br>
r_debug_particle_shadows | cl, cheat | Default: false<br>
r_debug_precipitation | cl, cheat | Default: false<br>Show precipitation volumes
r_directlighting | cheat | Default: true<br>Set to use direct lighting
r_dof_override | cheat | Default: false<br>
r_dof_override_far_blurry | cheat | Default: 2000<br>
r_dof_override_far_crisp | cheat | Default: 180<br>
r_dof_override_near_blurry | cheat | Default: -100<br>
r_dof_override_near_crisp | cheat | Default: 0<br>
r_dof_override_tilt_to_ground | cheat | Default: 0.5<br>
r_dopixelvisibility | cheat | Default: true<br>
r_draw_first_tri_only | cheat | Default: false<br>
r_draw_instances | cheat | Default: true<br>
r_draw_particle_children_with_parents | cheat | Default: -1<br>Draw particle children with parents (-1=use gameinfo, 0=no, 1=yes)
r_drawblankworld | cheat | Default: false<br>Render blank instead of the game world
r_drawchickens | cl, cheat | Default: true<br>Render chickens
r_drawcsplayers | cl, cheat | Default: true<br>Render CS players
r_drawdecals | cheat | Default: true<br>Set to render decals
r_drawdevvisualizers | cl, cheat | Default: false<br>Render dev visualizers
r_drawpanorama | cheat | Default: true<br>Enable the rendering of panorama UI
r_drawparticles | cheat | Default: true<br>Enable/disable particle rendering
r_drawropes | cl, cheat | Default: true<br>
r_drawskybox | cheat | Default: true<br>Render the 2d skybox.
r_drawsprites | cl, cheat | Default: true<br>
r_drawtracers | cl, cheat | Default: true<br>
r_drawviewmodel | cl, cheat | Default: true<br>Render view model
r_drawworld | cheat | Default: true<br>Render the world.
r_extra_render_frames | cheat | Default: 0<br>
r_fallback_texture_lod_scale | cheat | Default: 2<br>Scale factor for requested texture size (texture streaming) - used for geo that doesn't have a precomputed UV density measure
r_farz | cl, cheat | Default: -1<br>Override the far clipping plane. -1 means to use the value in env_fog_controller.
r_flashlightambient | cl, cheat | Default: 0<br>
r_flashlightbacktraceoffset | cl, cheat | Default: 0.4<br>
r_flashlightbrightness | cl, rep, cheat | Default: 1<br>
r_flashlightconstant | cl, rep, cheat | Default: 0<br>
r_flashlightfar | cl, rep, cheat | Default: 1500<br>
r_flashlightfov | cl, rep, cheat | Default: 53<br>
r_flashlightladderdist | cl, cheat | Default: 40<br>
r_flashlightlinear | cl, rep, cheat | Default: 100<br>
r_flashlightlockposition | cl, cheat | Default: false<br>
r_flashlightmuzzleflashfov | cl, cheat | Default: 120<br>
r_flashlightnear | cl, rep, cheat | Default: 4<br>
r_flashlightnearoffsetscale | cl, cheat | Default: 1<br>
r_flashlightoffsetforward | cl, rep, cheat | Default: 0<br>
r_flashlightoffsetright | cl, rep, cheat | Default: 5<br>
r_flashlightoffsetup | cl, rep, cheat | Default: -5<br>
r_flashlightquadratic | cl, rep, cheat | Default: 0<br>
r_flashlightshadowatten | cl, cheat | Default: 0.35<br>
r_flashlighttracedistcutoff | cl, cheat | Default: 128<br>
r_flashlighttracedistwatercutoff | cl, cheat | Default: 80<br>
r_flashlightvisualizetrace | cl, cheat | Default: false<br>
r_flush_on_pooled_ib_resize | release | Default: true<br>
r_force_no_present | cheat | Default: false<br>Force the render device to not present frames.
r_force_zprepass | cheat | Default: -1<br>0: Force z prepass off. 1: Force on. -1: Don't force
r_freezeparticles | cheat | Default: false<br>Pause particle simulation
r_fullscreen_gamma | a | Default: 2.2<br>Screen Gamma (only in fullscreen modes)
r_indirectlighting | cheat | Default: true<br>Set to use indirect lighting
r_lightBinnerFarPlane | cheat | Default: 4096<br>
r_light_probe_volume_debug_colors | cheat | Default: 0<br>
r_light_probe_volume_debug_grid | cheat | Default: false<br>Show LPV debug grid, 0: off, 1: closest only 2: closest and keep 3: all
r_light_probe_volume_debug_grid_albedo | cheat | Default: 128 128 128 255<br>albedo for LPV debug grid
r_light_probe_volume_debug_grid_bbox | cheat | Default: true<br>Show LPV bounding box when debug grid is on, 0: off, 1: on
r_light_probe_volume_debug_grid_metalness | cheat | Default: 0<br>metalness for LPV debug grid
r_light_probe_volume_debug_grid_prim | cheat | Default: 0<br>0: spheres, 1: cubes
r_light_probe_volume_debug_grid_roughness | cheat | Default: 0.5<br>roughness for LPV debug grid
r_light_probe_volume_debug_grid_samplesize | cheat | Default: 4<br>sphere radius (world) for LPV debug grid
r_lightmap_set | cheat | Default: lightmaps<br>Lightmap set to use, only works on map load
r_mapextents | cl, cheat | Default: 16384<br>Set the max dimension for the map.  This determines the far clipping plane
r_morphing_enabled | cheat | Default: true<br>
r_muzzleflashbrightness | cl, rep, cheat | Default: 0.4<br>
r_muzzleflashlinear | cl, rep, cheat | Default: 0.05<br>
r_nearz | cl, cheat | Default: -1<br>Override the near clipping plane. -1 means use the default.
r_particle_max_draw_distance | cheat | Default: 1e+06<br>The maximum distance that particles will render
r_pixelvisibility_partial | cheat | Default: true<br>
r_pixelvisibility_spew | cheat | Default: false<br>
r_player_visibility_mode | cl, a, release | Default: 1<br>
r_refraction_clip_plane_adjust | cl, cheat | Default: -1<br>
r_render_world_node_bounds | cheat | Default: false<br>Render world node bounds
r_rendersun | cheat | Default: true<br>Render sun lighting
r_replay_post_effect | cl, cheat | Default: -1<br>
r_shadows | cheat | Default: true<br>
r_show_build_info | cl, a, release | Default: true<br>Build information. Leave this enabled when submitting bug screenshots and videos, please!
r_show_hipoly_draw_calls | cheat | Default: 0<br>Transparent wireframe overlay for draw calls with triangle count higher than specified number
r_showdebugoverlays | cheat | Default: false<br>Set to render debug overlays
r_showdebugrendertarget | cheat | Default: false<br>Set the debug render target to show, 0 == disable
r_showsceneobjectbounds | cheat | Default: false<br>Show scenesystem object bounding boxes
r_showsunshadowdebugrendertargets | cheat | Default: false<br>Set to render sun shadow render targets
r_showsunshadowdebugsplitvis | cheat | Default: false<br>Set to render sun shadow split visibility debugger
r_size_cull_threshold_shadow | cheat | Default: 0.2<br>Threshold of sun shadow map size percentage below which objects get culled
r_skinning_enabled | cheat | Default: true<br>
r_stereo_multiview_instancing | cheat | Default: false<br>Use multiview instancing for stereo rendering.
r_texture_lod_scale | cheat | Default: 1<br>Scale factor for requested texture size (texture streaming)
r_translucent | cheat | Default: true<br>Enable rendering of translucent geometry
r_worldlod | cheat | Default: true<br>Set to enable world LOD
r_zprepass_normals | cheat | Default: false<br>0: Use normals reconstructed from depth. 1: Output correct normals in z prepass.
radarvisdistance | sv, cheat | Default: 1000<br>at this distance and beyond you need to be point right at someone to see them
radarvismaxdot | sv, cheat | Default: 0.996<br>how closely you have to point at someone to see them beyond max distance
radarvismethod | sv, cheat | Default: 1<br>0 for traditional method, 1 for more realistic method
radarvispow | sv, cheat | Default: 0.4<br>the degree to which you can point away from a target, and still see them on radar.
radio | cl, release | Opens a radio menu
radio1 | cl, release | Opens a radio menu
radio2 | cl, release | Opens a radio menu
radio3 | cl, release | Opens a radio menu
ragdoll_friction_scale | sv, cl, rep, cheat | Default: 0.6<br>
ragdoll_gravity_scale | sv, cl, rep, cheat | Default: 1<br>
ragdoll_lru_debug_removal | sv, cl, rep, cheat | Default: false<br>
ragdoll_lru_min_age | sv, cl, rep, cheat | Default: 10<br>
rangefinder | sv, cheat | Measures distance along a ray
rate | a, user | Default: 786432<br>Min bytes/sec the host can receive data
rcon | norecord, release | Issue an rcon command.
rcon_address | norecord, release, server_cannot_query | Default: <br>Address of remote server if sending unconnected rcon commands (format x.x.x.x:p) 
rcon_connected_clients_allow | rep, release | Default: true<br>Allow clients to use rcon commands on server.
rcon_password | norecord, release, server_cannot_query | Default: <br>remote console password.
rebuy | cl, clientcmd_can_execute | Attempt to repurchase items with the order listed in cl_rebuy
recast_mark_overhang | rep, cheat | Default: true<br>Enable/disable overhang detection
recast_partitioning | rep, cheat | Default: 0<br>0 = watershed, 1 = monotone, 2 = layers
record | norecord, release | Record a demo.
refresh_ui_audio_state | cl, cheat | Restores audio DSP state for the UI.
regenerate_weapon_skins | cl, cheat | 
reloadgame | cheat | Reload the most recent saved game.
remove_weapon | sv, cheat | Remove a weapon held by the player.<br>	Arguments: &lt;weapon subclass name&gt;
repeat_last_console_command | release | Repeat last console command.
replay_death | sv, cheat | start hltv replay of last death
replay_debug | rep, release | Default: 0<br>
replay_start | sv, cheat | Start GOTV replay: replay_start &lt;delay&gt; \[&lt;player name or index&gt;\]
replay_stop | sv | stop hltv replay
report_cliententitysim | cl, cheat | Default: false<br>List all clientside simulations and time - will report and turn itself off.
report_clientthinklist | cl, cheat | Default: false<br>List all clientside entities thinking and time - will report and turn itself off.
reset_gameconvars | cheat | Reset game convars to default values
respawn_player | sv, cheat | Respawns the player from death!<br>
restart | cheat | Poor man's restart: reload the current map from disk.
rr_followup_maxdist | sv, cheat | Default: 1800<br>'then ANY' or 'then ALL' response followups will be dispatched only to characters within this distance.
rr_forceconcept | sv, cheat | fire a response concept directly at a given character.<br>USAGE: rr_forceconcept &lt;target&gt; &lt;concept&gt; "criteria1:value1,criteria2:value2,..."<br>criteria values are optional.<br>
rr_reloadresponsesystems | sv, cheat | Reload all response system scripts.
rr_thenany_score_slop | sv, a, cheat | Default: 0<br>When computing respondents for a 'THEN ANY' rule, all rule-matching scores within this much of the best score will be considered.
run_perftest | cheat, norecord | Execute perftest.cfg
safezonex | cl, a | Default: 1<br>The percentage of the screen width that is considered safe from overscan. Cannot result in a width less than the height.
safezoney | cl, a | Default: 1<br>The percentage of the screen height that is considered safe from overscan
save_animgraph_recording | sv, cheat | Saves all active animgraph recordings to disk
save_maxarray_spew | sv, release | Default: 10<br>Max number of array entries to spew when using SaveRestoreIO spewing.
say | sv | Display player message
say_team | sv | Display player message to team
sc_check_world | cheat | Default: false<br>
sc_disableThreading | cheat | Default: false<br>
sc_disable_culling_boxes | cheat | Default: false<br>
sc_disable_procedural_layer_rendering | cheat | Default: false<br>
sc_disable_shadow_fastpath | cheat | Default: false<br>
sc_disable_shadow_materials | cheat | Default: false<br>
sc_disable_spotlight_shadows | cheat | Default: false<br>
sc_disable_world_materials | cheat | Default: false<br>
sc_dump_lists | cheat | Default: false<br>
sc_dumpworld | cheat | Dump a list of the objects in a sceneworld (Usage: sc_dumpworld &lt;world_index&gt;)
sc_dumpworld3d | cheat | Dump the objects in a sceneworld into a 3d geoview buffer (Usage: sc_dumpworld3d &lt;world_index&gt;)
sc_extended_stats | cheat | Default: false<br>
sc_force_lod_level | cheat | Default: -1<br>
sc_force_materials_batchable | cheat | Default: false<br>
sc_force_translation_in_projection | cheat | Default: false<br>If enabled, the camera's translation will be included in the projection matrix.
sc_listworlds | cheat | List all the active sceneworlds
sc_lod_distance_scale_override | cheat | Default: -1<br>
sc_log_submits | cheat | Default: false<br>Log out display list submits from scenesystem
sc_only_render_opaque | cheat | Default: false<br>
sc_only_render_shadowcasters | cheat | Default: false<br>
sc_override_shadow_fade_max_dist | cheat | Default: -1<br>
sc_override_shadow_fade_min_dist | cheat | Default: -1<br>
sc_reject_all_objects | cheat | Default: false<br>
sc_setclassflags | cheat | Low level command to set the flags byte associated with an object class. sc_SetClassFlags &lt;classname&gt; &lt;value&gt;<br>
sc_showclasses | cheat | List the object class names known by scenesystem<br>
sc_skip_traversal | cheat | Default: false<br>
scene_playvcd | sv, cheat | Play the given VCD as an instanced scripted scene.
screenmessage_show | cheat | Default: -1<br>Enable display of console messages on screen. 1 = Enabled, 0 = Disabled, -1 = Enabled if vgui is not present
script_add_debug_filter | sv, cheat | Add a filter to the game debug overlay
script_add_watch | sv, cheat | Add a watch to the game debug overlay
script_add_watch_pattern | sv, cheat | Add a watch to the game debug overlay
script_attach_debugger | sv, cheat | Connect the vscript VM to the script debugger
script_clear_watches | sv, cheat | Clear all watches from the game debug overlay
script_debug | sv, cheat | Toggle the in-game script debug features
script_dump_all | sv, cheat | Dump the state of the VM to the console
script_find | sv, cheat | Find a key in the VM 
script_help | sv, cheat | Output help for script functions
script_reload | sv, cheat | Reload scripts
script_reload_code | sv, cheat | Execute a vscript file, replacing existing functions with the functions in the run script
script_reload_entity_code | sv, cheat | Execute all of this entity's VScripts, replacing existing functions with the functions in the run scripts
script_remove_debug_filter | sv, cheat | Remove a filter from the game debug overlay
script_remove_watch | sv, cheat | Remove a watch from the game debug overlay
script_remove_watch_pattern | sv, cheat | Remove a watch from the game debug overlay
script_resurrect_unreachable | sv, cheat | Use the garbage collector to track down reference cycles
script_trace_disable | sv, cheat | Turn off a particular trace output by file or function name
script_trace_disable_all | sv, cheat | Turn off all trace output
script_trace_disable_key | sv, cheat | Turn off a particular trace output by table/instance
script_trace_enable | sv, cheat | Turn on a particular trace output by file or function name
script_trace_enable_all | sv, cheat | Turn on all trace output
script_trace_enable_key | sv, cheat | Turn on a particular trace output by table/instance
sdr | release | An old command that has been renamed to 'net_option'
sensitivity | cl, a, per_user | Default: 1.25<br>Mouse sensitivity.
server_snd_cast | sv, cheat | Casts a ray and starts a sound event where the ray hits. The sound event will retrigger periodically. Usage: snd_cast &lt;eventname&gt; \[&lt;retrigger time&gt;\] \[&lt;max distance&gt;\]. Arguments that are specified will become defaults for the remainder of the session.
servercfgfile | sv, release | Default: server.cfg<br>
setang | sv, cheat | Snap player eyes to specified pitch yaw &lt;roll:optional&gt; (must have sv_cheats).
setang_exact | sv, cheat | Snap player eyes and orientation to specified pitch yaw &lt;roll:optional&gt; (must have sv_cheats).
setinfo | clientcmd_can_execute | Adds a new user info value
setmodel | sv, cheat | Changes's player's model
setpause | release | Set the pause state of the server.
setpos | sv, cheat | Move player to specified origin (must have sv_cheats).
setpos_exact | sv, cheat | Move player to an exact specified origin (must have sv_cheats).
setpos_player | sv, cheat | Move specified player to specified origin (must have sv_cheats).
shake | sv, cheat | Shake the screen.
shake_stop | cl, cheat | Stops all active screen shakes.<br>
shake_testpunch | cl, cheat | Test a punch-style screen shake.<br>
shatterglass_break | sv, cheat | 
shatterglass_cleanup | sv, cl, rep, cheat | Default: true<br>
shatterglass_cleanup_max | sv, cl, rep, cheat | Default: 150<br>
shatterglass_debug | sv, cl, rep, cheat | Default: false<br>
shatterglass_distort | sv, cl, rep, cheat | Default: true<br>
shatterglass_edge_uv_scale | sv, cl, rep, cheat | Default: 0.05<br>
shatterglass_hit_tolerance | sv, cl, rep, cheat | Default: 2<br>
shatterglass_restore | sv, cheat | 
shatterglass_shard_lifetime | sv, cl, rep, cheat | Default: 15<br>
shatterglass_subdiv_size | sv, cl, rep, cheat | Default: 1.5<br>
shatterglass_voronoi_size | sv, cl, rep, cheat | Default: 15<br>
show_loadout_toggle | cl, clientcmd_can_execute | Toggles loadout display
show_visibility_boxes | cl, cheat | Default: false<br>Enable or Disable debug display of visibility boxes
showconsole | norecord, release | Show the console.
showtriggers | sv, cheat | Enable or Disable showing trigger entities
showtriggers_toggle | sv, cheat | Displays the movement bounding box for the triggers in orange.  Some entites will also display entity specific overlays.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
silence_dsp | cheat | Default: false<br>When on, silences all DSP mixes.
sk_autoaim_mode | sv, cl, a, rep | Default: 1<br>
skel_constraints_enable | rep, cheat | Default: true<br>
skeleton_instance_scaleset_enable | sv, cl, rep, cheat | Default: true<br>
skeleton_instance_smear_boneflags | sv, cheat | Default: false<br>Smear boneflags across the model.  Costs computation, but tests to make sure your bone flags are consistent.
skill | sv, cl, a, rep, per_user | Default: 1<br>Game skill level.
slot0 | cl, server_can_execute | 
slot1 | cl, server_can_execute | 
slot10 | cl, server_can_execute | 
slot11 | cl, server_can_execute | 
slot12 | cl, server_can_execute | 
slot13 | cl, server_can_execute | 
slot2 | cl, server_can_execute | 
slot3 | cl, server_can_execute | 
slot4 | cl, server_can_execute | 
slot5 | cl, server_can_execute | 
slot6 | cl, server_can_execute | 
slot7 | cl, server_can_execute | 
slot8 | cl, server_can_execute | 
slot9 | cl, server_can_execute | 
snd_arrangement_start | cheat | Starts the specified arrangement.
snd_autodetect_latency | a | Default: true<br>
snd_break_on_start_soundevent | sv, cl, rep, cheat | Default: <br>Use to debug break on any soundevent that is started matching this name
snd_cast | cheat | Casts a ray and starts a sound event where the ray hits. The sound event will retrigger periodically if cl_snd_cast_retrigger is set. The sound event will clear previous snd_cast events if cl_snd_cast_clear is set. Usage: snd_cast &lt;eventname&gt; \[&lt;retrigger time&gt;\] \[&lt;max distance&gt;\]. Arguments that are specified will become defaults for the remainder of the session.
snd_compare_soundevents | cheat | Compare the compiled and loaded contents of 2 soundevents.
snd_deathcamera_volume | cl, a, release | Default: 0.16<br>Volume of Deathcam Timers
snd_disable_mixer_duck | cheat | Default: false<br>
snd_disable_mixer_solo | cheat | Default: false<br>
snd_dsp_distance_max | cheat | Default: 2000<br>
snd_dsp_distance_min | cheat | Default: 20<br>
snd_duckerattacktime | a | Default: 0.5<br>
snd_duckerreleasetime | a | Default: 2.5<br>
snd_duckerthreshold | a | Default: 0.15<br>
snd_ducktovolume | a | Default: 0.55<br>
snd_envelope_rate | cheat | Default: 0.9<br>
snd_filter | cheat | Default: <br>
snd_foliage_db_loss | sv, cheat | Default: 4<br>foliage dB loss per 1200 units
snd_gain | a | Default: 1<br>
snd_gain_max | cheat | Default: 1<br>
snd_gain_min | cheat | Default: 0.01<br>
snd_gamevoicevolume | a | Default: 1<br>Game v.o. volume
snd_gamevolume | a | Default: 1<br>Game volume
snd_get_physics_surface_properties | cheat | Get physics surface properties for all the materials.
snd_headphone_eq | cl, a, clientcmd_can_execute | Default: 0<br>Select Headphone EQ Preset
snd_list | cheat | Default: <br>
snd_list_deferred_soundevents | cheat | List all current deferred load soundevents
snd_list_soundevents | cheat | List all available soundevents
snd_list_soundevents_by_stack | cheat | List all available soundevents using specified stack name
snd_mainmenu_music_break_time_max | cl, cheat | Default: 0<br>Maximum amount of time to pause between playing main menu music
snd_mainmenu_music_break_time_min | cl, cheat | Default: 0<br>Minimum amount of time to pause between playing main menu music
snd_mapobjective_volume | cl, a, release | Default: 0.04<br>Volume of Map Objective Music
snd_menumusic_volume | cl, a, release | Default: 0.04<br>Volume of Menu / Non-gameplay music
snd_mixahead | a | Default: 0.001<br>
snd_mixer_master_dsp | cheat | Default: 1<br>
snd_mixer_master_level | cheat | Default: 1<br>
snd_musicvolume | a | Default: 1<br>Music volume
snd_mute_losefocus | a | Default: true<br>
snd_mute_mvp_music_live_players | cl, a, release | Default: false<br>If set, MVP music is muted if players from both teams are still alive.
snd_mvp_volume | cl, a, release | Default: 0.16<br>Volume of MVP Music
snd_new_visualize | sv, cheat | Default: false<br>Displays soundevent name played at it's 3d position
snd_occlusion_bounces | rep, cheat | Default: 1<br>
snd_occlusion_debug | sv, cl, rep, cheat | Default: false<br>
snd_occlusion_min_wall_thickness | rep, cheat | Default: 4<br>
snd_occlusion_rays | rep, cheat | Default: 4<br>
snd_op_test_convar | cheat | Default: 720<br>
snd_opvar_set_point_debug | sv, cl, rep, cheat | Default: false<br>
snd_print_activetracks | cheat | List all active tracks
snd_print_arrangements | cheat | List all available sequence arrangments
snd_print_samplers | cheat | List all available samplers
snd_print_sequences | cheat | List all available midi sequences
snd_rear_stereo_scale | rep, cheat | Default: 1<br>
snd_refdb | cheat | Default: 60<br>Reference dB at snd_refdist
snd_refdist | cheat | Default: 36<br>Reference distance for snd_refdb
snd_remove_all_soundevents | cheat | Remove all soundevents
snd_remove_soundevent | cheat | Remove the specified soundevent
snd_report_verbose_error | cheat | Default: false<br>If set to 1, report more error found when playing sounds.<br>
snd_roundaction_volume | cl, a, release | Default: 0<br>Volume of Move Action Music
snd_roundend_volume | cl, a, release | Default: 0.16<br>Volume of Won/Lost Music
snd_roundstart_volume | cl, a, release | Default: 0<br>Volume of Round Start Music
snd_samplers_play_note | cheat | Play a note from a specified sampler
snd_samplers_stop_note | cheat | Stop a note from a specified sampler
snd_sequence_set_track_bpm | cheat | Sets the tempo of the specified track
snd_sequence_set_track_transpose | cheat | Sets the transposition of the specified track
snd_sequence_stop_all_tracks | cheat | Stops all currently playing sequences
snd_sequence_stop_track | cheat | Stops the specified track
snd_sequencer_show_bpm | cheat | Default: false<br>
snd_sequencer_show_events | cheat | Default: false<br>
snd_sequencer_show_quantize_queue | cheat | Default: false<br>
snd_set_physics_surface_properties | cheat | Set physics surface properties for materials. Usage: &lt;heuristic #&gt; &lt;commit&gt;
snd_setmixer | cheat | Set named Mixgroup of current mixer to mix vol, mute, solo.
snd_setmixlayer | cheat | Set named Mixgroup of named mix layer to mix vol, mute, solo.
snd_showclassname | cheat | Default: 0<br>
snd_showstart | cheat | Default: 0<br>
snd_sos_block_global_stack | cheat | Default: false<br>
snd_sos_block_stop_global_stack | cheat | Default: true<br>
snd_sos_calc_angle_debug | rep, cheat | Default: false<br>
snd_sos_flush_operators | cheat | Flush and re-parse the sound operator system
snd_sos_get_operator_field_info | cheat | Currently gets info for a single operator field
snd_sos_ingame_debug | cheat | Default: false<br>
snd_sos_list_operator_updates | cheat | Default: false<br>
snd_sos_opvar_debug | cheat | Default: false<br>
snd_sos_pause_soundevent | cheat | Pause the specified soundevent in the list
snd_sos_pause_system | cheat | Default: false<br>
snd_sos_print_class_sizes | cheat | Prints the sizes of relevant sos classes.
snd_sos_print_field_name_strings | cheat | Prints a list of currently cached field name strings
snd_sos_print_field_references | cheat | Default: false<br>
snd_sos_print_full_field_info | cheat | Default: false<br>
snd_sos_print_groups | cheat | Prints the current state of the groups system
snd_sos_print_operator_stack | cheat | Prints a master list of currently exposed variables
snd_sos_print_operator_stack_operator | cheat | Prints an operator from a stack
snd_sos_print_operator_stacks | cheat | Prints a list of currently available stacks
snd_sos_print_operators | cheat | Prints a list of currently available operators
snd_sos_print_stack_exec_list | cheat | Prints the current stack execution list
snd_sos_print_strings | cheat | Prints a list of currently cached strings
snd_sos_print_tool_properties | cheat | Prints the current state of tool properties.
snd_sos_resolve_execute_operator | cheat | Resolve the inputs and execute one specified operator from a specified stack
snd_sos_set_operator_field | cheat | Currently sets a single float operator field
snd_sos_set_operator_field_by_guid | cheat | Currently sets a single float operator field
snd_sos_show_block_debug | cheat | Default: false<br>Spew data about the list of block entries.
snd_sos_show_operator_event_and_stack | cheat | Default: true<br>
snd_sos_show_operator_event_filter | cheat | Default: <br>
snd_sos_show_operator_field_filter | cheat | Default: <br>
snd_sos_show_operator_init | cheat | Default: false<br>
snd_sos_show_operator_not_executing | cheat | Default: true<br>
snd_sos_show_operator_operator_filter | cheat | Default: <br>
snd_sos_show_operator_pause_entry | cheat | Default: false<br>
snd_sos_show_operator_shutdown | cheat | Default: false<br>
snd_sos_show_operator_stop_entry | cheat | Default: false<br>
snd_sos_show_operator_updates | cheat | Default: false<br>
snd_sos_show_opvar_updates | cheat | Default: false<br>
snd_sos_show_opvar_updates_filter | cheat | Default: <br>
snd_sos_show_queuetotrack | cheat | Default: false<br>
snd_sos_show_soundevent_param_overwrite | cheat | Default: false<br>
snd_sos_show_soundevent_start | cheat | Default: false<br>
snd_sos_soundevent_filter | cheat | Default: <br>
snd_sos_soundevent_profile | cheat | Dump a record of current soundevents and profile data
snd_sos_start_soundevent | cheat | Starts a specified soundevent
snd_sos_start_soundevent_at_pos | cheat | Starts a specified soundevent at the given position
snd_sos_stop_all_soundevents | cheat | Stops all soundevents currently on the execution list
snd_sos_stop_soundevent_guid | cheat | Stops a specified soundevent
snd_sos_stop_soundevent_index | cheat | Stops a specified soundevent
snd_sos_test_soundmessage | cheat | test
snd_sos_unpause_soundevent | cheat | UnPause the first soundevent in the list
snd_sound_areas_debug | cl, rep, cheat | Default: false<br>
snd_sound_areas_debug_interval | cl, rep, cheat | Default: 0.2<br>
snd_soundevent_clear_deferred | cheat | Clear the list of deferred soundevents for loading.
snd_soundmixer_set_trigger_factor | cheat | Set named mix layer / mix group, trigger amount.
snd_soundmixer_setmixlayer_amount | cheat | Set named mix layer mix amount.
snd_spatialize_lerp | a, release | Default: 0<br>
snd_steamaudio_enable_pathing | cheat | Default: true<br>This variable is checked by soundstack to globally enabling pathing for audio processing.
snd_steamaudio_enable_perspective_correction | a, release | Default: true<br>Enable perspective correction for 3D audio.
snd_steamaudio_enable_reverb | release | Default: 0<br>Enable Steam Audio Reverb processor.
snd_steamaudio_enable_spatial_blend_fix | cheat | Toggles the speculative fix for low-frequency issues when using spatial blend.
snd_steamaudio_export_scene | cheat | Exports scene currently used by Steam Audio as a phononscene file.
snd_steamaudio_halton_sequence | cheat | Generate Halton Sequence for a given order and number of samples.
snd_steamaudio_ir_duration | cheat | Default: 2<br>The time delay between a sound being emitted and the last audible reflection in Steam Audio.
snd_steamaudio_load_pathing_data | cheat | Default: true<br>If set, baked pathing data is loaded. Steam Audio Hammer entities can successfully use pathing in this case.
snd_steamaudio_load_reverb_data | cheat | Default: true<br>If set, baked reverb data is loaded. Reset it to zero during an format changes of baked data until all data is updated.
snd_steamaudio_max_convolution_sources | cheat | Default: 4<br>The maximum number of simultaneous sources that can be modeled by Steam Audio.
snd_steamaudio_max_occlusion_samples | cheat | Default: 64<br>The maximum number of rays that can be traced for volumetric occlusion by Steam Audio.
snd_steamaudio_num_bounces | cheat | Default: 128<br>The maximum number of times any ray can bounce when using Steam Audio.
snd_steamaudio_num_diffuse_samples | cheat | Default: 2048<br>The number of directions considered for ray bounce by Steam Audio.
snd_steamaudio_num_rays | cheat | Default: 65536<br>The number of rays to trace for reflection modeling by Steam Audio.
snd_steamaudio_num_threads | cheat | Default: 2<br>Sets the number of threads used for realtime reflection by Steam Audio.
snd_steamaudio_pathing_order | cheat | Default: 1<br>The amount of directional detail in the simulated by Steam Audio.
snd_steamaudio_pathing_order_rendering | cheat | Default: 1<br>The amount of directional detail in the rendered audio by Steam Audio.
snd_steamaudio_reverb_level_db | release | Default: -3<br>Adjust overall volume (dB) of the output from Steam Audio Reverb processor.
snd_steamaudio_source_pathing_debug | a | Default: false<br>Enable path visualization for steam_audio_source operator.
snd_tensecondwarning_volume | cl, a, release | Default: 0.04<br>Volume of Ten Second Warnings
snd_toolvolume | a | Default: 1<br>Volume of sounds in tools (e.g. Hammer, SFM)
snd_use_baked_occlusion | rep, cheat, release | Default: 0<br>
snd_vmidi_flush | cheat | Purge and reload all vmidi data and files.
snd_vmix_override_mix_decay_time | cheat | Default: -1<br>If set &gt; 0, overrides how long the decay time is on all mix graphs (in seconds).<br>
snd_vmix_show_input_updates | cheat | Default: false<br>If set to 1, show all incoming updates to vmix inputs.<br>
snd_voipvolume | a | Default: 1<br>Voice volume
sound_device_override | a, release | Default: <br>ID of the sound device to use
soundinfo | release | Describe the current sound device with an active voice list.
soundscape_debug | sv, cheat | Default: false<br>When on, draws lines to all env_soundscape entities. Green lines show the active soundscape, red lines show soundscapes that aren't in range, and white lines show soundscapes that are in range, but not the active soundscape.
soundscape_dumpclient | cl, cheat | Dumps the client's soundscape data.<br>
soundscape_fadetime | cl, cheat | Default: 3<br>Time to crossfade sound effects between soundscapes
soundscape_radius_debug | cl, cheat | Default: false<br>Prints current volume of radius sounds
spawn_group_activate | sv, cheat | Activate specified spawngroup.
spawn_group_list | sv, cheat | List all spawn groups
spawn_group_load | sv, cheat | Load named spawn group.
spawn_group_unload | sv, cheat | Unload named spawn group.
speaker_config | a | Default: -1<br>
spec_autodirector | cl, clientcmd_can_execute | Default: false<br>Auto-director chooses best view modes while spectating
spec_centerchasecam | cl, a | Default: false<br>Looks at the target player's center, instead of his eye position, in chase came mode
spec_freeze_deathanim_time | sv, cl, rep, release | Default: 0.8<br>The time that the death cam will spend watching the player's ragdoll before going into the freeze death cam.
spec_freeze_time_lock | sv, cl, rep, release | Default: 1<br>Time players are prevented from skipping the freeze cam
spec_freeze_traveltime | sv, cl, rep, release | Default: 0.3<br>Time taken to zoom in to frame a target in observer freeze cam.
spec_glow_decay_time | cl, release | Default: 2<br>Time to decay glow from 1.0 to spec_glow_silent_factor after spec_glow_full_time.
spec_glow_full_time | cl, release | Default: 1<br>Noisy players stay at full brightness for this long.
spec_glow_silent_factor | cl, release | Default: 0.4<br>Lurking player xray glow scaling.
spec_glow_spike_factor | cl, release | Default: 1.2<br>Noisy player xray glow scaling (pop when noise is made).  Make &gt;1 to add a 'spike' to noise-making players
spec_glow_spike_time | cl, release | Default: 0<br>Time for noisy player glow 'spike' to show that they made noise very recently.
spec_hide_players | cl, release, clientcmd_can_execute | Default: false<br>Toggle the visibility of scoreboard players.
spec_mode | cl, clientcmd_can_execute | Set spectator mode
spec_next | cl, clientcmd_can_execute | Spectate next player
spec_pos | cl, cheat | dump position and angles to the console
spec_prev | cl, clientcmd_can_execute | Spectate previous player
spec_replay_autostart | cl, a | Default: true<br>Auto-start Killer Replay when available
spec_replay_bot | sv, release | Default: false<br>Enable Spectator Hltv Replay when killed by bot
spec_replay_leadup_time | rep, release | Default: 5.3438<br>Replay time in seconds before the highlighted event
spec_replay_message_time | rep, release | Default: 9.5<br>How long to show the message about Killer Replay after death. The best setting is a bit shorter than spec_replay_autostart_delay + spec_replay_leadup_time + spec_replay_winddown_time
spec_replay_on_death | rep, release | Default: false<br>When &gt; 0, sets the mode whereas players see delayed replay, and are segregated into a domain of chat and voice separate from the alive players
spec_replay_rate_base | rep, release | Default: 1<br>Base time scale of Killer Replay.Experimental.
spec_replay_rate_limit | rep, release | Default: 3<br>Minimum allowable pause between replay requests in seconds
spec_replay_round_delay | sv, release | Default: 0<br>Round can be delayed by this much due to someone watching a replay; must be at least 3-4 seconds, otherwise the last replay will always be interrupted by round start, assuming normal pause between round_end and round_start events (7 seconds) and freezecam delay (2 seconds) and 7.4 second full replay (5.4 second pre-death and ~2 seconds post-death) and replay in/out switching (up to a second)
spec_replay_winddown_time | sv, release | Default: 2<br>The trailing time, in seconds, of replay past the event, including fade-out
spec_show_xray | cl, a, release | Default: 1<br>If set to 1, you can see player outlines and name IDs through walls - who you can see depends on your team and mode
spec_usenumberkeys_nobinds | cl, a | Default: true<br>If set to 1, map voting and spectator view use the raw number keys instead of the weapon binds (slot1, slot2, etc).
spec_xray_dropped_defusekits | cl, release | Default: false<br>Whether to X-ray dropped defuse kits.
spec_xray_dropped_unoccluded | cl, release | Default: false<br>Whether to always X-ray dropped c4 and defuse kits.
splitscreen_mode | a, cheat | Default: 0<br>
startdemos | release | Play demos in demo sequence.
status | release | Print connection status
status_json | release | Print status in JSON format
steam_controller_haptics | cl, release | Default: true<br>
stop | release | Finish recording demo.
stopdemos | release | Stop looping demos (current demo will complete).
stopsound | cheat | 
stopsoundscape | cl, cheat | Stops all soundscape processing and fades current looping sounds
subclass_change | sv, cheat | Changes the subclass of the given entity.<br>	Arguments:   	&lt;new_subclass&gt; {entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
subclass_create | sv, cheat | Creates an entity of the given subclass where the player is looking.
surfaceprop | sv, cheat | Reports the surface properties at the cursor
sv_accelerate | sv, cl, nf, rep, release | Default: 5.5<br>
sv_accelerate_debug_speed | sv, cl, nf, rep, release | Default: false<br>
sv_accelerate_use_weapon_speed | sv, cl, nf, rep, release | Default: true<br>
sv_air_max_horizontal_parachute_speed | sv, cl, rep, release | Default: 240<br>
sv_air_max_wishspeed | sv, cl, rep, release | Default: 30<br>
sv_airaccelerate | sv, cl, nf, rep, release | Default: 12<br>
sv_airaccelerate_parachute | sv, cl, rep, release | Default: 2.6<br>
sv_airaccelerate_rappel | sv, cl, rep, release | Default: 2.2<br>
sv_allchat | sv, nf, release | Default: true<br>Players can receive all other players' text chat, no death restrictions
sv_alternateticks | sp, release | Default: false<br>If set, server only simulates entities on even numbered ticks.<br>
sv_always_play_damage_headshot_feedback | sv, release | Default: true<br>If true, we always play damage headshot feedback, even through smokes and objects.
sv_autoexec_mapname_cfg | sv, release | Default: false<br>Execute a mapname cfg file on the server automatically in custom game modes that require it.
sv_banid_enabled | release | Default: true<br>Whether server supports banid command
sv_bot_buy_decoy_weight | sv, release | Default: 1<br>Given a bot will buy a grenade, controls the odds of the grenade type. Proportional to all other sv_bot_buy_*_weight convars.
sv_bot_buy_flash_weight | sv, release | Default: 1<br>Given a bot will buy a grenade, controls the odds of the grenade type. Proportional to all other sv_bot_buy_*_weight convars.
sv_bot_buy_hegrenade_weight | sv, release | Default: 6<br>Given a bot will buy a grenade, controls the odds of the grenade type. Proportional to all other sv_bot_buy_*_weight convars.
sv_bot_buy_molotov_weight | sv, release | Default: 1<br>Given a bot will buy a grenade, controls the odds of the grenade type. Proportional to all other sv_bot_buy_*_weight convars.
sv_bot_buy_smoke_weight | sv, release | Default: 1<br>Given a bot will buy a grenade, controls the odds of the grenade type. Proportional to all other sv_bot_buy_*_weight convars.
sv_bounce | sv, cl, nf, rep, release | Default: 0<br>Bounce multiplier for when physically simulated objects collide with other objects.
sv_chat_proximity | sv, cl, rep, release | Default: -1<br>
sv_cheats | nf, rep, release | Default: false<br>Allow cheats on server
sv_clockcorrection_msecs | sv, release | Default: 30<br>The server tries to keep each player's m_nTickBase withing this many msecs of the server absolute tickcount
sv_cluster | release | Default: 0<br>Data center cluster this server lives in.
sv_competitive_minspec | sv, cl, nf, rep, release | Default: true<br>Enable to force certain client convars to minimum/maximum values to help prevent competitive advantages.
sv_cs_player_speed_has_hostage | sv, cl, rep, release | Default: 200<br>
sv_debug_overlays_bandwidth | release | Default: 65536<br>Broadcast server debug overlays traffic
sv_debug_overlays_broadcast | nf, cheat, release | Default: false<br>Broadcast server debug overlays
sv_disable_observer_interpolation | sv, cl, rep, release | Default: false<br>Disallow interpolating between observer targets on this server.
sv_disconnected_player_data_hold_time | sv, cl, rep, release | Default: 60<br>Duration, in seconds, to hold onto the data of disconnected players, for scoreboard display.
sv_distance_guaranteed_damage_feedback | sv, release | Default: 1070<br>Attacks made within this radius are guaranteed to generate damage feedback sounds.
sv_dz_cash_bundle_size | sv, rep, release | Default: 50<br>Size of a cash bundle
sv_dz_cash_mega_bundle_size | sv, rep, release | Default: 13<br>Size of a mega cash bundle
sv_dz_contractkill_reward | sv, rep, release | Default: 10<br>Cash bundles to award for a successful contract kill
sv_dz_hostage_rescue_reward | sv, cl, rep, release | Default: 18<br>Number of cash bundles to award for rescuing a hostage
sv_dz_squad_wipe_reward | sv, cl, rep, release | Default: 2<br>Number of cash bundles to award for eliminating a squad
sv_enable_alternate_baselines | release | Default: 1<br>Allow alternate baseline system, set to 2 for debugging spew.
sv_enable_delta_packing | release | Default: true<br>When enabled, this allows for entity packing to use the property changes for building up the data. This is many times faster, but can be disabled for error checking.
sv_ent_showonlyhitbox | sv, cheat | Default: -1<br>
sv_ents_write_alarm | release | Default: 0<br>Print callstack every time CNetworkGameServerBase::WriteEntityUpdate takes more than this amount of milliseconds
sv_fade_player_visibility_farz | sv, cl, rep, release | Default: false<br>
sv_falldamage_scale | sv, cl, rep, release | Default: 1<br>
sv_friction | sv, cl, nf, rep, release | Default: 5.2<br>World friction.
sv_full_alltalk | sv, cl, rep, release | Default: false<br>Any player (including Spectator team) can speak to any other player
sv_game_mode_flags | sv, release | Default: 0<br>Dedicated server game mode flags to run
sv_gameinstructor_disable | sv, cl, rep, release | Default: false<br>Force all clients to disable their game instructors.
sv_gameinstructor_enable | cl, rep, release | Default: false<br>Force all clients to enable their game instructors.
sv_gravity | sv, cl, nf, rep, release | Default: 800<br>World gravity.
sv_hibernate_postgame_delay | release | Default: 5<br># of seconds to wait after final client leaves before hibernating.
sv_hibernate_when_empty | release | Default: true<br>Puts the server into extremely low CPU usage mode when no clients connected
sv_hide_roundtime_until_seconds | sv, cl, rep, release | Default: 0<br>
sv_highlight_distance | sv, cl, rep, release | Default: 500<br>
sv_highlight_duration | sv, cl, rep, release | Default: 3.5<br>
sv_holiday_mode | sv, cl, rep, release | Default: 0<br>0 = OFF, 1 = Halloween, 2 = Winter
sv_hoststate_quit_syscall | release | Default: false<br>When enabled, game server will quit immediately via syscall instead of running host states shutdown sequence
sv_invites_only_mainmenu | sv, cl, rep, release | Default: false<br>If turned on, will ignore all invites when user is playing a match
sv_jump_impulse | sv, cl, rep, release | Default: 301.993<br>Initial upward velocity for player jumps; sqrt(2*gravity*height).
sv_jump_spam_penalty_time | sv, cl, rep, release | Default: 0.015625<br>For subtick jumps, if this much time has elapsed since the last time the user has pressed the jump key, pretend they hadn't. Lowering this makes bunnyhopping easier.
sv_kick_ban_duration | sv, cl, nf, rep, release | Default: 15<br>How long should a kick ban from the server should last (in minutes)
sv_kick_players_with_cooldown | sv, rep, release | Default: 1<br>(0: do not kick on insecure servers; 1: kick players with Untrusted status or convicted by Overwatch; 2: kick players with any cooldown)
sv_ladder_scale_speed | sv, cl, rep, release | Default: 0.78<br>Scale top speed on ladders
sv_ladder_slack_z_mult | sv, cl, rep, cheat | Default: 0.026<br>Difference in Z increases toward the middle of the slack ladder.<br>
sv_lagcompensationforcerestore | sv, cheat | Default: true<br>Don't test validity of a lag comp restore, just do it.
sv_lan | release | Default: false<br>Server is a lan server ( no heartbeat, no authentication, no non-class C addresses )
sv_lightquery_debug | sv, cheat | Default: false<br>
sv_load_forced_client_names_file | sv, release | Loads a file containing SteamID64 names for clients
sv_load_random_client_names_file | sv, release | Loads a file containing random name words for clients
sv_log_http_record_before_any_listeners | sv, release | Default: false<br>
sv_log_onefile | a, release | Default: false<br>Log server information to only one file.
sv_logbans | a, release | Default: false<br>Log server bans in the server logs.
sv_logblocks | release | Default: false<br>If true when log when a query is blocked (can cause very large log files)
sv_logecho | a, release | Default: true<br>Echo log information to the console.
sv_logfile | a, release | Default: false<br>Log server information in the log file.
sv_logflush | a, release | Default: false<br>Flush the log file to disk on each write (slow).
sv_logsdir | a, release | Default: logs<br>Folder in the game directory where server logs will be stored.
sv_mapvetopickvote_maps | sv, release | Default: de_anubis,de_inferno,de_mirage,de_vertigo,de_overpass,de_nuke,de_ancient<br>Which maps are used for map veto pick sequence
sv_mapvetopickvote_phase_duration | sv, release | Default: \[1:5\]\[2:15\]\[3:20\]\[4:10\]\[5:10\]\[6:5\]<br>How many seconds each phase lasts
sv_mapvetopickvote_rnd | sv, release | Default: false<br>When enabled will shuffle veto pick maps list order every time
sv_matchend_drops_enabled | sv, release | Default: true<br>Rewards gameplay time is always accumulated for players, but drops at the end of the match can be prevented
sv_matchpause_auto_5v5 | sv, cl, rep, release | Default: false<br>When enabled will automatically pause the match at next freeze time if less than 5 players are connected on each team.
sv_max_allowed_net_graph | sv, cl, nf, rep, release | Default: 1<br>Determines max allowed net_graph value for clients.
sv_max_queries_sec | release | Default: 3<br>Maximum queries per second to respond to from a single IP address.
sv_max_queries_sec_global | release | Default: 60<br>Maximum queries per second to respond to from anywhere.
sv_max_queries_window | release | Default: 30<br>Window over which to average queries per second averages.
sv_maxrate | rep, release | Default: 0<br>Max bandwidth rate allowed on server, 0 == unlimited
sv_maxspeed | sv, cl, nf, rep, release | Default: 320<br>
sv_maxunlag | sv, release | Default: 0.2<br>Maximum lag compensation in seconds
sv_maxvelocity | sv, cl, rep, release | Default: 3500<br>Maximum speed any ballistically moving object is allowed to attain per axis.
sv_memlimit | cheat, release | Default: 0<br>If set, whenever a game ends, if the total memory used by the server is greater than this # of megabytes, the server will exit.
sv_merge_changes_after_tick_with_calcdelta | release | Default: 1<br>This fixes bugs where pure calcdelta is used due to recipient changing but it doesn't pick up a field change where the value was changed back to same value as the from snapshot even though the destination fields change list does note the change. Set to 2 to spew any changes merged in by this fix.
sv_metaduplication | cheat | Check serializer meta for duplication, add verbose to command for full spew
sv_min_jump_landing_sound | sv, cl, rep, release | Default: 260<br>
sv_minrate | rep, release | Default: 98304<br>Min bandwidth rate allowed on server, 0 == unlimited
sv_networkvar_perfieldtracking | release | Default: true<br>Track individual field offset changes, rather than a single dirty flag for the whole entity.
sv_networkvar_validate | release | Default: false<br>Validate each StateChanged against known offsets.
sv_noclipaccelerate | sv, cl, a, nf, rep | Default: 5<br>
sv_noclipduringpause | sv, cl, rep, cheat | Default: false<br>If cheats are enabled, then you can noclip with the game paused (for doing screenshots, etc.).
sv_noclipfriction | sv, cl, a, nf, rep | Default: 4<br>Friction during noclip move.
sv_noclipspeed | sv, cl, a, nf, rep | Default: 1200<br>
sv_packstats | release | Show entity packing stats, pass 'clear' as argument to reset counts.
sv_parallel_packentities | release | Default: 2<br>Set to 1 to use threaded snapshot sending on listen servers, 2 for dedicated servers.
sv_parallel_sendsnapshot | release | Default: 2<br>0: run all send jobs on main thread; 1: send jobs run asynchronously (except on dedicated server); 2: send jobs asynchronously; 3: send jobs run in parallel but block to not overlap the next tick; 4: main server clients' send jobs run in parallel, then HLTV server jobs; this approximately matches pre-async profile for a single HLTV server configuration
sv_party_mode | sv, cl, rep, release | Default: false<br>Party!!
sv_password | prot, nf, norecord, release | Default: <br>Server password for entry into multiplayer games
sv_pausable | release | Default: 0<br>Is the server pausable.
sv_pause_on_console_open | a | Default: false<br>1 = Pause the game when pressing ~ to open the console. CTRL+~ opens the console without pause.
sv_phys_debug_callback_entities | sv, cheat | Default: false<br>Print all entities that get touch callbacks. Each entity is printed only once.
sv_phys_enabled | sv, cheat | Default: true<br>Enable all physics simulation
sv_phys_sleep_enable | sv, cheat | Default: true<br>Enable sleeping for dynamic physics bodies.
sv_phys_stop_at_collision | sv, cheat | Default: <br>
sv_playerradio_use_allowlist | sv, release | Default: true<br>playerradio commands may only use responses from an allow list of commands.
sv_prime_accounts_only | sv, release | Default: false<br>When this setting is enabled only prime users can connect to this game server.
sv_pure | release | Show user data.
sv_pure_kick_clients | release | Default: true<br>If set to 1, the server will kick clients with mismatching files. Otherwise, it will issue a warning to the client.
sv_pure_trace | release | Default: 0<br>If set to 1, the server will print a message whenever a client is verifying a CRC for a file.
sv_pushaway_hostage_force | sv, rep, cheat | Default: 20000<br>How hard the hostage is pushed away from physics objects (falls off with inverse square of distance).
sv_pushaway_max_hostage_force | sv, rep, cheat | Default: 1000<br>Maximum of how hard the hostage is pushed away from physics objects.
sv_pvs_max_distance | rep, release | Default: 0<br>if set, adds a maximum range to PVS/PAS checks
sv_radio_throttle_window | sv, release | Default: 10<br>The number of seconds before radio command tokens refresh.
sv_ragdoll_lru_debug | sv, rep, cheat | Default: false<br>
sv_record_item_time_data | sv, release | Default: false<br>Turn on recording of per player item time data into the server log.
sv_regeneration_force_on | sv, cheat | Default: false<br>Cheat to test regenerative health systems
sv_region | release | Default: -1<br>The region of the world to report this server in.
sv_rethrow_last_grenade | sv, cheat | Emit the last grenade thrown on the server.
sv_search_key | release | Default: <br>
sv_search_team_key | release | Default: public<br>When initiating team search, set this key to match with known opponents team
sv_server_graphic1 | sv, cl, rep, release | Default: <br>A 360x60 (&lt;16kb) image file in /csgo/ that will be displayed to spectators.
sv_server_graphic2 | sv, cl, rep, release | Default: <br>A 220x45 (&lt;16kb) image file in /csgo/ that will be displayed to spectators.
sv_server_verify_blood_on_player | sv, cl, rep, cheat | Default: true<br>
sv_shield_bash_damage_to_nonplayer | sv, cl, rep, release | Default: 30<br>
sv_shield_bash_damage_to_players | sv, cl, rep, release | Default: 90<br>
sv_shield_explosive_damage_cap | sv, cl, rep, release | Default: 99<br>
sv_shield_explosive_damage_crouch_bonus | sv, cl, rep, release | Default: 10<br>
sv_shield_explosive_damage_mindist | sv, cl, rep, release | Default: 30<br>
sv_shield_explosive_damage_mult | sv, cl, rep, release | Default: 4<br>
sv_shield_explosive_damage_scale | sv, cl, rep, release | Default: 0.5<br>
sv_shield_hitpoints | sv, cl, rep, release | Default: 850<br>
sv_show_move_collisions | sv, cl, rep, cheat | Default: false<br>Enable this to visualize collisions between player and geometry.
sv_show_team_equipment_prohibit | sv, cl, nf, rep, release | Default: false<br>Determines whether +cl_show_team_equipment is prohibited.
sv_show_teammate_death_notification | sv, release | Default: false<br>Show chat notification upon teammate death
sv_show_voip_indicator_for_enemies | sv, rep, release | Default: false<br>Makes it so the voip icon is shown over enemies as well as allies when they are talking
sv_showbullethits | sv, cl, rep, release | Default: 0<br>1=show hits and near misses, 2=show hits only
sv_showhitregistration | sv, cl, rep, cheat | Default: 0<br>Display lag_compensated hitboxes. 0 = off, 1 = server only, 2 = client only, 3 = both server and client
sv_showimpacts | sv, cl, rep, release | Default: 0<br>Shows client (red) and server (blue) bullet impact point (1=both, 2=client-only, 3=server-only)
sv_showimpacts_penetration | sv, cl, rep, release | Default: 0<br>Shows extra data when bullets penetrate. (use sv_showimpacts_time to increase time shown)
sv_showimpacts_time | sv, cl, rep, release | Default: 4<br>Duration bullet impact indicators remain before disappearing
sv_shutdown | release | Sets the server to shutdown when all games have completed
sv_skel_constraints_enable | rep, cheat | Default: false<br>
sv_skirmish_id | sv, cl, rep, release | Default: 0<br>Dedicated server skirmish id to run
sv_skyname | sv, cl, a, rep | Default: sky_urb01<br>Current name of the skybox texture
sv_snapshot_unlimited | rep, release | Default: false<br>For debugging, don't throw away old snapshots so that if you break in debugger (on remote client or server) it won't require an uncompressed update to resume.  You may run out of memory of course...
sv_soundscape_printdebuginfo | sv, cheat | print soundscapes
sv_spawn_afk_bomb_drop_time | sv, rep, release | Default: 15<br>Players that have never moved since they spawned will drop the bomb after this amount of time.
sv_spec_hear | sv, cl, nf, rep, release | Default: 1<br>Determines who spectators can hear: 0: only spectators; 1: all players; 2: spectated team; 3: self only; 4: nobody
sv_spec_use_tournament_content_standards | sv, cl, rep, release | Default: false<br>
sv_specaccelerate | sv, cl, a, nf, rep | Default: 5<br>
sv_specnoclip | sv, cl, a, nf, rep | Default: true<br>
sv_specspeed | sv, cl, a, nf, rep | Default: 1200<br>
sv_spewmeta | cheat | Spew serializer meta
sv_staminamax | sv, cl, rep, release | Default: 80<br>Maximum stamina penalty
sv_staminarecoveryrate | sv, cl, rep, release | Default: 60<br>Rate at which stamina recovers (units/sec)
sv_steamgroup | nf, release | Default: <br>The ID of the steam group that this server belongs to. You can find your group's ID on the admin profile page in the steam community.
sv_steamgroup_exclusive | release | Default: false<br>If set, only members of Steam group will be able to join the server when it's empty, public people will be able to join the server only if it has players.
sv_stopspeed | sv, cl, nf, rep, release | Default: 80<br>Minimum stopping speed when on ground.
sv_stressbots | release | Default: false<br>If set to 1, the server calculates data and fills packets to bots. Used for perf testing.
sv_tags | nf, release | Default: <br>Server tags. Used to provide extra information to clients when they're browsing for servers. Separate tags with a comma.
sv_talk_after_dying_time | sv, cl, rep, release | Default: 0<br>The number of seconds a player can continue talking after dying as if they were still alive
sv_teamid_overhead | sv, cl, nf, rep, release | Default: true<br>Shows teamID over player's heads.  0 = off, 1 = on
sv_teamid_overhead_always_prohibit | sv, cl, nf, rep, release | Default: false<br>Determines whether cl_teamid_overhead_always is prohibited.
sv_timebetweenducks | sv, cl, rep, release | Default: 0.4<br>Minimum time before recognizing consecutive duck key
sv_turning_inaccuracy_angle_min | sv, cl, rep, cheat, release | Default: 4<br>
sv_turning_inaccuracy_decay | sv, cl, rep, cheat, release | Default: 0.8<br>
sv_turning_inaccuracy_enabled | sv, cl, rep, cheat, release | Default: false<br>
sv_unify_random_seed | sv, release | Default: false<br>Should we securely share seeds between the client and server?
sv_unlockedchapters | a | Default: 1<br>Highest unlocked game chapter.
sv_update_animgraph_movement_in_finish | sv, cl, rep, cheat | Default: true<br>Whether we should update animgraph movement in FinishMove.
sv_usercmd_custom_random_seed | sv, cl, rep, release | Default: true<br>When enabled server will populate an additional random seed independent of the client
sv_usercmd_queue_spew_threshold | sv, release | Default: 10<br>Spew warning if command queue has grown above this many backlogged commands.
sv_visiblemaxplayers | release | Default: -1<br>Overrides the max players reported to prospective clients
sv_voice_proximity | sv, cl, rep, release | Default: -1<br>
sv_voicecodec | release | Default: vaudio_speex<br>Specifies which voice codec DLL to use in a game. Set to the name of the DLL without the extension.
sv_voiceenable | a, nf, release | Default: true<br>
sv_vote_allow_in_warmup | sv, release | Default: false<br>Allow voting during warmup?
sv_vote_allow_spectators | sv, release | Default: false<br>Allow spectators to initiate votes?
sv_vote_command_delay | sv, release | Default: 2<br>How long after a vote passes until the action happens
sv_vote_count_spectator_votes | sv, release | Default: false<br>Allow spectators to vote on issues?
sv_vote_creation_timer | sv, release | Default: 120<br>How often someone can individually call a vote.
sv_vote_disallow_kick_on_match_point | sv, release | Default: false<br>Disallow vote kicking on the match point round.
sv_vote_failure_timer | sv, release | Default: 300<br>A vote that fails cannot be re-submitted for this long
sv_vote_issue_kick_allowed | sv, nf, rep, release | Default: true<br>Can people hold votes to kick players from the server?
sv_vote_issue_loadbackup_allowed | sv, nf, rep, release | Default: true<br>Can people hold votes to load match from backup?
sv_vote_issue_loadbackup_spec_authoritative | sv, release | Default: false<br>When enabled, admins load match from backup without players vote
sv_vote_issue_loadbackup_spec_only | sv, nf, rep, release | Default: false<br>When enabled, only admins load match from backup
sv_vote_issue_loadbackup_spec_safe | sv, release | Default: true<br>When enabled, admins load match from backup in safe time of the round only
sv_vote_issue_pause_match_spec_only | sv, nf, rep, release | Default: false<br>When enabled, only admins start technical pause
sv_vote_issue_restart_game_allowed | sv, release | Default: false<br>Can people hold votes to restart the game?
sv_vote_kick_ban_duration | sv, nf, rep, release | Default: 15<br>How long should a kick vote ban someone from the server? (in minutes)
sv_vote_quorum_ratio | sv, release | Default: 0.501<br>The minimum ratio of players needed to vote on an issue to resolve it.
sv_vote_timer_duration | sv, release | Default: 15<br>How long to allow voting on an issue
sv_watchtransmit | sv, release | Default: -2<br>Watch NetworkStateChanged info for this entity index.
sv_water_slow_amount | sv, cl, rep, release | Default: 0.9<br>
sv_wateraccelerate | sv, cl, nf, rep, release | Default: 10<br>
sv_waterfriction | sv, cl, nf, rep, release | Default: 1<br>
sv_weapon_require_use_grace_period | sv, release | Default: 1<br>
sv_weapon_swap_difficulty_near_hi_pri | sv, cl, rep, release | Default: 2<br>0 = Cone searches easily reach past high priority items to swap weapons. 1 = Cone searches are narrowed and require that the weapon is strictly closer. 2 = cone searches are disabled near high priority items
sv_workshop_allow_other_maps | sv, release | Default: true<br>When hosting a workshop collection, users can play other workshop map on this server when it is empty and then mapcycle into this server collection.
sys_info | release | Print system information to the console
sys_minidumpspewlines | release | Default: 2000<br>Lines of crash dump console spew to keep.
teammenu | cl, server_can_execute | Show team selection window
telemetry_message | sv, cheat | Place a message in the telemetry timeline
telemetry_toggle_timespan | sv, cheat | Starts/stops a timespan with an ever increasing name.
test_dispatcheffect | sv, cheat | Test a clientside dispatch effect.<br>	Usage: test_dispatcheffect &lt;effect name&gt; &lt;distance away&gt; &lt;flags&gt; &lt;magnitude&gt; &lt;scale&gt;<br>	Defaults are: &lt;distance 1024&gt; &lt;flags 0&gt; &lt;magnitude 0&gt; &lt;scale 0&gt;<br>
test_entity_blocker | sv, cheat | Test command that drops an entity blocker out in front of the player.
test_list_entities | sv, cheat | test-list entities
think_limit | sv, cl, rep, release | Default: 10<br>Maximum think time in milliseconds, warning is printed if this is exceeded.
thirdperson | cl, cheat, per_tick | Switch to thirdperson camera.
thirdperson_lockcamera | cl, rep, cheat | Default: false<br>
thirdperson_mayamode | cl, cheat | Switch to thirdperson Maya-like camera controls.
timedemo | release | Play a demo and report performance info.
timedemoquit | release | Play a demo, report performance info, and then exit
timeleft | sv | prints the time remaining in the match
timeout_ct_start | sv, release | 
timeout_terrorist_start | sv, release | 
toggle | norecord, release | Toggles specified convar value on and off.
toggleconsole | norecord, release | Show/hide the console.
trusted_launch | cl, a | Default: 0<br>Trusted launch status
tv_advertise_watchable | prot, nf, norecord, release | Default: false<br>GOTV advertises the match as watchable via game UI, clients watching via UI will not need to type password
tv_allow_autorecording_index | sv, release | Default: -1<br>When &gt;=0 restricts autorecording only to the specified TV index
tv_allow_camera_man_steamid | sv, release | Default: 0<br>Allows tournament production cameraman to run csgo.exe -interactivecaster on SteamID 7650123456XXX and be the camera man.
tv_allow_camera_man_steamid2 | sv, release | Default: 0<br>Allows tournament production tv cameraman to run csgo.exe -interactivecaster on SteamID 7650123456XXX and be the tv camera man.
tv_allow_static_shots | sv, release | Default: true<br>Auto director uses fixed level cameras for shots
tv_autorecord | release | Default: false<br>Automatically records all games as SourceTV demos.
tv_autoretry | release | Default: true<br>Relay proxies retry connection after network timeout
tv_broadcast | release | Default: false<br>Automatically broadcasts all games as GOTV demos through Steam.
tv_broadcast1 | release | Default: false<br>Automatically broadcasts all games as GOTV\[1\] demos through Steam.
tv_broadcast_keyframe_interval | release | Default: 3<br>The frequency, in seconds, of sending keyframes and delta fragments to the broadcast relay server
tv_broadcast_keyframe_interval1 | release | Default: 3<br>The frequency, in seconds, of sending keyframes and delta fragments to the broadcast1 relay server
tv_broadcast_max_requests | release | Default: 20<br>Max number of broadcast http requests in flight. If there is a network issue, the requests may start piling up, degrading server performance. If more than the specified number of requests are in flight, the new requests are dropped.
tv_broadcast_max_requests1 | release | Default: 20<br>Max number of broadcast1 http requests in flight. If there is a network issue, the requests may start piling up, degrading server performance. If more than the specified number of requests are in flight, the new requests are dropped.
tv_broadcast_startup_resend_interval | release | Default: 10<br>The interval, in seconds, of re-sending startup data to the broadcast relay server (useful in case relay crashes, restarts or startup data http request fails)
tv_broadcast_status | release | Print out broadcast status
tv_broadcast_url | release | Default: http://localhost:8080<br>URL of the broadcast relay
tv_broadcast_url1 | release | Default: http://localhost:8080<br>URL of the broadcast relay1
tv_chatgroupsize | release | Default: 0<br>Set the default chat group size
tv_chattimelimit | release | Default: 0.2<br>Limits spectators to chat only every n seconds
tv_clients | release | Shows list of connected SourceTV clients.
tv_debug | release | Default: 0<br>SourceTV debug info.
tv_delaymapchange | sv, release | Default: true<br>Delays map change until broadcast is complete
tv_deltacache | release | Default: 2<br>Enable delta entity bit stream cache
tv_dispatchmode | release | Default: 1<br>Dispatch clients to relay proxies: 0=never, 1=if appropriate, 2=always
tv_enable | nf, release | Default: false<br>Activates SourceTV on server.
tv_enable1 | nf, release | Default: false<br>Activates SourceTV\[1\] on server.
tv_enable_delta_frames | release | Default: true<br>Indicates whether or not the tv should use delta frames for storage of intermediate frames. This takes more CPU but significantly less memory.
tv_enable_dynamic | nf, release | Default: false<br>When enabled, changes in tv_enable convars cause immediate startup or shutdown of hltv server
tv_listen_voice_indices | cl, user | Default: 0<br>Bitfield of playerslots to listen to voice messages from when connected to SourceTV, default is none
tv_listen_voice_indices_h | cl, user | Default: 0<br>High 32 bits of bitfield of playerslots to listen to voice messages from when connected to SourceTV, default is none
tv_maxclients | release | Default: 128<br>Maximum client number on SourceTV server.
tv_maxclients_relayreserved | release | Default: 0<br>This number of relay client connections are reserved for SourceTV relays.
tv_maxrate | release | Default: 0<br>Max SourceTV spectator bandwidth rate allowed, 0 == unlimited
tv_mem | release | hltv memory statistics. Use with "ent 10" (dump entity 10 memory usage) or "top 8" (dump top 8 memory users) or "class" CWorld (dump CWorld class)
tv_name | release | Default: SourceTV<br>SourceTV host name
tv_nochat | a, user | Default: false<br>Don't receive chat messages from other SourceTV spectators
tv_overridemaster | release | Default: false<br>Overrides the SourceTV master root address.
tv_password | prot, nf, norecord, release | Default: <br>SourceTV password for all clients
tv_playcast_delay_prediction | release | Default: true<br>
tv_playcast_delay_resync | release | Default: 0<br>To alleviate intermittent network connectivity problems, this is the number of seconds to wait before actually re-syncing the stream after failure
tv_playcast_retry_timeout | release | Default: 12<br>In case of intermittent network problems, how long should playcast retry fragment retrieval before resorting to resync
tv_port | release | Default: 27020<br>Host SourceTV\[0\] port
tv_port1 | release | Default: 27021<br>Host SourceTV\[1\] port
tv_record | release | Starts SourceTV demo recording.
tv_record_immediate | release | Default: 1<br>tv_record starting the moment tv_record was executed, not tv_delay earlier
tv_relay | release | Connect to SourceTV server and relay broadcast.
tv_relaypassword | prot, nf, norecord, release | Default: <br>SourceTV password for relay proxies
tv_relayradio | sv, release | Default: false<br>Relay team radio commands to TV: 0=off, 1=on
tv_relayvoice | release | Default: true<br>Relay voice data: 0=off, 1=on
tv_retry | release | Reconnects the SourceTV relay proxy.
tv_show_allchat | sv, release | Default: true<br>
tv_spectator_port_offset | cl, release | Default: 0<br>
tv_status | release | Show SourceTV server status.
tv_stop | release | Stops the SourceTV broadcast.
tv_stoprecord | release | Stops SourceTV demo recording.
tv_time_remaining | sv, release | Print remaining tv broadcast time
tv_timeout | release | Default: 20<br>SourceTV connection timeout in seconds.
tv_title | release | Default: SourceTV<br>Set title for SourceTV spectator UI
tv_transmitall | rep, release | Default: false<br>Transmit all entities (not only director view)
ui_deepstats_radio_heat_figurine | cl, a, release | Default: 0<br>
ui_deepstats_radio_heat_tab | cl, a, release | Default: 0<br>
ui_deepstats_radio_heat_team | cl, a, release | Default: 0<br>
ui_deepstats_toplevel_mode | cl, a, release | Default: 0<br>
ui_inventorysettings_recently_acknowledged | cl, a, release | Default: <br>
ui_lobby_draft_enabled | cl, release | Default: false<br>
ui_mainmenu_bkgnd_movie_1016BB11 | cl, a, release | Default: de_dust2<br>Main menu background movie
ui_nearbylobbies_filter3 | cl, a, release | Default: competitive<br>
ui_news_last_read_link | cl, a, release | Default: <br>
ui_party_msg_sound_enabled | cl, release | Default: true<br>When enabled, lobby messages will play a short sound
ui_playsettings_custom_preset | cl, a, release | Default: <br>
ui_playsettings_directchallengekey | cl, a, release | Default: <br>
ui_playsettings_flags_listen_casual | cl, a, release | Default: 0<br>
ui_playsettings_flags_listen_competitive | cl, a, release | Default: 16<br>
ui_playsettings_flags_listen_cooperative | cl, a, release | Default: 0<br>
ui_playsettings_flags_listen_deathmatch | cl, a, release | Default: 32<br>
ui_playsettings_flags_listen_scrimcomp2v2 | cl, a, release | Default: 0<br>
ui_playsettings_flags_listen_skirmish | cl, a, release | Default: 0<br>
ui_playsettings_flags_listen_survival | cl, a, release | Default: 0<br>
ui_playsettings_flags_official_casual | cl, a, release | Default: 0<br>
ui_playsettings_flags_official_competitive | cl, a, release | Default: 16<br>
ui_playsettings_flags_official_cooperative | cl, a, release | Default: 0<br>
ui_playsettings_flags_official_deathmatch | cl, a, release | Default: 32<br>
ui_playsettings_flags_official_scrimcomp2v2 | cl, a, release | Default: 0<br>
ui_playsettings_flags_official_skirmish | cl, a, release | Default: 0<br>
ui_playsettings_flags_official_survival | cl, a, release | Default: 0<br>
ui_playsettings_maps_listen_casual | cl, a, release | Default: mg_de_dust2<br>
ui_playsettings_maps_listen_competitive | cl, a, release | Default: mg_de_dust2<br>
ui_playsettings_maps_listen_deathmatch | cl, a, release | Default: mg_de_dust2<br>
ui_playsettings_maps_listen_scrimcomp2v2 | cl, a, release | Default: mg_de_inferno<br>
ui_playsettings_maps_listen_skirmish | cl, a, release | Default: mg_skirmish_armsrace<br>
ui_playsettings_maps_official_casual | cl, a, release | Default: mg_dust247<br>
ui_playsettings_maps_official_deathmatch | cl, a, release | Default: mg_dust247<br>
ui_playsettings_maps_workshop | cl, a, release | Default: <br>
ui_playsettings_mode_listen | cl, a, release | Default: deathmatch<br>
ui_playsettings_mode_official_v20 | cl, a, release | Default: deathmatch<br>
ui_playsettings_survival_solo | cl, a, release | Default: 0<br>
ui_playsettings_warmup_map_name | cl, a, release | Default: de_mirage<br>
ui_popup_weaponupdate_version | cl, a, release | Default: 0<br>
ui_setting_advertiseforhire_auto | cl, a, release | Default: 1<br>Whether users will automatically advertise for invites (0: off; 1: last; 2: auto)
ui_setting_advertiseforhire_auto_last | cl, a, release | Default: /competitive<br>Which game mode users last used to advertise for invites
ui_show_subscription_alert | cl, a, release | Default: 0<br>
ui_show_unlock_competitive_alert | cl, a, release | Default: <br>
ui_steam_overlay_notification_position | cl, a | Default: bottomleft<br>Steam overlay notification position
ui_steam_overlay_notification_position_horz | cl, a | Default: 0<br>Steam overlay notification position horizontal offset
ui_steam_overlay_notification_position_vert | cl, a | Default: 0<br>Steam overlay notification position vertical offset
ui_vanitysetting_loadoutslot_ct | cl, a, release | Default: <br>
ui_vanitysetting_loadoutslot_t | cl, a, release | Default: <br>
ui_vanitysetting_team | cl, a, release | Default: <br>
unbind | release | Unbind a key.
unbindall | release | Unbind all keys.
unpause | release | Clear the pause state of the server.
vconsole_rcon_server_details | norecord, release, server_cannot_query | Default: <br>when non-empty allows for easy vconsole connection to the dedicated server.
view_punch_decay | sv, cl, rep, cheat, release | Default: 18<br>Decay factor exponent for view punch
viewmodel_always_on | cl, cheat | Default: false<br>Force the view model to draw, even when in 3rd person
viewmodel_fov | cl, a | Default: 60<br>Viewmodel FOV
viewmodel_offset_randomize | cl, cheat | Default: false<br>randomly change viewmodel offsets to visualize range
viewmodel_offset_x | cl, a | Default: 1<br>viewmodel_offset_x
viewmodel_offset_y | cl, a | Default: 1<br>viewmodel_offset_y
viewmodel_offset_z | cl, a | Default: -1<br>viewmodel_offset_z
viewmodel_presetpos | cl, a | Default: 1<br>1:"Desktop", 2:"Couch", 3:"Classic" 
violence_ablood | a | Default: true<br>Draw alien blood
violence_agibs | a | Default: true<br>Show alien gib entities
violence_hblood | a | Default: true<br>Draw human blood
violence_hgibs | a | Default: true<br>Show human gib entities
vis_force | sv, cheat | Default: false<br>
vismon_poll_frequency | sv, cheat | Default: 0.5<br>
vismon_trace_limit | sv, cheat | Default: 12<br>
vmix_input | cheat | Set an input mix value
vmix_output | cheat | Dump main graph control output values
voice_always_sample_mic | a | Default: false<br>For systems experiencing a hang/stall when using voice chat.
voice_loopback | user | Default: false<br>
voice_modenable | cl, a, release, clientcmd_can_execute | Default: true<br>Enable/disable voice in this mod.
voice_modenable_toggle | cl, release | Toggle the voice_modenable convar.
voice_player_speaking_delay_threshold | sv, cheat | Default: 0.5<br>
voice_test_log_send | release | Default: false<br>
voice_threshold | cl, a | Default: 4000<br>
voice_vox | cl, a, per_user | Default: 0<br>Voice chat uses a vox-style always on
volume | a | Default: 1<br>Sound volume
volume_fog_clipmap_update | cheat | Default: 1<br>
volume_fog_clipmaps_enabled | cheat | Default: false<br>
volume_fog_disable | cheat | Default: false<br>
volume_fog_dither_scale | cheat | Default: 3<br>
volume_fog_enable_jitter | cheat | Default: true<br>
volume_fog_enable_stereo | cheat | Default: true<br>
volume_fog_enlarge_frusta | cheat | Default: 2<br>
volume_fog_show_volumes | cheat | Default: false<br>
vphys2_friction_factor | cheat | Default: 1<br>Change global friction factor
vphys2_restitution_factor | cheat | Default: 1<br>Change global restitution factor
weapon_accuracy_forcespread | sv, cl, rep, release | Default: 0<br>Force spread to the specified value.
weapon_accuracy_reset_on_deploy | sv, cl, rep, cheat, release | Default: false<br>On deploy, forcibly reset weapon accuracy to zero.
weapon_accuracy_shotgun_spread_patterns | sv, cl, rep, release | Default: true<br>
weapon_auto_cleanup_time | sv, cl, rep, release | Default: 0<br>If set to non-zero, weapons will delete themselves after the specified time (in seconds) if no players are near.
weapon_debug_spread_gap | cl, cheat, per_user | Default: 0.67<br>
weapon_debug_spread_show | cl, cheat, per_user | Default: 0<br>Enables display of weapon accuracy; 1: show accuracy box, 3: show accuracy with dynamic crosshair
weapon_near_empty_sound | sv, cl, rep, cheat | Default: true<br>
writekeybindings | release | Saves current key bindings to disk.
zoom_sensitivity_ratio | cl, a, per_user | Default: 1<br>Additional mouse sensitivity scale factor applied when FOV is zoomed in.
