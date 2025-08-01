Name | Flags | Description
---- | ----- | -----------
+bugvoice | devonly, norecord | Start recording bug voice attachment.
+camdistance | devonly, cl | 
+cammousemove | devonly, cl | 
+cl_show_team_equipment | cl, release | 
+lookatweapon | cl, release | 
+quickbuyradial | cl, release | 
+quickgearradial | devonly, cl | 
+quickgrenaderadial | cl, release | 
+quickinv | cl, release | 
+radialradio | cl, release | 
+radialradio2 | cl, release | 
+radialradio3 | cl, release | 
+spray_menu | cl, release | 
-bugvoice | devonly, norecord | Finish recording bug voice attachment.
-camdistance | devonly, cl | 
-cammousemove | devonly, cl | 
-cl_show_team_equipment | cl, release | 
-lookatweapon | cl, release | 
-quickbuyradial | cl, release | 
-quickgearradial | devonly, cl | 
-quickgrenaderadial | cl, release | 
-quickinv | cl, release | 
-radialradio | cl, release | 
-radialradio2 | cl, release | 
-radialradio3 | cl, release | 
-spray_menu | cl, release | 
CS_WarnFriendlyDamageInterval | sv, cheat | Default: 3<br>Defines how frequently the server notifies clients that a player damaged a friend
CreatePredictionError | sv, cheat | Create a prediction error
Inferno_concav_plane_threshold | devonly, cl | Default: -10<br>
ShowSteamStatsSessionID | devonly, cl | Prints out the game stats session ID's (developer convar must be set to non-zero).
StackStats_Dump | devonly | Dump a named stackstats structure to disk. Usage: stackstats_dump "structname" \["filename"\]
Test_Checkpoint | devonly | Indicate to a test script that a checkpoint has been reached
Test_CreateEntity | sv, cheat | 
Test_EHandle | sv, cheat | 
Test_ExitProcess | cheat | Test_ExitProcess &lt;exit code&gt; - immediately kill the process.
Test_Loop | devonly | Test_Loop &lt;loop name&gt; - loop back to the specified loop start point unconditionally.
Test_LoopCount | devonly | Test_LoopCount &lt;loop name&gt; &lt;count&gt; - loop back to the specified loop start point the specified # of times.
Test_LoopForNumSeconds | devonly | Test_LoopForNumSeconds &lt;loop name&gt; &lt;time&gt; - loop back to the specified start point for the specified # of seconds.
Test_RandomChance | devonly | Test_RandomChance &lt;percent chance, 0-100&gt; &lt;token1&gt; &lt;token2...&gt; - Roll the dice and maybe run the command following the percentage chance.
Test_RandomPlayerPosition | sv, cheat | 
Test_StartLoop | devonly | Test_StartLoop &lt;loop name&gt; - Denote the start of a loop. Really just defines a named point you can jump to.
Test_StartScript | devonly | Start a test script running..
_fov | devonly, cl | Default: 0<br>Automates fov command to server.
_record | norecord, release | Record a demo incrementally.
_resetgamestats | devonly, sv | Erases current game stats and writes out a blank stats file
addip | devonly | Add an IP address to the ban list.
addons | devonly | list current addon info.
adjacent_levels | devonly, sv | List adjacent levels
adjacent_preload | devonly, sv | Preload adjacennt level data - will override regular changelevel code -- PROTOTYPE/WIP
adsp_alley_min | devonly | Default: 122<br>
adsp_courtyard_min | devonly | Default: 126<br>
adsp_debug | a | Default: 0<br>
adsp_door_height | devonly | Default: 112<br>
adsp_duct_min | devonly | Default: 106<br>
adsp_hall_min | devonly | Default: 110<br>
adsp_low_ceiling | devonly | Default: 108<br>
adsp_opencourtyard_min | devonly | Default: 126<br>
adsp_openspace_min | devonly | Default: 130<br>
adsp_openstreet_min | devonly | Default: 118<br>
adsp_openwall_min | devonly | Default: 130<br>
adsp_room_min | devonly | Default: 102<br>
adsp_street_min | devonly | Default: 118<br>
adsp_tunnel_min | devonly | Default: 114<br>
adsp_wall_height | devonly | Default: 128<br>
ai_debug_dyninteractions | sv, cheat | Default: 0<br>Debug the NPC dynamic interaction system.
ai_debug_los | sv, cheat | Default: 0<br>NPC Line-Of-Sight debug mode. If 1, solid entities that block NPC LOC will be highlighted with white bounding boxes. If 2, it'll show non-solid entities that would do it if they were solid.
ai_debug_ragdoll_magnets | devonly, sv | Default: false<br>
ai_debug_scripted_sequence | sv, cheat | Default: false<br>
ai_debug_shoot_positions | sv, cl, rep, cheat | Default: 0<br>
ai_debug_speech | devonly, sv | Default: 0<br>
ai_disabled | sv, cl, rep, cheat | Default: false<br>
ai_expression_frametime | devonly, sv | Default: 0.05<br>Maximum frametime to still play background expressions.
ai_expression_optimization | devonly, sv | Default: false<br>Disable npc background expressions when you can't see them.
ai_force_serverside_ragdoll | devonly, sv | Default: false<br>
ai_off_nav_show_nearest | sv, cheat | Default: false<br>
ai_sequence_debug | devonly, sv, cl, rep | Default: false<br>
ai_use_visibility_cache | devonly, sv | Default: 1<br>Sets whether or not NPCs can cache their Visibility checks against other entities. If set to 2, also tests to make sure that NPC-&gt;Target results match that of Target-&gt;NPC.
ai_use_visibility_cache_reciprocation | devonly, sv | Default: true<br>Sets whether or not the visibility check cache should be reciprocal.
alias | release | Alias a command.
ammo_338mag_headshot_mult | devonly, sv, cl, rep | Default: 1<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_338mag_impulse | devonly, sv, cl, rep | Default: 2800<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_338mag_max | sv, cl, rep, release | Default: 30<br>
ammo_357sig_headshot_mult | devonly, sv, cl, rep | Default: 1<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_357sig_impulse | devonly, sv, cl, rep | Default: 2000<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_357sig_max | sv, cl, rep, release | Default: 52<br>
ammo_357sig_min_max | sv, cl, rep, release | Default: 12<br>
ammo_357sig_p250_max | sv, cl, rep, release | Default: 26<br>
ammo_357sig_small_max | sv, cl, rep, release | Default: 24<br>
ammo_45acp_headshot_mult | devonly, sv, cl, rep | Default: 1<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_45acp_impulse | devonly, sv, cl, rep | Default: 2100<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_45acp_max | sv, cl, rep, release | Default: 100<br>
ammo_50AE_headshot_mult | devonly, sv, cl, rep | Default: 1<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_50AE_impulse | devonly, sv, cl, rep | Default: 2400<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_50AE_max | sv, cl, rep, release | Default: 35<br>
ammo_556mm_box_headshot_mult | devonly, sv, cl, rep | Default: 1<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_556mm_box_impulse | devonly, sv, cl, rep | Default: 2400<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_556mm_box_max | sv, cl, rep, release | Default: 200<br>
ammo_556mm_headshot_mult | devonly, sv, cl, rep | Default: 1<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_556mm_impulse | devonly, sv, cl, rep | Default: 2400<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_556mm_max | sv, cl, rep, release | Default: 90<br>
ammo_556mm_small_max | sv, cl, rep, release | Default: 40<br>
ammo_57mm_headshot_mult | devonly, sv, cl, rep | Default: 1<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_57mm_impulse | devonly, sv, cl, rep | Default: 2000<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_57mm_max | sv, cl, rep, release | Default: 100<br>
ammo_762mm_headshot_mult | devonly, sv, cl, rep | Default: 1<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_762mm_impulse | devonly, sv, cl, rep | Default: 2400<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_762mm_max | sv, cl, rep, release | Default: 90<br>
ammo_9mm_headshot_mult | devonly, sv, cl, rep | Default: 1<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_9mm_impulse | devonly, sv, cl, rep | Default: 2000<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_9mm_max | sv, cl, rep, release | Default: 120<br>
ammo_buckshot_headshot_mult | devonly, sv, cl, rep | Default: 1<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_buckshot_impulse | devonly, sv, cl, rep | Default: 600<br>You must enable tweaking via tweak_ammo_impulses to use this value.
ammo_buckshot_max | sv, cl, rep, release | Default: 32<br>
ammo_grenade_limit_default | sv, cl, rep, release | Default: 1<br>
ammo_grenade_limit_flashbang | sv, cl, rep, release | Default: 1<br>
ammo_grenade_limit_total | sv, cl, rep, release | Default: 3<br>
ammo_item_limit_adrenaline | sv, cl, rep, release | Default: 5<br>
ammo_item_limit_healthshot | sv, cl, rep, release | Default: 4<br>
anim_damped_move_speed_timewindow | devonly, sv, cl, rep | Default: 0.2<br>
anim_dampedaccel16_scale | devonly, sv, cl, rep | Default: 0.85<br>
anim_dampedaccel16_timewindow | devonly, sv, cl, rep | Default: 0.25<br>
anim_decode_forcewritealltransforms | devonly | Default: false<br>Force BatchAnimationDecode to write transformations for all bones
anim_disable | devonly, sv, cl, rep | Default: false<br>
anim_eval_stats | devonly, sv | Displays stats about how many EvaluatePose calls are unused
anim_resource_validate_on_load | release | Default: true<br>Validates the animation group channel list against the animations on load for every animation
anim_scale_wasd_input_hip_dip | devonly, sv, cl, rep | Default: 0.8<br>
anim_scale_wasd_input_hip_swivel | devonly, sv, cl, rep | Default: 0.8<br>
animated_material_attributes | cl, cheat | Default: true<br>
animevents_dump | sv, cheat | List all the currently registered anim events.<br>
animgraph2_enable_parallel_update | devonly, sv, cl, rep | Default: true<br>
animgraph2_force_tick_all_graphs | devonly, sv, cl, rep | Default: false<br>
animgraph_debug | sv, cl, rep, cheat | Default: false<br>Debug animation graph
animgraph_debug_animevents | devonly, sv, cl, rep | Default: false<br>Print info about animevents emitted by AnimGraph
animgraph_debug_entindex | sv, cl, rep, cheat | Default: 0<br>The entity to specifically debug
animgraph_debug_filterent | devonly, sv, cl, rep | Default: 0<br>Filter setting for animgraph_debug_variables output. If set to -1, show debug for all entities. If set to 0, show debug for any NPCs that have been npc_selected. If set to &gt;0, something other than 0, show debug for the entity with the matching entindex.
animgraph_debug_max_poseop_count |  | Default: false<br>
animgraph_debug_set_filter_params | devonly, sv, cl, rep | Default: <br>Comma separated list of params to filter against when drawing debug text overlays
animgraph_debug_set_filter_tags | devonly, sv, cl, rep | Default: <br>Comma separated list of tags to filter against when drawing debug text overlays
animgraph_debug_show_unreferenced_params | devonly, sv, cl, rep | Default: false<br>
animgraph_debug_show_unreferenced_tags | devonly, sv, cl, rep | Default: false<br>
animgraph_debug_tags | devonly, sv, cl, rep | Default: false<br>
animgraph_debug_variables | devonly, sv, cl, rep | Default: false<br>Turn on to see animgraph variable changes for entities passing animgraph_debug_filterent.
animgraph_debug_variables_ignore_missing | devonly, sv, cl, rep | Default: true<br>If set, animgraph_debug_variables won't show debug for warnings about sets to missing variables.
animgraph_debug_variables_ignore_nonchanges | devonly, sv, cl, rep | Default: true<br>If set, animgraph_debug_variables won't show debug for variable sets that don't change the value.
animgraph_draw_traces | devonly, sv, cl, rep | Default: false<br>
animgraph_dump_update_list | devonly, sv | Displays stats about which animations are updating
animgraph_enable | devonly, sv, cl, rep | Default: true<br>Enable animation graph
animgraph_enable_dirty_netvar_optimization | devonly, rep | Default: true<br>
animgraph_enable_parallel_op_evaluation | devonly, sv, cl, rep | Default: false<br>
animgraph_enable_parallel_preupdate | devonly, sv, cl, rep | Default: false<br>
animgraph_enable_parallel_update | devonly, sv, cl, rep | Default: true<br>
animgraph_footlock_auto_ledge_detection | devonly, rep | Default: true<br>Attempt to detect when the foot is partially hanging off a ledge and stop it tilting to reach the bottom
animgraph_footlock_auto_stair_detection | devonly, rep | Default: true<br>Attempt to detect when the foot is on a stair and will stop it from tilting to reach the next step
animgraph_footlock_calculate_tilt | devonly, rep | Default: true<br>
animgraph_footlock_debug_foot_index | devonly, rep | Default: -1<br>
animgraph_footlock_debug_type | devonly, rep | Default: 2<br>
animgraph_footlock_draw_footbase | devonly, rep | Default: false<br>
animgraph_footlock_enabled | devonly, rep | Default: true<br>A master convar that effectively disables the entire footlock node.
animgraph_footlock_ground_roll | devonly, rep | Default: true<br>
animgraph_footlock_hip_offset_enable | devonly, rep | Default: true<br>
animgraph_footlock_ik_enable | rep, cheat | Default: true<br>Enable IK.
animgraph_footlock_tilt_mode | devonly, rep | Default: 1<br>
animgraph_footlock_trace_ground_enabled | devonly, rep | Default: true<br>Convar for toggling foot lock ground tracking.
animgraph_footlock_use_hip_shift | devonly, rep | Default: true<br>
animgraph_footstep_node_supresses_events | devonly, sv, cl, rep | Default: false<br>
animgraph_force_full_network_updates | devonly, rep | Default: false<br>
animgraph_force_tick_all_graphs | devonly, sv, cl, rep | Default: false<br>
animgraph_ik_debug | devonly, rep | Default: false<br>
animgraph_motionmatching_print_compressionstats | devonly, rep | Default: false<br>
animgraph_network_enable | devonly, sv, cl, rep | Default: true<br>Enable animation graph networking. The setting is only read at graph creation time; to use please set on the command line.
animgraph_record_all | sv, cl, rep, cheat | Default: false<br>Automatically start recording AnimGraphs when they get created, and save them to disk when they are destroyed
animgraph_set_parameter_bool | sv, cheat | Specified entities will have the specified bool parameter set to the value specified.  Useful for animators to test.<br>	Arguments: &lt;entity&gt; &lt;parameter name&gt; &lt;value you want to send to animgraph for the entity&gt;
animgraph_set_parameter_enum | sv, cheat | Specified entities will have the specified enum parameter set to the value specified.  Useful for animators to test.<br>	Arguments: &lt;entity&gt; &lt;parameter name&gt; &lt;value you want to send to animgraph for the entity&gt;
animgraph_set_parameter_float | sv, cheat | Specified entities will have the specified float parameter set to the value specified.  Useful for animators to test.<br>	Arguments: &lt;entity&gt; &lt;parameter name&gt; &lt;value you want to send to animgraph for the entity&gt;
animgraph_set_parameter_int | sv, cheat | Specified entities will have the specified int parameter set to the value specified.  Useful for animators to test.<br>	Arguments: &lt;entity&gt; &lt;parameter name&gt; &lt;value you want to send to animgraph for the entity&gt;
animgraph_set_parameter_string | sv, cheat | Specified entities will have the specified bool parameter set to the value specified.  Useful for animators to test.<br>	Arguments: &lt;entity&gt; &lt;parameter name&gt; &lt;value you want to send to animgraph for the entity&gt;
animgraph_set_parameter_vector | sv, cheat | Specified entities will have the specified vector parameter set to the value specified.  Useful for animators to test.<br>	Arguments: &lt;entity&gt; &lt;parameter name&gt; &lt;value you want to send to animgraph for the entity&gt;
animgraph_slope_draw_raycasts | sv, cl, rep, cheat | Default: false<br>
animgraph_slope_enable | sv, cl, rep, cheat | Default: true<br>
animgraph_slowdownonslopes_enabled | devonly, rep | Default: true<br>
animgraph_trace_ignore_prop_physics | devonly, sv, cl, rep | Default: true<br>
animgraph_trace_static_only | sv, cl, rep, cheat | Default: false<br>
animgraph_verify_dirty_netvar_optimization | devonly, rep | Default: false<br>
annotation_append | cl, release | Load annotation to a file without clearing existing annotations
annotation_auto_load | cl, release | Default: false<br>
annotation_clear | cl, release | Clear all annotation
annotation_create | cl, release | Creates an annotation
annotation_delete_previous_node_set | cl, release | Delete the last node set created
annotation_load | cl, release | Load annotation to a file after first clearing existing annotations
annotation_reload | cl, release | Reload the annotation file
annotation_reload_language_file | cl, release | Creates an annotation
annotation_save | cl, release | Save annotation to a file
apply_crosshair_code | devonly, cl | Apply a crosshair code to the current crosshair settings.
attached_output_stall_ms | devonly | Default: 250<br>
audio_input_test_signal | devonly | Default: false<br>For testing the audio input pathway with a sine tone instead of SDL3.
auto_bug | devonly, norecord | auto_bug : create non-interactive bug report.
autobuy | cl, clientcmd_can_execute | Attempt to purchase items with the order listed in cl_autobuy
automatically_open_saved_animgraph_recording | sv, cl, a, rep | Default: false<br>
autosave | devonly, sv | Autosave
autosave_fully_async | devonly, sv | Default: true<br>Set to 1 to have autosaves execute completely on the save thread, forces 'render only' mode while the save completes
autosavedangerous | devonly, sv | AutoSaveDangerous
autosavedangerousissafe | devonly, sv | 
axis | sv, cheat | Draw an axis<br>	Arguments:  x y z pitch yaw roll &lt;lifetime = 10.0&gt; &lt;r g b a&gt;<br>
banid | devonly | Add a user ID to the ban list.
banip | devonly | Add an IP address to the ban list.
battery_saver | a | Default: false<br>OBSOLETE replaced by mobile_fps_* - Battery saver mode. 0=off, 1=on
benchframe | release | Takes a snapshot of a particular frame in a time demo.
bind | release | Bind a key.
binddefaults | release | Bind all keys to their default values.
bindss | release | Bind a key for a particular splitscreen player.
bindtoggle | devonly | Performs a bind &lt;key&gt; "increment var &lt;cvar&gt; 0 1 1".
blink | devonly, norecord | Blink specified convar value between two values at the specified duration.
blink_duration | devonly, cl | Default: 0.5<br>How many seconds an eye blink will last.
bot_add | sv, release | bot_add &lt;t\|ct&gt; &lt;type&gt; &lt;difficulty&gt; &lt;name&gt; - Adds a bot matching the given criteria.
bot_add_ct | sv, release | bot_add_ct &lt;type&gt; &lt;difficulty&gt; &lt;name&gt; - Adds a Counter-Terrorist bot matching the given criteria.
bot_add_t | sv, release | bot_add_t &lt;type&gt; &lt;difficulty&gt; &lt;name&gt; - Adds a terrorist bot matching the given criteria.
bot_all_weapons | sv, release | Allows the bots to use all weapons
bot_allow_grenades | sv, release | Default: true<br>If nonzero, bots may use grenades.
bot_allow_machine_guns | sv, release | Default: true<br>If nonzero, bots may use the machine gun.
bot_allow_pistols | sv, release | Default: true<br>If nonzero, bots may use pistols.
bot_allow_rifles | sv, release | Default: true<br>If nonzero, bots may use rifles.
bot_allow_rogues | sv, release | Default: true<br>If nonzero, bots may occasionally go 'rogue'. Rogue bots do not obey radio commands, nor pursue scenario goals.
bot_allow_shotguns | sv, release | Default: true<br>If nonzero, bots may use shotguns.
bot_allow_snipers | sv, release | Default: true<br>If nonzero, bots may use sniper rifles.
bot_allow_sub_machine_guns | sv, release | Default: true<br>If nonzero, bots may use sub-machine guns.
bot_auto_follow | sv, release | Default: false<br>If nonzero, bots with high co-op may automatically follow a nearby human player.
bot_auto_vacate | sv, release | Default: true<br>If nonzero, bots will automatically leave to make room for human players.
bot_autodifficulty_threshold_high | sv, cl, rep, release | Default: 5<br>Upper bound above Average Human Contribution Score that a bot must be above to change its difficulty
bot_autodifficulty_threshold_low | sv, cl, rep, release | Default: -2<br>Lower bound below Average Human Contribution Score that a bot must be below to change its difficulty
bot_chatter | sv, release | Default: normal<br>Control how bots talk. Allowed values: 'off', 'radio', 'minimal', or 'normal'.
bot_chatter_use_rr | devonly, sv | Default: true<br>0 = Use old bot chatter system, 1 = Use response rules
bot_controllable | sv, release | Default: true<br>Determines whether bots can be controlled by players
bot_coop_idle_max_vision_distance | sv, rep, release | Default: 1400<br>Max distance bots can see targets (in coop) when they are idle, dormant, hiding or asleep.
bot_crouch | sv, cheat | Default: false<br>
bot_debug | sv, cheat | Default: 0<br>For internal testing purposes.
bot_debug_target | sv, cheat | Default: 0<br>For internal testing purposes.
bot_defer_to_human_goals | sv, release | Default: false<br>If nonzero and there is a human on the team, the bots will not do the scenario tasks.
bot_defer_to_human_items | sv, release | Default: true<br>If nonzero and there is a human on the team, the bots will not get scenario items.
bot_difficulty | sv, release | Default: 1<br>Defines the skill of bots joining the game.  Values are: 0=easy, 1=normal, 2=hard, 3=expert.
bot_dont_shoot | sv, cheat, release | Default: false<br>If nonzero, bots will not fire weapons (for debugging).
bot_eco_limit | sv, release | Default: 2000<br>If nonzero, bots will not buy if their money falls below this amount.
bot_flipout | sv, release | Default: false<br>If nonzero, bots use no CPU for AI. Instead, they run around randomly.
bot_force_duck | devonly, sv | Default: false<br>
bot_freeze | sv, cheat | Default: false<br>
bot_goto_mark | sv, cheat | Sends a bot to the marked nav area (useful for testing navigation meshes)
bot_goto_selected | sv, cheat | Sends a bot to the selected nav area (useful for testing navigation meshes)
bot_ignore_enemies | sv, cheat | Default: false<br>If nonzero, bots will ignore enemies (for debugging).
bot_ignore_players | sv, cheat | Default: false<br>Bots will not see non-bot players.
bot_join_after_player | sv, release | Default: true<br>If nonzero, bots wait until a player joins before entering the game.
bot_join_delay | devonly, sv | Default: 0<br>Prevents bots from joining the server for this many seconds after a map change.
bot_join_in_warmup | devonly, sv | Default: true<br>Prevents bots from joining the server while warmup phase is active.
bot_join_team | sv, release | Default: any<br>Determines the team bots will join into. Allowed values: 'any', 'T', or 'CT'.
bot_kick | sv, release | bot_kick &lt;all&gt; &lt;t\|ct&gt; &lt;type&gt; &lt;difficulty&gt; &lt;name&gt; - Kicks a specific bot, or all bots, matching the given criteria.
bot_kill | sv, cheat | bot_kill &lt;all&gt; &lt;t\|ct&gt; &lt;type&gt; &lt;difficulty&gt; &lt;name&gt; - Kills a specific bot, or all bots, matching the given criteria.
bot_knives_only | sv, release | Restricts the bots to only using knives
bot_loadout | sv, cheat | Default: <br>bots are given these items at round start
bot_max_visible_smoke_length | sv, rep, release | Default: 200<br>Bots will see players through smoke clouds up to this length.
bot_max_vision_distance_override | sv, rep, release | Default: -1<br>Max distance bots can see targets.
bot_mimic | sv, cl, rep, cheat | Default: 0<br>Bot uses usercmd of player by index.
bot_mimic_spec_buttons | cl, cheat | Default: true<br>+attack, +jump etc are used for spectator control instead of being passed on to spectated bot
bot_mimic_yaw_offset | sv, cheat | Default: 180<br>
bot_pistols_only | sv, release | Restricts the bots to only using pistols
bot_place | sv, cheat | bot_place - Places a bot from the map at where the local player is pointing.
bot_prefix | sv, release | Default: <br>This string is prefixed to the name of all bots that join the game.<br>&lt;difficulty&gt; will be replaced with the bot's difficulty.<br>&lt;weaponclass&gt; will be replaced with the bot's desired weapon class.<br>&lt;skill&gt; will be replaced with a 0-100 representation of the bot's skill.
bot_quota | sv, release | Default: 10<br>Determines the total number of bots in the game.
bot_quota_mode | sv, release | Default: normal<br>Determines the type of quota.<br>Allowed values: 'normal', 'fill', and 'match'.<br>If 'fill', the server will adjust bots to keep N players in the game, where N is bot_quota.<br>If 'match', the server will maintain a 1:N ratio of humans to bots, where N is bot_quota.
bot_randombuy | sv, cheat | Default: false<br>should bots ignore their prefered weapons and just buy weapons at random?
bot_show_battlefront | sv, cheat | Default: false<br>Show areas where rushing players will initially meet.
bot_show_nav | sv, cheat | Default: false<br>For internal testing purposes.
bot_show_occupy_time | sv, cheat | Default: false<br>Show when each nav area can first be reached by each team.
bot_snipers_only | sv, release | Restricts the bots to only using sniper rifles
bot_stop | sv, cheat | Default: 0<br>bot_stop &lt;1\|all&gt; \| &lt;not_bomber&gt; \| &lt;t&gt; \| &lt;ct&gt;
bot_traceview | sv, cheat | Default: 0<br>For internal testing purposes.
bot_walk | sv, release | Default: false<br>If nonzero, bots can only walk, not run.
bot_zombie | sv, cheat | Default: false<br>If nonzero, bots will stay in idle mode and not attack.
box | sv, cheat | Draw a bbox<br>	Arguments:  minx miny miny maxx maxy maxz &lt;lifetime = 10.0&gt; &lt;r g b a&gt;<br>
break_damage_inherit_scale | devonly, sv, cl, rep | Default: 1<br>
break_invulnerable_spawn_duration | devonly, sv, cl, rep | Default: 0.5<br>
breakable_debug_spawn_transform_time | devonly, sv, cl, rep | Default: 0<br>Debug draw the spawn transform location.
breakable_force_break | devonly, sv | Force a breakable to break
breakable_multiplayer | devonly, sv | Default: true<br>
buddha | sv, nf, cheat | Default: false<br>Player takes damage but won't die
buddha_ignore_bots | sv, nf, cheat | Default: false<br>Bots always buddha 0
buddha_reset_hp | sv, nf, cheat | Default: 1<br>HP to set when damaged below zero in Buddha Mode
bug | devonly, norecord | bug \[auto_fill_tokens\] \[-title &lt;text&gt;\] \[-noscreenshot\] : Activate the bug reporter.
bug_submitter_override | a | Default: <br>
bugvoice_clear | devonly, norecord | Clear voice attachment data.
bugvoice_save | devonly, norecord | Write buffered voice attachment data to file.
buildcubemaps | devonly, cl | Build Cubemaps
buildcubemaps_renderdoc_capture | devonly, cl | Default: -1<br>Capture a specific cubemap with RenderDoc during buildcubemaps.
buildsparseshadowtree | devonly, cl, hidden | Build Sparse Shadow Tree
button_info | release | Display information about the specified key or button.
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
cachedvalue_count_partybrowser | cl, hidden, a | Default: 0<br>
cachedvalue_count_teammates | cl, hidden, a | Default: 0<br>
callvote | sv | Start a vote on an issue.
cam_collision | cl, a | Default: 1<br>When in thirdperson and cam_collision is set to 1, an attempt is made to keep the camera from passing though walls.
cam_command | cl, cheat | Tells camera to change modes
cam_head_constraint_debug | devonly, sv, cl, rep | Default: false<br>Show camera head constraint debug info
cam_head_constraint_distance | devonly, sv, cl, rep | Default: 12<br>Distance to constrain first/thirdperson camera and head
cam_head_constraint_soft_transition | devonly, sv, cl, rep | Default: 4<br>Constraint soft transition distance
cam_idealdelta | cl, a | Default: 4<br>Controls the speed when matching offset to ideal angles in thirdperson view
cam_idealdist | cl, a | Default: 150<br>
cam_ideallag | cl, a | Default: 4<br>Amount of lag used when matching offset to ideal angles in thirdperson view
cam_idealpitch | cl, a | Default: 0<br>
cam_idealyaw | cl, a | Default: 0<br>
cam_showangles | cl, cheat | Default: false<br>When in thirdperson, print viewangles/idealangles/cameraoffsets to the console.
cam_snapto | cl, a | Default: false<br>
camera_cut_to_datadriven_camera | devonly, cl, hidden | 
camera_datadriven_debug | devonly, cl, cheat | Default: false<br>
camera_datadriven_disable_cache | devonly, sv, cheat | Default: false<br>
camera_jolt_fix | devonly, sv, cl, rep | Default: true<br>camera jolt fix
camerazoomin | devonly, cl | 
camerazoomout | devonly, cl | 
camortho | cl, cheat | Switch to orthographic camera.
cancelselect | cl, server_can_execute | 
capturecubemap | devonly, cl | Capture Cubemap
cash_player_bomb_defused | sv, cl, nf, rep, release | Default: 300<br>
cash_player_bomb_planted | sv, cl, nf, rep, release | Default: 300<br>
cash_player_damage_hostage | sv, cl, nf, rep, release | Default: -30<br>
cash_player_get_killed | sv, cl, nf, rep, release | Default: 0<br>
cash_player_interact_with_hostage | sv, cl, nf, rep, release | Default: 150<br>
cash_player_killed_enemy_default | sv, cl, nf, rep, release | Default: 300<br>
cash_player_killed_enemy_factor | sv, cl, nf, rep, release | Default: 1<br>
cash_player_killed_hostage | sv, cl, nf, rep, release | Default: -1000<br>
cash_player_killed_teammate | sv, cl, nf, rep, release | Default: -300<br>
cash_player_rescued_hostage | sv, cl, nf, rep, release | Default: 1000<br>
cash_player_respawn_amount | sv, cl, nf, rep, release | Default: 0<br>
cash_team_bonus_shorthanded | sv, cl, nf, rep, release | Default: 0<br>
cash_team_elimination_bomb_map | sv, cl, nf, rep, release | Default: 3250<br>
cash_team_elimination_hostage_map_ct | sv, cl, nf, rep, release | Default: 2000<br>
cash_team_elimination_hostage_map_t | sv, cl, nf, rep, release | Default: 1000<br>
cash_team_hostage_alive | sv, cl, nf, rep, release | Default: 0<br>
cash_team_hostage_interaction | sv, cl, nf, rep, release | Default: 500<br>
cash_team_loser_bonus | sv, cl, nf, rep, release | Default: 1400<br>
cash_team_loser_bonus_consecutive_rounds | sv, cl, nf, rep, release | Default: 500<br>
cash_team_per_dead_enemy | sv, cl, nf, rep, release | Default: 50<br>
cash_team_planted_bomb_but_defused | sv, cl, nf, rep, release | Default: 600<br>
cash_team_rescued_hostage | sv, cl, nf, rep, release | Default: 0<br>
cash_team_terrorist_win_bomb | sv, cl, nf, rep, release | Default: 3500<br>
cash_team_win_by_defusing_bomb | sv, cl, nf, rep, release | Default: 3250<br>
cash_team_win_by_hostage_rescue | sv, cl, nf, rep, release | Default: 3500<br>
cash_team_win_by_time_running_out_bomb | sv, cl, nf, rep, release | Default: 3250<br>
cash_team_win_by_time_running_out_hostage | sv, cl, nf, rep, release | Default: 3250<br>
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
cc_captiontrace | devonly, cl | Default: 1<br>Show missing closecaptions (0 = no, 1 = devconsole, 2 = show in hud)
cc_delay_time | cl, a | Default: 0.25<br>Close caption delay before showing caption.
cc_emit | devonly, cl | Emits a closed caption
cc_findsound | devonly, cl | Searches for soundname which emits specified text.
cc_flush | devonly, cl | Flushes async'd captions.
cc_lang | cl, a | Default: <br>Current close caption language (emtpy = use game UI language)
cc_linger_time | cl, a | Default: 1<br>Close caption linger time.
cc_log | devonly, cl | Default: 0<br>Log caption names and contents (0 = off, 1 = found captions, 2 = unfound captions, 3 = all captions)
cc_norepeat | devonly, sv | Default: 5<br>In multiplayer games, don't repeat captions more often than this many seconds.
cc_random | devonly, cl | Emits a random caption
cc_showblocks | devonly, cl | Toggles showing which blocks are pending/loaded async.
cc_showmissing | devonly, sv, rep | Default: false<br>Show missing closecaption entries.
cc_spectator_only | cl, a | Default: false<br>
cc_subtitles | cl, a | Default: false<br>If set, don't show sound effect captions, just voice overs (i.e., won't help hearing impaired players).
cc_vr_caption_catchup_interval | devonly, cl | Default: 0.3<br>Duration it takes for attached caption to ideal point
cc_vr_caption_speed | cl, a | Default: 1<br>0 = slow, 1 = medium (default), 2 = fast
cc_vr_debug | devonly, cl | Default: false<br>Debug visualization of VR closed caption placement
cc_vr_depth_test | devonly, cl | Default: false<br>Have closed caption Panorama panel perform depth testing against the scene
cc_vr_epsilon | devonly, cl | Default: 2.5<br>Epsilon to trigger movement of VR subtitle panel in world space
cc_vr_font_size | cl, a | Default: 1<br>0 = small, 1 = med (default), 2 = large
cc_vr_forward_offset | devonly, cl | Default: 30<br>Subtitle offset distance (forward, in front of player)
cc_vr_vertical_offset | devonly, cl | Default: -6.5<br>Subtitle vertical offset distance (positive is up)
cc_vr_width | cl, a | Default: 1<br>0 = narrow, 1 = med (default), 2 = wide
changelevel | release | changelevel &lt;mapname&gt; :Multiplayer change level.
character_patches | devonly, cl | Default: true<br>
check_nofilefd | devonly | Print the current number of FDs reported by getrlimit
check_transmit_dump_ents | devonly, sv | Default: false<br>
chicken_stop | sv, cheat | Default: false<br>
clDrawTargetIDTrace | devonly, cl | Default: false<br>visualizing line trace for target ID
cl_ShowBoneSetupEnts | devonly, cl | Default: false<br>Show which entities are having their bones setup each frame.
cl_access_all_missions | devonly, cl | Default: false<br>
cl_aggregate_particles | devonly | Default: false<br>
cl_allow_animated_avatars | cl, a, release | Default: true<br>Whether or not to allow animated avatars
cl_allow_multi_input_binds | cl, cheat, release | Default: false<br>
cl_anglespeedkey | devonly, cl | Default: 0.67<br>
cl_anim_eval_stats | devonly, cl | Displays stats about how many EvaluatePose calls are unused
cl_animgraph_dump_update_list | devonly, cl | Displays stats about which animations are updating
cl_animgraph_history_force_temporal_consistency | devonly, cl | Default: true<br>
cl_async_client_shatter | devonly, cl | Default: true<br>spawn client glass shards asynchronously during demos or when remotely connected.
cl_async_usercmd_send | devonly | Default: true<br>
cl_auto_cursor_scale | a | Default: true<br>Automatic cursor size scaling.
cl_autobuy | cl, release | Default: <br>The order in which autobuy will attempt to purchase items
cl_autohelp | cl, a, user | Default: true<br>Auto-help
cl_avatar_convert_png | cl, cheat, release | Converts all rgb avatars in the avatars directory to png
cl_avatar_convert_rgb | cl, cheat, release | Converts all png avatars in the avatars directory to rgb
cl_axis | cl, cheat | Draw an axis<br>	Arguments:  x y z pitch yaw roll &lt;lifetime = 10.0&gt; &lt;r g b a&gt;<br>
cl_bone_cache_optimization | devonly, cl | Default: true<br>
cl_borrow_music_from_player_slot | cl, release | Default: -1<br>
cl_box | cl, cheat | Draw a bbox<br>	Arguments:  minx miny miny maxx maxy maxz &lt;lifetime = 10.0&gt; &lt;r g b a&gt;<br>
cl_boxmove | devonly, cl | Default: 0<br>run in a square, # represents how many usercommands to run before turning.
cl_boxmove_speed | devonly, cl | Default: 1<br>how fast to run (1 to use player max run speed).
cl_break_on_missing_resource | devonly | Break in debugger when missing resource match is found.<br>Format: cl_break_on_missing_resource &lt;substring&gt; /(empty to break on all) / 0 to turn off.<br>
cl_buffer_incoming_net_messages | release | Default: true<br>
cl_buymenu_ct_nextround_high | cl, a, per_user, release | Default: 5000<br>
cl_buymenu_ct_nextround_low | cl, a, per_user, release | Default: 1400<br>
cl_buymenu_t_nextround_high | cl, a, per_user, release | Default: 5000<br>
cl_buymenu_t_nextround_low | cl, a, per_user, release | Default: 1400<br>
cl_buywheel_donate_key | cl, a, per_user, release | Default: 0<br>Set the key to use for donation in the buy menu. 0: Left Control; 1: Left Alt; 2: Left Shift.
cl_buywheel_nonumberpurchasing | cl, a, per_user, release | Default: false<br>Set non-zero to prevent buy wheel from purchasing via number keys
cl_cache_sendtable | devonly | Default: true<br>Cache sendtables
cl_cameraoverride_fade_in_amount | devonly, cl | Default: 0<br>
cl_cameraoverride_shadow_depth_bias | devonly, cl | Default: 0.006<br>
cl_cameraoverride_shadow_end | devonly, cl | Default: 0.8<br>
cl_change_callback_limit | cl, release | Default: 0.2<br>change callback msec warning limit
cl_chat_active | devonly, cl | Default: 0<br>
cl_checkdeclareclasses | cheat | Check game code serializers
cl_clanid | cl, hidden, a, user | Default: 0<br>Current clan ID for name decoration
cl_clock_buffer_ticks | devonly | Default: 0<br>Clock sync will try to maintain an additional margin of N ticks.  This is intended to smooth over packet loss, and is a replacement for cl_interp_ratio / cl_interp.  This value is simply added to cl_clock_recvmargin_desired
cl_clock_buffer_ticks_spectator | devonly | Default: 2<br>Additional margin (in ticks) to apply when spectating.
cl_clock_correction | cheat | Default: true<br>Enable/disable clock correction on the client.
cl_clock_recvmargin_adjust_limit_slowdown | devonly | Default: 93<br>Clock sync will not slow down time slower than N%
cl_clock_recvmargin_adjust_limit_speedup | devonly | Default: 106<br>Clock sync will not speed up time faster than N%
cl_clock_recvmargin_desired | devonly | Default: 5<br>Clock sync will try to maintain N ms margin between tick arrival and polling network.  The effective value is the sum of this and the time implied by cl_clock_buffer_ticks
cl_clock_recvmargin_spew_interval | release | Default: 0<br>
cl_clock_recvmargin_timeconstant_slowdown | devonly | Default: 0.3<br>Clock sync will remove 63.2% of the error in N seconds
cl_clock_recvmargin_timeconstant_speedup | devonly | Default: 0.6<br>Clock sync will remove 63.2% of the error in N seconds
cl_clock_recvmargin_window | devonly | Default: 4<br>Clock sync will use past N seconds
cl_clockdbg | devonly | Default: false<br>
cl_clockdrift_max_ticks | hidden, release | Default: 3<br>Maximum number of ticks the clock is allowed to drift before the client snaps its clock to the server's.
cl_clutch_mode | cl, release | Default: false<br>Silence voice and other distracting sounds until the end of round or next death.
cl_color | cl, a, user | Default: 4<br>Preferred teammate color
cl_connectionretrytime_p2p | release | Default: 20<br>Number of seconds over which to spread retry attempts for P2P.
cl_cq_min_queue | user | Default: 0<br>Used by the client to inform the server of their desired queue length.  Derived from cl_tickpacket_recvmargin_desired and cl_tickpacket_desired_queuelength
cl_crosshair_drawoutline | cl, a, per_user | Default: true<br>Draws a black outline around the crosshair for better visibility
cl_crosshair_dynamic_maxdist_splitratio | cl, a, per_user | Default: 1<br>If using cl_crosshairstyle 2, this is the ratio used to determine how long the inner and outer xhair pips will be. \[inner = cl_crosshairsize*(1-cl_crosshair_dynamic_maxdist_splitratio), outer = cl_crosshairsize*cl_crosshair_dynamic_maxdist_splitratio\]  \[0 - 1\]
cl_crosshair_dynamic_splitalpha_innermod | cl, a, per_user | Default: 0<br>If using cl_crosshairstyle 2, this is the alpha modification that will be used for the INNER crosshair pips once they've split. \[0 - 1\]
cl_crosshair_dynamic_splitalpha_outermod | cl, a, per_user | Default: 1<br>If using cl_crosshairstyle 2, this is the alpha modification that will be used for the OUTER crosshair pips once they've split. \[0.3 - 1\]
cl_crosshair_dynamic_splitdist | cl, a, per_user | Default: 3<br>If using cl_crosshairstyle 2, this is the distance that the crosshair pips will split into 2. (default is 7)
cl_crosshair_friendly_warning | cl, a, release | Default: 1<br>0: off, 1: on
cl_crosshair_outlinethickness | cl, a, per_user | Default: 1<br>Set how thick you want your crosshair outline to draw (0-3)
cl_crosshair_recoil | cl, a, per_user | Default: true<br>
cl_crosshair_show_desynced_seeds_marker | devonly, cl | Default: true<br>
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
cl_cs_dump_econ_item_stringtable | devonly, cl | cl_cs_dump_econ_item_stringtable
cl_csgo_shoot_debugvis_rdp_text_l | devonly, cl | Default: 10<br>
cl_csgo_shoot_debugvis_rdp_text_x | devonly, cl | Default: 45<br>
cl_csgo_shoot_debugvis_show_los | devonly, cl | Default: false<br>Show line of last shot.
cl_csgo_shoot_debugvis_show_rdp | devonly, cl | Default: false<br>
cl_csgo_shoot_trim_input_frames | devonly, cl | Default: true<br>
cl_cursor_scale | a | Default: 1<br>Cursor size scaling factor.
cl_dangerzone_approaching_sound_radius | cl, cheat, release | Default: 700<br>
cl_dangerzone_moving_sound_volume | cl, cheat, release | Default: 0.5<br>
cl_dangerzone_sound_volume | cl, cheat, release | Default: 0.2<br>
cl_deathcam_audio_mix_phase1_fade_amount | cl, release | Default: 0.15<br>Sets the amount of ducking to do on death cam fade out. When set to 1, full DeathFadeLayer is applied.
cl_deathcam_audio_mix_phase1_fade_time | cl, release | Default: 2<br>Sets the amount of time we fade out over.
cl_deathcam_audio_mix_phase2_fade_amount | cl, release | Default: 0.5<br>Sets the amount of ducking to do on death cam fade out. When set to 1, full DeathFadeLayer is applied.
cl_deathcam_audio_mix_phase2_fade_time | cl, release | Default: 0.4<br>Sets the amount of time we fade out over.
cl_deathcampanel_position_dynamic | cl, a | Default: 1<br>Turn on/off deathcam's kill panel dynamic Y movement
cl_deathnotices_show_numbers | cl, release | Default: 0<br>0: default; 1: draw names as just numbers; 2: append number on killer and victim to the name
cl_debounce_zoom | cl, a, user, per_user | Default: true<br>Whether or not to disable holding secondary fire to cycle zoom levels
cl_debug_client_gamestats | devonly, cl | Default: true<br>
cl_debug_force_push_to_talk | devonly, cl | Default: false<br>
cl_debug_overlay_fullposition | devonly, cl | Default: false<br>
cl_debug_overlays_broadcast | release | Default: false<br>Render debug overlays from server.
cl_debug_round_stat_submission | devonly, cl | Default: false<br>
cl_debugoverlay_cycle_domain | cl, cheat | Toggles visibility of the debug overlay system.
cl_debugoverlay_cycle_state | cl, cheat | Toggles visibility of the debug overlay system.
cl_debugoverlay_dashboard | cl, cheat | Makes the debug overlay dashboard visible.
cl_debugoverlay_hide_imgui | cl, cheat | Hides the overlay.
cl_debugoverlay_toggle | cl, cheat | Toggles visibility of the debug overlay system.
cl_debugviewangle | devonly, cl | Default: false<br>Plots view angles yaw at various stages of the frame/tick in Tracy.
cl_demo_steadycam_blendframes | devonly, cl | Default: 5<br>blend over this many frames
cl_demo_steadycam_deflection | devonly, cl | Default: 5<br>if camera orientation changes this much update orientation
cl_demo_steadycam_enable | devonly, cl | Default: 0<br>Stabilize camera orientation/position during demo playback.  1 == remove roll, 2 == steadycam
cl_demo_steadycam_radius | devonly, cl | Default: 16<br>if camera moves this much from last anchor update anchor
cl_demo_view_offset_left | devonly, cl | Default: 0<br>View offset during demo playback (+/- 1.25 is a good default for human average left/right eye offset)
cl_demoviewoverride | devonly, cl | Default: 0<br>Override view during demo playback
cl_destroy_ragdolls | devonly, cl | Destroys all client-side ragdolls
cl_dev_decaltrace_blood | devonly, cl, cheat | Shoot out a decal spray that shoots blood.
cl_disable_deathcam_audio_mix_fade_out | cl, release | Default: false<br>When set to true, disables audio being silenced while the death cam fades out.
cl_disable_postprocessing | cl, cheat | Default: false<br>
cl_disable_ragdolls | cl, cheat | Default: false<br>
cl_disable_round_end_report | cl, a, release | Default: false<br>
cl_disconnect_soundevent | devonly | Default: StopSoundEvents.StopAllExceptMusic<br>This soundevent is called to stop the desired soundevents when the game is disconnected.
cl_disconnect_voice_fade | devonly | Default: -1<br>This is a fade of current voices that is called when the game is disconnected. -1.f for no fade on disconnect
cl_display_flashbang_values | devonly, cl | Default: false<br>
cl_display_game_events | cl, cheat | Default: false<br>
cl_display_player_visibilty | devonly, cl | Default: false<br>
cl_dm_buyrandomweapons | cl, a, release | Default: true<br>Player will automatically receive a random weapon on spawn in deathmatch if this is set to 1 (otherwise, they will receive the last weapon)
cl_dormant_spew | devonly, cl | Default: false<br>Spew state on when client entities become dormant or active.
cl_draw_only_deathnotices | cl, release | Default: false<br>For drawing only the crosshair and death notices (used for moviemaking)
cl_draw_simulating_entities | cl, cheat | Default: false<br>
cl_draw_simulating_entities_distance | devonly, cl | Default: false<br>
cl_drawcross | cl, cheat | Draws a cross at the given location<br>	Arguments: x y z
cl_drawhud | cl, cheat | Default: true<br>Enable the rendering of the hud
cl_drawhud_force_deathnotices | cl, release | Default: 0<br>0: default; 1: draw deathnotices even if hud disabled; -1: force no deathnotices
cl_drawhud_force_radar | cl, release | Default: 0<br>0: default; 1: draw radar even if hud disabled; -1: force no radar
cl_drawhud_force_teamid_overhead | cl, release | Default: 0<br>0: default; 1: draw teamid even if hud disabled; -1: force no teamid
cl_drawhud_specvote | cl, release | Default: true<br>1: default; 0: disables vote UI for spectators
cl_drawline | cl, cheat | Draws line between two 3D Points.<br>	Green if no collision<br>	Red is collides with something<br>	Arguments: x1 y1 z1 x2 y2 z2
cl_dump_player_animgraph_state | devonly, cl | Dumps the local player's animgraph state to console
cl_dump_projected_texture_count | devonly, cl | Print out number of active projected textures
cl_dump_response_symbols | devonly, cl | print all response symbols to the console
cl_dumpentity | cl, cheat | Dumps info about an entity
cl_dumpsplithacks | devonly, cl | Dump split screen workarounds.
cl_embedded_stream_audio_volume | cl, hidden, a | Default: 0<br>Embedded stream audio volume
cl_embedded_stream_audio_volume_xmaster | cl, hidden, a | Default: true<br>Whether embedded stream audio volume gets multiplied by master volume
cl_embedded_stream_video_playing | devonly, cl, hidden | Default: 0<br>Embedded stream video playing state
cl_enable_eye_occlusion | devonly, cl | Default: true<br>
cl_enable_party_voice | cl, a, release | Default: true<br>
cl_ent_absbox | cl, cheat | Displays the total bounding box for the given entity(s) in green.  Some entites will also display entity specific overlays.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_actornames | cl, cheat | Displays the entity name for all entities that have ShouldDisplayInActorNames true in code
cl_ent_animgraph_debug | cl, cheat | Displays debug draws about the given entity(ies) animgraph<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_animgraph_record | cl, cheat | Toggles recording of animgraph replay of the given entity(s)<br>	Arguments: entityName automaticallyOpenInAnimgraphEditor<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_attachment_filter_substrings | cl, cheat | Default: <br>If an attachment's name has any of the given substrings in it, it will be displayed. Substrings can be delimited by the ',' or '\|' character.
cl_ent_attachments | cl, cheat | Displays the attachment points on an entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_bbox | cl, cheat | Displays the movement bounding box for the given entity(ies) in orange.  Some entites will also display entity specific overlays.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_call | cl, cheat | ent_call &lt;funcname&gt; &lt;option:entname&gt; calls function on current look target or filtername, checks on ent, then root, then mode, then map scope
cl_ent_clear_debug_overlays | cl, cheat | Clears all debug overlays
cl_ent_find | cl, cheat | Find and list all entities with classnames or targetnames that contain the specified substrings.<br>Format: find_ent &lt;substring&gt;<br>
cl_ent_find_index | cl, cheat | Display data for entity matching specified index.<br>Format: find_ent_index &lt;index&gt;<br>
cl_ent_grab | cl, cheat | grabs the object in front of the player. Options: -loose -multiple -toggle
cl_ent_hierarchy | cl, cheat | Prints the entity hierarchy tree rooted at the specified ent(s)
cl_ent_hitbox | cl, cheat | Displays the hitboxes for the given entity(ies).<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_ent_joint_axis_size | devonly, cl | Default: 4<br>
cl_ent_joint_filter_substring | devonly, cl | Default: <br>
cl_ent_joint_names | devonly, cl | Default: true<br>
cl_ent_joint_only_ik_joints | devonly, cl | Default: false<br>
cl_ent_joint_use_bind_pose | devonly, cl | Default: false<br>
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
cl_ent_skeleton_only_ik_joints | devonly, cl | Default: false<br>
cl_ent_spew_derived_classes | devonly, cl | Prints out all entity classes which inherit from a specified base class
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
cl_ent_visibility_traces | cl, cheat | Displays visibility traces for the given entity<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_entityreport | devonly, cl | Reports all extant entities. Optional 2nd arg is a substring of a classname that the list will be filtered by.
cl_entitysummary | devonly, cl | Summarizes (by class) all extant entities. Optional 2nd arg is a substring of a classname that the list will be filtered by.
cl_ents | devonly, cl | List client entities, sorted by spawn group
cl_error_report_time | cl, release | Default: 0<br>Minimum time in seconds that must elapse before printing prediction error summary. 0 to disable.
cl_extrapolate | cl, cheat | Default: true<br>Enable/disable extrapolation if interpolation history runs out.
cl_extrapolate_amount | cl, cheat | Default: 0.25<br>Set how many seconds the client will extrapolate entities for.
cl_eye_occlusion_debug | cl, cheat | Default: false<br>
cl_eye_sin_wave | devonly, cl | Default: false<br>
cl_eye_target_override | devonly, cl | Default: 0 0 0<br>
cl_eye_yaw_multiplier | devonly, cl | Default: 1<br>
cl_fake_timeout | devonly, cl | Default: false<br>
cl_fasttempentcollision | devonly, cl | Default: 5<br>
cl_firstperson_legs | devonly, cl | Default: true<br>
cl_firstperson_legs_aoproxy | devonly, cl | Default: true<br>
cl_fixedcrosshairgap | cl, a, per_user | Default: 3<br>For crosshair style 1: How big to make the gap between the pips in the fixed crosshair
cl_flushentitypacket | cheat | Default: 0<br>For debugging. Force the engine to flush an entity packet.
cl_force_next_signon_to_reset | devonly | Default: false<br>
cl_frametime_summary_report_detailed | cl, release | Default: true<br>When a perf report is dumped at the end of the session, should it be detailed?
cl_fullupdate | cheat | Force uncompressed update
cl_game_mode_convars | devonly, cl | Display the values of the convars for the current game_mode.
cl_generate_postdataupdatepreserved | devonly | Default: true<br>Do we invoke PostDataUpdatePreserved callbacks for entities that had no changes but are still in the PVS?
cl_globallight_debug | devonly, cl | Default: false<br>
cl_globallight_depth_bias | devonly, cl | Default: -999<br>
cl_globallight_expansion | devonly, cl | Default: 200<br>
cl_globallight_freeze | devonly, cl | Default: false<br>
cl_globallight_orig_calc_frustum | devonly, cl | Default: true<br>
cl_globallight_shadow_mode | devonly, cl | Default: 2<br>
cl_globallight_slope_scale_depth_bias | devonly, cl | Default: -999<br>
cl_globallight_use_alt_focus_region | devonly, cl | Default: false<br>
cl_globallight_use_optimized_calc_frustum | devonly, cl | Default: true<br>
cl_globallight_use_shaadow_near_offset | devonly, cl | Default: true<br>
cl_globallight_world_bottom_height | devonly, cl | Default: 0<br>
cl_globallight_world_top_height | devonly, cl | Default: 4096<br>
cl_glow_brightness | cl, cheat | Default: 1<br>Brightness of player halos
cl_glow_item_far_b | cl, release | Default: 1<br>
cl_glow_item_far_g | cl, release | Default: 0.4<br>
cl_glow_item_far_r | cl, release | Default: 0.3<br>
cl_graphics_driver_warning_dont_show_again | cl, a, release | Default: false<br>
cl_grenadecrosshair_decoy | cl, a, per_user | Default: true<br>Is the grenade crosshair enabled
cl_grenadecrosshair_explosive | cl, a, per_user | Default: true<br>Is the grenade crosshair enabled
cl_grenadecrosshair_fire | cl, a, per_user | Default: true<br>Is the grenade crosshair enabled
cl_grenadecrosshair_flash | cl, a, per_user | Default: true<br>Is the grenade crosshair enabled
cl_grenadecrosshair_keepusercrosshair | cl, a, per_user | Default: true<br>Keep the user's crosshair when the grenade crosshair is enabled
cl_grenadecrosshair_smoke | cl, a, per_user | Default: true<br>Is the grenade crosshair enabled
cl_grenadecrosshair_tickinterval | devonly, cl | Default: 10<br>
cl_grenadecrosshair_ticklabels | devonly, cl | Default: true<br>
cl_grenadecrosshair_tickscaling | devonly, cl | Default: 1.1<br>
cl_grenadecrosshairdelay_decoy | cl, a, per_user | Default: 2<br>How long should the pin be pulled for before showing the grenade crosshair
cl_grenadecrosshairdelay_explosive | cl, a, per_user | Default: 2<br>How long should the pin be pulled for before showing the grenade crosshair
cl_grenadecrosshairdelay_fire | cl, a, per_user | Default: 2<br>How long should the pin be pulled for before showing the grenade crosshair
cl_grenadecrosshairdelay_flash | cl, a, per_user | Default: 2<br>How long should the pin be pulled for before showing the grenade crosshair
cl_grenadecrosshairdelay_smoke | cl, a, per_user | Default: 2<br>How long should the pin be pulled for before showing the grenade crosshair
cl_groups | cl, cheat | Show status of all spawn groups.
cl_hide_avatar_images | cl, a | Default: 0<br>Hide avatar images for other players. <br>	0 - Off.<br>	1 - Block All<br>	2 - Block all but friends
cl_highlights_hud_playback | cl, hidden, release | Default: 0<br>Highlights hud playback
cl_hitbox_debug | devonly, cl | Default: false<br>
cl_hold_game_events_force_delay_ticks | devonly, cl | Default: 0<br>Debugging convar to force late dispatch of game events.
cl_hold_game_events_until_server_tick | devonly, cl | Default: true<br>Holds game events until client has received the tick the event was fired on.
cl_http_log_enable | cl, norecord, release, clientcmd_can_execute | Default: false<br>Allows sending HTTP log from client main menu.
cl_hud_color | cl, a, release | Default: 0<br>0 = team color, 1 =  white, 2 = bright white, 3 = light blue, 4 = blue, 5 = purple, 6 = red, 7 = orange, 8 = yellow, 9 = green, 10 = aqua, 11 = pink, 12 = teammate color.
cl_hud_radar_background_alpha | cl, a, release | Default: 0.627<br>
cl_hud_radar_blur_background | cl, a, release | Default: true<br>Blurs the radar background.
cl_hud_radar_map_additive | cl, a, release | Default: true<br>Blend Hud radar map additively on top of background.
cl_hud_radar_scale | cl, a, release | Default: 1<br>
cl_hud_telemetry_frametime_poor | cl, a, release | Default: 100<br>Frame time greater than this is considered 'poor'.
cl_hud_telemetry_frametime_show | cl, a, release | Default: 1<br>Show frame time (FPS) in the HUD.  0=never, 1=only if poor, 2=always
cl_hud_telemetry_net_detailed | cl, a, release | Default: 0<br>Show breakdown network misdelivery (loss, late delivery, and peak jitter).  0=never, 1=only in poor network conditions, 2=always
cl_hud_telemetry_net_misdelivery_poor | cl, a, release | Default: 5<br>Packet delivery anomaly rate (0..100) higher than this is considered 'poor'.
cl_hud_telemetry_net_misdelivery_show | cl, a, release | Default: 1<br>Show percentage of user commands & server snapshots that are missed due to network conditions.  0=never, 1=only in poor conditions, 2=always
cl_hud_telemetry_net_quality_graph_show | cl, a, release | Default: 0<br>Show packet jitter and netframe loss/reordering in the HUD.  0=never, 1=only in poor conditions, 2=always
cl_hud_telemetry_ping_poor | cl, a, release | Default: 100<br>Ping higher than this (ms) is considered 'poor'.
cl_hud_telemetry_ping_show | cl, a, release | Default: 1<br>Show ping in the HUD.  0=never, 1=only in poor conditions, 2=always
cl_hud_telemetry_serverrecvmargin_graph_show | cl, a, release | Default: 0<br>Show graph of the server recv margin in the HUD.  (How early/late user commands are arriving at the server before they are executed.)   0=never, 1=only when there are command queue problems, 2=always
cl_ignorepackets | cheat | Default: false<br>Force client to ignore packets (for debugging).
cl_imgui_debug_entity | cl, cheat | Shows the entity browser, focused on the entity you specify.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cl_imgui_set_selection | cl, cheat | Sets ImGui selection
cl_imgui_set_status_text | cl, cheat | Sets ImGui header status text
cl_import_csgo_config | cl, a, release | Default: true<br>
cl_in_forcebuttonstate | devonly, cl | Forces a button to be a particular state - WHEN PROCESSING USERCOMMANDS
cl_inferno_bodyburn | devonly, cl | Default: true<br>
cl_input_enable_raw_keyboard | release | Default: false<br>Enable raw keyboard input
cl_instant_death_anim | devonly, cl | Default: false<br>
cl_interp | cl, release | Read the effective client simulation interpolation amount in terms of time.
cl_interp_ag2_for_non_ag2_entities | devonly, cl | Default: false<br>
cl_interp_all | devonly, cl | Default: false<br>Disable interpolation list optimizations.
cl_interp_animationvars | devonly, cl | Default: true<br>Interpolate LATCH_ANIMATION_BIT vars if interpolation interval is greater than simulation interval
cl_interp_hermite | cl, cheat | Default: true<br>Set to zero do disable hermite interpolation.
cl_interp_npcs | devonly, cl | Default: 0<br>Interpolate NPC positions starting this many seconds in past (or the value as per cl_interp_ratio, if greater)
cl_interp_parallel | devonly, cl | Default: false<br>Run interpolation in parallel for entities with no children.
cl_interp_ratio | cl, user | Default: 0<br>Set number of client simulation interpolation ticks.
cl_interp_simulationvars | devonly, cl | Default: true<br>Interpolate LATCH_SIMULATION_BIT vars if interpolation interval is greater than animation interval
cl_interp_threadmodeticks | devonly, cl | Default: 0<br>Additional interpolation ticks to use when interpolating with threaded engine mode set.
cl_interpolate | devonly, cl, user | Default: true<br>Interpolate entities on the client.
cl_interpolate_report | cl, a | Default: false<br>Enable to show interpolation profile timing<br>
cl_inventory_debug_tooltip | cl, release | Default: false<br>
cl_inventory_radial_immediate_select | cl, a, per_user | Default: true<br>In inventory selection radials. Select weapons the moment the cursor highlights them. Otherwise, only select the selected item on exit.
cl_inventory_radial_tap_to_cycle | cl, a, per_user | Default: true<br>In inventory selection radials. Select weapons the moment the cursor highlights them. Otherwise, only select the selected item on exit.
cl_inventory_saved_filter2 | cl, a, release | Default: all<br>
cl_inventory_saved_sort2 | cl, a, release | Default: inv_sort_age<br>
cl_invites_only_friends | cl, a, release | Default: false<br>If turned on, will ignore in-game invites from recent teammates or other non-friends
cl_invites_only_mainmenu | cl, a, release | Default: false<br>If turned on, will ignore all invites when user is playing a match
cl_ironsight_filter_alpha | devonly, cl | Default: 1<br>Ironsight filter alpha
cl_ironsight_min_channel_color | devonly, cl | Default: 0.3<br>Ironsight min channel color value
cl_ironsight_usecrosshaircolor | cl, a, per_user | Default: false<br>Should the scope dot match the user's crosshair color
cl_itemimages_dynamically_generated | cl, a, release | Default: 2<br>2: use render-targets, fallback to cache and disk; 1: no render targets, but use cache and fallback to disk; 0: disk assets only
cl_jitter_bad_threshold_up | user | Default: 20<br>When upstream packet jitter in a frame exceeds this threshold (ms), the frame is considered to have 'irregular delivery'.  This is a derived value and should not be modified manually
cl_join_advertise | cl, a | Default: 1<br>Advertise joinable game in progress to Steam friends, otherwise need a Steam invite (2: all servers, 1: official servers, 0: none)
cl_joystick_enabled | a | Default: false<br>Enable joystick input
cl_lagcompensation_test_auto_target | devonly, cl | Default: false<br>Auto-pick value of cl_lagcompensation_test_target.
cl_lagcompensation_test_target | devonly, cl | Default: -1<br>Player whose head is tracked to test lag compensation.
cl_language | devonly | Default: english<br>Language
cl_latch_report | cl, a | Default: false<br>Enable to output stats about latching
cl_leveloverview | cl, cheat | Default: 0<br>
cl_lightquery_debug | cl, cheat | Default: false<br>
cl_loadout_saved_sort | cl, a, release | Default: inv_sort_age<br>
cl_lock_camera | cl, cheat | Default: false<br>
cl_log_tick | devonly | Default: false<br>Log when a tick is received<br>
cl_log_tick_skips | devonly | Default: 0<br>Log when the tick delta &gt;= this
cl_low_latency_vsync_recommendation_dont_show_again | cl, a, release | Default: false<br>
cl_mainmenu_hide_blog | cl, hidden, clientcmd_can_execute | Show the news panel and hide blog
cl_mainmenu_show_blog | cl, hidden, clientcmd_can_execute | Show the blog and hide news panel
cl_map_preview_debug_jitter | devonly, cl | Default: false<br>
cl_massreport | devonly, cl | Default: false<br>
cl_matchlist_controlroom_aid | cl, hidden, release | Default: 0<br>
cl_matchstats_print_own_data | devonly, cl | cl_matchstats_print_own_data RANGENAME
cl_max_particle_pvs_aabb_edge_length | release | Default: 0<br>
cl_min_china_movie_time | devonly, cl | Default: 6<br>
cl_min_movie_time | devonly, cl | Default: 4<br>
cl_mouselook | cl, a, user, per_user, notconnected | Default: true<br>Set to 1 to use mouse for look, 0 for keyboard look. Cannot be set while connected to a server.
cl_mute_all_but_friends_and_party | cl, a | Default: 0<br>Only allow communication from friends and matchmaking party members. Set to 1 to apply the in non-competitive game modes. Set to 2 will apply the setting in all modes.<br>
cl_mute_enemy_team | cl, a | Default: false<br>Block all communication from players on the enemy team.
cl_mute_player_after_reporting_abuse | devonly, cl | Default: true<br>Mute players reported for abuse automatically.
cl_names_debug | devonly | Default: false<br>
cl_net_buffer_ticks | cl, a, release | Default: 0<br>Number of ticks of delay for server snapshots and user commands.  This value controls the value of cl_interp_ratio, which you should not modify directly.
cl_net_buffer_ticks_use_interp | cl, release | Default: false<br>If false, we smooth over packet loss by adjusting the clock synchronization to buffer packets.  If true, we process packets immediately and use cl_interp to delay their effects
cl_net_printsummary | norecord, release | Print a summary report of Source2 engine networking statistics.  (Ticks, netchan messages, etc.)
cl_net_showeventlisteners | devonly, cl | Default: false<br>Show listening addition/removals
cl_net_showevents | devonly, cl | Default: 0<br>Dump game events to console (1=client only, 2=all).
cl_new_user_phase | cl, a, release | Default: 0<br>0: Not Started, 1: Needs Training, 2: Training Complete, -1: Disabled
cl_obs_interp_angle_progress_headstart | devonly, cl | Default: 0.025<br>
cl_obs_interp_dist_to_turn_to_face | devonly, cl | Default: 500<br>Changing to a target further than this will cause the camera to face the direction of travel
cl_obs_interp_enable | cl, a | Default: true<br>Enables interpolation between observer targets
cl_obs_interp_obstruction_behavior | devonly, cl | Default: 2<br>
cl_obs_interp_pos_halflife | devonly, cl | Default: 0.26<br>
cl_obs_interp_pos_rate | cl, a | Default: 0.27<br>
cl_obs_interp_settle_dist | devonly, cl | Default: 16<br>
cl_obs_interp_snap_dist | devonly, cl | Default: 0.01<br>
cl_obs_interp_turn_to_face_end_frac | devonly, cl | Default: 0.65<br>
cl_obs_interp_turn_to_face_start_frac | devonly, cl | Default: 0.1<br>
cl_observed_bot_crosshair | cl, a, release | Default: 2<br>Control the crosshair shown when observing a bot. 0: Show player crosshair. 1: Show player crosshair only when bot can be taken over, otherwise show default.. 2: Always show default crosshair for bots.
cl_paintkit_override | cl, cheat, release | Default: <br>
cl_panel_freeze_time_after_press | devonly, cl | Default: 0.5<br>time to freeze mouse/pointer motion after a mouse button press
cl_parallel_readpacketentities | devonly | Default: true<br>Set to 1 to use threading snapshot reading (if game supports and server is sending bitcounts).
cl_parallel_readpacketentities_threshold | devonly | Default: 2<br>Use parallel processing of snapshot reading if above this many entries.
cl_particle_batch_mode | devonly | Default: 1<br>
cl_particle_fallback_base | devonly | Default: 0<br>Base for falling back to cheaper effects under load.
cl_particle_fallback_multiplier | devonly | Default: 0<br>Multiplier for falling back to cheaper effects under load.
cl_particle_log_creates | devonly | Default: false<br>Print debug message every time a particle collection is created
cl_particle_max_count | devonly | Default: 0<br>
cl_particle_retire_cost | cheat | Default: 0<br>
cl_particle_sim_fallback_base_multiplier | devonly | Default: 5<br>How aggressive the switch to fallbacks will be depending on how far over the cl_particle_sim_fallback_threshold_ms the sim time is.  Higher numbers are more aggressive.
cl_particle_sim_fallback_threshold_ms | devonly | Default: 6<br>Amount of simulation time that can elapse before new systems start falling back to cheaper versions
cl_particle_simulate | cheat | Default: true<br>Enables/Disables Particle Simulation
cl_particles_dump_effects | devonly, cl | 
cl_particles_dumplist | devonly, cl | Dump all new particles, optional name substring.
cl_particles_dumpsimlist | devonly, cl | Dump all simulating particles, optional name substring.
cl_pclass | cl, cheat | Default: <br>Dump entity by prediction classname.
cl_pdump | cl, cheat | Default: -1<br>Dump info about this entity to screen.
cl_phys_animated_hierarchy | devonly, cl | Default: true<br>
cl_phys_assume_fixed_tick_interval | devonly, cl | Default: true<br>If true, we assume the client uses a fixed tickrate like the server (which may not always be true). If false, we recalculate the number of physics substeps in each client tick based on the actual elapsed time in the tick.
cl_phys_block_dist | devonly, cl | Default: 1<br>
cl_phys_block_fraction | devonly, cl | Default: 0.1<br>
cl_phys_create_test_character_proxy | devonly, cl | Create test character proxy
cl_phys_debug_callback_entities | cl, cheat | Default: false<br>Print all entities that get touch callbacks. Each entity is printed only once.
cl_phys_dump_intersection_controller | devonly, cl | Dump intersection controller status
cl_phys_dump_main_world | devonly, cl | Dump physics main world to file
cl_phys_dump_memory | devonly, cl | Dump memory usage
cl_phys_enabled | cl, cheat | Default: true<br>Enable all physics simulation
cl_phys_list | devonly, cl | List all physics component contents of every entity in the game;<br>    -stream \[1\|0\] : initiate\|terminate streaming to physics debugger<br>    -allents: include non-physical entities<br>    -classes: print class names<br>    -sdk    : Rubikon build<br>    -world  : current state of the world<br>    -world -touch: list body pairs (bodies in contact)<br>    -world -save &lt;name&gt;: save world to a file<br>    -world -mem: memory dump<br>    -world -snapshots: Start/Stop dumping snapshots of the world into the current directory<br>    -world -profiletraces: ProfileRecordedTraces<br>    -world -agg: current aggregate data registry (loaded resources)<br>
cl_phys_networked_start_sleep | devonly, cl | Default: false<br>
cl_phys_record_rays | devonly, cl | Dump physics main world to file
cl_phys_record_rays_and_world | devonly, cl | Dump traces physics main world to file
cl_phys_sleep | devonly, cl | Put all physics in all the worlds to sleep
cl_phys_sleep_enable | cl, cheat | Default: true<br>Enable sleeping for dynamic physics bodies.
cl_phys_sound_disable_impact_sounds_under_hard_threshold | cl, cheat | Default: false<br>if true, impact sounds wont play if no soft impact sound is present and the impact is below the hard velocity threshold.
cl_phys_stop_at_collision | cl, cheat | Default: <br>
cl_phys_timescale | devonly, cl | Default: 1<br>Scale time for physics
cl_phys_visualize_awake | devonly, cl | Default: false<br>
cl_phys_wakeup | devonly, cl | Wake all physics objects in the Main physics up
cl_physics_add_test | devonly, cl | add test object
cl_physics_highlight_active | devonly, cl | Turns on the absbox for all active physics objects.<br>  0 : un-highlight.<br>
cl_physics_remove_test | devonly, cl | remove test object
cl_physics_report_active | devonly, cl | Lists all active physics objects<br>  -more : extra info<br>
cl_ping_fade_deadzone | cl, a, release | Default: 60<br>Distance from the crosshair over which the ping is completely invisible
cl_ping_fade_distance | cl, a, release | Default: 300<br>Distance from the crosshair over which the ping fades
cl_pitchdown | cl, cheat | Default: 89<br>
cl_pitchspeed | devonly, cl | Default: 225<br>
cl_pitchup | cl, cheat | Default: 89<br>
cl_playback_screenshots | devonly | Default: false<br>Allows the client to playback screenshot and jpeg commands in demos.
cl_player_ping_mute | cl, a, release | Default: 0<br>If 1, player pinging will make a sound, if 0, pings will be silent
cl_player_proximity_debug | cl, rep, cheat | Default: false<br>
cl_player_ragdolls_collide | cl, cheat, release | Default: false<br>
cl_player_visibility_far | devonly, cl | Default: 700<br>distance at which proxy scale is maximized
cl_player_visibility_far_scale | devonly, cl | Default: 1.3<br>proxy scale multiplier at max dist (is 1.0 at mindist)
cl_player_visibility_near | devonly, cl | Default: 200<br>cull characters nearer than this
cl_player_visibility_show_stencil_proxy | devonly, cl | Default: false<br>
cl_player_visibility_stencil_bloat_amount | devonly, cl | Default: 1.4<br>
cl_player_visibility_stencil_proxy_min_dist | devonly, cl | Default: 3<br>
cl_player_visibility_stencil_proxy_min_dist_box | devonly, cl | Default: 1<br>
cl_player_visibility_stencil_proxy_type | devonly, cl | Default: 1<br>0 - box, 1 - dodecahedron
cl_playerspraydisable | cl, a | Default: false<br>Disable player sprays.
cl_poll_network_early | release | Default: true<br>Enable polling for network messages every frame, instead of every tick
cl_precacheinfo | devonly | Show precache info (client).
cl_pred_always_latch | cl, release | Default: false<br>
cl_pred_build_verbose | devonly, cl | Default: false<br>Verbose spew when building prediction optimized data runs.
cl_pred_checkstuck | devonly, cl | Default: false<br>Perform the additional 'stuck' traces on the client side during prediction.
cl_pred_optimize | devonly, cl | Default: true<br>Optimize for not repredicting if there were no errors
cl_pred_parallel_postnetwork | devonly, cl | Default: true<br>
cl_pred_print_every_cmd | cl, release | Default: false<br>Print something every time we predict a command
cl_pred_track | devonly, cl | &lt;entindex&gt; &lt;fieldname&gt;:  Track changes to entity index entindex, for field fieldname.
cl_pred_track_off | devonly, cl | clear field track changes.
cl_predict_after_every_createmove | devonly | Default: true<br>run prediction after every CreateMove instead of only after CreateMove for the final tick in a frame.
cl_predict_body_shot_fx | cl, a, release | Default: false<br>
cl_predict_bomb_defusal | devonly, cl | Default: true<br>
cl_predict_head_shot_fx | cl, a, release | Default: false<br>
cl_predict_kill_ragdolls | cl, a, release | Default: true<br>
cl_predict_weapon_drop | devonly, cl | Default: true<br>
cl_prediction_savedata_postentitypacketreceived | cl, release | Default: false<br>Experimental optimization.  If you are reading this in 2026, please delete this convar.
cl_predictioncopy_describe | devonly, cl | Describe datamap_t for entindex
cl_predictioncopy_print | devonly, cl | Print simple description of prediction copy fields for entindex
cl_predictioncopy_runs | devonly, cl | Default: true<br>
cl_prefer_lefthanded | cl, a, user, per_user | Default: false<br>Left handed preference
cl_printfps | devonly, cl | Print information from cl_showfps.
cl_promoted_settings_acknowledged | cl, a | Default: 0:0<br>
cl_prop_debug | cl, cheat | Toggle prop debug mode. If on, props will show colorcoded bounding boxes. Red means ignore all damage. White means respond physically to damage but never break. Green maps health in the range of 100 down to 1.
cl_querycache_stats | cl, cheat | Display status of the query cache (client only)
cl_quickinventory_filename | cl, a, release | Default: radial_quickinventory.txt<br>
cl_quickinventory_lastinv | cl, a, release | Default: true<br>
cl_quickinventory_line_update_speed | cl, a, release | Default: 65<br>
cl_radar_always_centered | cl, a, release | Default: true<br>If set to 0, the radar is maximally used. Otherwise the player is always centered, even at map extents.
cl_radar_fast_transforms | devonly, cl | Default: true<br>Faster way of placing icons on the mini map.
cl_radar_icon_scale_min | cl, a, release | Default: 0.6<br>Sets the minimum icon scale. Valid values are 0.4 to 1.25.
cl_radar_rotate | cl, a, release | Default: true<br>1
cl_radar_scale | cl, a, release | Default: 0.7<br>Sets the radar scale. Valid values are 0.25 to 1.0.
cl_radar_scale_alternate | cl, a, release | Default: 1<br>Sets the alternate radar scale. Valid values are 0.25 to 1.0.
cl_radar_scale_dynamic | cl, a, release | Default: false<br>Toggles between a radar that scales dynamically to encompass all the detected elements on the map.
cl_radar_square_always | cl, a, release | Default: false<br>If set, the radar will always be square.
cl_radar_square_with_scoreboard | cl, a, release | Default: true<br>If set, the radar will toggle to square when the scoreboard is visible.
cl_radial_coyote_time | devonly, cl | Default: 0.15<br>Selection lenience: How long in seconds the last selected radial segment is used if no segment is selected.
cl_radial_menu_icon_radius | devonly, cl | Default: 200<br>
cl_radial_menu_tap_duration | devonly, cl | Default: 0.2<br>If nothing in a radial menu is selected, and the button engaging the radial menu is released within this duration, fallback on the radial's tap functionality
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
cl_ragdoll_default_scale | devonly, cl | Default: 1<br>
cl_ragdoll_limit | cl, a | Default: 20<br>Maximum number of ragdolls to show (-1 disables limit)
cl_ragdoll_lru_debug | cl, rep, cheat | Default: false<br>
cl_ragdoll_physics_enable | devonly, cl | Default: 1<br>Enable/disable ragdoll physics.
cl_ragdoll_reload | devonly, cl | Default: false<br>
cl_ragdoll_workaround_threshold | cl, release | Default: 4<br>Mainly cosmetic, client-only effect: when client doesn't know the last position of another player that spawns a ragdoll, the ragdoll creation is simplified and ragdoll is created in the right place. If you increase this significantly, ragdoll positions on your client may be dramatically wrong, but it won't affect other clients
cl_random_taser_bone_y | devonly, cl | Default: -1<br>The Y position used for the random taser force.
cl_random_taser_force_y | devonly, cl | Default: -1<br>The Y position used for the random taser force.
cl_random_taser_power | devonly, cl | Default: 4000<br>Power used when applying the taser effect.
cl_rebuy | cl, release | Default: <br>The order in which rebuy will attempt to repurchase items
cl_redemption_reset_timestamp | cl, a, release | Default: 0<br>
cl_refresh_rate_recommendation_dont_show_again | cl, a, release | Default: false<br>
cl_reload_hud | devonly, cl | Reloads the hud scale and resets scale and borders
cl_removedecals | cl, cheat | Remove the decals from the entity under the crosshair.
cl_report_entities | devonly, cl, cheat | Lists all entities
cl_report_predcopy_overrides | devonly, cl | Report prediction copy overrides
cl_report_simthinklist | devonly, cl | Lists all simulating/thinking entities
cl_report_soundpatch | devonly, cl | reports client-side sound patch count
cl_resend | release | Default: 0.5<br>Delay in seconds before the client will resend the 'connect' attempt
cl_resetfps | devonly, cl | Reset information from cl_showfps.
cl_retire_low_priority_lights | devonly, cl | Default: false<br>Low priority dlights are replaced by high priority ones
cl_rr_dump_rules | cl, cheat | Print all response rules
cl_rr_reloadresponsesystems | cl, cheat | Reload all response system scripts.
cl_sanitize_muted_players | cl, release | Default: true<br>Hide names and avatars of muted players.
cl_sanitize_player_names | cl, a | Default: false<br>Replace names of other players with something non-offensive.
cl_save_animgraph_recording | cl, cheat | Saves all active animgraph recordings to disk<br>	Arguments: automaticallyOpenInAnimgraphEditor
cl_sceneentity_debug | devonly, cl | Default: false<br>Display all thinking scene entities and its data.
cl_scoreboard_mouse_enable_binding | cl, a | Default: +attack2<br>Name of the binding to enable mouse selection in the scoreboard
cl_scoreboard_survivors_always_on | cl, a, release | Default: false<br>
cl_scoreboard_toggle_enable | devonly, cl | Default: false<br>
cl_screenmessage_notifytime | devonly, cl | Default: 8<br>How long to display screen message text
cl_script_add_debug_filter | cl, cheat | Add a filter to the game debug overlay
cl_script_add_watch | cl, cheat | Add a watch to the game debug overlay
cl_script_add_watch_pattern | cl, cheat | Add a watch to the game debug overlay
cl_script_attach_debugger | cl, cheat | Connect the vscript VM to the script debugger
cl_script_attach_debugger_at_startup | devonly, cl | Default: false<br>
cl_script_break_in_native_debugger_on_error | devonly, cl | Default: false<br>
cl_script_clear_watches | cl, cheat | Clear all watches from the game debug overlay
cl_script_debug | cl, cheat | Toggle the in-game script debug features
cl_script_dump_all | cl, cheat | Dump the state of the VM to the console
cl_script_find | cl, cheat | Find a key in the VM 
cl_script_help | cl, cheat | Output help for script functions
cl_script_help2 | devonly, cl | Output help for script functions suitable for auto-completion
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
cl_search_key_token | cl, hidden, release | Default: <br>Development search key token.
cl_sendtable_cache_filename | devonly | Default: sendtables.bin<br>Send tables cache file
cl_sequence_debug | devonly, cl | Default: -1<br>
cl_sequence_debug2 | devonly, cl | Default: -1<br>
cl_sequence_model_substring | devonly, cl | Default: <br>
cl_server_graphic1_enable | cl, release | Default: true<br>When enabled, 360x60 (&lt;16kb) image file will be displayed to on-server spectators.
cl_server_graphic2_enable | cl, release | Default: true<br>When enabled, 220x45 (&lt;16kb) image file will be displayed to on-server spectators.
cl_session | devonly, hidden, server_can_execute | Default: <br>
cl_show_bombs | devonly, cl | Default: false<br>
cl_show_camera_position | devonly, cl | Default: false<br>
cl_show_clan_in_death_notice | cl, a, release | Default: true<br>Is set, the clan name will show next to player names in the death notices.
cl_show_enemy_avatar_colors | devonly, cl | Default: true<br>
cl_show_equipment_value | devonly, cl | Default: false<br>
cl_show_equipped_character_for_player_avatars | cl, a | Default: false<br>
cl_show_head_trajectory | devonly, cl | Default: 0<br>
cl_show_matchmaking_stat_spew | devonly, cl | Default: false<br>
cl_show_observer_crosshair | cl, a, release | Default: 2<br>Show the crosshair of the player being observed. 0: off 1: friends and party 2: everyone 
cl_show_playernames_max_chars_console | devonly, cl | Default: false<br>Shows all player names (including bots) as 16 W's.
cl_show_quest_info | devonly, cl | Default: false<br>
cl_show_splashes | devonly, cl | Default: true<br>
cl_showdemooverlay | devonly | Default: 0<br>How often to flash demo recording/playback overlay (0 - disable overlay, -1 - show always)
cl_showents | cl, cheat | Dump entity list to console.
cl_showerror | cl, release | Default: 0<br>Show prediction errors, 2 for above plus detailed field deltas, 3 to filter out serverside known prediction errors, -entindex for specific entity.
cl_showfps | cl, release | Default: 0<br>Draw fps meter at top of screen (1 = fps, 2 = smooth fps, 3 = server MS, 4 = Show FPS and Log to file )
cl_showloadout | cl, a, per_user | Default: true<br>Toggles display of current loadout.
cl_showmem | cl, release | Default: 0<br>Draw approximate memory use at top of screen
cl_showpos | cl, cheat, release | Default: 0<br>Draw current position at top of screen
cl_showtextmsg | devonly, cl | Default: true<br>Enable/disable text messages printing on the screen.
cl_showtick | cl, release | Default: 0<br>Show current tick/time values.  Bitmask:  1='render time'  2='GameTime'   4=time of predicted entities  8=offset of predicted entities    (-1 means 'everything')
cl_showusercmd | devonly, cl | Default: false<br>Show user command encoding
cl_silencer_mode | cl, a, user, per_user | Default: 0<br>0: cannot detach; 1: press secondary fire to detach
cl_sim_grenade_trajectory | cl, cheat | Draw trajectory of the deployed grenade if thrown from this position. Takes an optional parameter for how long the drawn trajectory will last.
cl_simulate_dormant_entities | devonly, cl | Default: true<br>
cl_skel_constraints_enable | rep, cheat | Default: true<br>
cl_skeleton_instance_smear_boneflags | cl, cheat | Default: false<br>Smear boneflags across the model.  Costs computation, but tests to make sure your bone flags are consistent.
cl_skip_hierarchy_update_for_unchanged_entities | devonly, sv, cl, rep | Default: true<br>Skip updating hierarchy information in PostDataUpdate for entities that have not changed
cl_skip_update_animations | devonly, cl | Default: false<br>Enable to skip game animations
cl_smoke_edge_feather | devonly, sv, cl, rep | Default: 21<br>
cl_smoke_lower_speed | devonly, sv, cl, rep | Default: 1<br>
cl_smoke_origin_height | devonly, sv, cl, rep | Default: 68<br>
cl_smoke_torus_ring_radius | devonly, sv, cl, rep | Default: 61<br>
cl_smoke_torus_ring_subradius | devonly, sv, cl, rep | Default: 88<br>
cl_smoke_volume_growth | devonly, cl | Default: 1<br>
cl_smoke_volumeprop | devonly, cl | Default: true<br>
cl_smooth | devonly, cl | Default: true<br>Smooth view/eye origin after prediction errors
cl_smooth_draw_debug | cl, cheat | Default: false<br>
cl_smooth_root_catchup_factor | cl, cheat | Default: 0.21<br>
cl_smooth_root_max_accel | cl, cheat | Default: 1000<br>
cl_smooth_root_origin_coeff | cl, cheat | Default: 100<br>
cl_smooth_root_timehorizon | cl, cheat | Default: 0.125<br>
cl_smooth_root_velocity_coeff | cl, cheat | Default: 20<br>
cl_smooth_targetspeed | cl, release | Default: 150<br>
cl_smoothtime | devonly, cl | Default: 0.2<br>Smooth client's view after prediction error over this many seconds
cl_snd_cast_clear | devonly | Default: true<br>
cl_snd_cast_retrigger | devonly | Default: true<br>
cl_snd_new_visualize | cl, cheat | Default: false<br>Displays soundevent name played at it's 3d position
cl_sniper_auto_rezoom | cl, a, user, per_user | Default: true<br>Auto-rezoom snipers after a shot
cl_sniper_delay_unscope | cl, a, release | Default: false<br>
cl_sos_test_get_opvar | cl, cheat | 
cl_sos_test_set_opvar | cl, cheat | 
cl_soundscape_flush | cl, cheat, server_can_execute | Flushes the client side soundscapes
cl_soundscape_printdebuginfo | devonly, cl | print soundscapes
cl_spawngroup_log | devonly | Default: false<br>Dump the contents of the next spawngroup manifest to file.
cl_spawngroup_spewresources | devonly | Default: false<br>Spew all manifest add/updates.
cl_spec_show_bindings | cl, release, clientcmd_can_execute | Default: true<br>Toggle the visibility of the spectator bindings.
cl_spec_stats | cl, release | Default: true<br>
cl_spec_use_tournament_content_standards | cl, release | Default: false<br>
cl_spewserializers | cheat | Spew serializers
cl_spewworldgroups | devonly | Spew world groups (client)
cl_ss_origin | devonly, cl | print origin in script format
cl_steamscreenshots | devonly, cl | Enable/disable saving screenshots to Steam
cl_streams_image_sfurl | devonly, cl | Default: img://loadjpeg:(640x360):<br>Format of Scaleform image representing the stream
cl_streams_mytwitchtv_channel | devonly, cl | Default: http://www.twitch.tv/<br>Twitch.tv account channel URL
cl_streams_mytwitchtv_nolink | devonly, cl | Default: http://www.twitch.tv/settings/connections<br>Twitch.tv account linking URL
cl_streams_refresh_interval | devonly, cl | Default: 300<br>How often to refresh streams list
cl_streams_request_accept | devonly, cl | Default: application/vnd.twitchtv.v5+json<br>Header for api request
cl_streams_request_url | devonly, cl | Default: https://api.twitch.tv/helix/streams?game_id=32399&first=12<br>Number of streams requested for display
cl_streams_write_response_file | devonly, cl | Default: <br>When set will save streams info file for diagnostics
cl_teamcounter_playercount_instead_of_avatars | cl, a, release | Default: false<br>
cl_teamid_overhead_colors_show | cl, a, release | Default: true<br>Show team overhead id in teammate color
cl_teamid_overhead_fade_near_crosshair | cl, a, release | Default: 0.5<br>The amount to fade teamid when near the crosshair. Range is 0.0-1.0. 0: off
cl_teamid_overhead_maxdist | cl, cheat, per_user | Default: 6000<br>max distance at which the overhead team id icons will show
cl_teamid_overhead_maxdist_spec | cl, cheat, per_user | Default: 4000<br>max distance at which the overhead team id icons will show when a spectator
cl_teamid_overhead_mode | cl, a, release | Default: 3<br>Always show team id over teammates. 0 = off, 1 = pips; 2 = +name, 3 = +equipment
cl_teammate_color_1 | devonly, cl | Default: 136 206 245 255<br>
cl_teammate_color_2 | devonly, cl | Default: 0 158 128 255<br>
cl_teammate_color_3 | devonly, cl | Default: 241 228 65 255<br>
cl_teammate_color_4 | devonly, cl | Default: 230 128 42 255<br>
cl_teammate_color_5 | devonly, cl | Default: 189 44 150 255<br>
cl_teammate_colors_show | cl, a, release | Default: 1<br>In competitive, 1 = show teammates as separate colors in the radar, scoreboard, etc., 2 = show colors and letters
cl_test_list_entities | cl, cheat | test-list entities
cl_tickpacket_desired_queuelength | user | Default: 0<br>This value, multiplied by the tick interval, is added to cl_tickpacket_recvmargin_desired to obtain the effective desired recv margin.
cl_tickpacket_recvmargin_adjust_limit | devonly | Default: 5<br>Recvmargin-based usercommand pacing will not speed up or slow down command pacing by more than N% compared to realtime
cl_tickpacket_recvmargin_desired | devonly | Default: 5<br>Recvmargin-based usercommand pacing will try to maintain N ms margin between user command arriving at the server and the server needing that user command.  See also cl_tickpacket_desired_queuelength.
cl_tickpacket_recvmargin_minsamples | devonly | Default: 10<br>Recvmargin-based usercommand pacing will not take action unless we have N samples
cl_tickpacket_recvmargin_spew_interval | release | Default: 0<br>
cl_tickpacket_recvmargin_timeconstant | devonly | Default: 0.4<br>Recvmargin-based usercommand pacing will remove 63.2% of the error in N seconds
cl_tickpacket_recvmargin_window | devonly | Default: 4<br>Recvmargin-based usercommand pacing will use past N seconds
cl_tickpacket_send_every_tick | devonly | Default: true<br>Send a network packet each time we generate a new usercommand, even if our frame rate is slow and we generate multiple commands in one frame
cl_ticks_net_print_threshold | release | Default: 2<br>Print a message if network issues cause problems with server snapshots of user commands not being available when needed, if the percentage (0...100) exceeds this value.  A value of 0 will cause the message to always print each time it is calculated
cl_ticks_warning_level | release | Default: 0<br>Print a message about problems with ticks and interpolation.  0=never, 1=warnings, 2=all, even if hidden by interpolation
cl_ticktiming | norecord, release | {print\|&lt;interval&gt;} \[summary\|detail\]  Print timing stats now, or set report interval
cl_timeout | a | Default: 30<br>After this many seconds without receiving a packet from the server, the client will disconnect itself
cl_tracer_frequency_override | devonly, cl | Default: 1<br>Override tracer frequency (-1 to disable)
cl_tracer_whiz_distance | devonly, cl | Default: 72<br>
cl_tracer_whiz_infront_distance | devonly, cl | Default: 32<br>
cl_track_aim_head_log_closest | devonly, cl | Default: false<br>Log when closest distance to head was reached and what it was
cl_track_aim_head_threshold | devonly, cl | Default: 0<br>Notify render device when rendering a frame with enemy head within threshold distance
cl_track_render_eye_angles | cl, cheat | Default: false<br>Spew render eye angles
cl_ui_particles_destroy_when_not_painting | devonly, cl | Default: true<br>
cl_updatevisibility | devonly, cl | Updates visibility bits.
cl_use_entity_as_targetid | devonly, cl | Default: true<br>
cl_use_last_selected_weapon_slot_position | cl, a, release | Default: false<br>Use the last selected weapon slot position when switching back to a weapon slot.
cl_use_old_wearable_shoulddraw | devonly, cl | Default: false<br>
cl_use_opens_buy_menu | cl, a, user, per_user | Default: false<br>Pressing the +use key will open the buy menu if in a buy zone (just as if you pressed the 'buy' key).
cl_usercmd_dbg | devonly | Default: 0<br>show usercmd payload sizing info for packets with more than this many usercmds
cl_usercmd_max_per_movemsg  | release | Default: 4<br>max number of CUserCmds to send in one client move message
cl_usercmd_showsize | devonly | Default: false<br>
cl_usesocketsforloopback | devonly | Default: false<br>When connecting to local listen server (for example, using the 'map' command), default to loopback=false, which connects to '127.0.0.1' instead of 'loopback'.  This uses the network stack so that fake lag/loss can be simulated.
cl_versus_intro | cl, a, release | Default: true<br>
cl_view_near_hud_player_eye_dist | devonly, cl | Default: 20<br>
cl_view_near_other_player_eye_dist | devonly, cl | Default: 16<br>
cl_viewmodelsclonedasworld | devonly, cl | Default: true<br>
cl_viewtarget_clamp | devonly, cl | Default: true<br>
cl_voiceenabled | devonly, cl | Default: true<br>
cl_voip_lobby_audio_volume | devonly, cl, hidden | Default: 0<br>Lobby voip stream audio volume
cl_vrr_recommendation_dont_show_again | cl, a, release | Default: false<br>
cl_vsnd_morph_override_ease_enabled | devonly, cl | Default: true<br>Controls whether the compiled in vsnd morph data ease in/out values are used or values set from the convars (cl_vsnd_morph_override_ease_in, cl_vsnd_morph_override_ease_out) are used
cl_vsnd_morph_override_ease_in | devonly, cl | Default: 0.2<br>If cl_enable_vsnd_morph_override_ease_enabled is true, ease into vsnd morph driven animation over the specified number of seconds.
cl_vsnd_morph_override_ease_out | devonly, cl | Default: 0.2<br>If cl_enable_vsnd_morph_override_ease_enabled is true, ease out of vsnd morph driven animation over the specified number of seconds.
cl_wallbang_heavy_threshold | cl, cheat, release | Default: 22<br>The Threshold where to switch from Light to Heavy Wallbang tracer
cl_weapon_clip_thinwalls | cl, rep, cheat | Default: true<br>
cl_weapon_clip_thinwalls_debug | cl, rep, cheat | Default: false<br>
cl_weapon_clip_thinwalls_lock | cl, rep, cheat | Default: false<br>
cl_weapon_clip_thinwalls_pitchlimit_down | cl, rep, cheat | Default: 67<br>
cl_weapon_clip_thinwalls_pitchlimit_up | cl, rep, cheat | Default: 77<br>
cl_weapon_debug_print_accuracy | devonly, cl, rep | Default: false<br>
cl_weapon_debug_show_accuracy | cl, cheat, release | Default: 0<br>Draws a circle representing the effective range with every shot.
cl_weapon_debug_show_accuracy_duration | cl, cheat, release | Default: 10<br>
cl_weapon_pickup_lerp | devonly, cl | Default: 2<br>
cl_weapon_selection_rarity_color | cl, a, release | Default: false<br>
cl_workshop_map_download_timeout | devonly, cl | Default: 120<br>
cl_yawspeed | devonly, cl | Default: 210<br>
clear | norecord, release | Clear console output.
clear_bombs | sv, cheat | 
clear_debug_flags_on_death | devonly, sv | Default: true<br>
clearall | norecord, release | Clear console output from all views.
cli_ent_attachments | cl, cheat | Displays the interpolated attachment points on an entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cli_ent_hitbox | cl, cheat | Displays the skeleton for the given entity(ies).<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cli_ent_pivot | cl, cheat | Displays the interpolated pivot for the given entity(ies).<br>	(y=up=green, z=forward=blue, x=left=red). <br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cli_ent_skeleton | cl, cheat | Displays the skeleton for the given entity(ies).<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
cli_ent_vcollide_wireframe | cl, cheat | Displays the interpolated vcollide wireframe pm am entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
clientport | release | Default: 0<br>If non-zero, client binds port to specific address.  Usually you should leave this blank to use a different random system-assigned port for each connection.
closecaption | cl, a, user | Default: false<br>Enable close captioning.
cloth_debug_draw | devonly, cl | Default: 0<br>
cloth_filter_transform_stateless | devonly | Default: false<br>Enable the new, stateless version of FilterTransform
cloth_ground_plane_thickness | devonly | Default: 3<br>Raise ground by this much for all cloth that traces the ground; should be 0 ideally
cloth_hudmodel_presettle | devonly, cl | Default: 0<br>
cloth_hudmodel_presettle_log | devonly, cl | Default: false<br>
cloth_iv_dump | devonly, cl | Default: 4<br>
cloth_iv_store_back | devonly, cl, rep | Default: false<br>
cloth_sim_on_tick | devonly, cl | Default: true<br>
cloth_smooth_motion_correct | devonly, cl | Default: false<br>
cloth_smooth_motion_extrapolate | devonly, cl | Default: 0<br>
cloth_update | devonly, cl | Default: true<br>
clutch_mode_toggle | cl, release | Toggle clutch mode convar
cmd | devonly | Forward command to server.
cojob_lock_hold_warning_threshold_ms | devonly, sv, cl, rep | Default: 10000<br>How long in milliseconds before we warn about lock hold duration
cojob_max_no_yield_time_us | devonly, sv, cl, rep | Default: 3000<br>Will spew if a job takes longer than the specified number of microseconds
collect_entity_model_name | sv, cheat | Collect model names of the entities you're pointing at
commentary | sv, a | Default: false<br>Desired commentary mode state.
commentary_available | devonly, sv | Default: false<br>Automatically set by the game when a commentary file is available for the current map.
commentary_cvarsnotchanging | devonly, sv | 
commentary_finishnode | sv | 
commentary_node_use_viewfacing | devonly, cl | Default: false<br>
composite_material_cache_count_max | devonly, cl | Default: 16<br>
composite_material_dump_images | devonly, cl | Default: false<br>
composite_material_save_to_disk | devonly, cl | Default: false<br>
composite_material_use_bc7 | devonly, cl | Default: true<br>
composite_material_use_gpu | devonly, cl | Default: true<br>
composite_material_use_gpu_endpoint_optimization | devonly, cl | Default: false<br>
composite_material_use_gpu_perceptual_error_metric | devonly, cl | Default: true<br>
compositematerial_showdebugwindow | devonly, cl, a, rep, cheat | Default: false<br>Source2/Composite Material Debug
con_enable | a, per_user | Default: false<br>Allows the console to be activated.
con_logfile_suffix | devonly | Default: <br>Suffix to append to the console log, may be changed to reopen the log
condump | release | dump the text currently in the console to condumpXX.log
confirm_abandon_match | cl, hidden, clientcmd_can_execute | Confirm that we wish to abandon match
confirm_activate_itemid_now | cl, hidden, clientcmd_can_execute | Confirm item activation by item id
confirm_join_friend_session_exit_current | cl, hidden, clientcmd_can_execute | Confirm that we wish to join a friend session, destroying a previous session
confirm_join_new_session_exit_current | cl, hidden, clientcmd_can_execute | Confirm that we wish to join a new session, destroying a previous session
confirm_join_party_session_exit_current | cl, hidden, clientcmd_can_execute | Confirm that we wish to join a party session, destroying a previous session
confirm_watch_friend_session_exit_current | cl, hidden, clientcmd_can_execute | Confirm that we wish to watch a friend session, destroying a previous session
connect | release | Connect to a remote server.
connect_hltv | release | Connect to a remote HLTV server.
connect_lobby | devonly, cl, hidden | Default: 0<br>Sets the lobby ID to connect to on start.
console_test | devonly | Output text to test console
consoletool | norecord, release | Open a VConsole subtool.
contributionscore_assist | sv, release | Default: 1<br>amount of contribution score added for an assist
contributionscore_assist_reqs | sv, release | Default: 0<br>extra requirements to earn contribution score for an assist
contributionscore_bomb_defuse_major | sv, release | Default: 3<br>amount of contribution score for defusing a bomb while at least one enemy remains alive
contributionscore_bomb_defuse_minor | sv, release | Default: 1<br>amount of contribution score for defusing a bomb after eliminating enemy team
contributionscore_bomb_exploded | sv, release | Default: 1<br>amount of contribution score awarded to bomb planter and terrorists remaining alive if bomb explosion wins the round
contributionscore_bomb_planted | sv, release | Default: 2<br>amount of contribution score for planting a bomb
contributionscore_cash_bundle | sv, release | Default: 0<br>amount of contribution score for picking up a cash bundle
contributionscore_crate_break | sv, release | Default: 0<br>amount of contribution score for breaking an item crate
contributionscore_hostage_kill | sv, release | Default: -2<br>amount of contribution score for killing a hostage, normally negative
contributionscore_hostage_rescue_major | sv, release | Default: 3<br>amount of contribution score added to rescuer per hostage rescued
contributionscore_hostage_rescue_minor | sv, release | Default: 1<br>amount of contribution score added to all alive CTs per hostage rescued
contributionscore_kill | sv, release | Default: 2<br>amount of contribution score added for a kill
contributionscore_kill_factor | sv, release | Default: 0<br>percentage of victim's contribution score to award to their killer as a bonus
contributionscore_kill_reqs | sv, release | Default: 0<br>extra requirements to earn contribution score for a kill
contributionscore_objective_kill | sv, release | Default: 3<br>amount of contribution score added for an objective related kill
contributionscore_participation | sv, release | Default: 0<br>amount of contribution score awarded to players for active participation in the round
contributionscore_suicide | sv, release | Default: -2<br>amount of contribution score for a suicide, normally negative
contributionscore_team_kill | sv, release | Default: -2<br>amount of contribution score for a team kill, normally negative
convars_echo_toggle_changes | devonly | Default: true<br>Echo to the console changes caused by toggling.
convert_steamid | devonly, cl | Convert SteamID into multiple formats
cpu_level | devonly, cl | Default: 2<br>CPU Level - Default: High
cpuinfo | devonly | Print CPU configuration information
cq_buffer_bloat_msecs_max | rep, release | Default: 64<br>Server will not allow the client to buffer up more than N ms of commands.
cq_debug | devonly, sv, rep | Default: 0<br>Verbose command queue logging.
cq_dilation_percentage | devonly, sv, cl, rep | Default: 5<br>When speeding up slowing down, this is how much
cq_enable | devonly, sv, cl, rep | Default: true<br>Run one usercmd per server tick and maintain a buffer.  Client speeds up/slows down it's usercmd tick rate to maintain server command queue buffering.
cq_fake_starve | devonly, sv | Default: 0<br>if set, starve this many commands by discarding during process usercmds.
cq_logging | sv, release | Default: false<br>command queue logging of events.
cq_logging_interval | sv, release | Default: 0<br>command queue logging per player stats every N seconds, 0 to disable.
cq_max_starved_substitute_commands | sv, release | Default: 4<br>Server will stop generating substitute commands if client hasn't sent one, after N in a row
cq_print_every_command | sv, release | Default: false<br>print every command as we execute it
cq_runtests | devonly, sv | Default: false<br>
cq_runtests_broadcast_info | devonly, sv | Default: false<br>send message to remote client console when tests change.
cq_runtests_interval | devonly, sv | Default: 30<br>
crash | cheat | Crash the client. Optional parameter -- type of crash:<br> 0: read from NULL<br> 1: write to NULL<br> 2: force an Assert<br> 3: infinite loop<br> 4: stack buffer overrun<br> 5: multiple asserts across multiple threads. Optional number of threads (default 5)<br> 6: looping memory leak until we're out of memory. Optional allocation size in bytes (default 1048576/1MB)
crash_error | cheat | Cause the engine to crash by Plat_FatalError on main thread (Debug!!)
crash_error_job | cheat | Cause the engine to crash by Plat_FatalError on job thread (Debug!!)
crash_error_thread | cheat | Cause the engine to crash by Plat_FatalError on non-main thread (Debug!!)
crash_job | cheat | Cause the engine to crash in a job thread (Debug!!)
crash_thread | cheat | Cause the engine to crash in a brand new non-main thread (Debug!!)
create_flashlight | sv, cheat | 
create_radius_damage | sv, cheat | Causes radius damage where you're looking, at the passed in radius.
creditsdone | devonly, sv | 
crosshair | cl, a, per_user | Default: true<br>
cs_AssistDamageThreshold | devonly, sv | Default: 25<br>cs_AssistDamageThreshold defines the amount of damage needed to score an assist
cs_ShowStateTransitions | sv, cheat | Default: -2<br>cs_ShowStateTransitions &lt;ent index or -1 for all&gt;. Show player state transitions.
cs_hostage_near_rescue_music_distance | sv, cheat | Default: 2000<br>
cs_logtouchexpansion | sv, cheat | Default: -2<br>cs_logtouchexpansion &lt;ent index or -1 for all&gt;. Log player touch expansion component.
cs_minimap_create_output_size | cl, release | Default: 1024<br>Size of minimap texture generated with cs_minimap_create (512 default)
cs_minimap_renderdoc_capture_enabled | devonly, cl, hidden, cheat | Default: false<br>
cs_minimap_rendering_msaa_mode | devonly, cl, cheat | Default: 2<br>MSAA mode used for minimap rendering 0-none, 1-2xMSAA, 2-4xMSAA, 3-6X, 4-8X, etc
cs_quit_prompt | cl, release | Quit the game
cs_steamvideo_max_kills_per_multikill | devonly, cl | Default: 5<br>Max number of kills for a single multikill event
cs_steamvideo_max_time_between_multikill_events | devonly, cl | Default: 5<br>Maximum time in seconds between consecutive kills for them to be combined into a multikill event
cs_steamvideo_multikill_padding_time | devonly, cl | Default: 2<br>Time in seconds to add before the first kill and after the last kill for multikill events
csgo_3d_skybox | devonly, cl | Default: true<br>
csgo_demoui_playbeck_timestep_value | devonly, cl | Default: 15<br>Number of seconds to seek when using TimeStep buttons on demo playback controller.
csgo_demoui_player_death_seek_lead_up_time | devonly, cl | Default: 1<br>Seek to a moment this amount of seconds leading up to a player death instead of the exact time of the death.
csgo_demoui_previous_event_search_offset | devonly, cl | Default: 2<br>Do not consider events that happened in the last specified number of seconds when a user clicks 'previous' on the UI.
csgo_disable_preview_maps | devonly, cl | Default: false<br>
csgo_download_match | cl, norecord, clientcmd_can_execute | Downloads a match via serial code and starts playback
csgo_econ_action_preview | cl, hidden, norecord, clientcmd_can_execute | Preview an economy item
csgo_fatdemo_enable | sv, cl, rep, release | Default: false<br>
csgo_fatdemo_output | sv, cl, rep, release | Default: test.fatdem<br>
csgo_map_preview_scale | cl, a | Default: 0<br>
csgo_mappreview_transparent_background_col_performance | devonly, cl | Default: 0.3<br>
csgo_mappreview_transparent_background_col_quality | devonly, cl | Default: 0<br>
csgo_nav_jump_link_detour_threshold | devonly, sv, rep | Default: 1500<br>don't traverse a jump link if there's a detour that costs less than this amount
csgo_use_fullsort_for_opaque | cl, cheat | Default: true<br>fullsort the opaque pass when there wasn't a depth prepass
csgo_watch_friend_session_exit_current | cl, hidden, clientcmd_can_execute | 
csm_bias_override_0 | cheat | Default: 1<br>
csm_bias_override_1 | cheat | Default: 1<br>
csm_bias_override_2 | cheat | Default: 1<br>
csm_bias_override_3 | cheat | Default: 1<br>
csm_cascade0_override_dist | cheat | Default: -1<br>
csm_cascade1_override_dist | cheat | Default: -1<br>
csm_cascade2_override_dist | cheat | Default: -1<br>
csm_cascade3_override_dist | cheat | Default: -1<br>
csm_cascade_viewdir_shadow_bias_scale | cheat | Default: 2<br>
csm_max_dist_between_caster_and_receiver | cheat | Default: 15000<br>default pushback
csm_max_num_cascades_override | devonly | Default: -1<br>Number of cascades in sunlight shadow
csm_max_shadow_dist_override | devonly | Default: -1<br>
csm_max_visible_dist | cheat | Default: 7500<br>
csm_res_override_0 | cheat | Default: 0<br>
csm_res_override_1 | cheat | Default: 0<br>
csm_res_override_2 | cheat | Default: 0<br>
csm_res_override_3 | cheat | Default: 0<br>
csm_shadow_worldview_align_x_to_u | cheat | Default: true<br>
csm_shadow_worldview_shear_align_z_to_v | cheat | Default: true<br>
csm_split_log_scalar | cheat | Default: 0.85<br>
csm_sst_max_visible_dist | cheat | Default: 2000<br>
csm_sst_pushback_distance | cheat | Default: 1500<br>default pushback
csm_sst_shadow_focus_region_maxz | cheat | Default: 2000<br>
csm_sst_shadow_focus_region_minz | cheat | Default: -2000<br>
csm_viewdir_shadow_bias | cheat | Default: 0<br>
csm_viewmodel_farz | cheat | Default: 30<br>
csm_viewmodel_max_shadow_dist | cheat | Default: 21<br>
csm_viewmodel_max_visible_dist | cheat | Default: 1000<br>
csm_viewmodel_nearz | cheat | Default: 0.5<br>
csm_viewmodel_shadows | devonly | Default: false<br>
custom_bot_difficulty | sv, cl, rep, release | Default: 2<br>Bot difficulty for offline play.
cv_bot_ai_bt_debug_target | sv, rep, cheat | Default: -1<br>Draw the behavior tree of the given bot.
cv_bot_ai_bt_hiding_spot_show | sv, rep, cheat | Default: false<br>Draw hiding spots.
cv_bot_ai_bt_moveto_show_next_hiding_spot | sv, rep, cheat | Default: false<br>Draw the hiding spot the bot will check next.
cvar_unhide |  | 
cvarlist | release | Show the list of convars/concommands.
cvarlist_md |  | List all convars/concmds in Markdown format. Format: \[hidden\]
cyclevar | norecord, release | Cycle through specified convar values.
d3d_max_feature_level | devonly | Default: &lt;Not set&gt;<br>Report the maximum D3D feature level available.
damage_impact_heavy | devonly, cl | Default: 40<br>Damage ABOVE this value is considered heavy damage
damage_impact_medium | devonly, cl | Default: 20<br>Damage BELOW this value is considered light damage
dbghist_addline | devonly, sv | Add a line to the debug history. Format: &lt;category id&gt; &lt;line&gt;
dbghist_dump | devonly, sv | Dump the debug history to the console. Format: &lt;category id&gt;<br>    Categories:<br>     0: Entity I/O<br>     1: AI Decisions<br>     2: Scene Print<br>     3: Alyx Blind<br>     4: Log of damage done to player<br>	 5: Player Teleport<br>	 6: Blind Zombie Sounds<br>	 7: Player Continuous<br>
death_chase_distance | devonly, cl | Default: 76<br>
death_panel_delay_time | devonly, cl | Default: 0.25<br>
death_panel_travel_time | devonly, cl | Default: 0.25<br>
debug_aim_angle | devonly, sv, cl, rep | Default: 0<br>
debug_chicken | devonly, sv | Default: false<br>Chicken debug info
debug_destructible_parts | devonly, sv, cl, rep | Default: false<br>Draw debug information for destructible parts.
debug_destructible_parts_enabled | sv, cl, rep, cheat | Default: true<br>Toggle enabling/disabling the destructible parts system for debug.
debug_destructible_parts_ttl | devonly, sv, cl, rep | Default: 1<br>How long the debug draws stick around for, unless they're per-tick.
debug_draw_enable | devonly, rep | Default: true<br>
debug_entity_outline_highlight | cl, cheat | Default: false<br>
debug_error_model | sv, cl, rep, cheat | Default: false<br>
debug_hltv | devonly, cl, rep, clientcmd_can_execute | Default: 0<br>Print out hltv events
debug_overlay_fullposition | devonly, sv | Default: false<br>
debug_physimpact | devonly, sv | Default: false<br>
debug_purchase_defidx | cl, release, clientcmd_can_execute | Purchase an item by defindex
debug_radial_damage | sv, cl, rep, cheat | Default: false<br>
debug_shared_random | devonly, sv, cl, rep | Default: false<br>
debug_takedamage_summaries | sv, cheat | Default: false<br>
debug_video_config_cvars | devonly, cl | Default: false<br>
debug_visibility_monitor | sv, cheat | Default: 0<br>
debugoverlay_cycle_domain | sv, cheat | Toggles visibility of the debug overlay system.
debugoverlay_cycle_state | sv, cheat | Toggles visibility of the debug overlay system.
debugoverlay_dashboard | sv, cheat | Makes the debug overlay dashboard visible.
debugoverlay_force_respect_ttl | cheat | Default: false<br>Force respect TTL even when clearing scopes
debugoverlay_hide_imgui | sv, cheat | Hides the overlay.
debugoverlay_show_text_outline | cheat | Default: false<br>Toggle display of box around text
debugoverlay_text_scale | a, cheat | Default: 1<br>Scale of the text used for 3d display
debugoverlay_toggle | sv, cheat | Toggles visibility of the debug overlay system.
decalfrequency | devonly, sv, nf | Default: 10<br>
default_fov | cl, cheat | Default: 90<br>
demo_allow_game_mismatch | devonly | Default: false<br>Allow playback of demo even if game directories are not matched \[may crash or fail to load\].
demo_debug | devonly | Default: 0<br>Turn on demo debug spew.
demo_flush | a | Default: false<br>Flush writing the demo file every network update
demo_goto | release | Skips to location in demo.
demo_gotomark | release | Skips the current demo playback to the marked tick
demo_gototick | release | Skips to a tick in demo.
demo_highlight_fade_duration | cl, release | Default: 0.25<br>Duration of the fade in and of the fade out transitions (fade in + fade out is 2x this value).
demo_highlight_seconds_after | cl, release | Default: 2<br>How many seconds after the actual highlight event to show when viewing highlights.
demo_highlight_seconds_before | cl, release | Default: 6<br>How many seconds before the actual highlight event to show when viewing highlights.
demo_info | release | Print information about currently playing demo.
demo_marktick | release | Marks the current demo playback tick for later use
demo_mouse_enable_binding | cl, a | Default: drop<br>Name of the binding to enable mouse on demo playback UI
demo_movie_write_intervals | cl, hidden, release | Default: false<br>Write highlight interval metadata along with movie files when recording.
demo_pause | release | Pauses demo playback.
demo_pause_at_end | cl, release | Default: true<br>Pause demo playback when the end of the file is reached, otherwise quit to main menu.
demo_pauseatservertick | release | Pauses when the 'render time' reaches the specified tick.
demo_playback_override_settings | devonly, cl | Default: false<br>
demo_quitafterplayback | release | Default: false<br>Quits game after demo playback.
demo_recordcommands | cheat | Default: true<br>Record commands typed at console into .dem files.
demo_resume | release | Resumes demo playback.
demo_skip_to_shot_seconds_before | cl, release | Default: 2<br>How many seconds before the shot to skip to when skipping to a specific shot ID.
demo_step_tick | release | Play for N ticks (default=1) and then pause.
demo_timescale | release | Sets demo replay speed.
demo_togglepause | release | Toggles demo playback.
demo_ui_mode | cl, release | Default: 2<br>UI mode for demo playback. 0 = disabled, 1 = minimal, 2 = full
demo_usefastgoto | devonly | Default: true<br>Use fast frame skipping when available for demo_goto commands.
demo_writefullupdate_rate | devonly | Default: 60<br>Interval time in seconds to write full updates to demo.
demo_writemetafile | devonly, norecord | save current meta file demo_&lt;version&gt;.meta file for use in demo upconversion.
demolist | release | Print demo sequence list.
demoui | cl, release | Show/hide demo playback ui
destructible_parts_destroy_parts_when_gibbing | devonly, sv, cl, rep | Default: true<br>
dev_add_onground_on_spawn | sv, release | Default: false<br>Should we mess with the ground flag when we spawn? (I don't think we should). If we don't hit the assert in CCSPlayer_MovementServices::ProcessMovement, we should remove this by Dec 2022.
dev_create_bhop_reports | devonly, sv, cl, rep, cheat | Default: false<br>Whether we should create bhop reports when you jump. Reports are created for the client and server and are numbered monotonically
dev_create_move_report | devonly, sv, cl, rep, cheat | Default: false<br>Whether we should create move reports when you push movement keys. Reports are created for the server and are numbered monotonically
dev_create_sensitivity_report | devonly, cl | Default: 0<br>
dev_create_smooth_motion_report | devonly, cl, rep, cheat | Default: false<br>
dev_cs_force_disable_move | devonly, sv, cl, rep | Default: false<br>forcibly prevent players from moving
dev_cs_frame_firing_enable | devonly, sv, cl, rep | Default: true<br>Enable that firing will pretend like it's happening on frames.
dev_cs_frame_firing_insert_idle_pose_now | devonly, sv, cl, rep | Default: true<br>Should we insert the idle pose at this time to make the animation interpolation punchier?
dev_cs_frame_firing_play_animevents | devonly, sv, cl, rep | Default: true<br>Should we play the animevents that animgraph will skip over?
dev_cs_frame_firing_skip_first_frame_enable | devonly, sv, cl, rep | Default: true<br>Should we skip the first frame of shooting to make the animation punchier?
dev_cs_frame_firing_tick_offset_enable | devonly, sv, cl, rep | Default: true<br>Should we offset the current frame to the tick
dev_cs_ragdoll_head_ankle_delta_z_threshold | devonly, sv, cl, rep | Default: 35<br>
dev_cs_ragdoll_nudge_intensity | devonly, sv, cl, rep | Default: 500<br>
dev_cs_ragdoll_nudge_max_duration | devonly, sv, cl, rep | Default: 1.5<br>
dev_cs_ragdoll_progress_check_interval | devonly, sv, cl, rep | Default: 0.25<br>
dev_reportmoneychanges | devonly, sv, rep | Default: false<br>Displays money account changes for players in the console
dev_send_gc_message | devonly, cl | &lt;msgid&gt; Send a blank body message with a given ID to gc for routing tests
dev_send_gc_message_server | devonly, sv | &lt;msgid&gt; Send a blank body message with a given ID to gc for routing tests
dev_simulate_gcdown | devonly, cl | &lt;state&gt; Turn on/off simulated GC communications failure (GC is down in a way that we know it is down)
developer | release | Default: 0<br>Set developer message level.
devonly_chicken_activity_debug | devonly, sv | Default: false<br>Print chicken activity info to the console
devonly_chicken_blocktimer | devonly, sv | Default: 0.2<br>Chicken blockertimer
devonly_chicken_feeler_distance | devonly, sv | Default: 30<br>Chicken feeler distance
devonly_chicken_feeler_height | devonly, sv | Default: 5<br>Chicken feeler height
devonly_chicken_feeler_pitch | devonly, sv | Default: 45<br>Chicken feeler pitch
diffcheck | devonly | Default: true<br>Activate diffcheck system.
diffcheck_playerslot | devonly | Default: 0<br>
diffcheck_spew | devonly | Default: true<br>Actually show diffcheck results.
diffcheck_spew_diff_filter | devonly | Default: <br>Show diff with matching filter substring only.
diffcheck_spew_diff_only | devonly | Default: false<br>Show diff only.
differences | release | Show all convars which are not at their default values (optional restricted to specific flags).
disable_dynamic_prop_loading | sv, cheat | Default: false<br>If non-zero when a map loads, dynamic props won't be loaded
disable_priority_boost | devonly | Disable focus based priority boost
disable_source_soundscape_trace | devonly, sv | Default: false<br>Bypasses lookup of soundscapes for indvidual audio sources when enabled.
disconnect | release | Disconnect from server
display_game_events | sv, cheat | Default: false<br>
dlight_debug | cl, cheat | Creates a dlight in front of the player
dm_reset_spawns | devonly, sv | 
dm_togglerandomweapons | cl, server_can_execute, clientcmd_can_execute | Turns random weapons in deathmatch on/off
dota_enable_spatial_audio | release | Default: false<br>Flag to enable spatial audio in Dota 2.
dota_overhead_on_received_item | devonly, sv, cl, rep | Default: true<br>Emit an overhead particle effect on receiving an item from an ally.
dota_spatial_audio_mix | release | Default: 1<br>Mix value to blend spatial and non-spatial audio in Dota 2.
dota_toast_manager_override_duration | devonly, cl | Default: -1<br>
drawcross | sv, cheat | Draws a cross at the given location<br>	Arguments: x y z
drawline | sv, cheat | Draws line between two 3D Points.<br>	Green if no collision<br>	Red is collides with something<br>	Arguments: x1 y1 z1 x2 y2 z2
drawoverviewmap | devonly, cl | Draws the overview map
drawradar | devonly, cl | Draws HUD radar
drop_hostage | devonly, sv, cheat | drop held hostage
ds_workshop_changelevel | sv, release | Changelevel to an available workshop map by name
ds_workshop_listmaps | sv, release | Dump workshop maps available on this server
dsp_automatic | devonly, demo | Default: 0<br>
dsp_db_min | devonly, demo | Default: 80<br>
dsp_db_mixdrop | devonly, demo | Default: 0.5<br>
dsp_dist_max | cheat, demo | Default: 1440<br>
dsp_dist_min | cheat, demo | Default: 0<br>
dsp_mix_max | devonly, demo | Default: 0.8<br>
dsp_mix_min | devonly, demo | Default: 0.2<br>
dsp_off | cheat | Default: false<br>
dsp_vol_2ch | devonly, demo | Default: 1<br>
dsp_vol_4ch | devonly, demo | Default: 0.5<br>
dsp_vol_5ch | devonly, demo | Default: 0.5<br>
dsp_volume | a, demo | Default: 0.8<br>
dump_audio_input | devonly | Default: false<br>
dump_entity_report | cl, cheat | List all client-side entities in the scene
dump_globals | devonly, sv | Dump all global entities/states
dump_loc_token | devonly | List information on the given token
dump_localization_files | devonly | List all loaded localization files
dump_panorama_css_properties | release | Prints out all valid panorama CSS properties and their documentation
dump_panorama_events | release | print panorama event types and their documentation
dump_panorama_render_command_stats | devonly | 
dump_portrait_world_info_with_debug_name_containing | devonly, cl | 
dump_response_symbols | devonly, sv | print all response symbols to the console
dump_secondary_scene_worlds | devonly, cl | Lists secondary scene worlds and ref counts
dumpparticlelist | cheat | Print out information on existing particle systems
dumpstringtable | devonly | Usage:  dumpstringtable &lt;tablename \|all&gt; &lt;sv \| cl&gt; &lt;verbose \| simple&gt; &lt;element&gt;      Print string tables to console, verbose to dump data, simple to show name and count only, can specifiy a single numeric element index to restrict spew.
echo | server_can_execute | Echo text to console.
echoln | release | Echo the command arguments on the console
econ_build_pinboard_images_from_collection_name | devonly, cl | Renders and saves images for all models in a collection.
econ_clear_inventory_images | devonly, cl | clear the local inventory images (they will regenerate)
econ_debug_loadout_ui | devonly, cl | Default: false<br>Show debug data when players change their loadout.
econ_enable_inventory_images | devonly, cl | Default: true<br>allow inventory image rendering for use by scaleform
econ_inventory_image_pinboard | devonly, cl | Default: false<br>
econ_show_items_with_tag | devonly, cl | Lists the item definitions that have a specified tag.
enable_boneflex | cl, a | Default: true<br>
enable_priority_boost | devonly | Disable focus based priority boost
endmatch_votenextmap | cl, clientcmd_can_execute | Votes for the next map at the end of the match
endmovie | devonly, norecord | Stop recording movie frames.
endround | sv, cheat | End the current round.
engine_accurate_input_processing_delta_time | devonly | Default: false<br>When true, elapsed time given to the input processing will be the time elapsed since the last input processing. This is only relevant when input is processed multiple times per frame ( i.e. multiple ticks per frame)
engine_allow_multiple_simulates_per_frame | devonly | Default: false<br>When the client is catching up in low frame rate situations, should we run client simulate more than once a frame?
engine_allow_multiple_ticks_per_frame | devonly | Default: true<br>When the client is catching up in low frame rate situations, should we run tick more than once a frame?
engine_client_tick_pad_enable | devonly | Default: false<br>
engine_cpu_info_extended | devonly | Default: <br>CPU the engine is running on.
engine_frametime_amnesty_debug | devonly | Default: false<br>Enable logging about events that disable frame time warnings
engine_frametime_print_report | devonly | Print a performance report from the current data in the vprof 'lite' profiler
engine_frametime_warnings_enable | devonly | Default: true<br>Enable framerate-related warnings, such as sv_long_frame_ms.  Disabling warnings is useful when running in situations such a debug where a slow frame rate is expected
engine_low_latency_sleep_after_client_tick | release | Default: false<br>When r_low_latency is enabled, this moves the low latency sleep on tick frames to happen after client simulation.
engine_max_resource_system_update_time | devonly | Default: 5<br>
engine_max_ticks_to_simulate | devonly | Default: -1<br>Max number of ticks to simulate per frame, after which simulation will start to slow down compared to real time.
engine_no_focus_sleep | a | Default: 20<br>
engine_no_focus_sleep_vconsole_suppress | devonly | Default: true<br>When VConsole is in the foreground, don't trigger engine_no_focus_sleep behavior
engine_ostype | devonly | Default: <br>OS type the engine is running on.
engine_platform_name_extended | devonly | Default: <br>Platform the engine is running on.
engine_relaunch_app_before_exiting | hidden, release | Default: false<br>Use this to tell Steam to relaunch the app right after existing
engine_render_only | devonly | Default: false<br>
engine_rendersystem_init | devonly | Default: <br>Rendersystem option requested (changing this does not change the rendersystem).
engine_rendersystem_shader_model | devonly | Default: 0<br>Rendersystem shader model in use (changing this does not change the shader model).
engine_rendersystem_used | devonly | Default: <br>Rendersystem option in use (changing this does not change the rendersystem).
engine_show_frame_dispatch | devonly | Default: false<br>show frame dispatch names.
engine_show_frame_pacing | release | Default: false<br>
engine_show_frame_ticks | devonly | Default: false<br>
engine_sse42 | devonly | Default: true<br>turn on sse4.2 optimizations in the engine
engine_update_resource_system_during_low_latency_sleep | devonly | Default: true<br>
english | cl, user | Default: true<br>If set to 1, running the english language set of assets.
ent_absbox | sv, cheat | Displays the total bounding box for the given entity(s) in green.  Some entites will also display entity specific overlays.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_actornames | sv, cheat | Displays the entity name for all entities that have ShouldDisplayInActorNames true in code
ent_actornames_font | sv, cl, rep, cheat | Default: Consolas<br>ent_actornames font name
ent_actornames_fontsize | sv, cl, rep, cheat | Default: 24<br>ent_actornames font size
ent_animgraph_debug | sv, cheat | Displays debug draws about the given entity(ies) animgraph<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_animgraph_record | sv, cheat | Toggles recording of animgraph replay of the given entity(s)<br>	Arguments: entityName automaticallyOpenInAnimgraphEditor<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_animgraph_setvar | sv, cheat | Sets a variable on the animgraph of the given entity(s)<br>	Arguments:   &lt;varname&gt;=&lt;value&gt;	&lt;{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}&gt;
ent_attachment_filter_substrings | sv, cheat | Default: <br>If an attachment's name has any of the given substrings in it, it will be displayed. Substrings can be delimited by the ',' or '\|' character.
ent_attachments | sv, cheat | Displays the attachment points on an entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_autoaim | sv, cheat | Displays the entity's autoaim radius.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_bbox | sv, cheat | Displays the movement bounding box for the given entity(ies) in orange.  Some entites will also display entity specific overlays.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_bitvec_enable | devonly, sv | Default: false<br>
ent_bonemergeplayer | sv, cheat | Bonemerge the player onto the entity under the crosshairs
ent_call | sv, cheat | ent_call &lt;funcname&gt; &lt;option:entname&gt; calls function on current look target or filtername, checks on ent, then root, then mode, then map scope
ent_cancelpendingentfires | devonly, sv | Cancels all ent_fire created outputs that are currently waiting for their delay to expire.
ent_characterize | devonly, sv | Spew PVS debug info for entity
ent_clear_debug_overlays | sv, cheat | Clears all debug overlays
ent_create | sv, cheat | Creates an entity of the given designer or subclass name where the player is looking.
ent_debug_anim | devonly, cl | Use the specified entity for animation debugging.
ent_debug_draw_thinkers | devonly, sv, cl, rep | Default: false<br>
ent_debug_origin_changes | devonly, sv | turn on, off, or toggle origin changes on server for entity by index
ent_find | sv, cheat | Find and list all entities with classnames or targetnames that contain the specified substrings.<br>Format: find_ent &lt;substring&gt;<br>
ent_find_index | sv, cheat | Display data for entity matching specified index.<br>Format: find_ent_index &lt;index&gt;<br>
ent_fire | sv, cheat | Usage:<br>   ent_fire &lt;target&gt; \[action\] \[value\] \[delay\]<br>
ent_fire_output | sv, cheat | Usage:<br>   ent_fire_output &lt;target&gt; \[output name\] \[value\] \[delay\]<br>
ent_gib | sv, cheat | Gibs the given entity(s)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_grab | sv, cheat | grabs the object in front of the player. Options: -loose -multiple -toggle
ent_hierarchy | sv, cheat | Prints the entity hierarchy tree rooted at the specified ent(s)
ent_hitbox | sv, cheat | Displays the hitboxes for the given entity(ies).<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_info | sv, cheat | Usage:<br>   ent_info &lt;class name&gt;<br>
ent_joint_axis_size | devonly, sv | Default: 4<br>
ent_joint_filter_substring | devonly, sv | Default: <br>
ent_joint_names | devonly, sv | Default: true<br>
ent_joint_only_ik_joints | devonly, sv | Default: false<br>
ent_joint_use_bind_pose | devonly, sv | Default: false<br>
ent_joints | sv, cheat | Displays the joint names + axes an entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_kill | sv, cheat | Kills the given entity(s)<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_list_report | devonly, sv | Reports all list of all entities in a map, one by one
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
ent_revert_dormancy_change | devonly, cl | Default: false<br>
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
ent_skeleton_only_ik_joints | devonly, sv | Default: false<br>
ent_skeleton_snapshot | devonly, sv | Default: false<br>
ent_spew_derived_classes | devonly, sv | Prints out all entity classes which inherit from a specified base class
ent_steadystate_batchsize | devonly, sv | Default: 20<br>Max number of entities to transmit to player
ent_steadystate_delay | devonly, sv | Default: 5<br>Time in seconds without network state changes until an entity is considered for trickle updates
ent_steadystate_enable | devonly, sv | Default: false<br>
ent_steadystate_interval | devonly, sv | Default: 0.1<br>Rate at which entities can be trickled to players
ent_teleport | sv, cheat | Teleport the specified entity to where the player is looking.<br>	Format: ent_teleport &lt;entity name&gt;
ent_test_interpolation | devonly, cl | Default: false<br>
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
ent_viewentity | devonly, sv | Selects the picked entity as the view entity
ent_viewoffset | sv, cheat | Displays the eye position for the given entity(ies) in red.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
ent_viewpunch | devonly, sv | Used to debug ViewPunch
ent_visibility_traces | sv, cheat | Displays visibility traces for the given entity<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
entity_log_load_unserialize | sv, cl, rep, cheat | Default: 0<br>Output unserialization of entities on map load. 0 - off, 1 - client/server, 2 - server, 3 - client
entity_lump_list | devonly | List all known entity lumps
entity_lump_spew | devonly | Dump the contents of an entity lump
entityreport | devonly, sv | Reports all extant entities. Optional 2nd arg is a substring of a classname that the list will be filtered by.
entitysummary | devonly, sv | Summarizes (by class) all extant entities. Optional 2nd arg is a substring of a classname that the list will be filtered by.
ents | devonly, sv | List server entities, sorted by spawn group
eom_local_player_defeat_anim_enabled | cl, a, release | Default: true<br>
error_message_explain_pure | cl, hidden, clientcmd_can_execute | Take user to Steam support article
error_message_explain_unsigned | cl, hidden, clientcmd_can_execute | Take user to Steam support article
error_message_explain_vac | cl, hidden, clientcmd_can_execute | Take user to Steam support article
escape | release, clientcmd_can_execute | Escape key pressed.
exec | norecord, release | Execute a cfg file
exec_async | cheat, norecord | Execute a cfg file over time
execifexists | norecord, release | Execute a cfg file if file exists
execute_command_every_frame | cheat | Default: <br>
explode | sv, cheat | Kills the player with explosive damage
explodevector | sv, cheat | Kills a player applying an explosive force. Usage: explodevector &lt;player&gt; &lt;x value&gt; &lt;y value&gt; &lt;z value&gt;
fade_debug_splitscreen_slot | devonly, cl | Default: -1<br>
fadein | sv, cheat | fadein {time r g b}: Fades the screen in from black or from the specified color over the given number of seconds.
fadeout | sv, cheat | fadeout {time r g b}: Fades the screen to black or to the specified color over the given number of seconds.
ff_damage_bullet_penetration | sv, cl, rep, release | Default: 0<br>If friendly fire is off, this will scale the penetration power and damage a bullet does when penetrating another friendly player
ff_damage_decoy_explosion | sv, cl, rep, release | Default: false<br>Enables or disables team damage from decoy detonation
ff_damage_reduction_bullets | sv, cl, rep, release | Default: 0.1<br>How much to reduce damage done to teammates when shot.  Range is from 0 - 1 (with 1 being damage equal to what is done to an enemy)
ff_damage_reduction_grenade | sv, cl, rep, release | Default: 0.25<br>How much to reduce damage done to teammates by a thrown grenade.  Range is from 0 - 1 (with 1 being damage equal to what is done to an enemy)
ff_damage_reduction_grenade_self | sv, cl, rep, release | Default: 1<br>How much to damage a player does to himself with his own grenade.  Range is from 0 - 1 (with 1 being damage equal to what is done to an enemy)
ff_damage_reduction_other | sv, cl, rep, release | Default: 0.25<br>How much to reduce damage done to teammates by things other than bullets and grenades.  Range is from 0 - 1 (with 1 being damage equal to what is done to an enemy)
filesystem_buffer_size | devonly | Default: 0<br>Size of per file buffers. 0 for none
filesystem_fake_latency | devonly | Default: 0<br>
filesystem_max_stdio_read | devonly | Default: 16<br>
filesystem_native | devonly | Default: true<br>Use native FS or STDIO
filesystem_report_buffered_io | devonly | Default: false<br>
filesystem_unbuffered_io | devonly | Default: true<br>
filter_player_simulation_time | devonly, sv, cl, rep | Default: true<br>
find | release | Find concommands with the specified string in their name/help text.
findflags | release | Find concommands by flags.
fire_use_modifier | devonly, sv, cl, rep | Default: false<br>
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
fog_volume_debug | devonly, sv | Default: false<br>If enabled, prints diagnostic information about the current fog volume
font_show_glyph_miss | devonly | Default: false<br>
footstep_audible_threshold | devonly, sv, cl, rep | Default: 0.55<br>
footstep_debug | devonly, sv, cl, rep | Default: false<br>
footstep_force_volume | devonly, sv, cl, rep | Default: -1<br>
force_assert | devonly | Fire an assertion failure
force_fatal_error | devonly | Fire a fatal error
force_floating_point_exceptions | devonly | Enable floating point exceptions to find bugs
force_hibernate | devonly | Force toggle hibernation state
force_spectator_only_tools | devonly, cl, hidden, cheat | Default: false<br>
fov_cs_debug | cl, cheat | Default: 0<br>Sets the view fov if cheats are on.
fov_cs_near_z | devonly, cl, cheat | Default: 6.5<br>
fov_cs_super_ultrawide_near_z | devonly, cl, cheat | Default: 1<br>
fov_cs_ultrawide_near_z | devonly, cl, cheat | Default: 4<br>
fov_desired | cl, a, user | Default: 75<br>Sets the base field-of-view.
fp_trace | devonly | Toggle field path tracing to file<br>
fps_max | a, release | Default: 400<br>Frame rate limiter.  0=no limit.  Does not apply to dedicated server.
fps_max_tools | a | Default: 120<br>Additional frame rate limit while in tools mode and a window other than the game window has focus. Note that fps_max still applies, this only allows the maximum frame rate for tools mode to be lower. 0=no tools specific limit.
fps_max_ui | a | Default: 200<br>Frame rate limiter while the game UI is displayed.  0=no limit.  Does not apply to dedicated server.
frag_grenade_blip_frequency | devonly, sv, cl, rep | Default: 1<br>
freecamera_accel | devonly, cl | Default: 5<br>Tweak this parameter to adjust Free Camera movement acceleration.
freecamera_fog_end | devonly, cl | Default: 2500<br>Fog end for Free Camera.
freecamera_fog_start | devonly, cl | Default: 1800<br>Fog start for Free Camera.
freecamera_max_speed | devonly, cl | Default: 500<br>Tweak this parameter to adjust Free Camera movement max speed.
freecamera_rotation_multiplier | devonly, cl | Default: 10<br>Tweak this parameter to adjust Free Camera mouse rotation.
freecamera_zfar | devonly, cl | Default: 4500<br>Fog start for Free Camera.
fs_async_threads | devonly | Default: -1<br>Number of IO threads in async filesystem (-1 == auto)
fs_clear_open_duplicate_times | devonly | Clear the list of files that have been opened.
fs_dump_open_duplicate_times | devonly | Set fs_report_long_reads 1 before loading to use this. Prints a list of files that were opened more than once and ~how long was spent reading from them.
fs_fake_read_delay_ms | release | Default: 0<br>Add N ms of delay to every low-level read operation, to simulate a slow disk
fs_report_async_io | devonly | Default: false<br>
fs_report_long_reads | devonly | Default: 0<br>0:Off, 1:All (for tracking accumulated duplicate read times), &gt;1:Microsecond threashold
fs_report_sync_opens | release | Default: 0<br>0:Off, 1:Always, 2:Not during load
fs_spew_readfieldlist | cheat | index &lt;threshold bytes&gt;: spew changes to ent index, optionally only spewing if update is &gt; than threshold bytes
fs_warning_mode | devonly | Default: 0<br>0:Off, 1:Warn main thread, 2:Warn other threads
func_break_max_pieces | sv, a, rep | Default: 15<br>
func_break_reduction_factor | devonly, sv | Default: 0.5<br>
func_breakdmg_bullet | devonly, sv | Default: 0.5<br>
func_breakdmg_club | devonly, sv | Default: 1.5<br>
func_breakdmg_explosive | devonly, sv | Default: 1.25<br>
func_mover_async_movable_navmesh_updates | devonly, sv | Default: true<br>
func_mover_debug | devonly, sv | Default: false<br>
func_mover_debug_follower | devonly, sv | Default: false<br>
func_mover_get_speed_override | devonly, sv | Default: 0<br>
func_mover_use_velocities | devonly, sv | Default: false<br>
func_mover_verbose_log_count | devonly, sv | Default: 15<br>
fx_drawmetalspark | devonly, cl | Default: true<br>Draw metal spark effects.
g_debug_angularsensor | sv, cheat | Default: false<br>
g_debug_constraint_sounds | sv, cheat | Default: false<br>Enable debug printing about constraint sounds.
g_debug_doors | devonly, sv | Default: false<br>
g_debug_ragdoll_visualize | cl, cheat | Default: false<br>
g_debug_transitions | devonly, sv, cheat | Default: 0<br>Set to 1 and restart the map to be warned if the map has no trigger_transition volumes. Set to 2 to see a dump of all entities & associated results during a transition.
g_ragdoll_fadespeed | devonly, cl | Default: 600<br>
g_ragdoll_important_maxcount | devonly, sv, cl, rep | Default: 2<br>
g_ragdoll_lvfadespeed | devonly, cl | Default: 100<br>
g_ragdoll_maxcount | devonly, sv, cl, rep | Default: 5<br>
game_alias | release | Set the configuration of game type and mode based on game alias like "deathmatch".
game_mode | sv, cl, rep, release | Default: 1<br>The current game mode (based on game type). See GameModes.txt.
game_online | devonly, sv, cl, hidden, rep | Default: true<br>The current game is online.
game_particle_manager_dump_requeue | devonly, cl | Dump contents of particle manager requeue
game_particle_manager_list_active | devonly, cl | Dump counts of active particles
game_particle_manager_requeue_messages | devonly, cl, hidden | Default: true<br>
game_public | devonly, sv, cl, hidden, rep | Default: true<br>The current game is public.
game_type | sv, cl, rep, release | Default: 0<br>The current game type. See GameModes.txt.
gameevents_analyze | devonly, sv | compare game events across all mods
gameevents_dumptofile | devonly, sv | write gameevents keyvalues (sorted by name) to gameevents_&lt;modname&gt;.txt
gameevents_showeventlisteners | devonly | Default: false<br>Show listening addition/removals
gameevents_showevents | devonly | Default: 0<br>Dump game events to console. (1 = Show Signaling, 2 = Show Posting also).
gameinstructor_dump_open_lessons | cl, cheat | Gives a list of all currently open lessons.
gameinstructor_dump_run_lesson_counts | cl, cheat | Gives a list of lessons that been completed or shown
gameinstructor_enable | cl, release | Default: false<br>Display in game lessons that teach new players.
gameinstructor_find_errors | cl, cheat | Default: false<br>Set to 1 and the game instructor will run EVERY scripted command to uncover errors.
gameinstructor_reload_lessons | devonly, cl | Shuts down all open lessons and reloads them from the script file.
gameinstructor_reset_counts | devonly, cl | Resets all display and success counts to zero.
gameinstructor_start_sound_cooldown | devonly, cl | Default: 4<br>Number of seconds forced between similar lesson start sounds.
gameinstructor_teach_lesson | devonly, cl | Force a specific lesson to be triggered
gameinstructor_verbose | cl, cheat | Default: 0<br>Set to 1 for standard debugging or 2 (in combo with gameinstructor_verbose_lesson) to show update actions.
gameinstructor_verbose_lesson | cl, cheat | Default: <br>Display more verbose information for lessons have this name.
gamestats_file_output_directory | devonly, sv | Default: <br>When -gamestatsfileoutputonly is specified, file will be emitted here instead of to modpath<br>
gameui_activate | hidden, release | Shows the game UI
gameui_allowescape | hidden, release | Escape key allowed to hide game UI
gameui_allowescapetoshow | hidden, release | Escape key allowed to show game UI
gameui_hide | release | Hides the game UI
gameui_preventescape | hidden, release | Escape key doesn't hide game UI
gameui_preventescapetoshow | hidden, release | Escape key doesn't show game UI
gc_secret_key | devonly, sv, prot | Default: <br>Secret key for authenticating with the GC<br>
gcmd | cl, hidden, clientcmd_can_execute | Generate a command
generate_minidump_comment | devonly | Generate a minidump comment and spew the results to the console
generate_null_container | devonly | Generated a nulled out container.
generate_trash_synth | devonly | Args: \[Asset directory Path\]
getpos | cl, cheat | dump position and angles to the console
getpos_exact | cl, cheat | dump origin and angles to the console
give | sv | Give item to player.<br>	Arguments: &lt;item_name&gt;
give_oriented | sv | Give item oriented to player angles.<br>	Arguments: &lt;item_name&gt;
givecurrentammo | sv, cheat | Give a supply of ammo for current weapon..<br>
gl_clear | devonly, cl | Default: true<br>
global_set | sv, cheat | global_set &lt;globalname&gt; &lt;state&gt;: Sets the state of the given env_global (0 = OFF, 1 = ON, 2 = DEAD).
glow_chickens | devonly, sv | Default: false<br>Glow chickens with a green outline.
glow_outline_width | cl, cheat | Default: 6<br>Width of glow outline effect in screen space.
glow_use_tolerance | cl, rep, cheat | Default: 0.85<br>
god | sv, cheat | Toggle by default, or 0 to disable and 1 to enable. Player becomes invulnerable.
gotv_theater_container | cl, release | Default: <br>Enables GOTV theater mode for the specified container, setting it to 'live' will play top live matches
gpu_level | devonly, cl | Default: 3<br>GPU Level - Default: High
gpu_mem_level | devonly, cl | Default: 2<br>Memory Level - Default: High
graphcontroller_dumpparams | devonly, sv | Print all anim graph parameters for the specified entity.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
grep | release | grep line for pattern, print out matching lines only
groundlist | devonly, sv, cheat | Display ground entity list &lt;index&gt;
groups | sv, cheat | Show status of all spawn groups.
hairsim_force_fixed_timestep | devonly, cheat | Default: true<br>
hairsim_reset | devonly, cheat | Default: false<br>
healthshot_allow_use_at_full | sv, cl, rep, release | Default: true<br>
healthshot_health | sv, cl, rep, release | Default: 50<br>
healthshot_healthboost_damage_multiplier | sv, cl, rep, release | Default: 1<br>
healthshot_healthboost_speed_multiplier | sv, cl, rep, release | Default: 1<br>
healthshot_healthboost_time | sv, cl, rep, release | Default: 1<br>
help | release | Find help about a convar/concommand.
hideconsole | norecord, release | Hide the console.
hidehud | cl, cheat | Default: 0<br>bitmask: 1=weapon selection, 2=flashlight, 4=all, 8=health, 16=player dead, 32=needssuit, 64=misc, 128=chat, 256=crosshair, 512=vehicle crosshair, 1024=in vehicle
hideoverviewmap | devonly, cl | Hides the overview map
hideradar | devonly, cl | Hides HUD radar
hinttext_displaytime | devonly, cl | Default: 4<br>
host_force_frametime_to_equal_tick_interval | devonly | Default: false<br>
host_force_max_frametime_to_tick_interval | devonly | Default: false<br>
host_framerate | release | Default: 0<br>Set to lock per-frame time elapse.
host_readconfig_ignore_userconfig | cheat | Default: false<br>Whether we should ignore the user config file for reading/writing.
host_timescale | rep, cheat | Default: 1<br>Prescale the clock by this amount.
host_timescale_dec | cheat | Decrement the timescale by one step
host_timescale_inc | cheat | Increment the timescale by one step
host_workshop_collection | sv, release | Host a workshop map collection as a mapgroup
host_workshop_map | sv, release | Get the latest version of the map and host it on this server.
host_writeconfig | release | Saves out the user config values.
hostage_debug | sv, cl, rep, cheat | Default: 0<br>Show hostage AI debug information
hostage_drop_time | devonly, sv | Default: 1<br>Time for the hostage before it fully drops to ground
hostage_is_silent | sv, cl, rep, cheat | Default: false<br>When set, the hostage won't play any code driven response rules lines
hostfile | sv, release | Default: host.txt<br>The HOST file to load.
hostip | release | Default: 0<br>Host game server ip
hostname | release | Default: <br>Hostname for server.
hostname_in_client_status | release | Default: false<br>Show server hostname in client status.
hostport | release | Default: 27015<br>Host game server port
hud_fastswitch | cl, a | Default: 0<br>
hud_reloadscheme | devonly, cl | Reloads hud layout and animation scripts.
hud_scaling | cl, a | Default: 1<br>Scales hud elements
hud_showtargetid | cl, a, per_user | Default: true<br>Enables display of target names
hullivr_edge_merge_tan | devonly, rep | Default: 0.02<br>Should we try to straighten two faces connected to this edge? (tangent)
hullivr_faceisland_merge_disp | devonly, rep | Default: 0<br>Should we straighten face island if the displacement is this much? (inches)
hullivr_faceisland_merge_tan | devonly, rep | Default: 0.04<br>Should we try to straighten an island of faces deviating from their average normal (tangent)?
hullivr_version | devonly, rep | Default: 3<br>
hurtme | sv, cheat | Hurts the player.<br>	Arguments: &lt;health to lose&gt;
ic | devonly, cl | interp entity count<br>
ik_constraints_enabled | devonly, rep | Default: true<br>
ik_debug_all_chains_unique_color_per_chain | devonly, rep | Default: false<br>
ik_debug_ccd | devonly, rep | Default: 0<br>
ik_debug_chain_to_filter_by | sv, cl, rep, cheat | Default: <br>
ik_debug_constraints | devonly, rep | Default: -1<br>
ik_debug_dogleg3bone | devonly, rep | Default: 0<br>
ik_debug_dogleg3bone_enabled | devonly, rep | Default: true<br>
ik_debug_fabrik_backwards_enabled | devonly, rep | Default: true<br>
ik_debug_fabrik_backwards_iteration_toggle | devonly | 
ik_debug_fabrik_backwards_iterations | devonly, rep | Default: 0<br>
ik_debug_fabrik_forwards_enabled | devonly, rep | Default: true<br>
ik_debug_fabrik_forwards_iteration_toggle | devonly | 
ik_debug_fabrik_forwards_iterations | devonly, rep | Default: 0<br>
ik_debug_groundtraces | devonly, sv, cl, rep | Default: false<br>Show IK trace related details
ik_debug_perlin_solver | devonly, sv, cl, rep | Default: false<br>
ik_debug_planetilt | devonly, rep | Default: 0<br>
ik_debug_planetilt_axis_length | devonly, rep | Default: 20<br>
ik_debug_targets | devonly, rep | Default: false<br>
ik_enable | rep, cheat | Default: true<br>Enable IK.
ik_fabrik_align_chain | devonly, rep | Default: true<br>
ik_fabrik_backwards_enabled | devonly, rep | Default: true<br>
ik_fabrik_forwards_enabled | devonly, rep | Default: true<br>
ik_fabrik_override_num_iterations | devonly, rep | Default: -1<br>
ik_final_fixup_enable | devonly, rep | Default: true<br>
ik_hinge_debug_bone_index | sv, cl, rep, cheat | Default: -1<br>
ik_planetilt_enable | devonly, rep | Default: true<br>
ime_hkl_info | devonly, norecord | Spew IME HKL info.
ime_info | devonly, norecord | Spew IME info.
ime_installed_names | hidden, norecord, release | Spew list of installed IMEs.
ime_supported_info | devonly, norecord | Spew IME Supported info.
imgui_cycle_undocked_window_focus | devonly | Cycles focus between the game window and undocked imgui windows
imgui_debug_draw_dashboard_toggle_pause | devonly, sv, cl, a, rep, cheat | Default: false<br>Dashboard/Pause Game When Activated
imgui_debug_draw_dashboard_window | devonly, sv, cl, a, rep, cheat | Default: false<br>Dashboard/Show Dashboard
imgui_debug_draw_dashboard_window_toggle_focus | devonly, sv, cl, rep, cheat | Default: false<br>Dashboard toggle focus
imgui_debug_entity | sv, cheat | Shows the entity browser, focused on the entity you specify.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
imgui_default_font_size | a, cheat | Default: 20<br>Default imgui font size
imgui_domain | devonly, sv, cl, a, rep, cheat | Default: 2<br>1 == client, 2 == server
imgui_enable | devonly, sv, cl, rep, cheat | Default: false<br>if imgui should display
imgui_enable_input | devonly, sv, cl, rep, cheat | Default: false<br>if imgui should consume input
imgui_ent_text_enable | devonly, sv, cl, a, rep, cheat | Default: true<br>Show Entity Text in Window
imgui_set_selection | sv, cheat | Sets ImGui selection
imgui_set_status_text | sv, cheat | Sets ImGui header status text
imgui_show_bullets | devonly, sv, cl, a, rep, cheat | Default: false<br>CSGO/Bullets
imgui_show_grenades_window | devonly, sv, cl, a, rep, cheat | Default: false<br>CS2/Show Grenades History
imgui_temp_enable | devonly, sv, cl, rep, cheat | Default: false<br>if imgui should display temporarily
import_csgo_config | devonly, cl | Imports an existing CS:GO configuration file into CS2
impulse | cl, release | Triggers impulse command
in_button_double_press_window | devonly, sv, cl, rep | Default: 0.22<br>How short the time between presses needs to be for us to consider it a double-press
in_forcebuttonstate | devonly, sv | Forces a button to be a particular state - WHEN PROCESSING USERCOMMANDS
in_forceinput | devonly, cl | Forces a button to be a particular state -- WHEN SAMPLING INPUT
in_spewbuttondelta | devonly, sv, cl, rep | Default: 0<br>Spew button deltas, 0 = off, 1 = server, 2 = client, 3 = both
in_spewbuttonhold | devonly, sv, cl, rep | Default: 0<br>Spew button hold times, 0 = off, 1 = server, 2 = client, 3 = both
in_spewent | devonly, sv, cl, rep | Default: -1<br>Which entity should we spew input for? (Useful for debugging bot input)
in_spewinput | devonly, sv, cl, rep | Default: 0<br>Spew input, 0 = off, 1 = server, 2 = client, 3 = both
incrementvar | norecord, release | Increment specified convar value.
inferno_batched_rays | devonly, cl | Default: true<br>
inferno_child_spawn_interval_multiplier | sv, cheat | Default: 0.1<br>Amount spawn interval increases for each child
inferno_child_spawn_max_depth | sv, rep, release | Default: 4<br>
inferno_ct_experiment | sv, cl, rep, cheat | Default: true<br>enable ct incendiary experiment
inferno_damage | sv, cheat | Default: 40<br>Damage per second
inferno_damage_ct | sv, cheat | Default: 40<br>Damage per second from CT inferno
inferno_damage_timer | devonly, sv, cl, rep | Default: 0.2<br>How long between times for the inferno to deal damage.
inferno_debug | sv, cheat | Default: false<br>
inferno_dlight_spacing | cl, cheat | Default: 7200<br>Inferno dlights are at least this far apart
inferno_dlights | devonly, cl | Default: 30<br>Min FPS at which molotov dlights will be created
inferno_fire | devonly, cl | Default: 2<br>
inferno_flame_lifetime | sv, rep, release | Default: 7<br>Average lifetime of each flame in seconds
inferno_flame_lifetime_incendiary | sv, rep, release | Default: 5.5<br>Average lifetime of each flame in seconds (incgrenade)
inferno_flame_spacing | sv, cheat | Default: 42<br>Minimum distance between separate flame spawns
inferno_forward_reduction_factor | sv, cheat | Default: 0.9<br>
inferno_friendly_fire_duration | sv, cheat | Default: 6<br>For this long, FF is credited back to the thrower.
inferno_initial_spawn_interval | sv, cheat | Default: 0.02<br>Time between spawning flames for first fire
inferno_max_child_spawn_interval | sv, cheat | Default: 0.5<br>Largest time interval for child flame spawning
inferno_max_flames | sv, rep, release | Default: 16<br>Maximum number of flames that can be created
inferno_max_range | sv, rep, release | Default: 150<br>Maximum distance flames can spread from their initial ignition point
inferno_max_range_ct | sv, rep, release | Default: 110<br>Maximum distance flames can spread from their initial ignition point for an incendiary
inferno_max_trace_per_tick | devonly, sv | Default: 16<br>
inferno_per_flame_spawn_duration | sv, cheat | Default: 3<br>Duration each new flame will attempt to spawn new flames
inferno_smoke_volume_density | sv, cheat | Default: 0.03<br>
inferno_spawn_angle | sv, cheat | Default: 45<br>Angular change from parent
inferno_spread_speed_mult | sv, rep, release | Default: 1<br>Speed up the spreadrate of the Molotov until max number of nodes are created.  slowdown &lt; 1 &gt; Speedup
inferno_spread_speed_mult_ct | sv, rep, release | Default: 10<br>Speed up the spread rate of the Incendiary until max number of nodes are created. slowdown &lt; 1 &gt; Speedup
inferno_surface_offset | sv, cheat | Default: 15<br>
inferno_velocity_decay_factor | sv, cheat | Default: 0.2<br>
inferno_velocity_factor | sv, cheat | Default: 0.003<br>
inferno_velocity_factor_ct | sv, cheat | Default: 0.003<br>
inferno_velocity_normal_factor | sv, cheat | Default: 0<br>
input_button_code_is_scan_code_scd | a, per_user | Default: true<br>Bind keys based on keyboard position instead of key name
input_downimpulsevalue | devonly, cl | Default: 0.7<br>
input_filter_relative_analog_inputs | cl, a | Default: false<br>
input_forceuser | cheat | Default: -1<br>Force user input to this split screen player.
input_state | devonly | input_state
input_upimpulsevalue | devonly, cl | Default: 0.3<br>
install_dlc_workshoptools_cvar | cl, release | Default: -1<br>DLC Install Status
instant_replay | devonly | Default: true<br>Enable instant replay recording.
instant_replay_goto_tick | devonly | Goto a direct timestamp of the replay
instant_replay_goto_tick_relative | devonly | Goto a direct timestamp of the replay
instant_replay_history_limit | devonly | Default: 120<br>Maximum amount of minutes to save history (0 is unlimited).
instant_replay_history_limit_low | devonly | Default: 10<br>Maximum amount of minutes to save history on low memory (32 bit) systems (0 is unlimited).
instant_replay_live | devonly | If in replay, jumps back to live
instant_replay_pause | devonly | Pauses instant replay.
instant_replay_resume | devonly | Resumes instant replay.
instant_replay_skip | devonly | Number of seconds to skip back to instant replay from current position
instant_replay_skip_live | devonly | Number of seconds to skip back to instant replay from live
instant_replay_timescale | devonly | Sets instant replay speed.
instant_replay_togglepause | devonly | Toggles instant replay.
invnext | cl, server_can_execute | 
invnextselect | cl, server_can_execute | 
invprev | cl, server_can_execute | 
invprevselect | cl, server_can_execute | 
ip | release | Default: <br>Overrides IP for multihomed hosts
iv_debug | devonly, cl | Spew interpolated var info for entity.
iv_debugbone | release | Default: <br>Debug bone name for interpolation spew of CAnimationState.
iv_interp | devonly, cl | Spew interpolated var info for entity.
iv_off | devonly, cl | Turn off all interpolation variable spew.
iv_on | devonly, cl | Spew both interpolated var debug info and history for entity.
iv_parallel_latch | devonly, cl | Default: true<br>
iv_parallel_restore | devonly, cl | Default: false<br>
iv_wrapped_parallel_latch | devonly, cl | Default: true<br>
joy_accel_filter | devonly, cl | Default: 0.2<br>
joy_accelmax | devonly, cl | Default: 1<br>
joy_accelscale | devonly, cl | Default: 0.6<br>
joy_advanced | cl, a | Default: false<br>
joy_advaxisr | cl, a | Default: 0<br>
joy_advaxisu | cl, a | Default: 0<br>
joy_advaxisv | cl, a | Default: 0<br>
joy_advaxisx | cl, a | Default: 0<br>
joy_advaxisy | cl, a | Default: 0<br>
joy_advaxisz | cl, a | Default: 0<br>
joy_autosprint | devonly, cl | Default: 0<br>Automatically sprint when moving with an analog joystick
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
joy_lowend | devonly, cl | Default: 1<br>
joy_lowmap | devonly, cl | Default: 1<br>
joy_movement_stick | cl, a, per_user | Default: false<br>Which stick controls movement (0 is left stick)
joy_name | cl, a | Default: joystick<br>
joy_pegged | devonly, cl | Default: 0.75<br>
joy_pitch_sensitivity | cl, a, per_user | Default: 3<br>
joy_pitchsensitivity | cl, a, per_user | Default: 1<br>
joy_response_look | cl, a, per_user | Default: 0<br>
joy_response_move | cl, a, per_user | Default: 9<br>
joy_response_move_vehicle | devonly, cl | Default: 6<br>
joy_sensitive_step0 | devonly, cl | Default: 0.1<br>
joy_sensitive_step1 | devonly, cl | Default: 0.4<br>
joy_sensitive_step2 | devonly, cl | Default: 0.9<br>
joy_side_sensitivity | cl, a, per_user | Default: 1<br>
joy_sidesensitivity | cl, a | Default: 1<br>
joy_vehicle_turn_lowend | devonly, cl | Default: 0.7<br>
joy_vehicle_turn_lowmap | devonly, cl | Default: 0.4<br>
joy_virtual_peg | devonly, cl | Default: 0<br>
joy_xcontroller_cfg_loaded | devonly, cl | Default: false<br>If 0, the 360controller.cfg file will be executed on startup & option changes.
joy_yaw_sensitivity | cl, a, per_user | Default: 3<br>
joy_yawsensitivity | cl, a, per_user | Default: -1<br>
joystick | cl, a | Default: false<br>True if the joystick is enabled, false otherwise.
jpeg_quality | devonly | Default: 90<br>Set jpeg screenshot quality. \[1..100\]
jpeg_screenshot | devonly | Take a jpeg screenshot: jpeg_screenshot \[filename\] \[quality 1-100\].
key_bind_version | cl, hidden, a, release | Default: 0<br>
key_findbinding | release | Find key bound to specified command string.
key_listboundkeys | release | List bound keys with bindings.
key_updatelayout | devonly | Updates game keyboard layout to current windows keyboard setting.
keychain_animation_reactivity | devonly, cl | Default: 0.25<br>
keychain_preview_limit_step | devonly, cl | Default: 0.125<br>
keychain_reactivity | devonly, cl | Default: 0.05<br>
keychain_wmul | devonly, cl | Default: 1<br>
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
launch_training_map | devonly, cl | 
launch_warmup_map | cl, norecord, clientcmd_can_execute | Launches warmup map
lb_allow_shadow_rotation | devonly, cheat | Default: true<br>SceneSystem/LightBinner/Shadow Rotation
lb_allow_time_sliced_shadow_map_rendering | devonly | Default: true<br>Allow time-sliced shadow buffer rendering when enabled via gameinfo.gi
lb_barnlight_shadow_use_precomputed_vis | devonly | Default: true<br>
lb_barnlight_shadowmap_scale | release | Default: 1<br>Scale for computed barnlight shadowmap size
lb_bin_slices | devonly | Default: 8192<br>
lb_convert_to_barn_lights_falloff_match_point | devonly | Default: 0.15<br>
lb_csm_cascade_size_override | devonly | Default: -1<br>Override width/height of individual cascades in the CSM
lb_csm_cross_fade_override | devonly | Default: -1<br>Override CSM cross fade amount
lb_csm_distance_fade_override | devonly | Default: -1<br>Override CSM distance fade
lb_csm_draw_alpha_tested | devonly | Default: true<br>
lb_csm_draw_translucent | devonly | Default: true<br>
lb_csm_fov_override | devonly, cheat | Default: -1<br>
lb_csm_override_bulb_radius | devonly | Default: -1<br>Override bulb radius for CSM
lb_csm_override_staticgeo_cascades | devonly | Default: false<br>Override Cascades that will render static objects with lb_csm_override_staticgeo_cascades_value
lb_csm_override_staticgeo_cascades_animated_verts | devonly | Default: true<br>If lb_csm_override_staticgeo_cascades, ensure only objects without animated verts, i.e. SCENEOBJECTFLAG_CAN_RENDER_INTO_SST flag will be excluded (as opposed to all static objects).
lb_csm_override_staticgeo_cascades_value | devonly | Default: -1<br>If lb_csm_override_staticgeo_cascades, override value used to determine which cascades render static objects
lb_csm_receiver_plane_depth_bias | devonly | Default: 1.526e-05<br>Shader depth bias applied to shadow receiver (Note this conflicts with renderstate depth bias, both now default to 0)
lb_csm_receiver_plane_depth_bias_transmissive_backface | devonly | Default: 0.00015<br>Depth bias applied to shadow receiver for transmissive backface geo (based on renderstate depthbias being 0)
lb_cubemap_normalization_max | devonly | Default: 1<br>
lb_cubemap_normalization_roughness_begin | devonly | Default: 0.1<br>
lb_debug_light_bounds | devonly, cheat | Default: false<br>SceneSystem/LightBinner/Debug Light Bounds
lb_debug_shadow_atlas | devonly, cheat | Default: false<br>SceneSystem/LightBinner/Debug Shadow Atlas
lb_debug_shadowtile_atlas | devonly, cheat | Default: false<br>SceneSystem/LightBinner/Debug ShadowTile Atlas
lb_debug_silhouette | devonly, cheat | Default: 0<br>SceneSystem/LightBinner/Debug Silhouettes
lb_debug_tiles | devonly, cheat | Default: 0<br>SceneSystem/LightBinner/Debug Tiles
lb_debug_visualize_lights | devonly, cheat | Default: 0<br>SceneSystem/LightBinner/Debug Visualize Lights
lb_debug_visualize_shadowed_light_details | devonly, cheat | Default: false<br>
lb_debug_visualize_shadowed_lights | devonly, cheat | Default: 0<br>SceneSystem/LightBinner/Debug Visualize Shadowed Lights
lb_dynamic_shadow_penumbra | devonly | Default: true<br>Adjust shadow penumbra based on light size
lb_dynamic_shadow_resolution | devonly | Default: true<br>Dynamically adjust shadow resolution
lb_dynamic_shadow_resolution_base | devonly | Default: 1024<br>Base resolution for dynamic shadowmap sizing.  Shadowmap size of a screen sized light
lb_dynamic_shadow_resolution_base_cmp_shadowmapsize | devonly, cheat | Default: false<br>take min of lb_dynamic_shadow_resolution and barnlight shadowmapsize as base shadowmapsize
lb_dynamic_shadow_resolution_delay | devonly | Default: 0.85<br>Update delay for shadow size
lb_dynamic_shadow_resolution_hysteresis | devonly | Default: 0.33<br>Update hysteresis for shadow size
lb_dynamic_shadow_resolution_quantization | devonly | Default: 64<br>Quantization of dynamically computed shadow size
lb_enable_baked_shadows | devonly, cheat | Default: true<br>SceneSystem/LightBinner/Enable Baked Shadows
lb_enable_binning | devonly | Default: true<br>SceneSystem/LightBinner/Enable Binning
lb_enable_dynamic_lights | devonly, cheat | Default: true<br>Allows rendering dynamic lights
lb_enable_envmaps | devonly, cheat | Default: true<br>SceneSystem/LightBinner/Enable EnvMaps
lb_enable_fog_mixed_shadows | devonly, cheat | Default: true<br>SceneSystem/LightBinner/Enable Fog Mixed Shadows
lb_enable_lights | devonly, cheat | Default: true<br>SceneSystem/LightBinner/Enable Lights
lb_enable_shadow_casting | devonly | Default: true<br>Allow stationary/dynamic lights to cast shadows.
lb_enable_stationary_lights | devonly, cheat | Default: true<br>Allows rendering stationary/mixed lights
lb_enable_sunlight | devonly, cheat | Default: true<br>SceneSystem/LightBinner/Enable Sunlight
lb_low_quality_shader_fade_region_rescale | devonly, cheat | Default: 0.5<br>For envmaps in low quality shader mode, how much of the fade region to scale the envmap box by.
lb_max_visible_barn_lights_override | devonly, cheat | Default: -1<br>Override maximum visible barn lights
lb_max_visible_envmaps_override | devonly, cheat | Default: -1<br>Override maximum visible envmaps
lb_mixed_shadows | devonly, cheat | Default: true<br>SceneSystem/LightBinner/Enable Mixed Shadows
lb_override_barn_light_fade_sizes | devonly, cheat | Default: 0.05 0.025<br>
lb_override_barn_light_fade_sizes_enable | devonly, cheat | Default: false<br>
lb_override_barn_light_shadow_fade_sizes | devonly, cheat | Default: 0.1 0.05<br>
lb_shadow_map_cull_empty_mixed | cheat | Default: false<br>Don't render shadows for mixed shadowmaps with no dynamics objects in view
lb_shadow_map_culling | cheat | Default: true<br>
lb_shadow_texture_height_override | devonly | Default: -1<br>Override height of shadow atlas texture
lb_shadow_texture_width_override | devonly | Default: -1<br>Override width of shadow atlas texture
lb_ssss_importance_sample | devonly | Default: false<br>
lb_ssss_samples | devonly | Default: 11<br>Subsurface sample count
lb_sun_csm_size_cull_threshold_texels | devonly | Default: 10<br>Size, in texels, where we will cull an object in the shadowmap
lb_tile_pixels | devonly | Default: 8<br>
lb_timesliced_shadows_dynamic_size | devonly | Default: true<br>
lb_use_ellipsoid_bounds | devonly, cheat | Default: true<br>
lb_use_illumination_silhouette | devonly, cheat | Default: true<br>SceneSystem/LightBinner/Use Illumination Bounds
leaderboards_cache_duration | devonly, cl | Default: 600<br>
legacy_models_supported | devonly | Default: true<br>Whether to support legacy (pre-modeldoc) models
lightquery_debug_direct_lighting | sv, cl, rep, cheat | Default: true<br>
lightquery_debug_indirect_lighting | sv, cl, rep, cheat | Default: true<br>
listRecentNPCSpeech | devonly, sv, norecord | Displays a list of the last 5 lines of speech from NPCs.
listdemo | release | List demo file contents.
listid | devonly | Lists banned users.
listip | devonly | List IP addresses on the ban list.
listissues | sv | List all the issues that can be voted on.
load | devonly, norecord | Usage:<br>   load \[save file name\]<br>
lobby_default_privacy_bits2 | cl, a, release | Default: 1<br>Lobby default permissions (0: private, 1: public)
lobby_gamesearch_fake | devonly, cl | Default: 0<br>
lobby_stats_fake | devonly, cl | Default: false<br>
localization_quest_item_string_printout | devonly, cl | localization_quest_item_string_printout
locator_topdown_style | devonly, cl | Default: false<br>Topdown games set this to handle distance and offscreen location differently.
lockMoveControllerRet | cl, a | Default: false<br>
log | release | Enables logging to file, console, and udp &lt; on \| off &gt;.
log_color | norecord, release | Set the color of a logging channel.
log_dumpchannels | norecord, release | Dumps information about all logging channels.
log_flags | norecord, release | Set the flags on a logging channel.
log_level | norecord, release | Set the spew level of a logging channel.
log_verbosity | norecord, release | Set the verbosity of a logging channel.
logaddress_add_http | sv, unlogged, release | Set URI of a listener to receive logs via http post. Wrap URI in double quotes.
logaddress_add_http_delayed | sv, unlogged, release | Set a delay and URI of a listener to receive logs via http post. Wrap URI in double quotes.
logaddress_del_http | sv, unlogged, release | Remove http listener by URI. Wrap URI in double quotes.
logaddress_delall_http | sv, unlogged, release | Remove all http listeners from the dispatch list.
logaddress_list_http | sv, unlogged, release | List all URIs currently receiving server logs
logaddress_token_secret | sv, release | Default: <br>Set a secret string that will be hashed when using logaddress with explicit token hash.
logic_npc_counter_debug | sv, rep, cheat | Default: false<br>
loop_dump | devonly | Print the listeners of the current loop mode
lrucache_flush | devonly | Flushes the specified cache
lrucache_reset_stats | devonly | Resets stats for the specified CUtlLRUCaches (or all if none specified)
lrucache_set_size | devonly | Sets the specified cache to the specified size
lrucache_stats | devonly | Spews information about all CUtlLRUCaches
lservercfgfile | devonly, sv | Default: listenserver.cfg<br>
lua_assert_on_error | devonly | Default: false<br>
lua_is_currently_executing | hidden, norecord, release | Default: false<br>
lua_report_memory | devonly | 
lua_shipping_assert_on_error | devonly | Default: false<br>
m_pitch | cl, a, user, per_user | Default: 0.022<br>Mouse pitch factor.
m_yaw | cl, a, user, per_user | Default: 0.022<br>Mouse yaw factor.
map | release | map &lt;mapname&gt; :Load a new map.
map_enable_portrait_worlds | cl, cheat | Enables/disables portrait worlds
map_setbombradius | sv, cheat | Sets the bomb radius for the map.
map_showbombradius | sv, cheat | Shows bomb radius from the center of each bomb site and planted bomb.
map_showspawnpoints | devonly, sv | Shows player spawn points (red=invalid). Optionally pass in the duration.
map_workshop | cl, release | Launch a workshop map
mapcyclefile | devonly, sv | Default: mapcycle.txt<br>Name of the .txt file used to cycle the maps on multiplayer servers 
mapgroup | sv, norecord, release | Specify a map group
mapoverview_allow_client_draw | cl, release | Default: false<br>Allow a client to draw on the map overview
mapoverview_icon_scale | cl, a, release | Default: 1<br>Sets the icon scale multiplier for the overview map. Valid values are 0.5 to 3.0.
maps | release | Displays list of maps.
markup_group_ent_bbox | sv, cheat | markup_group_ent_bbox &lt;markup_group name&gt; -&gt; toggle ent_bbox for all members of the named markup group
markup_group_ent_text | sv, cheat | markup_group_ent_text &lt;markup_group name&gt; -&gt; toggle ent_text for all members of the named markup group
markup_group_spew | sv, cheat | Spew all current markup groups and their members
markup_volume_ref_cone_angle | devonly, sv | Default: 135<br>
mat_assert_on_error_shader_use | devonly | Default: false<br>
mat_assert_on_shader_use | devonly | Assert on shader used based on substring of shader name
mat_cache_and_skip_commandbuffers | devonly | Default: true<br>
mat_cache_renderablepasses | devonly | Default: true<br>
mat_clearshadercache | devonly | Clears the shader cache used for dynamic shader compile.
mat_colcorrection_disableentities | devonly, cl | Default: false<br>Disable map color-correction entities
mat_colcorrection_editor | devonly, cl | Default: false<br>
mat_colcorrection_forceentitiesclientside | cl, cheat | Default: false<br>Forces color correction entities to be updated on the client
mat_colorcorrection | devonly | Default: true<br>
mat_debug | devonly, cl | Sets a mat_fullbright debug visualization mode
mat_depthbias_shadowmap | devonly, cl | Default: 0.0005<br>
mat_disable_dynamic_shader_compile | devonly | Reloads all shaders from vcs files until the next time mat_reloadshaders is called
mat_disable_normal_mapping | cl, cheat | Default: false<br>
mat_execute_skipbuffers | devonly | Default: true<br>
mat_forcereloadshaders | devonly | Force reloads all shaders (skips MD5 check). Takes optional substrings of shader names to recompile as arguments.
mat_fullbright | cheat | Default: 0<br>Debug rendering modes
mat_hide_error_shader | devonly | Default: false<br>
mat_lpv_luxels | cheat | Default: false<br>
mat_luxels | cheat | Default: false<br>
mat_max_lighting_complexity | cheat | Default: 8<br>
mat_overdraw | cheat | Default: 0<br>Visualize overdraw
mat_overdraw_color | cheat | Default: 0.075 0.15 0.3<br>
mat_print_dead_materials | devonly | Print loaded materials that have no valid layers due to not supporting any of the modes in gameinfo.gi.
mat_print_error_materials | devonly | Print loaded materials that are using the error shader or material.
mat_print_expensive_materials | devonly | Print materials sorted by cost heuristic
mat_print_material_info | devonly | Print info about a specific material
mat_print_materials | devonly | Print loaded materials. Takes an optional substring as an argument.
mat_print_materials_last_frame | devonly | Print materials used last frame
mat_print_materials_unused | devonly | Print materials that have never been used
mat_print_modes | devonly | Print supported rendering modes.
mat_print_shader_info | devonly | Print detailed info about a single shader. Takes a shader name (hero.vfx) as an argument.
mat_print_shader_quality | devonly | Print current shader quality setting
mat_print_shaders | devonly | Print loaded shaders. Takes a substring as an argument.
mat_print_textures | devonly | Print loaded textures in alphabetical order. Takes an optional substring as an argument.
mat_print_textures_size | devonly | Print loaded textures in ascending size order. Takes an optional substring as an argument.
mat_print_textures_size_in_memory | devonly | Print loaded textures in ascending size order as they are in memory. Takes an optional substring as an argument.
mat_reinitmaterials | devonly | Reinitializes all loaded materials, reloading their shaders.
mat_reloadshaders | devonly | Reloads all shaders. Takes optional substrings of shader names to recompile as arguments.
mat_reset_material_costs | devonly | Reset material cost heuristic
mat_set_shader_quality | devonly | Force shader quality setting (valid values are 0 or 1)
mat_shader_cache | devonly | Default: true<br>
mat_shading_complexity | cheat | Default: false<br>Visualize shading complexity
mat_shading_complexity_color | cheat | Default: 1 0.5 0.25<br>
mat_shading_complexity_max_instruction_count | cheat | Default: 1024<br>
mat_shading_complexity_max_register_count | cheat | Default: 128<br>
mat_shadowmap_luxels | cheat | Default: false<br>
mat_show_distance_field | cheat | Default: 0<br>0=Off, 1=Visualize trace from camera, 2=Visualize occlusion, 3=Visualize far field trace from camera
mat_skip_static_const_eval | devonly | Default: true<br>
mat_slopescaledepthbias_shadowmap | devonly, cl | Default: 4<br>
mat_tonemap_bloom_scale | cheat | Default: -1<br>
mat_tonemap_bloom_start_value | cheat | Default: -1<br>
mat_tonemap_debug | devonly | Default: 0<br>
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
mat_viewportscale | devonly, cl | Default: 1<br>Scale down the main viewport (to reduce GPU impact on CPU profiling)
mat_warn_bad_modes | devonly | Default: false<br>
mat_wireframe | cheat | Default: 0<br>0=Off, 1=Surface Wireframe, 2=Transparent Wireframe
matchdraft_debug_sendlog | cl, hidden, norecord, release, clientcmd_can_execute | Print debug draft into HTTP log
mem_compact | devonly | Compacts the heap
mem_dump | devonly | Dump memory stats to text file or &lt;stdout&gt;.
mem_level | devonly, cl | Default: 2<br>Memory Level - Default: High
mem_test | devonly | 
mem_test_each_frame | devonly | Default: false<br>Run heap check at end of every frame
mem_test_every_n_seconds | devonly | Default: 0<br>Run heap check at a specified interval
mem_test_quiet | devonly | Default: false<br>Don't print stats when memtesting
memory | devonly | Print memory stats.
memory_check_limit | devonly | Assert if peak memory use is over the limit.
menuselect | cl, clientcmd_can_execute | menuselect
mesh_calculate_curvature_smooth_invert | sv, cl, rep, cheat | Default: false<br>
mesh_calculate_curvature_smooth_pass_count | sv, cl, rep, cheat | Default: 3<br>
mesh_calculate_curvature_smooth_weight | sv, cl, rep, cheat | Default: 1<br>
mic_listen_while_nonfocused | devonly, cl | Default: false<br>Enables the ability for the mic to remain open if the window loses focus such as when a caster tabs out to adjust settings
minimap_create | cl, cheat | Does a bunch of work to create a minimap
mm_csgo_community_search_players_min | a, release | Default: 3<br>When performing CSGO community matchmaking look for servers with at least so many human players
mm_datacenter_debugprint | devonly | Shows information retrieved from data center
mm_datacenter_query_delay | devonly | Default: 5<br>Delay after datacenter update is enabled before data is actually queried.
mm_datacenter_retry_interval | devonly | Default: 75<br>Interval between datacenter stats retries.
mm_datacenter_update_interval | devonly | Default: 3600<br>Interval between datacenter stats updates.
mm_debug_friend_rp | devonly | Default: 0<br>
mm_debugprint | devonly | Show debug information about current matchmaking session
mm_dedicated_allow | devonly | Default: true<br>1 = allow searches for dedicated servers
mm_dedicated_fake | devonly | Default: false<br>1 = pretend like search is going, but abort after some time
mm_dedicated_force_servers | release | Default: <br>Comma delimited list of ip:port of servers used to search for dedicated servers instead of searching for public servers.<br>Use syntax `publicip1:port\|privateip1:port,publicip2:port\|privateip2:port` if your server is behind NAT.<br>If the server is behind NAT, you can specify `0.0.0.0\|privateip:port` and if server port is in the list of `mm_server_search_lan_ports` its public address should be automatically detected.
mm_dedicated_ip | devonly | Default: <br>IP address of dedicated servers to consider available
mm_dedicated_search_maxping | a | Default: 150<br>Longest preferred ping to dedicated servers for games
mm_dedicated_search_maxresults | devonly | Default: 75<br>
mm_dedicated_timeout_request | devonly | Default: 20<br>
mm_dlcs_mask_extras | devonly | Default: 0<br>
mm_dlcs_mask_fake | devonly | Default: <br>
mm_events_listeners_validation | devonly | Default: false<br>
mm_ignored_sessions_forget_pass | devonly | Default: 5<br>
mm_ignored_sessions_forget_time | devonly | Default: 600<br>
mm_ignored_sessions_reset | devonly | Reset ignored sessions
mm_match_search_update_interval | devonly | Default: 10<br>Interval between matchsearcher updates.
mm_player_search_count | devonly | Default: 5<br>
mm_player_search_lan_ping_duration | devonly | Default: 3.5<br>Duration of LAN discovery ping phase.
mm_player_search_lan_ping_interval | devonly | Default: 0.5<br>Interval between LAN discovery pings.
mm_player_search_requests_limit | devonly | Default: -1<br>How many friend requests are displayed.
mm_player_search_update_interval | devonly | Default: 10<br>Interval between players searches.
mm_queue_draft_show | cl, hidden, clientcmd_can_execute | Display current draft
mm_queue_show_stats | cl, clientcmd_can_execute | Display global server stats
mm_server_search_inet_ping_interval | devonly | Default: 1<br>How long to wait between pinging internet server details.
mm_server_search_inet_ping_refresh | devonly | Default: 15<br>How often to refresh a listed server.
mm_server_search_inet_ping_timeout | devonly | Default: 3<br>How long to wait for internet server details.
mm_server_search_inet_ping_window | devonly | Default: 10<br>How many servers can be pinged for server details in a batch.
mm_server_search_lan_ping_duration | devonly | Default: 1<br>Duration of LAN discovery ping phase.
mm_server_search_lan_ping_interval | devonly | Default: 0.4<br>Interval between LAN discovery pings.
mm_server_search_lan_ports | a, release | Default: 27015,27016,27017,27018,27019,27020<br>Ports to scan during LAN games discovery. Also used to discover and correctly connect to dedicated LAN servers behind NATs.
mm_server_search_server_lifetime | devonly | Default: 180<br>How long until a server is no longer returned by the master till we remove it.
mm_server_search_update_interval | devonly | Default: 60<br>Interval between servers updates.
mm_session_search_num_results | devonly | Default: 10<br>
mm_session_search_qos_timeout | release | Default: 15<br>
mm_session_sys_connect_timeout | devonly | Default: 8<br>
mm_session_sys_delay_create | devonly | Default: 0<br>
mm_session_sys_delay_create_host | devonly | Default: 1.2<br>
mm_session_sys_kick_ban_duration | release | Default: 180<br>
mm_session_sys_pkey | release | Default: <br>
mm_session_sys_ranking_timeout | devonly | Default: 12<br>
mm_session_sys_slots_guaranteed | devonly | Default: 10<br>
mm_session_team_res_timeout | devonly | Default: 30<br>
mm_session_voice_loading | devonly | Default: false<br>
mm_sv_load_test | devonly | Default: false<br>
mm_teamsearch_errortime | devonly | Default: 3<br>Time team search is in error state until it self-cancels
mm_teamsearch_nostart | devonly | Default: false<br>Team search will fake cancel before searching for server
mm_title_debug_version | devonly | Default: 0<br>This matchmaking version will override .res file version for isolating matchmaking
mm_tu_string | devonly | Default: 00000000<br>
mm_use_p2p_for_listen_server | devonly | Default: true<br>
mobile_fps_increase_during_charging | a | Default: false<br>MOBILE_FPS_CONTROL: If true we increase framerate limit while charging
mobile_fps_increase_during_hfr_animations | devonly, hidden | Default: true<br>MOBILE_FPS_CONTROL: If true we increase framerate limit during HFR-tagged animations and transitions.
mobile_fps_increase_during_touch | a | Default: true<br>MOBILE_FPS_CONTROL: If true we increase framerate limit during touch
mobile_fps_limit | a | Default: 30<br>MOBILE_FPS_CONTROL: Mobile FPS limit - 15, 30, 60
model_default_preview_sequence_name | sv, cl, a, rep | Default: <br>
model_dump_convert_info | devonly, sv, cl | Print model load-time conversion info
molotov_throw_detonate_time | sv, cl, rep, release | Default: 2<br>
molotov_usethrow_direction | sv, cheat | Default: false<br>
motdfile | sv, release | Default: motd.txt<br>The MOTD file to load.
mouse_disableinput | devonly | Default: false<br>Set to disable mouse input
mouse_inverty | cl, a, user | Default: false<br>
movement_stats_debug_draw | sv, cheat | Default: false<br>
movement_stats_force_calculate | sv, cheat | Default: false<br>
movie_fixwave | devonly | Fixup corrupted .wav file if engine crashed during startmovie/endmovie, etc.
mp_afterroundmoney | sv, cl, rep, release | Default: 0<br>amount of money awared to every player after each round
mp_allowspectators | devonly, sv, cl, rep | Default: true<br>toggles whether the server allows spectator mode or not
mp_anyone_can_pickup_c4 | sv, cl, rep, release | Default: false<br>If set, everyone can pick up the c4, not just Ts.
mp_autokick | sv, rep, release | Default: true<br>Kick idle/team-killing/team-damaging players
mp_autoteambalance | sv, nf, release | Default: true<br>
mp_backup_restore_list_files | sv, release | Lists recent backup round files matching the prefix, most recent files first, accepts a numeric parameter to limit the number of files displayed
mp_backup_restore_load_autopause | sv, release | Default: true<br>Whether to automatically pause the match after restoring round data from backup
mp_backup_restore_load_file | sv, release | Loads player cash, KDA, scores and team scores; resets to the next round after the backup
mp_backup_round_auto | sv, release | Default: true<br>If enabled will keep in-memory backups to handle reconnecting players even if the backup files aren't written to disk
mp_backup_round_file | sv, release | Default: backup<br>If set then server will save all played rounds information to files filename_date_time_team1_team2_mapname_roundnum_score1_score2.txt
mp_backup_round_file_last | sv, release | Default: <br>Every time a backup file is written the value of this convar gets updated to hold the name of the backup file.
mp_backup_round_file_pattern | sv, release | Default: %prefix%_round%round%.txt<br>If set then server will save all played rounds information to files named by this pattern, e.g.'%prefix%_%date%_%time%_%team1%_%team2%_%map%_round%round%_score_%score1%_%score2%.txt'
mp_bot_ai_bt | sv, release | Default: <br>Use the specified behavior tree file to drive the bot behavior.
mp_bot_ai_bt_clear_cache | sv, release | Clears the cache for behavior tree files.
mp_buy_allow_grenades | sv, cl, rep, release | Default: true<br>Whether players can purchase grenades from the buy menu or not.
mp_buy_allow_guns | sv, cl, rep, release | Default: 255<br>Whether players can purchase guns: pistols (1), SMGs (2), rifles (4), shotguns (8), sniper rifles (16), heavy MGs (32).
mp_buy_anywhere | sv, cl, nf, rep, release | Default: 0<br>When set, players can buy anywhere, not only in buyzones. 0 = default. 1 = both teams. 2 = Terrorists. 3 = Counter-Terrorists.
mp_buy_during_immunity | sv, cl, nf, rep, release | Default: 0<br>When set, players can buy when immune, ignoring buytime. 0 = default. 1 = both teams. 2 = Terrorists. 3 = Counter-Terrorists.
mp_buytime | sv, cl, rep, release | Default: 90<br>How many seconds after round start players can buy items for.
mp_c4_cannot_be_defused | sv, cl, rep, release | Default: false<br>If set, the planted c4 cannot be defused.
mp_c4timer | sv, cl, nf, rep, release | Default: 40<br>how long from when the C4 is armed until it blows
mp_chattime | devonly, sv, cl, rep | Default: 10<br>amount of time players can chat after the game is over
mp_competitive_endofmatch_extra_time | sv, release | Default: 15<br>After a competitive match finishes rematch voting extra time is given for rankings.
mp_consecutive_loss_aversion | sv, cl, rep, release | Default: 1<br>How loss streak is affected with round win: 0 = win fully resets loss bonus, 1 = first win steps down loss bonus, 2 = first win holds loss bonus and step down starting with second win
mp_consecutive_loss_max | sv, cl, rep, release | Default: 4<br>
mp_coopmission_bot_difficulty_offset | sv, rep, release | Default: 0<br>The difficulty offset modifier for bots during coop missions.
mp_ct_default_grenades | sv, cl, rep, release | Default: <br>The default grenades that the CTs will spawn with.	 To give multiple grenades, separate each weapon class with a space like this: 'weapon_molotov weapon_hegrenade'
mp_ct_default_melee | sv, cl, rep, release | Default: weapon_knife<br>The default melee weapon that the CTs will spawn with.	 Even if this is blank, a knife will be given.	To give a taser, it should look like this: 'weapon_knife weapon_taser'.	 Remember to set mp_weapons_allow_zeus to 1 if you want to give a taser!
mp_ct_default_primary | sv, cl, rep, release | Default: <br>The default primary (rifle) weapon that the CTs will spawn with
mp_ct_default_secondary | sv, cl, rep, release | Default: weapon_hkp2000<br>The default secondary (pistol) weapon that the CTs will spawn with
mp_damage_headshot_only | sv, cl, rep, release | Default: false<br>Determines whether non-headshot hits do any damage.
mp_damage_scale_ct_body | sv, cl, rep, release | Default: 1<br>Scales the damage a CT player takes by this much when they take damage in the body. (1 == 100%, 0.5 == 50%)
mp_damage_scale_ct_head | sv, cl, rep, release | Default: 1<br>Scales the damage a CT player takes by this much when they take damage in the head (1 == 100%, 0.5 == 50%).  REMEMBER! headshots do 4x the damage of the body before this scaler is applied.
mp_damage_scale_t_body | sv, cl, rep, release | Default: 1<br>Scales the damage a T player takes by this much when they take damage in the body. (1 == 100%, 0.5 == 50%)
mp_damage_scale_t_head | sv, cl, rep, release | Default: 1<br>Scales the damage a T player takes by this much when they take damage in the head (1 == 100%, 0.5 == 50%).	 REMEMBER! headshots do 4x the damage of the body before this scaler is applied.
mp_damage_vampiric_amount | sv, rep, release | Default: 0<br>If Set to non-0, will determine the fraction of damage dealt that will be given to attacker.
mp_death_drop_c4 | sv, cl, rep, release | Default: true<br>Whether c4 is droppable
mp_death_drop_defuser | sv, cl, rep, release | Default: true<br>Drop defuser on player death
mp_death_drop_grenade | sv, cl, rep, release | Default: 2<br>Which grenade to drop on player death: 0=none, 1=best, 2=current or best, 3=all grenades
mp_death_drop_gun | sv, cl, rep, release | Default: 1<br>Which gun to drop on player death: 0=none, 1=best, 2=current or best
mp_death_drop_healthshot | sv, cl, rep, release | Default: true<br>Drop healthshot on player death
mp_death_drop_taser | sv, cl, rep, release | Default: true<br>Drop taser on player death
mp_deathcam_skippable | sv, rep, release | Default: true<br>Determines whether a player can early-out of the deathcam.
mp_debug_timeouts | devonly, sv | Prints time outs to the console for debugging
mp_default_team_winner_no_objective | sv, cl, rep, release | Default: -1<br>If the map doesn't define an objective (bomb, hostage, etc), the value of this convar will declare the winner when the time runs out in the round.
mp_defuser_allocation | sv, cl, rep, release | Default: 0<br>How to allocate defusers to CTs at start or round: 0=none, 1=random, 2=everyone
mp_disable_autokick | sv, release | Prevents a userid from being auto-kicked
mp_disconnect_kills_bots | sv, release | Default: false<br>When a bot disconnects, kill them first.  Requires mp_disconnect_kills_players.
mp_disconnect_kills_players | sv, release | Default: true<br>When a player disconnects, kill them first (triggering item drops, stats, etc.)
mp_display_kill_assists | sv, cl, rep, release | Default: true<br>Whether to display and score player assists
mp_dm_bonus_length_max | sv, cl, rep, release | Default: 30<br>Maximum time the bonus time will last (in seconds)
mp_dm_bonus_length_min | sv, cl, rep, release | Default: 30<br>Minimum time the bonus time will last (in seconds)
mp_dm_bonus_percent | sv, cl, rep, release | Default: 50<br>Percent of points additionally awarded when someone gets a kill with the bonus weapon during the bonus period.
mp_dm_bonusweapon_dogtags | sv, cl, rep, release | Default: 0<br>Additional dogtags to drop when making a kill with the bonus weapon
mp_dm_dogtag_score | sv, cl, rep, release | Default: 0<br>Points to award for picking up a dogtag in deathmatch.
mp_dm_healthshot_killcount | sv, cl, rep, release | Default: 3<br>Grant healthshots in deathmatch after n kills
mp_dm_kill_base_score | sv, cl, rep, release | Default: 10<br>Number of base points to award for a kill in deathmatch.  Cheaper weapons award 1 or 2 additional points.
mp_dm_teammode | sv, cl, rep, release | Default: 0<br>In deathmatch, enables team DM visuals & scoring (0: personal, 1: team mode, 2: use team contribution score)
mp_dm_teammode_bonus_score | sv, cl, rep, release | Default: 1<br>Team deathmatch victory points to award for kill with bonus weapon
mp_dm_teammode_dogtag_score | sv, cl, rep, release | Default: 0<br>Team deathmatch victory points to award for collecting enemy dogtags
mp_dm_teammode_kill_score | sv, cl, rep, release | Default: 1<br>Team deathmatch victory points to award for enemy kill
mp_dm_time_between_bonus_max | sv, cl, rep, release | Default: 40<br>Maximum time a bonus time will start after the round start or after the last bonus (in seconds)
mp_dm_time_between_bonus_min | sv, cl, rep, release | Default: 30<br>Minimum time a bonus time will start after the round start or after the last bonus (in seconds)
mp_dogtag_despawn_on_killer_death | sv, rep, release | Default: true<br>Whether dogtags should despawn when their killer dies
mp_dogtag_despawn_time | sv, rep, release | Default: 120<br>How many seconds dogtags should stay around before despawning automatically (0 = infinite)
mp_dogtag_pickup_rule | sv, rep, release | Default: 0<br>Who is eligible to pick up a dogtag (0 = killer only, 1 = killer's team, 2 = victim's team, 3 = killer & victim's team, 4 = anyone)
mp_drop_grenade_enable | sv, cl, rep, release | Default: true<br>Allows players to drop grenades.
mp_drop_knife_enable | sv, cl, rep, release | Default: false<br>Allows players to drop knives.
mp_dump_timers | devonly, sv | Prints round timers to the console for debugging
mp_economy_reset_rounds | sv, cl, rep, release | Default: 0<br>Reset all player money every N rounds (0 for never)
mp_endmatch_votenextleveltime | sv, release | Default: 20<br>If mp_endmatch_votenextmap is set, players have this much time to vote on the next map at match end.
mp_endmatch_votenextmap | sv, cl, rep, release | Default: true<br>Whether or not players vote for the next map at the end of the match when the final scoreboard comes up
mp_endmatch_votenextmap_keepcurrent | sv, cl, rep, release | Default: true<br>If set, keeps the current map in the list of voting options.  If not set, the current map will not appear in the list of voting options.
mp_endmatch_votenextmap_wargames_modes | sv, release | Default: <br>Modes available for endmatch voting during War Games. Separate names with spaces.
mp_endmatch_votenextmap_wargames_nummaps | sv, release | Default: 3<br>Maximum number of maps to include in endmatch voting during War Games
mp_endmatch_votenextmap_wargames_nummodes | sv, release | Default: 1<br>Maximum number of other War Games to include in endmatch voting during War Games
mp_endwarmup_player_count | sv, cl, rep, release | Default: 0<br>Number of players required to be connected to end warmup early. 0 to require maximum players for mode.
mp_equipment_reset_rounds | sv, cl, rep, release | Default: 0<br>Reset all player equipment every N rounds (0 for never)
mp_fadetoblack | devonly, sv, cl, nf, rep | Default: false<br>fade a player's screen to black when he dies
mp_flinch_punch_scale | devonly, sv, cl, rep, cheat | Default: 3<br>Scalar for first person view punch when getting hit.
mp_footsteps_serverside | sv, release | Default: true<br>Makes the server always play footstep sounds. Clients never calculate footstep sounds locally, instead relying on the server.
mp_force_pick_time | sv, cl, rep, release | Default: 15<br>The amount of time a player has on the team screen to make a selection before being auto-teamed
mp_forcecamera | sv, cl, rep, release | Default: 0<br>Restricts spectator modes for dead players
mp_forcerespawn | devonly, sv, nf | Default: true<br>
mp_fraglimit | sv, nf, release | Default: 0<br>
mp_free_armor | sv, cl, rep, release | Default: 0<br>Determines whether kevlar (1+) and/or helmet (2+) are given automatically.
mp_freezetime | sv, nf, rep, release | Default: 6<br>how many seconds to keep players frozen when the round starts
mp_friendlyfire | sv, cl, nf, rep, release | Default: false<br>Allows team members to injure other members of their team
mp_give_player_c4 | sv, cl, rep, release | Default: true<br>Whether this map should spawn a c4 bomb for a player or not.
mp_global_damage_per_second | sv, rep, release | Default: 0<br>If above 0, deal non-lethal damage to players over time.
mp_guardian_bomb_plant_custom_x_mark_location | sv, cl, rep, release | Default: <br>x,y,z to display an X for the bomb plant in guardian missions with custom bomb plant boundaries.
mp_guardian_force_collect_hostages_timeout | sv, release | Default: 50<br>Force bots to collect hostages after this amount of time if no enemy has been seen.
mp_guardian_target_site | sv, release | Default: -1<br>If set to the index of a bombsite, will cause random spawns to be only created near that site.
mp_halftime | sv, cl, rep, release | Default: false<br>Determines whether the match switches sides in a halftime event.
mp_halftime_duration | sv, cl, rep, release | Default: 15<br>Target number of seconds that halftime lasts; shortened if team intros are active
mp_halftime_pausematch | sv, cl, rep, release | Default: 0<br>Set to 1 to pause match after halftime countdown elapses. Match must be resumed by vote or admin.
mp_halftime_pausetimer | sv, cl, rep, release | Default: 0<br>Set to 1 to stay in halftime indefinitely. Set to 0 to resume the timer.
mp_hostages_max | sv, rep, release | Default: 2<br>Maximum number of hostages to spawn.
mp_hostages_rescuetime | sv, cl, rep, release | Default: 1<br>Additional time added to round time if a hostage is reached by a CT.
mp_hostages_rescuetowin | devonly, sv, cl, rep | Default: 1<br>0 == all alive, any other number is the number the CT's need to rescue to win the round.
mp_hostages_run_speed_modifier | sv, rep, release | Default: 1<br>Default is 1.0, slow down hostages by setting this to &lt; 1.0.
mp_hostages_spawn_farthest | sv, rep, release | Default: false<br>When enabled will consistently force the farthest hostages to spawn.
mp_hostages_spawn_force_positions | sv, rep, release | Default: <br>Comma separated list of zero based indices to force spawn positions, e.g. '0,2' or '1,6'
mp_hostages_spawn_force_positions_xyz | sv, rep, release | Default: <br>Comma separated list of xyz locations to force spawn positions, e.g. 'x1 y1 z1,x2 y2 z2'
mp_hostages_spawn_same_every_round | sv, rep, release | Default: true<br>0 = spawn hostages randomly every round, 1 = same spawns for entire match.
mp_hostages_takedamage | sv, cl, rep, release | Default: false<br>Whether or not hostages can be hurt.
mp_humanteam | sv, rep, release | Default: any<br>Restricts human players to a single team {any, CT, T}
mp_ignore_round_win_conditions | sv, rep, release | Default: false<br>Ignore conditions which would end the current round
mp_items_prohibited | sv, cl, rep, release | Default: <br>Set this convar to a comma-delimited list of definition indices of weapons that should be prohibited from use.
mp_join_grace_time | sv, cl, rep, release | Default: 0<br>Number of seconds after round start to allow a player to join a game
mp_limitteams | sv, nf, rep, release | Default: 2<br>Max # of players 1 team can have over another (0 disables check)
mp_logdetail | sv, release | Default: 0<br>Logs attacks.  Values are: 0=off, 1=enemy, 2=teammate, 3=both)
mp_logdetail_items | sv, release | Default: false<br>Logs a line any time a player acquires or loses an item.
mp_logmoney | sv, release | Default: false<br>Enables money logging.  Values are: 0=off, 1=on
mp_match_can_clinch | sv, cl, rep, release | Default: true<br>Can a team clinch and end the match by being so far ahead that the other team has no way to catching up?
mp_match_end_changelevel | sv, cl, rep, release | Default: false<br>At the end of the match, perform a changelevel even if next map is the same
mp_match_end_restart | sv, cl, rep, release | Default: false<br>At the end of the match, perform a restart instead of loading a new map
mp_match_restart_delay | sv, cl, rep, release | Default: 25<br>Time (in seconds) until a match restarts.
mp_max_armor | sv, cl, rep, release | Default: 2<br>Determines the highest level of armor allowed to be purchased. (0) None, (1) Kevlar, (2) Helmet
mp_maxmoney | sv, cl, rep, release | Default: 16000<br>maximum amount of money allowed in a player's account
mp_maxrounds | sv, cl, nf, rep, release | Default: 0<br>max number of rounds to play before server changes maps
mp_min_halftime_duration | sv, cl, rep, release | Default: 8.5<br>Minimum number of seconds that halftime lasts even if team intros are active
mp_modify_timeouts | sv, release | mp_modify_timeouts &lt;CT\|T&gt; &lt;N&gt;, e.g., mp_modify ct -1
mp_only_cts_rescue_hostages | sv, cl, rep, release | Default: true<br>
mp_overtime_enable | sv, cl, rep, release | Default: false<br>If a match ends in a tie, use overtime rules to determine winner
mp_overtime_halftime_pausetimer | sv, cl, rep, release | Default: 0<br>If set to 1 will set mp_halftime_pausetimer to 1 before every half of overtime. Set mp_halftime_pausetimer to 0 to resume the timer.
mp_overtime_limit | sv, cl, rep, release | Default: 0<br>When overtime is enabled, only so many overtimes can be played
mp_overtime_maxrounds | sv, cl, rep, release | Default: 6<br>When overtime is enabled play additional rounds to determine winner
mp_overtime_startmoney | sv, cl, rep, release | Default: 10000<br>Money assigned to all players at start of every overtime half
mp_pause_match | sv, release | Pause the match in the next freeze time
mp_plant_c4_anywhere | sv, cl, rep, release | Default: false<br>
mp_playercashawards | sv, cl, rep, release | Default: true<br>Players can earn money by performing in-game actions
mp_playerid | sv, cl, rep, release | Default: 0<br>Controls what information player see in the status bar: 0 all names; 1 team names; 2 no names
mp_playerid_delay | sv, cl, rep, release | Default: 0.4<br>Number of seconds to delay showing information in the status bar
mp_playerid_hold | sv, cl, rep, release | Default: 0.1<br>Number of seconds to keep showing old information in the status bar
mp_promoted_item_enabled | sv, cl, nf, rep, release | Default: false<br>Allow the purchasing of the promoted item.
mp_randomspawn | sv, cl, rep, release | Default: 0<br>Determines whether players are to spawn. 0 = default; 1 = both teams; 2 = Terrorists; 3 = CTs.
mp_randomspawn_dist | sv, cl, rep, release | Default: 0<br>If using mp_randomspawn, determines whether to test distance when selecting this spot.
mp_randomspawn_los | sv, cl, rep, release | Default: true<br>If using mp_randomspawn, determines whether to test Line of Sight when spawning.
mp_require_gun_use_to_acquire | sv, release | Default: false<br>Whether guns must be +used to acquire or default is touch-to-pickup
mp_respawn_immunitytime | sv, cl, rep, release | Default: 4<br>How many seconds after respawn immunity lasts. Set to negative value to disable warmup immunity.
mp_respawn_on_death_ct | sv, cl, rep, release | Default: false<br>When set to 1, counter-terrorists will respawn after dying.
mp_respawn_on_death_t | sv, cl, rep, release | Default: false<br>When set to 1, terrorists will respawn after dying.
mp_respawnwavetime_ct | sv, cl, rep, release | Default: 10<br>Time between respawn waves for CTs.
mp_respawnwavetime_t | sv, cl, rep, release | Default: 10<br>Time between respawn waves for Terrorists.
mp_restartgame | sv, release | Default: 0<br>If non-zero, game will restart in the specified number of seconds
mp_retake_ct_count | sv, cl, rep, release | Default: 4<br>Number of CT's when playing retakes.
mp_retake_ct_loadout_bonus_card | sv, cl, rep, release | Default: #GameUI_Retake_Card_TheAWPortunity,1,1,rifle4<br>CT bonus card for full buy round when playing bomb site retake.
mp_retake_ct_loadout_bonus_card_availability | sv, cl, rep, release | Default: 1,2<br>CT bonus card availability pattern for full buy round when playing bomb site retake.
mp_retake_ct_loadout_default_pistol_round | sv, cl, rep, release | Default: 1\|3;#GameUI_Retake_Card_4v3,0,0,secondary0\|1;#GameUI_Retake_Card_FlashOut,0,0,secondary0,grenade2;#GameUI_Retake_Card_HideAndPeek,0,0,secondary0,grenade4<br>CT Loadouts for default pistol round when playing bomb site retake.
mp_retake_ct_loadout_enemy_card | sv, cl, rep, release | Default: #GameUI_Retake_Card_BehindEnemyLines,1,1,rifle1,grenade2<br>CT enemy card for full buy round when playing bomb site retake.
mp_retake_ct_loadout_full_buy_round | sv, cl, rep, release | Default: 4\|2;#GameUI_Retake_Card_LightEmUp,1,1,rifle1,grenade2\|2;#GameUI_Retake_Card_Kobe,1,1,rifle1,grenade3\|1;#GameUI_Retake_Card_1g,1,1,rifle1,grenade0\|1;#GameUI_Retake_Card_DisappearingAct,1,1,rifle1,grenade4\|1;#GameUI_Retake_Card_EyesOnTarget,1,1,rifle3<br>CT Loadouts for full buy round when playing bomb site retake.
mp_retake_ct_loadout_light_buy_round | sv, cl, rep, release | Default: 3\|2;#GameUI_Retake_Card_UmpInSmoke,1,1,smg2,grenade4\|2;#GameUI_Retake_Card_FunNGun,1,1,smg0,grenade3\|2;#GameUI_Retake_Card_Sharpshooter,1,1,rifle2,grenade2\|2;#GameUI_Retake_Card_BurstBullpup,1,1,rifle0<br>CT Loadouts for force buy round when playing bomb site retake.
mp_retake_ct_loadout_upgraded_pistol_round | sv, cl, rep, release | Default: 2\|2;#GameUI_Retake_Card_TakeFive,0,0,secondary3\|2;#GameUI_Retake_Card_BlindFire,0,0,secondary2,grenade2\|2;#GameUI_Retake_Card_OnlyTakesOne,0,0,secondary4\|2;#GameUI_Retake_Card_SneakyBeakyLike,0,0,secondary2,grenade4<br>CT Loadouts for upgraded pistol round when playing bomb site retake.
mp_retake_max_consecutive_rounds_same_target_site | sv, cl, rep, release | Default: 2<br>Limit the number of consecutive rounds targeting the same site.
mp_retake_t_count | sv, cl, rep, release | Default: 3<br>Number of terrorists when playing retakes.
mp_retake_t_loadout_bonus_card | sv, cl, rep, release | Default: #GameUI_Retake_Card_TheAWPortunity,1,1,rifle4<br>T bonus card for full buy round when playing bomb site retake.
mp_retake_t_loadout_bonus_card_availability | sv, cl, rep, release | Default: 1,1,2<br>T bonus card availability pattern for full buy round when playing bomb site retake.
mp_retake_t_loadout_default_pistol_round | sv, cl, rep, release | Default: 0\|3;#GameUI_Retake_Card_4BadGuysLeft,0,0,secondary0\|1;#GameUI_Retake_Card_LookAway,0,0,secondary0,grenade2;#GameUI_Retake_Card_WhenThereIsSmoke,0,0,secondary0,grenade4<br>T Loadouts for default pistol round when playing bomb site retake.
mp_retake_t_loadout_enemy_card | sv, cl, rep, release | Default: #GameUI_Retake_Card_FindersKeepers,1,1,rifle1,grenade2<br>T enemy card for full buy round when playing bomb site retake.
mp_retake_t_loadout_full_buy_round | sv, cl, rep, release | Default: 0\|2;#GameUI_Retake_Card_OlReliable,1,1,rifle1,grenade2\|1;#GameUI_Retake_Card_SmokeShow,1,1,rifle1,grenade4\|1;#GameUI_Retake_Card_HotShot,1,1,rifle1,grenade0\|1;#GameUI_Retake_Card_EyeSpy,1,1,rifle3,grenade3<br>T Loadouts for full buy round when playing bomb site retake.
mp_retake_t_loadout_light_buy_round | sv, cl, rep, release | Default: 0\|2;#GameUI_Retake_Card_BackInAFlash,1,1,smg2,grenade2\|2;#GameUI_Retake_Card_AllIn,1,1,rifle0\|1;#GameUI_Retake_Card_BoomBox,1,1,smg0,grenade3,grenade4\|1;#GameUI_Retake_Card_SetThemFree,1,1,rifle2,grenade2<br>T Loadouts for force buy round when playing bomb site retake.
mp_retake_t_loadout_upgraded_pistol_round | sv, cl, rep, release | Default: 0\|2;#GameUI_Retake_Card_BlindFire,0,0,secondary2,grenade2\|2;#GameUI_Retake_Card_QueOta,0,0,secondary4\|1;#GameUI_Retake_Card_SmokeScreen,0,0,secondary2,grenade4\|1;#GameUI_Retake_Card_TecTecBoom,0,0,secondary3,grenade3<br>T Loadouts for upgraded pistol round when playing bomb site retake.
mp_round_restart_delay | sv, cl, rep, release | Default: 7<br>Number of seconds to delay before restarting a round after a win
mp_roundtime | sv, nf, rep, release | Default: 5<br>How many minutes each round takes.
mp_roundtime_defuse | sv, nf, rep, release | Default: 0<br>How many minutes each round of Bomb Defuse takes. If 0 then use mp_roundtime instead.
mp_roundtime_hostage | sv, nf, rep, release | Default: 0<br>How many minutes each round of Hostage Rescue takes. If 0 then use mp_roundtime instead.
mp_scrambleteams | sv, release | Scramble the teams and restart the game
mp_shorthanded_cash_bonus_ignore_kicked | sv, cl, rep, release | Default: true<br>Determines whether kicked players are included in the assessment for short-handedness
mp_shorthanded_cash_bonus_round_delay | sv, cl, rep, release | Default: 2<br>number of previous rounds that a team needs to have been shorthanded before they are eligible for the short-handed bonus
mp_solid_enemies | sv, cl, rep, release | Default: 1<br>How solid are enemies: 0 = transparent; 1 = fully solid
mp_solid_teammates | sv, cl, rep, release | Default: 1<br>How solid are teammates: 0 = transparent; 1 = fully solid; 2 = can stand on top of heads
mp_spawnprotectiontime | sv, rep, release | Default: 5<br>Kick players who team-kill within this many seconds of a round restart.
mp_spectators_max | sv, cl, rep, release | Default: 2<br>How many spectators are allowed in a match.
mp_starting_losses | sv, cl, rep, release | Default: 0<br>Determines what the initial loss streak is.
mp_startmoney | sv, cl, rep, release | Default: 800<br>amount of money each player gets when they reset
mp_suicide_penalty | sv, release | Default: true<br>Punish players for suicides
mp_swapteams | sv, release | Swap the teams and restart the game
mp_t_default_grenades | sv, cl, rep, release | Default: <br>The default grenades that the Ts will spawn with.	To give multiple grenades, separate each weapon class with a space like this: 'weapon_molotov weapon_hegrenade'
mp_t_default_melee | sv, cl, rep, release | Default: weapon_knife<br>The default melee weapon that the Ts will spawn with
mp_t_default_primary | sv, cl, rep, release | Default: <br>The default primary (rifle) weapon that the Ts will spawn with
mp_t_default_secondary | sv, cl, rep, release | Default: weapon_glock<br>The default secondary (pistol) weapon that the Ts will spawn with
mp_tagging_scale | sv, cl, rep, release | Default: 1<br>Scalar for player tagging modifier when hit. Lower values for greater tagging.
mp_taser_recharge_time | sv, cl, rep, release | Default: 30<br>Determines recharge time for taser. -1 = disabled.
mp_td_dmgtokick | sv, rep, release | Default: 300<br>The damage threshhold players have to exceed in a match to get kicked.
mp_td_dmgtowarn | sv, rep, release | Default: 200<br>The damage threshhold players have to exceed in a match to get warned that they are about to be kicked.
mp_td_spawndmgthreshold | sv, rep, release | Default: 50<br>The damage threshold players have to exceed at the start of the round to be warned/kick.
mp_team_intro_time | sv, nf, rep, release | Default: 6.5<br>How many seconds for team intro
mp_team_timeout_max | sv, cl, rep, release | Default: 1<br>Number of timeouts each team gets per match.
mp_team_timeout_ot_add_each | sv, cl, rep, release | Default: 0<br>Number of timeouts to add for each team when match goes to 2nd and each next overtime.
mp_team_timeout_ot_add_once | sv, cl, rep, release | Default: 0<br>Number of timeouts to add for each team when regulation time ends and match goes to overtime.
mp_team_timeout_ot_max | sv, cl, rep, release | Default: 1<br>Max number of timeouts each team can have per OT after all OT timeouts got added.
mp_team_timeout_time | sv, cl, rep, release | Default: 60<br>Duration of each timeout.
mp_teamcashawards | sv, cl, rep, release | Default: true<br>Teams can earn money by performing in-game actions
mp_teamflag_1 | sv, release | Default: <br>Enter a country's alpha 2 code to show that flag next to team 1's name in the spectator scoreboard.
mp_teamflag_2 | sv, release | Default: <br>Enter a country's alpha 2 code to show that flag next to team 2's name in the spectator scoreboard.
mp_teamlogo_1 | sv, release | Default: <br>Enter a team's shorthand image name to display their logo. Images can be found here: 'resource/flash/econ/tournaments/teams'
mp_teamlogo_2 | sv, release | Default: <br>Enter a team's shorthand image name to display their logo. Images can be found here: 'resource/flash/econ/tournaments/teams'
mp_teammatchstat_1 | sv, release | Default: <br>A non-empty string sets first team's match stat.
mp_teammatchstat_2 | sv, release | Default: <br>A non-empty string sets second team's match stat.
mp_teammatchstat_cycletime | sv, release | Default: 45<br>Cycle match stats after so many seconds
mp_teammatchstat_holdtime | sv, release | Default: 5<br>Decide on a match stat and hold it additionally for at least so many seconds
mp_teammatchstat_txt | sv, release | Default: <br>A non-empty string sets the match stat description, e.g. 'Match 2 of 3'.
mp_teammates_are_enemies | sv, cl, nf, rep, release | Default: false<br>When set, your teammates act as enemies and all players are valid targets.
mp_teamname_1 | sv, release | Default: <br>A non-empty string overrides the first team's name.
mp_teamname_2 | sv, release | Default: <br>A non-empty string overrides the second team's name.
mp_teamplay | devonly, sv, nf | Default: false<br>
mp_teamprediction_pct | sv, release | Default: 0<br>A value between 1 and 99 will show predictions in favor of CT team.
mp_teamprediction_txt | sv, release | Default: #SFUIHUD_Spectate_Predictions<br>A value between 1 and 99 will set predictions in favor of first team.
mp_teamscore_1 | sv, release | Default: 0<br>A non-empty string for best-of-N maps won by the first team.
mp_teamscore_2 | sv, release | Default: 0<br>A non-empty string for best-of-N maps won by the second team.
mp_teamscore_max | sv, release | Default: 0<br>How many maps to win the series (bo3 max=2; bo5 max=3; bo7 max=4)
mp_technical_timeout_duration_s | sv, cl, rep, release | Default: 0<br>How many seconds is a full technical timeout?
mp_technical_timeout_per_team | sv, cl, rep, release | Default: 0<br>How many technical timeouts are there per team?
mp_timelimit | sv, cl, nf, rep, release | Default: 0<br>game time per map in minutes
mp_tkpunish | sv, rep, release | Default: 0<br>Will TK'ers and team damagers be punished in the next round?  {0=no,  1=yes}
mp_tournament | devonly, sv, cl, nf, rep | Default: false<br>
mp_tournament_whitelist | devonly, sv | Default: item_whitelist.txt<br>Specifies the item whitelist file to use.
mp_unpause_match | sv, release | Resume the match
mp_use_respawn_waves | sv, cl, rep, release | Default: 0<br>When set to 1, and that player's team is set to respawn, they will respawn in waves. If set to 2, teams will respawn when the whole team is dead.
mp_verbose_changelevel_spew | sv, cl, rep, release | Default: 1<br>
mp_warmup_end | sv, release | End warmup immediately.
mp_warmup_items_drop_policy | sv, cl, rep, release | Default: 247<br>Which items can drop during warmup (bitfield, 1=gun, 2=c4, 4=nade, 8=defuser, 16=taser, 32=healthshot)
mp_warmup_items_nocost | sv, cl, rep, release | Default: false<br>Determines whether weapons are free to buy during warmup.
mp_warmup_items_nocount_policy | sv, cl, rep, release | Default: 42<br>Which items are unlimited during warmup (bitfield, 1=gun, 2=c4, 4=nade, 8=defuser/kevlar, 16=taser, 32=healthshot)
mp_warmup_jointeam_cooldown | devonly, sv | Default: 2<br>
mp_warmup_offline_enabled | sv, cl, rep, release | Default: false<br>Whether or not to do a warmup period at the start of a match in an offline (bot) match.
mp_warmup_online_enabled | sv, cl, rep, release | Default: true<br>Whether or not to do a warmup period at the start of an online match.
mp_warmup_pausetimer | sv, cl, rep, release | Default: 0<br>Set to 1 to stay in warmup indefinitely. Set to 0 to resume the timer.
mp_warmup_start | sv, release | Start warmup.
mp_warmuptime | sv, cl, rep, release | Default: 30<br>How long the warmup period lasts. Changing this value resets warmup.
mp_warmuptime_all_players_connected | sv, cl, rep, release | Default: 0<br>Warmup time to use when all players have connected. 0 to disable.
mp_warmuptime_match_cancelled | sv, cl, rep, release | Default: 5<br>Warmup time to use when the match will be cancelled (eg. due to a live VAC ban).
mp_weapon_next_owner_touch_time | sv, cheat, release | Default: 1.3<br>
mp_weapon_prev_owner_touch_time | sv, cl, rep, cheat, release | Default: 1.5<br>
mp_weapon_self_inflict_amount | sv, rep, release | Default: 0<br>If Set to non-0, will hurt the attacker by the specified fraction of max damage if they miss.
mp_weapons_allow_heavy | sv, cl, rep, release | Default: -1<br>Determines which team, if any, can purchase Heavy guns. -1 = any; 0 = non; 2 = Ts; 3 = CTs.
mp_weapons_allow_map_placed | sv, cl, rep, release | Default: false<br>If this convar is set, when a match starts, the game will not delete weapons placed in the map.
mp_weapons_allow_pistols | sv, cl, rep, release | Default: -1<br>Determines which team, if any, can purchase Pistols. -1 = any; 0 = non; 2 = Ts; 3 = CTs.
mp_weapons_allow_rifles | sv, cl, rep, release | Default: -1<br>Determines which team, if any, can purchase Rifles. -1 = any; 0 = non; 2 = Ts; 3 = CTs.
mp_weapons_allow_smgs | sv, cl, rep, release | Default: -1<br>Determines which team, if any, can purchase SMGs. -1 = any; 0 = non; 2 = Ts; 3 = CTs.
mp_weapons_allow_typecount | sv, cl, rep, release | Default: 5<br>Determines how many purchases of each weapon type allowed per player per round (0 to disallow purchasing, -1 to have no limit).
mp_weapons_allow_zeus | sv, cl, rep, release | Default: 1<br>Determines how many Zeus purchases a player can make per round (0 to disallow, -1 to have no limit).
mp_weapons_max_gun_purchases_per_weapon_per_match | sv, cl, rep, release | Default: -1<br>Max number of times a player may purchase any weapon per match
mp_weaponstay | devonly, sv, nf | Default: false<br>
mp_win_panel_display_time | sv, cl, rep, release | Default: 3<br>The amount of time to show the win panel between matches / halfs
mp_winlimit | devonly, sv, cl, nf, rep | Default: 0<br>Max score one team can reach before server changes maps
multigpu_skip_semaphores | devonly | Default: false<br>
multigpu_skip_transfers | devonly | Default: false<br>
multvar | norecord, release | Multiply specified convar value.
muzzle_flash_debug | devonly, cl | Default: false<br>
name | a, per_user | Default: unnamed<br>
nav_add_to_selected_set | sv, cheat | Add current area to the selected set.
nav_add_to_selected_set_by_id | sv, cheat | Add specified area id to the selected set.
nav_approach_points_area_size_threshold | devonly, sv | Default: 200<br>Ignore nav areas with at least one side smaller than this amount during approach point calculation.
nav_attribute_obstacle_draw | sv, cheat | Default: false<br>
nav_attribute_obstacle_draw_elements | sv, cheat | Default: false<br>
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
nav_create_indirect_connection | sv, cheat | Create a connection between the selected area and the area pointed at by the crosshair.
nav_create_indirect_connection_from_to | sv, cheat | Create a connection between the current 'from' and 'to' locations.
nav_create_indirect_connection_set_from | sv, cheat | Default: 0 0 0<br>Set the 'from' location of an indirect connection.
nav_create_indirect_connection_set_from_using_editpos | sv, cheat | Set the 'from' location of an indirect connection to be the current edit pos of nav_edit.
nav_create_indirect_connection_set_to | sv, cheat | Default: 0 0 0<br>Set the 'to' location of an indirect connection.
nav_create_indirect_connection_set_to_using_editpos | sv, cheat | Set the 'to' location of an indirect connection to be the current edit pos of nav_edit.
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
nav_disconnect | sv, cheat | Disconnects selected area from all neighbor areas.
nav_drag_selection_volume_zmax_offset | devonly, sv, rep | Default: 32<br>The offset of the nav drag volume top from center
nav_drag_selection_volume_zmin_offset | devonly, sv, rep | Default: 32<br>The offset of the nav drag volume bottom from center
nav_draw_area_connections | sv, cheat | Default: false<br>
nav_draw_area_filled | sv, cheat | Default: true<br>
nav_draw_area_gravity | sv, cheat | Default: false<br>
nav_draw_area_ground | sv, cheat | Default: false<br>
nav_draw_area_hull_support | sv, cheat | Default: false<br>
nav_draw_area_ids | sv, cheat | Default: false<br>
nav_draw_area_inset_margin | sv, cheat | Default: 0<br>
nav_draw_area_normal | sv, cheat | Default: false<br>
nav_draw_area_should_be_destroyed | sv, cheat | Default: false<br>
nav_draw_area_split_by_obstacle_mgr | sv, cheat | Default: false<br>
nav_draw_area_ztest | sv, cheat | Default: false<br>
nav_draw_attribute_dynamic | devonly, sv | Default: <br>Draw all nav areas with this dynamic attribute
nav_draw_attribute_game | devonly, sv | Default: <br>Draw all nav areas with this game attribute
nav_draw_attribute_space | devonly, sv | Default: <br>Draw only nav blocks with this attribute
nav_draw_blocked | sv, cheat | Default: true<br>
nav_draw_blocked_connections | sv, cheat | Default: false<br>
nav_draw_boundary_areas | sv, cheat | Default: false<br>
nav_draw_connected_area_radius | sv, cheat | Default: 1000<br>
nav_draw_dangerareas | sv, cheat | Default: false<br>
nav_draw_dormant_movable_meshes | sv, cheat | Default: false<br>Draw dormant movable meshes.
nav_draw_externally_created | sv, cheat | Default: false<br>
nav_draw_hidingspots | sv, cheat | Default: false<br>
nav_draw_indirect_connections | sv, cheat | Default: false<br>
nav_draw_jump_links | sv, cheat | Default: false<br>
nav_draw_limit | sv, cheat | Default: 300<br>The maximum number of areas to draw in edit mode
nav_draw_link_alignment | sv, cheat | Default: false<br>
nav_draw_links | sv, cheat | Default: false<br>
nav_draw_markup | sv, cheat | Default: true<br>
nav_draw_mesh | sv, cheat | Default: true<br>
nav_draw_mesh_grid | sv, cheat | Default: false<br>Draw the mesh's spatial grid structure around the edit cursor position.
nav_draw_mesh_offset | sv, cheat | Default: 1<br>Vertical offset for drawing the mesh (useful for flat planes where the mesh is often a fixed offset from the physical ground
nav_draw_space_boundary | sv, cheat | Default: false<br>
nav_draw_space_cells | sv, cheat | Default: false<br>
nav_draw_space_fly | sv, cheat | Default: false<br>
nav_draw_space_neighbors | sv, cheat | Default: 0<br>
nav_draw_space_portals | sv, cheat | Default: false<br>
nav_draw_space_radius | sv, cheat | Default: 0<br>
nav_draw_space_swim | sv, cheat | Default: false<br>
nav_draw_space_transitions | sv, cheat | Default: true<br>
nav_edit | sv, cheat | Default: 0<br>Set to one to interactively edit the Navigation Mesh. Set to zero to leave edit mode.
nav_edit_use_camera | sv, cheat | Default: true<br>
nav_edit_validate | sv, cheat | Default: false<br>Validate navmesh structures.
nav_end_deselecting | sv, cheat | Stop continuously removing from the selected set.
nav_end_drag_deselecting | sv, cheat | Stop dragging a selection area.
nav_end_drag_selecting | sv, cheat | Stop dragging a selection area.
nav_end_selecting | sv, cheat | Stop continuously adding to the selected set.
nav_find_occluded_node_nozup_use_raycast | sv, cheat | Default: true<br>
nav_flow_map_enabled | devonly, sv | Default: true<br>
nav_gen_add_jumps | sv, cheat | Default: true<br>
nav_gen_agent_radius_buffer | sv, cheat | Default: 0.75<br>Buffer to add to agent radius before passing to nav gen
nav_gen_clip_polys_to_clearance | sv, cheat | Default: true<br>
nav_gen_clip_polys_to_clearance_debug | sv, cheat | Default: false<br>
nav_gen_connect_allow_multiple | sv, cheat | Default: true<br>
nav_gen_connect_angle | sv, cheat | Default: 0.75<br>
nav_gen_connect_angle_ignore_z | sv, cheat | Default: true<br>
nav_gen_connect_dist_a | sv, cheat | Default: 1<br>
nav_gen_connect_dist_b | sv, cheat | Default: 1.5<br>
nav_gen_connect_dist_z_mult | sv, cheat | Default: 0.5<br>
nav_gen_connect_overlap | sv, cheat | Default: 0.5<br>
nav_gen_degen_limit | sv, cheat | Default: 0.001<br>
nav_gen_false | sv, cheat | Default: false<br>Always false
nav_gen_island_removal | sv, cheat | Default: false<br>
nav_gen_island_removal_all_hulls | sv, cheat | Default: true<br>
nav_gen_join_nonzup | sv, cheat | Default: true<br>
nav_gen_jump_connection_min_overlap_ratio | sv, cheat | Default: 0.1<br>Minimum edge overlap required for jump connection consideration as a percentage of agent radius
nav_gen_markup_split_expand | sv, cheat | Default: 2<br>
nav_gen_markup_split_tol_base | sv, cheat | Default: 1<br>
nav_gen_markup_split_tol_nonav | sv, cheat | Default: 1<br>
nav_gen_markup_split_tol_nonentity | sv, cheat | Default: 8<br>
nav_gen_max_bottleneck_width | sv, cheat | Default: 128<br>
nav_gen_max_bottleneck_width_do_clip | sv, cheat | Default: true<br>
nav_gen_max_edge_len | sv, cheat | Default: 512<br>
nav_gen_max_edge_len_do_clip | sv, cheat | Default: true<br>
nav_gen_max_edge_len_split_tol | sv, cheat | Default: 24<br>
nav_gen_opt_to_quads | sv, cheat | Default: true<br>
nav_gen_opt_to_quads_angle_limit | sv, cheat | Default: 8<br>
nav_gen_opt_to_quads_num_steps | sv, cheat | Default: 6<br>
nav_gen_opt_to_quads_planar_deviation_limit | sv, cheat | Default: 4<br>
nav_gen_opt_to_quads_se_limit_end | sv, cheat | Default: 0.1<br>
nav_gen_opt_to_quads_se_limit_start | sv, cheat | Default: 1e-05<br>
nav_gen_opt_to_quads_weld_limit_end | sv, cheat | Default: 0.01<br>
nav_gen_opt_to_quads_weld_limit_start | sv, cheat | Default: 1e-07<br>
nav_gen_oriented_angle_tol | sv, cheat | Default: 15<br>Max abrupt orientation difference an NPC can tolerate when moving through the mesh (degrees).
nav_gen_oriented_max_region_range | sv, cheat | Default: 15<br>Max orientation range allowed within a region before it gets further split.
nav_gen_remove_vertical_polys | sv, cheat | Default: true<br>
nav_gen_split_boundary_polys | sv, cheat | Default: false<br>
nav_gen_split_multi_connection_polys | sv, cheat | Default: true<br>
nav_gen_split_multi_connection_polys_tol | sv, cheat | Default: 0.01<br>
nav_gen_true | sv, cheat | Default: true<br>Always true
nav_gen_vertical_limit | sv, cheat | Default: 88<br>
nav_genrt_debug | sv, cheat | Default: false<br>
nav_list_movable_meshes | sv, cheat | List the movable meshes registered with the movable meshes manager.
nav_lower_drag_volume_max | sv, cheat | Lower the top of the drag select volume.
nav_lower_drag_volume_min | sv, cheat | Lower the bottom of the drag select volume.
nav_mark | sv, cheat | Marks the Area or Ladder under the cursor for manipulation by subsequent editing commands.
nav_mark_attribute | sv, cheat | Set nav attribute for all areas in the selected set.
nav_max_view_distance | sv, cheat | Default: 0<br>Maximum range for precomputed nav mesh visibility (0 = default 1500 units)
nav_max_vis_delta_list_length | cheat | Default: 64<br>
nav_navlink_enable_splits | sv, cheat | Default: true<br>Split wide nav links into narrower ones to increase lanes and alleviate 'crossing' effect.
nav_navlink_split_max_width | sv, cheat | Default: 144<br>The maximum desired width of a nav link split.
nav_navlink_split_scale_with_length | sv, cheat | Default: true<br>Nav link splits' widths are proportional to the nav link's length.
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
nav_pathfind_debug_log | sv, cheat | Default: 0<br>
nav_pathfind_draw | sv, cheat | Default: 0<br>
nav_pathfind_draw_blocked | sv, cheat | Default: 0<br>
nav_pathfind_draw_costs | sv, cheat | Default: false<br>
nav_pathfind_draw_fail | sv, cheat | Default: 0<br>
nav_pathfind_draw_total_costs | sv, cheat | Default: false<br>
nav_pathfind_inadmissable_heuristic_factor | sv, cheat | Default: 1<br>
nav_pathfind_multithread | sv, cheat | Default: false<br>
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
nav_set_movable_mesh_dormant_flag | sv, cheat | Set the movable mesh dormant flag (0=active, 1=dormant)
nav_show_area_connections | sv, cheat | Default: true<br>Show connections to selected area when true
nav_show_area_verts | sv, cheat | Default: true<br>Show area vertex positions
nav_show_area_water_info | sv, cheat | Default: true<br>
nav_show_elem_info | sv, cheat | Default: true<br>
nav_show_elem_info_font | sv, cheat | Default: Consolas<br>
nav_show_elem_info_font_size | sv, cheat | Default: -1<br>
nav_show_elem_info_font_voffset | sv, cheat | Default: -11<br>
nav_show_potentially_visible | cheat | Default: 0<br>Show areas that are potentially visible from the current nav area
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
nav_smooth_spring_const_override | sv, cheat | Default: -1<br>
nav_smooth_spring_enable | sv, cheat | Default: true<br>
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
nav_space_select_dist | sv, cheat | Default: 1000<br>
nav_split | sv, cheat | To split an Area into two, align the split line using your cursor and invoke the split command.
nav_split_show_line | sv, cheat | Default: false<br>Show the free split line.
nav_store_selected_set | sv, cheat | Stores the current selected set for later retrieval.
nav_switch | devonly, sv | Switches to navmesh for the specified spawngroup
nav_test_area_gravity | sv, cheat | Default: false<br>
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
nav_test_boundary_zone_sphere | sv, cheat | Default: 0<br>
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
nav_test_genrt_tile_removal_extent | sv, cheat | Default: 50<br>
nav_test_genrt_tile_removal_place | sv, cheat | Default: false<br>
nav_test_getareaoverlapping_gravity | sv, cheat | Default: false<br>
nav_test_getnearestnav_gravity | sv, cheat | Default: false<br>
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
nav_test_pos_name | devonly, sv | Default: <br>
nav_test_pos_place | devonly, sv | Default: -1<br>
nav_test_ray_space | sv, cheat | Default: 0<br>
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
navspace_draw_changes_blocks | sv, cheat | Default: 0<br>Draw blocks when they change
navspace_draw_changes_waters | sv, cheat | Default: 0<br>Draw water volumes when they change
navspace_path_use_water_level_locator | sv, cheat | Default: true<br>
net_allow_multicast | a, release | Default: true<br>
net_async_clientconnect | devonly | Default: true<br>Enable async client connect optimization
net_async_job_random_sleep | devonly | Default: 0<br>Sleep randomly 0..net_async_job_random_sleep ms in the parallel server jobs; sleep is per job
net_captureculldata | devonly | Captures low-level data to replay path culling algorithm behavior in controlled unit test environment
net_channels | release | Shows net channel info
net_client_steamdatagram_enable_override | cl, release | Default: 0<br>0: Use connect method requested by GC.  &gt;0: Always use SDR if possible.  &lt;0: Always use direct UDP if possible
net_compresspackets_minsize | devonly | Default: 1024<br>Don't bother compressing packets below this size.
net_connections_stats | release | Print detailed network statistics for each network connection
net_culloptimization | devonly | Default: true<br>Enable optimization of slow path that makes HLTV CPU consumption high in AnimGraph-using mods. Will switch to this on by default soon.
net_debug_to_file | devonly, sv | Default: false<br>
net_detailed_canpacket_log | devonly | Default: false<br>
net_fakeclear | release | Clear all simulated network conditions
net_fakejitter | release | Shortcut to set jitter net options.  Run with no arguments for usage.
net_fakelag | release | Shortcut to set both FakePacketLag_Recv and FakePacketLag_Send net options
net_fakeloss | release | Shortcut to set both FakePacketLoss_Recv and FakePacketLoss_Send net options
net_fakestatus | release | Print current simulated network condifions
net_filelogging | devonly | Default: false<br>Log packets to files
net_fs_showindirections | devonly | Default: false<br>
net_limit_sv_recv_max_message_size_kb | release | Default: 32<br>Server will reject message larger than N kb
net_limit_sv_recv_segments_per_packet | release | Default: 50<br>Server will reject packets with more than N segments
net_limit_sv_recvbuffer_kb | release | Default: 128<br>Server will not buffer more than N kb from connected clients
net_limit_sv_recvbuffer_msg | release | Default: 100<br>Server will not buffer more than N messages from connected clients
net_listallmessages | cheat | List all registered net messages
net_log_processing | devonly | Default: false<br>Log network processing
net_max_message_process_count | devonly | Default: 0<br>Maximum number of messages to process from a client in a single frame (0 == no limit).
net_max_message_queue_size | devonly | Default: 0<br>Maximum number of messages to allow waiting in queue after processing; exceeding this disconnects the client. 0 == no limit
net_max_polymorphic_spew | devonly | Default: 5<br>Max polymorphic variants to spew when spewing a flattened serializer.
net_messageinfo | cheat | Display info about a message (by classname or id)
net_option | release | Get or set SteamNetworkingSockets options such as fake packet lag and loss
net_p2p_listen_dedicated | devonly | Default: false<br>Should dedicated server listen for new-style P2P?
net_print_sdr_ping_times | release | Print current ping times to SDR points of presence, and selected route
net_public_adr | release | Default: <br>For servers behind NAT/DHCP meant to be exposed to the public internet, this is the public facing ip address string: ("x.x.x.x" )
net_qosinterval_spew | devonly | Default: false<br>Spew QoS interval data as we gather it
net_qospacketloss_percentage_threshold | devonly | Default: 5<br>Spew a warning if packet loss percentage is above this threshold
net_reloadgameevents | devonly, sv | Reload the game events
net_restrict_showmsg_socket | devonly | Default: <br>If set, only net_showmsg spew for data inbound on this socket name e.g. client, server, etc.
net_serializedentitymemory | devonly | Spew CSerializedEntity memory
net_serializedentitymetadatainfo | devonly | Spew CSerializedEntity metadata information
net_showdrop | devonly | Default: false<br>Show dropped packets in console
net_showeventlisteners | devonly, sv | Default: false<br>Show listening addition/removals
net_showevents | devonly, sv | Default: 0<br>Dump game events to console (1=client only, 2=all).
net_showmsg | devonly | Default: 0<br>Show incoming message: &lt;0\|1\|2\|name&gt; where 1 == all and 2 == all except net_NOP
net_showoob | devonly | Default: false<br>Show connectionless UDP traffic.
net_showpeaks | devonly | Default: 0<br>Show messages for large packets only: &lt;size&gt;
net_showreliable | devonly | Default: 0<br>Like net_showmsg, but only spew reliable messages
net_showudp | release | Default: false<br>Dump UDP packets summary to console
net_showudp_remoteonly | release | Default: true<br>Dump non-loopback udp only
net_skip_redundant_change_callbacks | devonly, cl | Default: false<br>
net_spewcounts | devonly | Spew serializer counts, client only by default, specify server to spew server counts<br>
net_spewserializer | devonly | Spew serializer info<br>
net_stats_json | devonly | Output server networking statistics in json format
net_status | release | Shows current network status
net_use_delta_property_fastpath | devonly | Default: 1<br>
net_use_packet_compression | devonly | Default: true<br>Compress network traffic
net_validatemessages | cheat | Activates/deactivates net message validation
net_why_field_excluded | devonly | &lt;classname&gt; &lt;fieldname&gt;:  spew why field was excluded from networking for classname.
nextdemo | release | Play next demo in sequence.
nextlevel | sv, nf, release | Default: <br>If set to a valid map name, will trigger a changelevel to the specified map at the end of the round
nextmap_print_enabled | sv, release | Default: false<br>When enabled prints next map to clients
nextmode | sv, nf, rep, release | Default: <br>Sets the game mode to be played when the next level loads
noclip | sv, cheat | Toggle. Player becomes non-solid and flies.  Optional argument of 0 or 1 to force enable/disable
noclip_fixup | sv, cheat | Default: true<br>
notarget | sv, cheat | Toggle. Player becomes hidden to NPCs.
npcsolve_attract_draw | devonly, sv | Default: false<br>
npcsolve_constraint_nav | devonly, sv | Default: true<br>
npcsolve_constraint_npc | devonly, sv | Default: true<br>
npcsolve_drag_linear | devonly, sv | Default: 0<br>
npcsolve_forward | devonly, sv | Default: true<br>
npcsolve_forward_const | devonly, sv | Default: 30000<br>
npcsolve_forward_dist | devonly, sv | Default: 200<br>
npcsolve_forward_margin | devonly, sv | Default: 5<br>
npcsolve_path_close_const | devonly, sv | Default: 0<br>
npcsolve_path_close_max_tension | devonly, sv | Default: 100<br>
npcsolve_path_lookahead_const | devonly, sv | Default: 4<br>
npcsolve_path_lookahead_dist | devonly, sv | Default: 100<br>
npcsolve_path_vel_const | devonly, sv | Default: 0<br>
npcsolve_separation | devonly, sv | Default: true<br>
npcsolve_separation_const | devonly, sv | Default: 10000<br>
npcsolve_separation_dist | devonly, sv | Default: 5<br>
npcsolve_separation_draw | devonly, sv | Default: false<br>
npcsolve_separation_jitter | devonly, sv | Default: 0<br>
npcsolve_separation_r2 | devonly, sv | Default: false<br>
open_asset | devonly | Opens an asset in it's primary editor of choice. Specify the full path to the asset from the mod directory.
option_duck_method | cl, a, user, per_user | Default: false<br>Input toggle control
option_speed_method | cl, a, user, per_user | Default: false<br>Input toggle control
opus_decode_test_signal | devonly | Default: false<br>
opus_encode_test_signal | devonly | Default: false<br>
opus_unittest_test_signal | devonly | Default: false<br>
p2p_listpeers | devonly | List currently known peers.
p2p_ping | devonly, cl | Ping a peer.
panorama_2d_translate_no_comp_layer | devonly, hidden | Default: true<br>
panorama_alignment_fixes | devonly, hidden | Default: true<br>Fix alignment issues
panorama_allow_texture_composition_layer_fast_path | devonly, hidden | Default: true<br>
panorama_allow_transitions | devonly, hidden | Default: true<br>
panorama_assert_loading_panel_type | devonly, hidden | Default: false<br>Force style invalidation of the entire panel subtree when adding / removing classes.
panorama_async_compute_mipgen | devonly, cl | Default: true<br>use asynchronous compute for mipmap generation.
panorama_box_shadow_no_comp_layer | devonly, hidden | Default: true<br>
panorama_cache_command_list_repaint_threshold | devonly, hidden | Default: 0.25<br>
panorama_cache_command_list_size_threshold | devonly, hidden | Default: 384<br>
panorama_classes_force_invalidate | devonly, hidden | Default: false<br>Force style invalidation of the entire panel subtree when adding / removing classes.
panorama_clear_frames_on_device_restore | devonly, hidden | Default: 2<br>
panorama_command_reordering | devonly, hidden | Default: true<br>
panorama_comp_layer_lru_lifetime | devonly, hidden | Default: 1<br>
panorama_composition_atlas | devonly, hidden | Default: true<br>
panorama_console_max_autocomplete | devonly, cl, hidden | Default: 100<br>
panorama_console_max_history | devonly, cl, hidden | Default: 100<br>
panorama_console_max_lines | devonly, cl, hidden | Default: 2000<br>
panorama_console_position_and_size | cl, hidden, a | Default: <br>
panorama_content_size_fixes | devonly, hidden | Default: true<br>Fix content size issues
panorama_daisy_wheel | devonly, cl, hidden | Default: ABXY<br>Daisy wheel input mode: RS \| ABXY
panorama_dash_gap_ratio | devonly, hidden | Default: 0.5<br>
panorama_dash_len | devonly, hidden | Default: 20<br>
panorama_debug_movies | devonly, cl, hidden | Default: false<br>
panorama_debug_overlay_opacity | hidden, a | Default: 0.25<br>
panorama_debug_overlay_opacity_max | hidden, a | Default: 0.25<br>
panorama_debug_overlay_opacity_min | hidden, a | Default: 0.01<br>
panorama_debug_ready_for_display | devonly, hidden | Default: false<br>
panorama_debugger_theme | cl, a | Default: Light<br>
panorama_disable_blur | devonly, hidden | Default: false<br>
panorama_disable_box_shadow | devonly, hidden | Default: false<br>
panorama_disable_descendant_filtering | devonly, hidden | Default: false<br>Disable descendant selector filtering
panorama_disable_draw_fancy_quad | devonly, hidden | Default: false<br>
panorama_disable_draw_text | devonly, hidden | Default: false<br>
panorama_disable_draw_text_shadow | devonly, hidden | Default: false<br>
panorama_disable_layer_cache | devonly, hidden | Default: false<br>
panorama_disable_layer_clear | devonly, hidden | Default: false<br>
panorama_disable_render_callbacks | devonly, hidden | Default: false<br>
panorama_disable_render_target_cache | devonly, hidden | Default: false<br>
panorama_disallow_hover_styles | devonly, hidden | Default: false<br>
panorama_dispatch_event | devonly | Dispatch the event defined by the argument string. No creating panel is specified.
panorama_dragscroll_affordance | devonly, hidden | Default: 20<br>Minimum mouse movement in pixels before a move is treated as a drag scroll
panorama_dragscroll_maxflickvelocity | devonly, cl, hidden | Default: 8000<br>Maximum velocity for a drag scroll flick
panorama_dragscroll_minflickvelocity | devonly, cl, hidden | Default: 60<br>Minimum velocity that the mouse must be moving as mouse up time to qualify as a drag scroll flick
panorama_dragscroll_mintime | devonly, hidden | Default: 0.02<br>Minimum time that the mouse button must be down before a move is treated as a drag scroll
panorama_dragscroll_velocitymultiplier | devonly, hidden | Default: 0.5<br>Multiplier for flick velocity off of actual measured velocity
panorama_dump_symbols | devonly | &lt;ESymbolType&gt; Dump all of the symbols in the Panorama symbol table
panorama_enable_secondary_layout_pass | devonly, hidden | Default: true<br>
panorama_focus_world_panels | cl, a | Default: false<br>when set request key focus when a world panel is enabled
panorama_force_active_controller_type | devonly, hidden | Default: -1<br>
panorama_force_desired_layout_traverse | devonly, hidden | Default: false<br>Force desired layout traverse, even if the cached values are up to date.
panorama_force_text_shadow_strength | devonly, hidden | Default: -1<br>
panorama_generate_layout_xsd | devonly | Generate the Layout XML Schema Definition for the current run-time (types are dependent on which game DLL is running).
panorama_highlight_bad_opacity_masks | devonly, hidden | Default: false<br>
panorama_highlight_composition_layers | devonly, hidden | Default: false<br>
panorama_highlight_slow_operations | devonly, hidden | Default: false<br>
panorama_hsbc_through_fast_path | devonly, hidden | Default: true<br>
panorama_joystick_axis_repeat_curve_time | devonly, hidden | Default: 1<br>
panorama_joystick_axis_repeat_interval_end | devonly, hidden | Default: 0.05<br>
panorama_joystick_axis_repeat_interval_start | devonly, hidden | Default: 0.22<br>
panorama_joystick_button_repeat_curve_time | devonly, hidden | Default: 1.2<br>
panorama_joystick_button_repeat_interval_end | devonly, hidden | Default: 0.1<br>
panorama_joystick_button_repeat_interval_start | devonly, hidden | Default: 0.48<br>
panorama_joystick_enabled | a | Default: false<br>Enable panorama joystick input
panorama_js_minidumps | devonly, hidden | Default: true<br>Enable sending minidumps on JS Exceptions.
panorama_label_wrap_before_shrink | devonly, cl, hidden | Default: true<br>Should labels try to wrap text before using text-overflow: shrink
panorama_large_dispatch_event_queue | devonly, hidden | Default: 0<br>
panorama_max_fps | devonly, hidden | Default: 120<br>
panorama_max_oof_overlay_up_fps | devonly, hidden | Default: 4<br>
panorama_max_overlay_fps | devonly, hidden | Default: 60<br>
panorama_max_text_shadow_strength | devonly, hidden | Default: 10<br>
panorama_might_scroll_no_comp_layer | devonly, hidden | Default: true<br>
panorama_min_comp_layer_cache_cost | devonly, hidden | Default: 4096<br>
panorama_movie_async_load_size_bytes | devonly, cl, hidden | Default: 20971520<br>
panorama_movie_force_not_ready_behavior | devonly, cl, hidden | Default: -1<br>
panorama_print_cache_status | devonly | Print internal panorama refcounts for every file
panorama_print_svg_stats | devonly | 
panorama_reload_animations | devonly, hidden | Default: 2<br>
panorama_render_target_cache_max_size | devonly, hidden | Default: 31457280<br>
panorama_script_cache_enabled | devonly, hidden | Default: true<br>Enable script caching to speed up recompiling scripts multiple times.
panorama_show_fps | devonly | Default: false<br>
panorama_show_fps_scale | devonly | Default: 1<br>
panorama_simple_borders_no_comp_layer | devonly, hidden | Default: true<br>
panorama_skip_composition_layer_content_paint | devonly, hidden | Default: false<br>
panorama_skip_composition_layer_content_paint_tint | devonly, hidden | Default: false<br>
panorama_spew_async_event_substring | devonly, hidden | Default: <br>If non-empty, print debug info about async event queue and dispatch behavior for events containing the substring.
panorama_spew_layout_invalidates | devonly, hidden | Default: false<br>
panorama_stats_log_time | devonly, hidden | Default: 0<br>
panorama_style_flag_force_invalidate | devonly, hidden | Default: false<br>Force style invalidation of the entire panel subtree when adding / removing style flags.
panorama_suspend_animation | devonly, hidden | Default: false<br>
panorama_suspend_paint | devonly, hidden | Default: false<br>
panorama_temp_comp_layer_min_dimension | devonly, hidden | Default: 512<br>
panorama_track_render_commands | devonly, hidden | Default: false<br>
panorama_transform_parents_no_layer_for_perspective | devonly, hidden | Default: false<br>
panorama_transforms_no_comp_layer | devonly, hidden | Default: false<br>
panorama_transition_time_factor | devonly, hidden | Default: 1<br>A float representing a scale factor for transitions. 1.0 is normal, 2.0 would be twice as fast as normal, 0.5 half as fast
panorama_use_backbuffer_directly | devonly, hidden | Default: true<br>
panorama_use_new_occlusion_invalidation | devonly, hidden | Default: false<br>
panorama_worldpanel_update_cull_distance | devonly, cl | Default: 1000<br>
panorama_worldpanel_update_cull_size_threshold | devonly, cl | Default: 5<br>
panorama_worldpanel_update_culling | devonly, cl | Default: false<br>
parallel_perform_invalidate_physics | devonly, sv, cl, rep | Default: false<br>
parallel_spatial_partition_update | devonly, sv, cl, rep | Default: false<br>
particle_cluster_debug | devonly, sv, cl, rep | Default: 0<br>
particle_cluster_manager_search_dist | devonly, sv, cl, rep | Default: 256<br>
particle_cluster_nodraw | devonly, sv, cl, rep | Default: false<br>
particle_cluster_use_collision_hulls | devonly, sv, cl, rep | Default: true<br>
particle_debug_creation_filter | devonly, cl, hidden, rep | Default: <br>
particle_layer_id_whitelist | devonly | Default: <br>
particle_powsimd_random_range_exp | devonly | Default: true<br>
particle_profile | devonly | Profile particle
particle_profile_filter | devonly | Default: <br>Profile particle filter
particle_profile_spike | devonly | Profile particle spike
particle_reset_assertions | devonly | Causes all single-fire particle assertions to trigger once more.
particle_snapshot_allow_combined_models | devonly | Default: false<br>
particle_stop_all | devonly, cl, cheat | Stops all particle systems currently playing
particle_test_attach_attachment | sv, cheat | Default: 0<br>Attachment index for attachment mode
particle_test_attach_mode | sv, cheat | Default: follow_attachment<br>Possible Values: 'start_at_attachment', 'follow_attachment', 'start_at_origin', 'follow_origin'
particle_test_create | sv, cheat | Creates the named particle system where the player is looking.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
particle_test_destroy | sv, cheat | Destroys all particle systems matching the specified name.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
particle_test_file | sv, cheat | Default: <br>Name of the particle system to dynamically spawn
particle_test_start | sv, cheat | Dispatches the test particle system with the parameters specified in particle_test_file,<br> particle_test_attach_mode and particle_test_attach_param on the entity the player is looking at.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
particle_test_stop | sv, cheat | Stops all particle systems on the selected entities.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
particles_multiplier | cheat | Default: 1<br>Multiply # of rendered particles by this for perf testing
partybrowser_throttle_data | devonly, cl | Default: 0.15<br>
partybrowser_timeout | devonly, cl | Default: 15<br>
password | a, norecord, server_cannot_query | Default: <br>Current server access password
path | devonly | Show the filesystem path.
path_closest_point_debug | devonly, sv, cl, rep | Default: false<br>
pause | release | Toggle the server pause state.
pawn_mimic_all | devonly, sv, cl, rep | Default: false<br>
perfectworld_replenish_funds | cl, hidden, clientcmd_can_execute | Opens Perfect World funds replenishment page for account.
phonemedelay | devonly, cl | Default: 0<br>Phoneme delay to account for sound system latency.
phonemefilter | devonly, cl | Default: 0.08<br>Time duration of box filter to pass over phonemes.
phonemesnap | devonly, cl | Default: 2<br>Lod at level at which visemes stops always considering two phonemes, regardless of duration.
phys_batch_ray_test | devonly, cl | Default: 0<br>
phys_continuous_kinematic_update | devonly, sv, cl, rep | Default: 1<br>
phys_create_test_character_proxy | devonly, sv | Create test character proxy
phys_cull_internal_mesh_contacts | devonly, rep | Default: false<br>
phys_debug_draw | devonly | Set up debug-draw of physics internal state
phys_dump_intersection_controller | devonly, sv | Dump intersection controller status
phys_dump_main_world | devonly, sv | Dump physics main world to file
phys_dump_memory | devonly, sv | Dump memory usage
phys_dynamic_scaling | sv, cl, rep, cheat | Default: true<br>
phys_expensive_shape_threshold | cl, cheat | Default: 6<br>
phys_headshotscale | devonly, sv, cl, rep | Default: 1.3<br>Modifier for the headshot impulse hits on players
phys_highlight_expensive_objects | cheat | Default: false<br>Highlight expensive physics objects
phys_highlight_expensive_objects_strength | cheat | Default: 0.02<br>Highlight expensive physics objects strength
phys_impactforcescale | devonly, sv | Default: 1<br>
phys_joint_teleport | sv, cheat | Default: true<br>Teleport joint anchors if connected to world
phys_length_damping_ratio | sv, cheat | Default: 2<br>Spring damping ratio for length constraint
phys_length_frequency | sv, cheat | Default: 5<br>Spring stiffness for length constraint
phys_list | devonly, sv | List all physics component contents of every entity in the game;<br>    -stream \[1\|0\] : initiate\|terminate streaming to physics debugger<br>    -allents: include non-physical entities<br>    -classes: print class names<br>    -sdk    : Rubikon build<br>    -world  : current state of the world<br>    -world -touch: list body pairs (bodies in contact)<br>    -world -save &lt;name&gt;: save world to a file<br>    -world -mem: memory dump<br>    -world -snapshots: Start/Stop dumping snapshots of the world into the current directory<br>    -world -profiletraces: ProfileRecordedTraces<br>    -world -agg: current aggregate data registry (loaded resources)<br>
phys_log_updaters | devonly, sv, cl, rep | Default: false<br>
phys_log_updaters_exclude | devonly, sv, cl, rep | Default: weapon pistol rifle survivor common_male<br>
phys_log_updaters_include | devonly, sv, cl, rep | Default: limbs<br>
phys_min_motion_controller_count_to_run_in_job | devonly | Default: 8<br>
phys_multithreading_enabled | devonly, sv, cl, rep | Default: true<br>Enable/Disable Multithreading in VPhysics
phys_playerscale | devonly, sv, cl, rep | Default: 10<br>This multiplies the bullet impact impuse on players for more dramatic results when players are shot.
phys_powered_ragdoll_debug | devonly, sv, cl, rep | Default: false<br>
phys_pushscale | devonly, sv, cl, rep | Default: 1<br>
phys_record_rays | devonly, sv | Dump physics main world to file
phys_record_rays_and_world | devonly, sv | Dump traces physics main world to file
phys_shoot | sv, cheat | Shoots a phys object.
phys_shoot_angular_speed | devonly, sv | Default: 3600<br>
phys_shoot_speed | devonly, sv | Default: 250<br>
phys_show_stats | devonly, sv, cl, rep | Default: false<br>
phys_sleep | devonly, sv | Put all physics in all the worlds to sleep
phys_step_threaded | devonly | Default: true<br>
phys_stressbodyweights | devonly, sv | Default: 5<br>
phys_threaded_kinematic_bone_update | devonly, sv, cl, rep | Default: false<br>
phys_threaded_transform_update | devonly, sv, cl, rep | Default: false<br>
phys_timescale | devonly, sv | Default: 1<br>Scale time for physics
phys_upimpactforcescale | devonly, sv | Default: 0.375<br>
phys_use_block_solver | sv, cheat | Default: true<br>Use block solving for constraint entities
phys_vehicleimpactforcescale | devonly, sv | Default: 1.5<br>
phys_visualize_awake_dynamic_only | devonly, sv, cl, rep | Default: false<br>
phys_visualize_awake_unattached_only | devonly, sv, cl, rep | Default: false<br>
phys_visualize_traces | sv, cl, rep, cheat | Default: false<br>
phys_wakeup | devonly, sv | Wake all physics objects in the Main physics up
physics_add_test | devonly, sv | add test object
physics_debug_entity | devonly, sv | Dumps debug info for an entity
physics_highlight_active | devonly, sv | Turns on the absbox for all active physics objects.<br>  0 : un-highlight.<br>
physics_remove_test | devonly, sv | remove test object
physics_report_active | devonly, sv | Lists all active physics objects<br>  -more : extra info<br>
pickup_check_period | devonly, sv | Default: 0.25<br>
pixelvis_debug | cheat | Dump debug info
plant_bomb | sv, cheat | Plant a bomb where the player is looking.
play | server_can_execute | Play a sound.
playcast | release | Play a broadcast
playdemo | release | Play a recorded demo file (.dem ).
player0_using_joystick | a | Default: false<br>
player_botdifflast_s | cl, a, release | Default: 2<br>
player_competitive_maplist_2v2_10_0_E7739BAE | cl, a | Default: mg_de_inferno,mg_de_nuke,mg_de_vertigo,mg_de_brewery,mg_de_dogtown,mg_de_overpass<br>
player_competitive_maplist_8_10_0_F1716344 | cl, a | Default: mg_de_grail,mg_de_dust2,mg_de_train,mg_de_ancient,mg_de_inferno,mg_de_nuke,mg_de_vertigo,mg_de_mirage,mg_cs_office,mg_cs_italy,mg_de_jura,mg_de_anubis,mg_lobby_mapveto,mg_cs_agency,mg_de_overpass<br>
player_debug_off_nav | sv, cheat | Default: false<br>
player_debug_print_damage | sv, cheat | Default: false<br>When true, print amount and type of all damage received by player to console.
player_nevershow_communityservermessage | cl, a, per_user | Default: 0<br>
player_ping | sv | Creates a ping notification where the player is looking.
player_ping_token_cooldown | sv, cheat, release | Default: 20<br>Cooldown for how long it takes for a player's ping token to refresh allowing them to ping again (they get 5 tokens).
player_survival_list_10_0_303 | cl, a | Default: mg_dz_blacksite,mg_dz_sirocco,mg_dz_vineyard,mg_dz_ember<br>
player_teamplayedlast | cl, a, per_user | Default: 3<br>
player_use_radius | sv, cl, rep, cheat | Default: 80<br>
player_wargames_list2_10_0_0 | cl, a | Default: <br>
playsound | devonly | playsound &lt;soundname&gt;
playsoundscape | cl, cheat | Forces a soundscape to play
playvol | devonly | Play a sound at a specified volume.
png_screenshot | devonly | Take a .png screenshot: png_screenshot \[filename\]
pop_var_values | devonly | Restore previously pushed convars and config values
population_distribution_debug | devonly, sv, rep | Default: 0<br>
pred_cloth_pos_max | devonly, cl | Default: 2<br>
pred_cloth_pos_multiplier | devonly, cl | Default: 0.5<br>
pred_cloth_pos_strength | devonly, cl | Default: 0.25<br>
pred_cloth_rot_high | devonly, cl | Default: 0.1<br>
pred_cloth_rot_low | devonly, cl | Default: 0.01<br>
pred_cloth_rot_multiplier | devonly, cl | Default: 0.3<br>
pred_cloth_smooth_motion | devonly, cl | Default: 1<br>
pred_cloth_vmax | devonly, cl | Default: 2<br>
pred_cloth_vw | devonly, cl | Default: 0.05<br>
presettle_cloth_iterations | devonly, cl | Default: 30<br>
print_changed_convars | release | Prints all convars that have changed from their default value
print_mapgroup | cl, release | Prints the current mapgroup and the contained maps
print_mapgroup_sv | sv, release | Prints the current mapgroup and the contained maps
print_model_bind_pose | devonly | Prints the bind pose of the specified model. Optionally limits to a particular bone and its parent chain, otherwise prints the entire skeleton.
progress_enable | devonly | 
prop_debug | sv, cheat | Toggle prop debug mode. If on, props will show colorcoded bounding boxes. Red means ignore all damage. White means respond physically to damage but never break. Green maps health in the range of 100 down to 1.
prop_debug_collision | sv, cheat | Default: false<br>Highlights props based on their collision group: COLLISION_GROUP_PROPS(white), COLLISION_GROUP_INTERACTIVE_DEBRIS(green), COLLISION_GROUP_DEBRIS and will return to COLLISION_GROUP_INTERACTIVE_DEBRIS on sleeping(bright red), COLLISION_GROUP_DEBRIS permanently (dark red), COLLISION_GROUP_DEBRIS(blue), OTHER(grey)
prop_dynamic_create | sv, cheat | Creates a dynamic prop with a specific .vmdl aimed away from where the player is looking.<br>	Arguments: {.vmdl name}
prop_nav_ignore_edge_len | devonly, sv | Default: -1<br>
prop_nav_ignore_mass | devonly, sv | Default: -1<br>
prop_nav_obstacle_avoid_mass | devonly, sv | Default: 100.1<br>
prop_nav_obstacle_avoid_use_connection_blocker | devonly, sv | Default: false<br>
prop_nav_obstacle_block_edge_min_ | devonly, sv | Default: -1<br>
prop_nav_obstacle_block_edge_min_a | devonly, sv | Default: -1<br>
prop_nav_obstacle_block_edge_min_c | devonly, sv | Default: -1<br>
prop_nav_obstacle_block_mass_a | devonly, sv | Default: -1<br>
prop_nav_obstacle_block_mass_b | devonly, sv | Default: -1<br>
prop_nav_obstacle_block_mass_c | devonly, sv | Default: -1<br>
prop_physics_create | sv, cheat | Creates a physics prop with a specific .vmdl aimed away from where the player is looking.<br>	Arguments: {.vmdl name}
props_break_apply_radial_forces | devonly, sv, cl, rep | Default: true<br>
props_break_max_pieces_perframe | devonly, sv, cl, rep | Default: 16<br>Maximum prop breakable piece count per frame (-1 = model default)
props_break_radial_force_ratio | devonly, sv, cl, rep | Default: 0.33<br>
pulse_debug_entity | sv, cheat | Opens a graph referencing the selected entity. If it is referenced by more than 1 graph, list all the active pulse graph instances referring to that entity so you can pick which one you want.
pulse_debug_print | devonly | Usage: pulse_debug_print &lt;vpulse_resource&gt;
pulse_list_graphs | cheat | List all the active pulse graph instances
pulse_open_graph_id | cheat | Open a specific graph instance by id
pulse_print_graph_execution_history | cheat | Prints the execution history of a graph by filename or instanceid
pulse_save_execution_history | devonly, sv, cl, rep | Default: true<br>Keep a history of all instructions run on a per graph basis.
pulse_save_execution_history_limit | devonly, sv, cl, rep | Default: 10000<br>Keep a history of all instructions run on a per graph basis.
push_var_values | devonly | Save convars and config values
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
r_RainAllowInSplitScreen | devonly, cl | Default: false<br>Allows rain in splitscreen
r_RainParticleDensity | devonly, cl | Default: 1<br>Density of Particle Rain 0-1
r_add_views_in_pre_output | devonly | Default: true<br>
r_allow_onesweep_gpusort | devonly | Default: true<br>
r_always_render_all_windows | devonly | Default: false<br>Always force all engine & tools to render
r_aoproxy_cull_dist | devonly | Default: 12<br>Distance to cull the AO proxy as a factor of size
r_aoproxy_debug | cl, cheat | Default: false<br>
r_aoproxy_enable | devonly, cl | Default: true<br>
r_aoproxy_min_dist | devonly | Default: 3<br>
r_aoproxy_min_dist_box | devonly | Default: 1<br>
r_aoproxy_show | cl, cheat | Default: false<br>
r_aspectratio | devonly | Default: 0<br>
r_async_shader_compile_notify_frequency | devonly | Default: 10<br>
r_bloom_tent_filter_radius | devonly, cl, cheat | Default: 3.1<br>bloom mip up-sample filtering radius (using 3x3 tent filter, radius in mip level texels), 0.0 radius =&gt; box (2x2) filter with (fixed) 1.0 radius
r_camerapos | devonly | Prints out the current camera position + orientation to the console
r_character_decal_renderdoc_capture | devonly | Default: false<br>
r_character_decal_resolution | devonly | Default: 1024<br>Resolution of character decal texture.
r_cs2_show_icon_editor | devonly, cl, rep, cheat | Default: false<br>CSGO/Icon Editor
r_csgo_bloom_threshold_all_samples | devonly, cl | Default: true<br>Execute bloom threshold once per sample during downsample (default enabled, higher quality, less bloom aliasing)
r_csgo_bloom_threshold_downsample_jimenez | devonly, cl | Default: true<br>Custom downsample based on Jimenez14, (default enabled, higher quality, decreases bloom aliasing further)
r_csgo_cable_pixel_radius_clamp | devonly, cl | Default: 1.2<br>Minimum clamped size in pixels of a cable (if using F_CLAMP_MIN_RADIUS 1 in cable material)
r_csgo_cmaa_debug_edges | devonly, cl | Default: false<br>debug visualize edges
r_csgo_cmaa_enable | devonly, cl | Default: false<br>
r_csgo_cmaa_extra_sharp | devonly, cl | Default: false<br>trade more sharpness for reduced antialiasing
r_csgo_cmaa_quality | devonly, cl | Default: 3<br>0=low, 1=medium, 2=high, 3=ultra
r_csgo_csm_override_staticgeo_cascades_alphatest | devonly, cl | Default: false<br>If lb_csm_override_staticgeo_cascades true, ensure objects with SCENEOBJECTFLAG_ALPHA_TESTED flag will be rendered into cascade.
r_csgo_csm_pushback_distance | devonly, cl | Default: 7000<br>
r_csgo_csm_pushback_distance_preview | devonly, cl | Default: 1500<br>
r_csgo_cubemap_normalization | cl, cheat | Default: true<br>
r_csgo_decal_debug | cl, cheat | Default: false<br>
r_csgo_decals_use_msaa | devonly, cl | Default: false<br>
r_csgo_depth_prepass | cl, cheat | Default: true<br>
r_csgo_depth_prepass_cull_threshold | cl, cheat | Default: 60<br>
r_csgo_depth_prepass_skybox_alpha_tested | cl, cheat | Default: true<br>
r_csgo_depth_prepass_small_cull_threshold | cl, cheat | Default: 10<br>
r_csgo_depth_prepass_viewmodel | cl, cheat | Default: true<br>
r_csgo_directional_lightmaps | cl, cheat | Default: true<br>
r_csgo_effects_bloom | cl, cheat | Default: true<br>
r_csgo_effects_bloom_when_smoked | cl, cheat | Default: false<br>
r_csgo_enable_cubemap_fog | devonly, cl | Default: true<br>
r_csgo_enable_glows | cl, cheat | Default: true<br>
r_csgo_enable_gradient_fog | devonly, cl | Default: true<br>
r_csgo_enable_high_precision_lighting | cl, cheat | Default: true<br>
r_csgo_enable_sunlight_check | devonly, cl | Default: true<br>Enable vis tests for sunlight.
r_csgo_enable_tonemapping | cl, cheat | Default: true<br>
r_csgo_enable_translucent_screen_space | cl, cheat | Default: true<br>
r_csgo_enable_volume_fog | devonly, cl | Default: false<br>
r_csgo_firstpersonlegs_nearz_offset | devonly, cl | Default: 0.1<br>
r_csgo_fsr_enable_mip_bias | devonly, cl | Default: true<br>Apply negative mip bias when rendering with FSR.
r_csgo_fsr_rcas_sharpness | devonly, cl | Default: 0.25<br>RCAS sharpness when using FSR + RCAS upsample.
r_csgo_fsr_upsample | devonly, cl | Default: 0<br>0 == bilinear upsampe, 1 == FSR upsample, 2 == FSR + RCAS upsample
r_csgo_gpu_culling | devonly, cl | Default: true<br>CSGO/Graphics/GPU Culling
r_csgo_gpu_culling_camera_offset | devonly, cl | Default: -0.5<br>
r_csgo_gpu_culling_shadows | devonly, cl | Default: false<br>CSGO/Graphics/GPU Cull Shadow Views
r_csgo_gpu_culling_shadows_min_cascade | devonly, cl | Default: 1<br>If r_csgo_gpu_culling_shadows is true, this defines min cascade for which gpu culling is used
r_csgo_gpu_culling_two_pass | devonly, cl | Default: false<br>CSGO/Graphics/GPU Culling (Two Pass)
r_csgo_gpu_opt_downsample_depth_using_resolved_depth | devonly, cl | Default: true<br>use already resolved depth as input to downsample depth layer
r_csgo_gpu_opt_firstpersonlegs_visible_angle | devonly, cl | Default: 40<br>avoid overhead of firstpersonlegs layers if not looking down enough to see them
r_csgo_gpu_opt_prepass_characters | devonly, cl | Default: true<br>only depth prepass nearby characters (see r_csgo_gpu_opt_prepass_characters_cull_threshold to control threshold)
r_csgo_gpu_opt_prepass_characters_cull_threshold | devonly, cl | Default: 15<br>use with r_csgo_gpu_opt_prepass_characters
r_csgo_gpu_opt_resolve_depth_for_decals_on_translucent | devonly, cl | Default: true<br>optimize layers for decals on translucent geo, avoid one resolve and some fullscreen passes
r_csgo_gpu_opt_resolve_depth_no_characters | devonly, cl | Default: true<br>remove unused resolve
r_csgo_gpu_opt_use_aoproxy_depth_for_depth_pyramid | devonly, cl | Default: true<br>if ao proxies enabled, use ao proxy downsampled depth as input to generate the depth pyramid for gpu culling
r_csgo_gpu_opt_viewmodel_stencil | devonly, cl | Default: true<br>
r_csgo_gpu_opt_water_refraction_resolve | devonly, cl | Default: true<br>copy already resolved depth for use by waterrefraction layers, instead of resolving main depth again (avoids msaa samples)
r_csgo_gpu_optimizations | devonly, cl | Default: false<br>temporary cvar to control new GPU optimzations (depth resolves, etc)
r_csgo_joint_upscale_sigma | devonly, cl | Default: 0.002<br>
r_csgo_mboit | cl, cheat | Default: true<br>
r_csgo_mboit_bias | cl, cheat | Default: 5e-06<br>
r_csgo_mboit_debug | cl, cheat | Default: false<br>
r_csgo_mboit_force_mixed_resolution | devonly, cl | Default: false<br>
r_csgo_mboit_overestimation | cl, cheat | Default: 0.01<br>
r_csgo_mboit_upscale_cs | cl, cheat | Default: false<br>
r_csgo_mboit_use_4_moments | cl, cheat | Default: false<br>
r_csgo_merge_resolve_with_histogram | cl, cheat | Default: true<br>
r_csgo_microshadowing | devonly, cl | Default: true<br>
r_csgo_mixed_resolution_color_slices | cl, cheat | Default: false<br>
r_csgo_mixed_resolution_particles | devonly, cl | Default: true<br>
r_csgo_mixed_resolution_particles_minmax | cl, cheat | Default: false<br>
r_csgo_mixed_resolution_particles_scale | cl, cheat | Default: 2<br>
r_csgo_mouse_trace_coord | cl, cheat | Default: true<br>
r_csgo_msaa_resolve_apply_exposure_scale | devonly, cl | Default: true<br>0 - before, 1 - after fix for a2c fringing
r_csgo_multiscattering | devonly, cl | Default: true<br>
r_csgo_no_shader_resolve | cl, cheat | Default: false<br>
r_csgo_outline_glow_scaledenom | devonly, cl, cheat | Default: 1<br>
r_csgo_override_global_time | cl, cheat | Default: true<br>
r_csgo_postprocess_enable | cl, cheat | Default: true<br>
r_csgo_r11g11b10_dither_mode | devonly, cl | Default: 2<br>0 - disabled, 1 - regular dither noise, 2 - blue noise dither
r_csgo_readonly_depth_stencil_enable | cl, cheat | Default: true<br>
r_csgo_reconstruct_normals | cl, cheat | Default: false<br>
r_csgo_reconstruct_normals_method | cl, cheat | Default: 0<br>
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
r_csgo_render_post_fxaa | devonly, cl | Default: 0<br>
r_csgo_render_post_local_contrast | cl, cheat | Default: true<br>
r_csgo_render_post_mirror_horizontal | cl, cheat | Default: 0<br>
r_csgo_render_post_mirror_vertical | cl, cheat | Default: 0<br>
r_csgo_render_translucent | cl, cheat | Default: true<br>
r_csgo_resolve_dither_bluenoise_amount | devonly, cl | Default: 4<br>Equivalent to r_csgo_render_dither_scale, but purely to control bluenoise for R11G11B10 downsample dither (if r_csgo_r11g11b10_dither_mode = 2)
r_csgo_resolve_dither_noise_amount | devonly, cl | Default: 0.2<br>Amount of screen space dither noise to apply during resolve (used/essential with R11G11B10_FLOAT RT)
r_csgo_shader_feature_test_value | devonly, cl | Default: 1<br>
r_csgo_shader_perf_test | devonly, cl | Default: false<br>
r_csgo_shadow_map_allocation_failure_policy | devonly, cl, cheat | Default: 1<br>What happens when a shadow map fails allocation? 0 = don't render, 1 = render unshadowed
r_csgo_shadows_debug | cl, cheat | Default: 0<br>
r_csgo_smoke_avoid_flat | devonly, cl | Default: true<br>
r_csgo_smoke_clip_sniper | devonly, cl | Default: true<br>
r_csgo_smoke_fullres_enhance | devonly, cl | Default: false<br>Enhance edges of smokes to eliminate bad pixels
r_csgo_smoke_fullres_pass | devonly, cl | Default: true<br>Does a full res pass to cover holes and artifacts in smoke low res
r_csgo_smoke_overlay_min_dt | devonly, cl | Default: 0.0156863<br>
r_csgo_smoke_shadow | devonly, cl | Default: true<br>
r_csgo_smoke_upscale_discard_pixels_behind | devonly, cl | Default: false<br>When upsampling smoke discard pixels behind solid depth to avoid pixelated artifacts
r_csgo_stencil_sniper_zoom | devonly, cl | Default: true<br>
r_csgo_test1 | cl, release | Default: false<br>
r_csgo_tools_vis_cubemap_roughness | devonly, cl, cheat | Default: 0.0001<br>
r_csgo_upscale_depth_threshold | devonly, cl | Default: 3<br>
r_csgo_use_compute_bloom | devonly, cl | Default: false<br>
r_csgo_viewmodel_csm_pushback_distance | devonly, cl | Default: 1000<br>
r_csgo_viewmodel_envmap_position_bias | devonly, cl, cheat | Default: 0.85<br>
r_csgo_viewmodel_far_plane | devonly, cl | Default: 100<br>
r_csgo_viewmodel_near_plane | devonly, cl | Default: 1<br>
r_csgo_viewmodel_probe_clamp_plane_distance | devonly, cl, cheat | Default: 16<br>
r_csgo_volume_mboit_optimization | cl, cheat | Default: true<br>
r_csgo_water_effects | cl, cheat | Default: true<br>
r_csgo_water_refraction | cl, cheat | Default: true<br>
r_csgo_water_skybox_depth | devonly, cl | Default: true<br>
r_cubemap_debug_colors | cheat | Default: 0<br>
r_dashboard_render_quality | devonly, cl | Default: true<br>
r_debug_depth_holes | cl, cheat | Default: false<br>
r_debug_draw_safe_area_insets | devonly | Default: false<br>Render safe area insets as wireframe.
r_debug_particle_shadows | cl, cheat | Default: false<br>
r_debug_precipitation | cl, cheat | Default: false<br>Show precipitation volumes
r_decals | devonly, cl | Default: 2048<br>
r_decals_additional_offset | devonly, cl, rep | Default: 0.01<br>
r_decals_default_fade_duration | devonly, cl, rep | Default: 1<br>
r_decals_default_start_fade | devonly, cl, rep | Default: 30<br>
r_decals_overide_fadestarttime_params | devonly, sv, cl, rep | Default: -1<br>
r_decals_overlap_threshold | devonly, cl, rep | Default: 6<br>
r_depth_of_field | devonly, cl | Default: 1<br>0 = off, 1 = enabled (high quality, circular bokeh, HDR)
r_directional_lightmaps | devonly | Default: true<br>
r_directlighting | cheat | Default: true<br>Set to use direct lighting
r_dlss_preset | devonly | Default: 5<br>
r_dof2_maxblursize | devonly, cl | Default: 5<br>
r_dof2_radiusscale | devonly, cl | Default: 0.25<br>
r_dof_override | cheat | Default: false<br>
r_dof_override_far_blurry | cheat | Default: 2000<br>
r_dof_override_far_crisp | cheat | Default: 180<br>
r_dof_override_near_blurry | cheat | Default: -100<br>
r_dof_override_near_crisp | cheat | Default: 0<br>
r_dof_override_tilt_to_ground | cheat | Default: 0.5<br>
r_dopixelvisibility | cheat | Default: true<br>
r_draw3dskybox | devonly, cl | Default: true<br>
r_draw_first_tri_only | cheat | Default: false<br>
r_draw_instances | cheat | Default: true<br>
r_draw_overlays | devonly | Default: true<br>
r_draw_particle_children_with_parents | cheat | Default: -1<br>Draw particle children with parents (-1=use gameinfo, 0=no, 1=yes)
r_drawblankworld | cheat | Default: false<br>Render blank instead of the game world
r_drawchickens | cl, cheat | Default: true<br>Render chickens
r_drawcsplayers | cl, cheat | Default: true<br>Render CS players
r_drawdecals | cheat | Default: true<br>Set to render decals
r_drawdevvisualizers | cl, cheat | Default: false<br>Render dev visualizers
r_drawmodeldecals | devonly, cl | Default: true<br>
r_drawpanorama | cheat | Default: true<br>Enable the rendering of panorama UI
r_drawparticles | cheat | Default: true<br>Enable/disable particle rendering
r_drawpixelvisibility | devonly | Default: false<br>Show the occlusion proxies
r_drawropes | cl, cheat | Default: true<br>
r_drawskybox | cheat | Default: true<br>Render the 2d skybox.
r_drawtracers | cl, cheat | Default: true<br>
r_drawtracers_firstperson | cl, a, release | Default: true<br>Toggle visibility of first person weapon tracers
r_drawviewmodel | cl, cheat | Default: true<br>Render view model
r_drawworld | cheat | Default: true<br>Render the world.
r_dx11_debug_clean | release | Default: false<br>Aggressively unbind bound resources to cleanup DX11 debug warnings.
r_dx11_report_live_objects | devonly | Prints out live D3D11 objects (requires -dx11debug)
r_dx11_software_cmd_lists | devonly | Default: true<br>Enable Software Command lists for DX11 (Avoid using deferred contexts)
r_enable_rigid_animation | devonly, cl | Default: false<br>
r_entpos | devonly | Moves the camera position + orientation to the named entity
r_experimental_lag_limiter | devonly | Default: false<br>
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
r_force_engine_render_frame | devonly | Force a single render of the engine viewport.
r_force_no_present | cheat | Default: false<br>Force the render device to not present frames.
r_force_render_frame_count | devonly | Default: 5<br>The number of frames to render when a
r_force_thick_hair | devonly, cheat | Default: false<br>
r_force_zprepass | cheat | Default: -1<br>0: Force z prepass off. 1: Force on. -1: Don't force
r_frame_sync_enable | devonly | Default: true<br>
r_freeze_sceneobjects | devonly, cl | Default: false<br>
r_freezeparticles | cheat | Default: false<br>Pause particle simulation
r_fullscreen_gamma | a | Default: 2.2<br>Screen Gamma (only in fullscreen modes)
r_fullscreen_quad_single_triangle | devonly | Default: true<br>
r_gpu_mem_stats | devonly | Display GPU memory usage.
r_grass_allow_flattening | devonly | Default: false<br>
r_grass_alpha_test | devonly | Default: 1<br>
r_grass_density_mode | devonly | Default: 1<br>0 = Density corresponds to blade existance, 1 = Density corresponds to blade height, 2 = Both 0 and 1
r_grass_end_fade | devonly | Default: 3900<br>
r_grass_max_brightness_change | devonly | Default: 75<br>
r_grass_quality | devonly | Default: 3<br>0 = Off, 1 = Low, 2 = Med, 3 = high, 4 = ultra
r_grass_start_fade | devonly | Default: 3000<br>
r_grass_vertex_lighting | devonly | Default: 0<br>
r_hair_ao | devonly | Default: true<br>
r_hair_debug_guides | devonly, cheat | Default: 0<br>1: Highlight guide hairs, 2: draw only guide hairs
r_hair_indirect_transmittance | devonly | Default: true<br>
r_hair_meshshader | devonly | Default: 0<br>
r_hair_shadowtile | devonly | Default: true<br>
r_hair_voxels | devonly, cheat | Default: -1<br>
r_hair_wind_global_scale | devonly | Default: 0.3<br>
r_hair_wind_min_noise_speed | devonly | Default: 20<br>
r_hair_wind_motion_scale | devonly | Default: 0.07<br>
r_hair_wind_noise | devonly | Default: 0.2<br>
r_hair_wind_noise_occlusion | devonly | Default: 1<br>
r_hair_wind_noise_size | devonly | Default: 10<br>
r_hair_wind_occlusion | devonly | Default: 2<br>
r_haircull_percent | devonly, cheat | Default: -1<br>
r_hairsort | devonly, cheat | Default: true<br>
r_icon_csm_pushback_distance | devonly, cl, cheat | Default: -1<br>csm pushback distance, should be much shorter/disabled for icon rendering
r_icon_custommaterial_maxres | devonly, cl, cheat | Default: 512<br>maxres for custommaterials when rendering icons
r_icon_generate_offline_mips | devonly, cl, cheat | Default: false<br>generate mips via sidecar file for offline
r_icon_generate_runtime_mips | devonly, cl, cheat | Default: true<br>generate mips for runtime
r_icon_highcontrast_postprocessing_weight | devonly, cl, cheat | Default: 0.375<br>if using high contrast postprocessing, use this weight (weight = 1.0 for characters)
r_icon_max_mip_width | devonly, cl, cheat | Default: 128<br>r_icon_max_mip_width
r_icon_player_equip_gloves_from_loadout | devonly, cl, cheat | Default: false<br>equip gloves on player for icon rendering from loadout, or use default gloves
r_icon_rendering_height | devonly, cl, hidden, cheat | Default: 384<br>icon rendering height
r_icon_rendering_width | devonly, cl, hidden, cheat | Default: 512<br>icon rendering width
r_icon_show_timing | devonly, cl, cheat | Default: false<br>show timing in output
r_icon_use_kv3_camera | devonly, cl, cheat | Default: false<br>use test kv3 data for camera
r_impact_ricochet_chance | devonly, cl | Default: 0.3<br>
r_impacts_alt_orientation | devonly, cl | Default: true<br>
r_impacts_decal_grazing_incidence_cutoff | devonly, cl | Default: 0.55<br>
r_impacts_decal_grazing_incidence_variance | devonly, cl | Default: 0.1<br>
r_indirectlighting | cheat | Default: true<br>Set to use indirect lighting
r_late_particle_job_sync | devonly, cl | Default: false<br>
r_legacy_vsync | devonly, hidden | Default: false<br>Use legacy vsync mode -- for testing for a couple user machines.
r_light_flickering_enabled | devonly, sv, cl, rep | Default: true<br>
r_light_probe_volume_debug_colors | cheat | Default: false<br>
r_light_probe_volume_debug_grid | cheat | Default: 0<br>Show LPV debug grid, 0: off, 1: closest only 2: closest and keep 3: all
r_light_probe_volume_debug_grid_albedo | cheat | Default: 128 128 128 255<br>albedo for LPV debug grid
r_light_probe_volume_debug_grid_bbox | cheat | Default: true<br>Show LPV bounding box when debug grid is on, 0: off, 1: on
r_light_probe_volume_debug_grid_metalness | cheat | Default: 0<br>metalness for LPV debug grid
r_light_probe_volume_debug_grid_prim | cheat | Default: 0<br>0: spheres, 1: cubes
r_light_probe_volume_debug_grid_roughness | cheat | Default: 0.5<br>roughness for LPV debug grid
r_light_probe_volume_debug_grid_samplesize | cheat | Default: 4<br>sphere radius (world) for LPV debug grid
r_lightmap_set | cheat | Default: lightmaps<br>Lightmap set to use, only works on map load
r_lightmap_size | devonly | Default: 65536<br>Maximum lightmap resolution.
r_lightmap_size_directional_irradiance | devonly | Default: -1<br>Maximum lightmap resolution for directional_irradiance channel. -1 = use value of r_lightmap_size
r_limit_particle_job_duration | devonly | Default: false<br>
r_low_latency | devonly | Default: 1<br>NVIDIA Low Latency/AMD Anti-Lag 2 (0 = off, 1 = on, 2 = NV-only, on + boost)
r_low_latency_trigger_flash | devonly | Default: true<br>NVIDIA Low Latency Trigger Flash
r_mapextents | cl, cheat | Default: 16384<br>Set the max dimension for the map.  This determines the far clipping plane
r_max_texture_pool_size | devonly | Default: 0<br>Upper limit on texture pool size.
r_mixed_shadows_fade_in_time | devonly, sv, cl, rep | Default: 0.5<br>
r_mixed_shadows_fade_out_time | devonly, sv, cl, rep | Default: 0.5<br>
r_monitor_3dskybox | devonly, cl | Default: true<br>
r_morphing_enabled | cheat | Default: true<br>
r_multigpu_num_gpus_found | devonly | Default: 1<br>
r_multigpu_num_gpus_used | devonly | Default: 1<br>
r_muzzleflashbrightness | cl, rep, cheat | Default: 0.4<br>
r_muzzleflashlinear | cl, rep, cheat | Default: 0.05<br>
r_nearz | cl, cheat | Default: -1<br>Override the near clipping plane. -1 means use the default.
r_particle_cables_cast_shadows | devonly | Default: true<br>
r_particle_cables_culling | devonly | Default: 1<br>
r_particle_cables_render_meshlets | devonly | Default: true<br>
r_particle_cables_visualize_roundness | devonly | Default: false<br>
r_particle_debug_filter | devonly | Default: <br>Limit debug visualizations to substring match of effect name
r_particle_debug_force_simulation | devonly | Default: 0<br>-1 for all asleep, 1 for all awake
r_particle_debug_randomseeds | devonly | Default: false<br>Use random seeds in debug
r_particle_enable_fastpath | devonly | Default: true<br>
r_particle_fixedrandomseeds | devonly | Default: false<br>Use fixed seeds for easier debugging
r_particle_force_material_binds | devonly | Default: false<br>
r_particle_gpu_implicit | devonly | Default: true<br>
r_particle_gpu_implicit_cull_columns | devonly | Default: true<br>
r_particle_gpu_implicit_debug_bricks | devonly | Default: false<br>
r_particle_gpu_implicit_debug_stats | devonly | Default: false<br>
r_particle_gpu_implicit_debug_wireframe | devonly | Default: false<br>
r_particle_gpu_implicit_lds_cache | devonly | Default: false<br>
r_particle_max_detail_level | devonly | Default: 3<br>The maximum detail level of particle to create
r_particle_max_draw_distance | cheat | Default: 1e+06<br>The maximum distance that particles will render
r_particle_max_size_cull | devonly | Default: 1200<br>Particle systems larger than this in every dimension skip culling to save CPU.  They will be drawn anyway.
r_particle_max_texture_layers | devonly | Default: -1<br>
r_particle_min_timestep | devonly | Default: 0<br>A minimum on particle simulation time, particle simulation happening more frequently than this will lerp.
r_particle_mixed_resolution_viewstart | devonly | Default: 500<br>
r_particle_model_new | devonly | Default: false<br>
r_particle_model_new8 | devonly | Default: true<br>
r_particle_model_per_thread_count | devonly | Default: 32<br>
r_particle_newinput | devonly | Default: false<br>Enable input path in particle ops
r_particle_render_refreshes_sleep_timer | devonly | Default: true<br>Disable to get a better look at what's happening offscreen
r_particle_render_test | devonly | Default: false<br>render particles 100 times and show perf
r_particle_shadow_map_texture_size | devonly, cl | Default: 1536<br>
r_particle_shadows | devonly, cl | Default: true<br>
r_particle_shadows_cast_on_particles | devonly, cl | Default: true<br>
r_particle_shadows_cast_on_particles_scale | devonly, cl | Default: true<br>
r_particle_shadows_cast_on_world | devonly, cl | Default: true<br>
r_particle_shadows_compute | cl, release | Default: true<br>
r_particle_skip_postsim | devonly | Default: false<br>
r_particle_timescale | devonly | Default: 1<br>
r_particle_warn_threshold_ms | devonly | Default: 0<br>Threshold to warn about when rendering particles.
r_physics_particle_op_spawn_scale | devonly | Default: 1<br>
r_pipeline_stats_command_flush | devonly | Default: false<br>Experimental: Set to 1 to enable full GPU pipeline flushing after each command list.
r_pipeline_stats_flush_before_sleeping | devonly | Default: false<br>Experimental: Set to 1 to enable GPU pipeline flushes right before the render thread sleeps to wait for more work.
r_pipeline_stats_present_flush | devonly | Default: false<br>Experimental: Set to 1 to enable full GPU pipeline flushing after each present.
r_pipeline_stats_use_flush_api | devonly | Default: true<br>Experimental: Set to 1 to use the ID3D11DeviceContext11::Flush() to flush the GPU pipeline instead of queries.
r_pixelvisibility_partial | cheat | Default: true<br>
r_pixelvisibility_spew | cheat | Default: false<br>
r_player_fog_distance_multiplier | devonly, cl, cheat | Default: 1.7<br>
r_player_fog_maxdensity_multiplier | devonly, cl, cheat | Default: 0.6<br>
r_player_visibility_mode | cl, a, release | Default: 1<br>
r_player_visibility_stencil | devonly, cl, cheat | Default: true<br>
r_player_visibility_strength | devonly, cl, cheat | Default: 1.1<br>
r_post_bloom_debug | devonly, cl | Default: 0<br>1 = bloom output (before thresholding), 2 = quarter res downsample, 3 = quarter res effects bloom 4 = quarter res effects raw
r_print_buffers | devonly | Print Vertex/Index/GPU buffers.
r_print_texture_stats | devonly | Texture stats
r_propsmaxdist | devonly, cl | Default: 1200<br>Maximum visible distance
r_render_coordination_state | devonly | Prints out the current render coordination state.
r_render_hair | devonly, cheat | Default: true<br>
r_render_to_cubemap_begin_mixing_roughness | devonly, cl | Default: 0.25<br>
r_render_to_cubemap_debug | devonly, cl | Default: false<br>
r_render_world_node_bounds | cheat | Default: false<br>Render world node bounds
r_renderdoc_capture_frame | devonly | Triggers a RenderDoc capture
r_renderdoc_capture_window_dx11 | devonly | Triggers a RenderDoc capture of a specific Window
r_renderdoc_open_captures | devonly | Default: true<br>
r_renderdoc_validation_error_capture_limit | devonly | Default: 5<br>
r_rendersun | cheat | Default: true<br>Render sun lighting
r_replay_post_effect | cl, cheat | Default: -1<br>
r_reset_character_decals | devonly | Default: false<br>
r_ropetranslucent | devonly, cl | Default: true<br>
r_screen_size_expansion | devonly, cl | Default: 0<br>
r_setpos | devonly | Moves the camera position + orientation to the specified position
r_shadows | cheat | Default: true<br>
r_shadowtile_waveops |  | Default: false<br>
r_show_build_info | cl, a, release | Default: true<br>Build information. Leave this enabled when submitting bug screenshots and videos, please!
r_show_time_info | cl, release | Default: false<br>Show real time, large.
r_showdebugoverlays | cheat | Default: false<br>Set to render debug overlays
r_showdebugrendertarget | cheat | Default: false<br>Set the debug render target to show, 0 == disable
r_showsceneobjectbounds | cheat | Default: false<br>Show scenesystem object bounding boxes
r_showsunshadowdebugrendertargets | cheat | Default: false<br>Set to render sun shadow render targets
r_showsunshadowdebugsplitvis | cheat | Default: false<br>Set to render sun shadow split visibility debugger
r_size_cull_threshold | devonly | Default: 0.33<br>Threshold of screen size percentage below which objects get culled
r_size_cull_threshold_fade | devonly | Default: 7.5<br>% above the screen size percentage where we will start fading out (==0 will disable fading).
r_size_cull_threshold_shadow | cheat | Default: 0.2<br>Threshold of shadow map size percentage below which objects get culled
r_skinning_enabled | cheat | Default: true<br>
r_skip_precache_validation_check | devonly | Default: false<br>
r_smooth_morph_normals | release | Default: false<br>
r_ssao | devonly | Default: true<br>Set to use screen-space ambient occlusion
r_ssao_bias | devonly | Default: 2.5<br>
r_ssao_blur | devonly | Default: true<br>
r_ssao_radius | devonly | Default: 8<br>
r_ssao_strength | devonly | Default: 3<br>
r_stereo_multiview_instancing | cheat | Default: false<br>Use multiview instancing for stereo rendering.
r_strip_invisible_during_sceneobject_update | devonly, cl | Default: false<br>
r_suppress_redundant_state_changes | devonly | Default: true<br>
r_test1_maximum_wait_ms | cl, release | Default: 10<br>
r_texture_budget_dynamic | devonly | Default: true<br>Dynamically adjust texture streaming budget based on GPU memory usage.
r_texture_budget_threshold | devonly | Default: 0.9<br>Reduce texture memory pool size when this percentage of the budget is full.
r_texture_budget_update_period | devonly | Default: 0.5<br>Time (in seconds) between updating texture memory budget.
r_texture_eager_eviction | devonly | Default: false<br>
r_texture_hookup_uses_threadpool | devonly | Default: true<br>Async Texture hookup uses its own threadpool instead of the global pool.
r_texture_lod_scale | cheat | Default: 1<br>Scale factor for requested texture size (texture streaming)
r_texture_nonstreaming_load | devonly | Default: true<br>Allow immediately loading mips of textures (when possible) when their headers are loaded, saving IO & reducing latency.
r_texture_pool_increase_rate | devonly | Default: 64<br>Increase texture memory pool size by this many MB / s when under budget.
r_texture_pool_reduce_rate | devonly | Default: 256<br>Reduce texture memory pool size by this many MB / s when over budget.
r_texture_pool_size | devonly | Default: 1600<br>Total size of the texture pool in MB
r_texture_stream_max_resolution | devonly | Default: 2147483647<br>Maximum resolution for top mip level in streaming textures
r_texture_stream_mip_bias | devonly | Default: 0<br>Biases the mip level the texture streaming system choses to stream for each texture.
r_texture_stream_resolution_bias | devonly | Default: 1<br>
r_texture_stream_resolution_bias_decrease_rate | devonly | Default: 0.1<br>
r_texture_stream_resolution_bias_increase_rate | devonly | Default: 0.05<br>
r_texture_stream_resolution_bias_min | devonly | Default: 1<br>
r_texture_stream_resolution_bias_update_period | devonly | Default: 0.5<br>
r_texture_stream_throttle_amount | devonly | Default: 10<br>
r_texture_stream_throttle_count | devonly | Default: 3<br>
r_texture_stream_throttle_count_over_budget | devonly | Default: 1<br>
r_texture_streaming_timesliced | devonly | Default: true<br>
r_texture_streamout_unthrottle_ms | devonly | Default: 0.2<br>After hitting throttling limits for streamout, allow it to continue up to this number of milliseconds.
r_texturefilteringquality | devonly | Default: 1<br>0: Bilinear, 1: Trilinear, 2: Aniso 2x, 3: Aniso 4x, 4: Aniso 8x, 5: Aniso 16x
r_textures_evict_all | devonly | Evict all resident texture.
r_threaded_particles | devonly | Default: true<br>
r_threaded_scene_object_update | devonly, cl | Default: true<br>
r_timestamp_query_multiplier | devonly | Default: 1<br>Set the TIMESTAMP query cycle multiplier, for drivers that lie
r_toggleviewportsize | devonly | Toggles viewport size between small + full window.
r_translucent | cheat | Default: true<br>Enable rendering of translucent geometry
r_update_particles_on_render_only_frames | devonly, cl | Default: false<br>
r_use_memory_budget_model | devonly | Default: false<br>Use a model of GPU memory use to determine budget rather than querying the OS.
r_validate_texture_streaming | devonly | Default: false<br>Dumps state of texture streaming at the next frame boundary.
r_vconsole_foregroundforcerender | devonly | Default: true<br>When VConsole is in the foreground, force all engine & tools to render
r_viewport | devonly | Slams viewport size to a specified value.
r_wait_on_present | devonly | Default: false<br>
r_world_frame_load_threshold_ms | devonly | Default: 10<br>
r_world_wind_dir | devonly | Default: 0.707 0.707 0<br>
r_world_wind_frequency_grass | devonly | Default: 0.03<br>
r_world_wind_frequency_trees | devonly | Default: 0.003<br>
r_world_wind_offset_speed | devonly | Default: 0.25 0.3 0.2<br>
r_world_wind_smooth_time | devonly | Default: 2<br>
r_world_wind_strength | devonly | Default: 40<br>
r_zprepass_normals | cheat | Default: false<br>0: Use normals reconstructed from depth. 1: Output correct normals in z prepass.
radarvisdistance | sv, cheat | Default: 1000<br>at this distance and beyond you need to be point right at someone to see them
radarvismaxdot | sv, cheat | Default: 0.996<br>how closely you have to point at someone to see them beyond max distance
radarvismethod | sv, cheat | Default: 1<br>0 for traditional method, 1 for more realistic method
radarvispow | sv, cheat | Default: 0.4<br>the degree to which you can point away from a target, and still see them on radar.
radio | cl, release | Opens a radio menu
radio1 | cl, release | Opens a radio menu
radio2 | cl, release | Opens a radio menu
radio3 | cl, release | Opens a radio menu
ragdoll_cleanup_all | sv, cl, cheat | Cleans up all ragdolls.
ragdoll_debug_item_detachment | devonly, sv, rep | Default: false<br>
ragdoll_fixup_joint_limits | devonly, sv, rep | Default: true<br>Adjusts bone transforms so that physics joints don't appear violated (limits)
ragdoll_fixup_joint_limits_max_height | devonly, sv, rep | Default: 1<br>Disable ragdoll_fixup_joint_limits on joints too high in the hierarchy because long chains tend to depend on violating limits
ragdoll_fixup_joint_orientation | devonly, sv, rep | Default: true<br>Adjusts bone transforms so that physics joints don't appear violated (orientation)
ragdoll_fixup_joint_orientation_max_height | devonly, sv, rep | Default: 10<br>Disable ragdoll_fixup_joint_orientation on joints too high in the hierarchy because small differences can massively accumulate (e.g. long chains)
ragdoll_fixup_joint_translation | devonly, sv, rep | Default: true<br>Adjusts bone transforms so that physics joints don't appear violated (translation)
ragdoll_friction_scale | sv, cl, rep, cheat | Default: 0.6<br>
ragdoll_gravity_scale | sv, cl, rep, cheat | Default: 1<br>
ragdoll_impact_strength | devonly, cl | Default: 500<br>
ragdoll_lru_debug_removal | sv, cl, rep, cheat | Default: false<br>
ragdoll_lru_min_age | sv, cl, rep, cheat | Default: 10<br>
ragdoll_move_entity | sv, cl, rep, cheat | Default: false<br>
ragdoll_override_root_orientation | devonly, sv, rep | Default: true<br>
ragdoll_parallel_pose_control | devonly, sv, cl, rep | Default: false<br>
ragdoll_prop_settle | devonly, sv, rep | Default: true<br>Enable more aggressive ragdoll settling
ragdoll_prop_sleepaftertime | devonly, sv, rep | Default: 4<br>After this many seconds of being basically stationary, the ragdoll will go to sleep.
ragdoll_prop_sleepdisabletime | devonly, sv, rep | Default: 1.5<br>Ragdoll is not allowed to physically sleep until this timer has elapsed.
ragdoll_relax_limts | devonly, sv, rep | Default: false<br>
ragdoll_resolve_initial_conflict | sv, cl, rep, cheat | Default: true<br>
ragdoll_resolve_separation | sv, cl, rep, cheat | Default: true<br>
ragdoll_scale_sleep_tolerance | devonly, sv, rep | Default: true<br>
ragdoll_update_from_weights | sv, cl, rep, cheat | Default: false<br>
ragdoll_validate_targetpose | devonly, sv, rep | Default: true<br>
ragdoll_visualize_creation_skeleton | devonly, sv, rep | Default: false<br>
ragdoll_visualize_targetpose | devonly, sv, rep | Default: false<br>
ragdoll_vphysics_scale | devonly, sv, rep | Default: 0.5<br>How much we scale physics impacts against the ragdoll.
rangefinder | sv, cheat | Measures distance along a ray
rangefinder2d | sv, cheat | Measures distance along a ray, only measuring along XY plane.
rate | a, user | Default: 786432<br>Min bytes/sec the host can receive data
ray_bench | devonly, sv | Load the rays and run the benchmark
rcon | norecord, release | Issue an rcon command.
rcon_address | norecord, release, server_cannot_query | Default: <br>Address of remote server if sending unconnected rcon commands (format x.x.x.x:p) 
rcon_connected_clients_allow | rep, release | Default: true<br>Allow clients to use rcon commands on server.
rcon_password | norecord, release, server_cannot_query | Default: <br>remote console password.
rebuy | cl, clientcmd_can_execute | Attempt to repurchase items with the order listed in cl_rebuy
recast_mark_overhang | sv, rep, cheat | Default: false<br>Enable/disable overhang detection
recast_partitioning | sv, rep, cheat | Default: 0<br>0 = watershed, 1 = monotone, 2 = layers
record | norecord, release | Record a demo.
redirectend | hidden, release | Redirect server console output
redirectstart | hidden, release | Redirect server console output
regenerate_weapon_skins | cl, cheat | 
reload_model | devonly | Force a reload of a vmdl resource
reload_store_config | devonly, cl | 
reloadgame | cheat | Reload the most recent saved game.
remove_weapon | sv, cheat | Remove a weapon held by the player.<br>	Arguments: &lt;weapon subclass name&gt;
removeid | devonly | Remove a user ID from the ban list.
removeip | devonly | Remove an IP address from the ban list.
repeat_last_console_command | release | Repeat last console command.
replay_death | sv, cheat | start hltv replay of last death
replay_debug | rep, release | Default: 0<br>
replay_start | sv, cheat | Start Source2 TV replay: replay_start &lt;delay&gt; \[&lt;player name or index&gt;\]
replay_stop | sv | stop hltv replay
report_cliententitysim | cl, cheat | Default: false<br>List all clientside simulations and time - will report and turn itself off.
report_clientthinklist | cl, cheat | Default: false<br>List all clientside entities thinking and time - will report and turn itself off.
report_connection_failure_percentage | devonly | Default: 0<br>
report_entities | devonly, sv, cheat | Lists all entities
report_simthinklist | devonly, sv | Lists all simulating/thinking entities
report_soundpatch | devonly, sv | reports sound patch count
reset_gameconvars | cheat | Reset game convars to default values
reset_voice_on_input_stallout | user | Default: false<br>If true, resets the input device when there was a long enough hitch between callbacks.
resource_leaks | devonly | resource_leaks &lt;resource_name&gt;: Show resource leaks for the named resource
resource_list | devonly | List loaded resources matching a substring
resource_log_allocate_timing | devonly | Log time spent in Allocate for all resource types
resource_manifest_validate_modules | devonly | Scan all of the loaded modules and validate any resource manifests found
resource_repeated_reload | devonly | resource_repeated_reload &lt;count&gt; &lt;resource_name&gt; (&lt;resource name&gt; ...): Load and unload the specified resource(s)
resource_reset_allocate_timing | devonly | Reset tracked time spent in Allocate (see resource_log_allocate_timing)
resourcesystem_multiframe_finalize_time_msec | devonly | Default: 10<br>Max time to spend finalizing resources per frame in miliseconds.
respawn_player | sv, cheat | Respawns the player from death!<br>
restart | cheat | Poor man's restart: reload the current map from disk.
restart_in_insecure | cl, hidden, clientcmd_can_execute | Restart in insecure mode
restart_in_trusted | cl, hidden, clientcmd_can_execute | Restart in trusted mode
restart_in_untrusted | cl, hidden, clientcmd_can_execute | Restart in untrusted mode
restart_normal | cl, hidden, clientcmd_can_execute | Restart
rope_averagelight | devonly, cl | Default: true<br>Makes ropes use average of cubemap lighting instead of max intensity.
rope_collide | devonly, cl | Default: 1<br>Collide rope with the world
rope_shake | devonly, cl | Default: false<br>
rope_smooth_enlarge | devonly, cl | Default: 1.4<br>How much to enlarge ropes in screen space for antialiasing effect
rope_smooth_maxalpha | devonly, cl | Default: 0.5<br>Alpha for rope antialiasing effect
rope_smooth_maxalphawidth | devonly, cl | Default: 1.75<br>
rope_smooth_minalpha | devonly, cl | Default: 0.2<br>Alpha for rope antialiasing effect
rope_smooth_minwidth | devonly, cl | Default: 0.3<br>When using smoothing, this is the min screenspace width it lets a rope shrink to
rope_subdiv | devonly, cl | Default: 2<br>Rope subdivision amount
rope_wind_dist | devonly, cl | Default: 1000<br>Don't use CPU applying small wind gusts to ropes when they're past this distance.
rr_debugclassname | devonly, sv, cl, rep | Default: <br>If set, rr_debugclassname will print only response tests where 'classname' corresponds to this variable. Use to filter for a specific character.
rr_debugresponseconcept | devonly, sv, cl, rep | Default: <br>If set, rr_debugresponseconcept will print only responses testing for the specified concept
rr_debugresponses | devonly, sv, cl, rep | Default: 0<br>Show verbose matching output (1 for simple, 2 for rule scoring, 3 for noisy). If set to 4, it will only show response success/failure for npc_selected NPCs.
rr_debugrule | devonly, sv, cl, rep | Default: <br>If set to the name of the rule, that rule's score will be shown whenever a concept is passed into the response rules system.
rr_dump_rules | sv, cheat | Print all response rules
rr_followup_maxdist | sv, cheat | Default: 1800<br>'then ANY' or 'then ALL' response followups will be dispatched only to characters within this distance.
rr_forceconcept | sv, cheat | fire a response concept directly at a given character.<br>USAGE: rr_forceconcept &lt;target name or index&gt; &lt;concept&gt; "criteria1:value1,criteria2:value2,..."<br>criteria values are optional.<br>
rr_reloadresponsesystems | sv, cheat | Reload all response system scripts.
rr_thenany_score_slop | sv, a, cheat | Default: 0<br>When computing respondents for a 'THEN ANY' rule, all rule-matching scores within this much of the best score will be considered.
rs_dump_stats | devonly | rs_dump_stats - Dump resourcesystem stats.
rtx_dynamic_blas | devonly | Default: true<br>Allow dynamic BLAS creation for geometry going through the compute shader skinning path.
rtx_dynamic_blas_caching | devonly | Default: true<br>Cache dynamic BLAS if geometry has not changed
rtx_force_default_hitgroup | devonly | Default: false<br>Forces all ray traced geometry to use default hit shaders instead of specialized ones.
rtx_texture_resolution | devonly | Default: 512<br>Sets the texture resolution the raytracer will mark to stream in
run_perftest | cheat, norecord | Execute perftest.cfg
run_voicecontainer_async | devonly | Default: false<br>
safezonex | cl, a | Default: 1<br>The percentage of the screen width that is considered safe from overscan. Cannot result in a width less than the height.
safezoney | cl, a | Default: 1<br>The percentage of the screen height that is considered safe from overscan
save | devonly, sv, norecord | Save Game
save_animgraph_recording | sv, cheat | Saves all active animgraph recordings to disk<br>	Arguments: automaticallyOpenInAnimgraphEditor
save_async | devonly, sv | Default: true<br>
save_clear_subdirectory | devonly, sv, rep | 
save_fake_hitch | devonly, sv | Default: 0<br>Force a busy wait for the specified number of milliseconds during save to simulate a hitch
save_finish_async | devonly, sv | 
save_history_count | devonly, sv | Default: 1<br>Keep this many old copies in history of autosaves and quicksaves.
save_maxarray_spew | sv, release | Default: 10<br>Max number of array entries to spew when using SaveRestoreIO spewing.
save_parallel | devonly, sv, cl, rep | Default: true<br>
save_screenshot | devonly, sv | Default: 2<br>0 = none, 1 = non-autosave, 2 = always, 3 = bug_only
save_set_subdirectory | devonly, sv, rep | 
save_showelapsedtime | devonly, sv | display up-to-date elapsed play time
save_spew | devonly, sv, cl, rep | Default: false<br>
save_version | devonly, sv, cl, rep | Default: 0<br>0: (V0) Legacy save format, 1: (V1) KeyValues3 save format
save_watchclass | devonly, sv | Restrict spew to entities with matching classname
save_watchentity | devonly, sv | Restrict spew to entity index
save_write_kv3 | devonly, sv, cl, rep | Default: false<br>Write the KV3 entity data as a text file in the save directory
say | sv | Display player message
say_team | sv | Display player message to team
sc_aggregate_bvh | devonly | Default: true<br>
sc_aggregate_bvh_threshold | devonly | Default: 128<br>
sc_aggregate_debug_draw_meshlets | devonly | Default: 0<br>SceneSystem/Aggregates/Visualize Meshlets
sc_aggregate_debug_draw_meshlets_bounds | devonly | Default: false<br>Visualize meshlet bounds and cone axis. Mesh shader only.
sc_aggregate_fragment_merging | devonly | Default: true<br>
sc_aggregate_gpu_culling | devonly | Default: true<br>Toggles GPU culling of aggregate meshes
sc_aggregate_gpu_culling_conservative_bounds | devonly | Default: false<br>
sc_aggregate_gpu_culling_show_culled | devonly | Default: false<br>SceneSystem/Aggregates/Show GPU Culled Meshes
sc_aggregate_gpu_occlusion_culling | devonly | Default: true<br>
sc_aggregate_gpu_vis_culling | devonly | Default: true<br>
sc_aggregate_indirect_draw_compaction | release | Default: true<br>Use multidrawindirect...count if the driver/hardware supports it
sc_aggregate_indirect_draw_compaction_threshold | release | Default: 8<br>Threshold of indirect draws when we will do compaction
sc_aggregate_instance_streams | devonly | Default: true<br>Enable instance streams
sc_aggregate_material_solo | devonly, cheat | Default: <br>
sc_aggregate_render_mesh_shader | devonly | Default: true<br>Using mesh shaders if available instead of drawcalls
sc_aggregate_show_outside_vis | devonly | Default: false<br>
sc_allow_dithered_lod | devonly | Default: true<br>Allow use of dithered lod transitions
sc_allow_dynamic_constant_batching | devonly | Default: true<br>
sc_allow_precomputed_vismembers | devonly | Default: true<br>
sc_allow_write_depth_before_blend | devonly | Default: true<br>
sc_barnlight_enable_precomputed_vis | devonly | Default: true<br>Enable use of precomputed vis membership for lights (requires map restart)
sc_batch_layer_cb_updates | devonly | Default: true<br>
sc_bounds_group_cull | devonly | Default: true<br>
sc_cache_envmap_lpv_lookup | devonly | Default: true<br>
sc_clutter_density_full_size | devonly | Default: 0.0075<br>Screen-size where clutter will be full density
sc_clutter_density_none_size | devonly | Default: 0.0035<br>Screen-size where clutter will be gone
sc_clutter_desity_override | devonly | Default: false<br>
sc_clutter_enable | devonly | Default: true<br>SceneSystem/Clutter/Draw Clutter
sc_disableThreading | cheat | Default: false<br>
sc_disable_baked_lighting | devonly | Default: false<br>
sc_disable_culling_boxes | cheat | Default: false<br>
sc_disable_procedural_layer_rendering | cheat | Default: false<br>
sc_disable_shadow_fastpath | cheat | Default: false<br>
sc_disable_shadow_materials | cheat | Default: false<br>
sc_disable_spotlight_shadows | cheat | Default: false<br>
sc_disable_world_materials | cheat | Default: false<br>
sc_dithered_lod_transition_amt | devonly | Default: 0.075<br>Percentage of the transition between two lods we will apply a dither
sc_draw_aggregate_meshes | devonly | Default: true<br>SceneSystem/Aggregates/Draw Aggregates
sc_dump_lists | cheat | Default: false<br>
sc_dumpworld | cheat | Dump a list of the objects in a sceneworld (Usage: sc_dumpworld &lt;world_index&gt;)
sc_dumpworld3d | cheat | Dump the objects in a sceneworld into a 3d geoview buffer (Usage: sc_dumpworld3d &lt;world_index&gt;)
sc_enable_discard | devonly | Default: true<br>
sc_extended_stats | cheat | Default: false<br>
sc_fade_distance_scale_override | cheat | Default: -1<br>
sc_force_lod_level | cheat | Default: -1<br>
sc_force_materials_batchable | cheat | Default: false<br>
sc_force_single_display_list_per_layer | devonly | Default: false<br>
sc_force_translation_in_projection | cheat | Default: false<br>If enabled, the camera's translation will be included in the projection matrix.
sc_hdr_enabled_override | devonly | Default: -1<br>Override default setting for HDR rendering. -1 default, 0 NoHdr, 1 Hdr, 2 Hdr 1010102 3 Hdr 111110
sc_imgui_show_debug_log | devonly, cheat | Default: false<br>SceneSystem/Imgui/Show Debug Log
sc_imgui_show_id_stack | devonly, cheat | Default: false<br>SceneSystem/Imgui/Show ID Stack Tool
sc_imgui_show_metrics | devonly, cheat | Default: false<br>SceneSystem/Imgui/Show Metrics
sc_instanced_material_solo | devonly, cheat | Default: <br>
sc_instanced_mesh_enable | devonly, cheat | Default: true<br>Toggles rendering instanced meshes
sc_instanced_mesh_gpu_culling | devonly | Default: true<br>Toggles GPU culling of instanced meshes
sc_instanced_mesh_gpu_density_culling | devonly | Default: true<br>Toggles density culling (if enabled)
sc_instanced_mesh_gpu_occlusion_culling | devonly | Default: true<br>Toggles GPU occlusion of instanced meshes
sc_instanced_mesh_gpu_vis_culling | devonly | Default: true<br>Toggles GPU vis of instanced meshes
sc_instanced_mesh_lod_bias | devonly | Default: 1.25<br>Bias for LOD selection of instanced meshes
sc_instanced_mesh_lod_bias_shadow | devonly | Default: 1.75<br>Bias for LOD selection of instanced meshes in shadowmaps
sc_instanced_mesh_motion_vectors | devonly | Default: true<br>Toggles motion vector support for instanced meshes
sc_instanced_mesh_size_cull_bias | devonly | Default: 1.5<br>Bias for size culling of instanced meshes
sc_instanced_mesh_size_cull_bias_shadow | devonly | Default: 2<br>Bias for size culling instanced meshes in shadowmaps
sc_instanced_mesh_solo | devonly, cheat | Default: <br>
sc_keep_all_layers | devonly | Default: false<br>
sc_layer_batch_threshold | devonly | Default: 128<br>
sc_layer_batch_threshold_fullsort | devonly | Default: 80<br>
sc_layer_use_legacy_primitive_sorting | devonly | Default: false<br>
sc_list_extradata_allocations | devonly | Prints out the overall extra data allocation counts
sc_listworlds | cheat | List all the active sceneworlds
sc_max_framebuffer_copies_per_layer | devonly | Default: 1<br>
sc_mesh_backface_culling | devonly | Default: true<br>
sc_no_cull | devonly | Default: false<br>
sc_no_vis | devonly | Default: false<br>
sc_only_render_opaque | cheat | Default: false<br>
sc_only_render_shadowcasters | cheat | Default: false<br>
sc_reject_all_objects | cheat | Default: false<br>
sc_rendergraph_debug_visualizer | devonly | Default: false<br>SceneSystem/RenderGraph Visualizer
sc_screen_size_lod_scale_override | cheat | Default: -1<br>
sc_setclassflags | cheat | Low level command to set the flags byte associated with an object class. sc_SetClassFlags &lt;classname&gt; &lt;value&gt;<br>
sc_shadow_depth_bias | devonly | Default: 256<br>
sc_shadow_depth_bias_clamp | devonly | Default: 0<br>
sc_shadow_depth_bias_state_override | devonly | Default: false<br>
sc_shadow_slopescale_depth_bias | devonly | Default: 2.13<br>
sc_show_cs_skinning_stats | devonly, cheat | Default: false<br>SceneSystem/Compute Skinning Stats
sc_show_gpu_profiler | devonly, cheat | Default: false<br>SceneSystem/GPU Profiler
sc_show_hair_debug_ui | devonly, cheat | Default: false<br>SceneSystem/Hair Debug UI
sc_show_texture_visualizer | devonly, cheat | Default: false<br>SceneSystem/Texture Visualizer
sc_show_view_profiler | devonly, cheat | Default: false<br>SceneSystem/View Profiler
sc_showclasses | cheat | List the object class names known by scenesystem<br>
sc_skip_traversal | cheat | Default: false<br>
sc_spew_cmt_usage | devonly | Default: false<br>
sc_throw_away_all_layers | devonly | Default: false<br>
sc_use_clear_subrect | devonly | Default: false<br>
sc_visualize_batches | devonly | Default: 0<br>color per batch
sc_visualize_sceneobjects | devonly | Default: 0<br>1 = visualize bounds, 2 = visualize sceneobject mesh materials, 3 = required texture size, 4 = bounds group, 5 = LOD, 6 == LPV Binding, 7 == instancing
scene_clientflex | devonly, sv, cl, rep | Default: true<br>Do client side flex animation.
scene_flush | devonly, sv | Flush all .vcds from the cache and reload from disk.
scene_maxcaptionradius | devonly, sv | Default: 1200<br>Only show closed captions if recipient is within this many units of speaking actor (0==disabled).
scene_playvcd | sv, cheat | Play the given VCD as an instanced scripted scene.
scene_print | devonly, sv, cl, rep | Default: 0<br>When playing back a scene, print timing and event info to console.
scene_vcdautosave | devonly, cl | Default: false<br>Create a savegame before VCD playback
schema_all_list_bindings | devonly | schema_all_list_bindings &lt;substring&gt; - List all scopes registered schema bindings (classes & enums). If no substring, list them all.
schema_detailed_class_layout | devonly | schema_detailed_class_layout &lt;class_name&gt; - Print a detailed memory layout of the class (including inline structs).
schema_dump_binding | devonly | schema_dump_binding &lt;class_or_enum_name&gt; - Print information about the named class or enum.
schema_list_bindings | devonly | schema_list_bindings &lt;substring&gt; - List registered global-scope schema bindings (classes & enums). If no substring, list them all.
schema_meta_stats | devonly | schema_meta_stats \[&lt;options&gt;\]- Print a summary of schemasystem metadata statistics.
schema_stats | devonly | schema_stats - Print a summary of various schemasystem statistics.
screenmessage_notifytime | devonly, sv | Default: 8<br>How long to display screen message text
screenmessage_show | cheat | Default: -1<br>Enable display of console messages on screen. 1 = Enabled, 0 = Disabled, -1 = Enabled if vgui is not present
screenshot | devonly | Take a screenshot: screenshot \[filename\]
screenshot_height | devonly | Default: -1<br>Screenshot height. -1 for screen height.
screenshot_prefix | devonly | Default: shot<br>Set the screenshot auto naming prefix.
screenshot_subdir | devonly | Default: screenshots<br>Set the screenshot directory.
screenshot_width | devonly | Default: -1<br>Screenshot width. -1 for screen width.
script_add_debug_filter | sv, cheat | Add a filter to the game debug overlay
script_add_watch | sv, cheat | Add a watch to the game debug overlay
script_add_watch_pattern | sv, cheat | Add a watch to the game debug overlay
script_attach_debugger | sv, cheat | Connect the vscript VM to the script debugger
script_attach_debugger_at_startup | devonly, sv | Default: false<br>
script_break_in_native_debugger_on_error | devonly, sv | Default: false<br>
script_clear_watches | sv, cheat | Clear all watches from the game debug overlay
script_debug | sv, cheat | Toggle the in-game script debug features
script_dump_all | sv, cheat | Dump the state of the VM to the console
script_find | sv, cheat | Find a key in the VM 
script_help | sv, cheat | Output help for script functions
script_help2 | devonly, sv | Output help for script functions suitable for auto-completion
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
scrubber | devonly | Scrub system off - not a dev build
sdr | release | An old command that has been renamed to 'net_option'
sellbackall | cl, clientcmd_can_execute | Attempt to refund all equipment
send_round_backup_file_list | sv, hidden, release | 
sensitivity | cl, a, user, per_user | Default: 1.25<br>Mouse sensitivity.
sensitivity_y_scale | cl, a, user, per_user | Default: 1<br>Multiplies the mouse Y axis for finer pitch vs yaw aim
server_game_time | devonly, sv | Gives the game time in seconds (server's curtime)
server_snd_cast | sv, cheat | Casts a ray and starts a sound event where the ray hits. The sound event will retrigger periodically. Usage: snd_cast &lt;eventname&gt; \[&lt;retrigger time&gt;\] \[&lt;max distance&gt;\]. Arguments that are specified will become defaults for the remainder of the session.
servercfgfile | sv, release | Default: server.cfg<br>
servervoice_clear | devonly, cl | servervoice_clear
servervoice_dump | devonly, cl | servervoice_dump
setang | sv, cheat | Snap player eyes to specified pitch yaw &lt;roll:optional&gt; (must have sv_cheats).
setang_exact | sv, cheat | Snap player eyes and orientation to specified pitch yaw &lt;roll:optional&gt; (must have sv_cheats).
setinfo | clientcmd_can_execute | Adds a new user info value
setmodel | sv, cheat | Changes's player's model
setpause | release | Set the pause state of the server.
setpos | sv, cheat | Move player to specified origin (must have sv_cheats).
setpos_exact | sv, cheat | Move player to an exact specified origin (must have sv_cheats).
setpos_player | sv, cheat | Move specified player to specified origin (must have sv_cheats).
shake | sv, cheat | Shake the screen.
shake_show | devonly, cl | Default: false<br>Displays a list of the active screen shakes.
shake_stop | cl, cheat | Stops all active screen shakes.<br>
shake_testpunch | cl, cheat | Test a punch-style screen shake.<br>
shatterglass_break | sv, cheat | 
shatterglass_cleanup | sv, cl, rep, cheat | Default: true<br>
shatterglass_cleanup_max | sv, cl, rep, cheat | Default: 200<br>
shatterglass_debug | sv, cl, rep, cheat | Default: false<br>
shatterglass_hit_tolerance | sv, cl, rep, cheat | Default: 2<br>
shatterglass_restore | sv, cheat | 
shatterglass_shard_lifetime | sv, cl, rep, cheat | Default: 15<br>
show_loadout_toggle | cl, clientcmd_can_execute | Toggles loadout display
show_untrusted_warning_again | cl, hidden, clientcmd_can_execute | Show untrusted warning again
show_visibility_boxes | cl, cheat | Default: false<br>Enable or Disable debug display of visibility boxes
showconsole | norecord, release | Show the console.
showents | sv, cheat | Dump entity list to console.
showtriggers | sv, cheat | Enable or Disable showing trigger entities
showtriggers_toggle | sv, cheat | Displays the movement bounding box for the triggers in orange.  Some entites will also display entity specific overlays.<br>	Arguments:   	{entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
silence_dsp | cheat | Default: false<br>When on, silences all DSP mixes.
sk_autoaim_mode | sv, cl, a, rep | Default: 1<br>
sk_player_arm | devonly, sv | Default: 1<br>
sk_player_chest | devonly, sv | Default: 1<br>
sk_player_head | devonly, sv | Default: 2<br>
sk_player_leg | devonly, sv | Default: 1<br>
sk_player_stomach | devonly, sv | Default: 1<br>
skel_constraints_enable | rep, cheat | Default: true<br>
skel_debug | devonly, sv, cl, rep | Default: <br>
skeleton_instance_debug_bodygroups | devonly, sv, cl, rep, cheat | Default: false<br>Debug bodygroups
skeleton_instance_lod_optimization | devonly, sv, cl, rep | Default: false<br>Compute LOD mask internally like since 2016, i.e. force all LOD groups' bones to compute
skeleton_instance_scaleset_enable | sv, cl, rep, cheat | Default: true<br>
skeleton_instance_smear_boneflags | sv, cheat | Default: false<br>Smear boneflags across the model.  Costs computation, but tests to make sure your bone flags are consistent.
skeleton_physics_joint_fixup | devonly, sv, cl, rep, cheat | Default: true<br>
skill | sv, cl, a, rep, per_user | Default: 1<br>Game skill level.
slope_drop_debug | devonly, sv, cl, rep | Default: 0<br>Toggles a test dropping the view offset based on the slope
slope_drop_enable | devonly, sv, cl, rep | Default: true<br>Toggles a test dropping the view offset based on the slope
slope_drop_max_offset | devonly, sv, cl, rep | Default: 16<br>The maximum distance to adjust the view height
slope_drop_off_ground_blend_speed | devonly, sv, cl, rep | Default: 160<br>The speed with which the slope drop is blended out when the entity leaves the ground
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
smoke_grenade_ct_color | devonly, sv | Default: 75 127 155<br>
smoke_grenade_custom_color | devonly, sv | Default: -1<br>0 = Gray (classic), 1 = Red, 2 = Orange, 3 = Skyblue, 4 = Yellow, 5 = Green, , 6 = Blue, 7 = Purple, 8 = pink 
smoke_grenade_t_color | devonly, sv | Default: 180 129 50<br>
smoke_param1 | devonly, sv, cl, rep | Default: 6.26<br>
smoke_param2 | devonly, sv, cl, rep | Default: 8.27<br>
smoke_param3 | devonly, sv, cl, rep | Default: 0.13<br>
smoke_param4 | devonly, sv, cl, rep | Default: 0<br>
smoke_param5 | devonly, sv, cl, rep | Default: 0<br>
smoke_use_noise_texture | devonly, sv, cl, rep | Default: true<br>
smoke_volume_lod_ratio_change | devonly, cl | Default: 0.6<br>
smoothstairs | devonly, sv, cl, rep | Default: true<br>Smooth player eye z coordinate when traversing stairs.
snapto | devonly, cl | 
snd_arrangement_start | cheat | Starts the specified arrangement.
snd_async_flush | devonly | Flush all unlocked async audio data
snd_async_showmem | devonly | Show async memory stats
snd_async_showmem_music | devonly | Show async memory stats for just non-streamed music
snd_async_showmem_summary | devonly | Show brief async memory stats
snd_async_spew_blocking | devonly | Default: 0<br>Spew message to console any time async sound loading blocks on file i/o.
snd_autodetect_latency | a | Default: true<br>
snd_boxverb_simd | devonly | Default: true<br>Enable SIMD code path for shoebox reverb processor.
snd_boxverb_simd_svf | devonly | Default: 1<br>0 = use biquad instead of svf, 1 = use vectorized svf, 2 = use scalar svf
snd_break_on_start_soundevent | sv, cl, rep, cheat | Default: <br>Use to debug break on any soundevent that is started matching this name
snd_cast | cheat | Casts a ray and starts a sound event where the ray hits. The sound event will retrigger periodically if cl_snd_cast_retrigger is set. The sound event will clear previous snd_cast events if cl_snd_cast_clear is set. Usage: snd_cast &lt;eventname&gt; \[&lt;retrigger time&gt;\] \[&lt;max distance&gt;\]. Arguments that are specified will become defaults for the remainder of the session.
snd_compare_KV_convert | devonly | Default: false<br>
snd_compare_soundevents | devonly, cheat | Compare the compiled and loaded contents of 2 soundevents.
snd_cs_duck_reverb | devonly, cl | One shot trigger to duck reverb for a few seconds.
snd_deathcamera_volume | cl, a, release | Default: 0.16<br>Volume of Deathcam Timers
snd_delay_sound_ms_max | devonly | Default: 40<br>Sound device synchronization max delay (ms)
snd_delay_sound_ms_shift | devonly | Default: 23<br>Sound device synchronization shift (ms)
snd_diffusor_simd | devonly | Default: false<br>Enable SIMD code path for diffusor processor.
snd_disable_mixer_duck | cheat | Default: false<br>
snd_disable_mixer_solo | cheat | Default: false<br>
snd_disable_radar_visualize | devonly, sv, cl, rep | Default: false<br>
snd_dsp_distance_max | cheat | Default: 2000<br>
snd_dsp_distance_min | cheat | Default: 20<br>
snd_duckerattacktime | a | Default: 0.5<br>
snd_duckerreleasetime | a | Default: 2.5<br>
snd_duckerthreshold | a | Default: 0.15<br>
snd_ducktovolume | a | Default: 0.55<br>
snd_enable_imgui | devonly, a, cheat | Default: false<br>Game/Sound System Debugger
snd_enable_subgraph_corenull_passthrough | devonly | Default: true<br>
snd_enable_subgraph_log | devonly | Default: false<br>
snd_envelope_rate | cheat | Default: 0.9<br>
snd_eq_arms_race | devonly, cl, a | Default: -1<br>
snd_eq_casual | devonly, cl, a | Default: -1<br>
snd_eq_competitive | devonly, cl, a | Default: -1<br>
snd_eq_deathmatch | devonly, cl, a | Default: -1<br>
snd_eq_spectator | devonly, cl, a | Default: -1<br>
snd_eq_warmup | devonly, cl, a | Default: -1<br>
snd_event_oriented_box_debug | devonly, sv, cl, rep, cheat | Default: false<br>
snd_event_oriented_lerp_max_distance | devonly, sv, cl, rep, cheat | Default: 64<br>
snd_event_oriented_lerp_min_distance | devonly, sv, cl, rep, cheat | Default: 24<br>
snd_filter | cheat | Default: <br>
snd_foliage_db_loss | sv, cheat | Default: 4<br>foliage dB loss per 1200 units
snd_front_headphone_position | devonly | Specifies the position (in degrees) of the virtual front left/right headphones.
snd_front_stereo_speaker_position | devonly | Specifies the position (in degrees) of the virtual front left/right speakers.
snd_front_surround_speaker_position | devonly | Specifies the position (in degrees) of the virtual front left/right speakers.
snd_gain | a | Default: 1<br>
snd_gain_max | cheat | Default: 1<br>
snd_gain_min | cheat | Default: 0.01<br>
snd_gamevoicevolume | a | Default: 1<br>Game v.o. volume
snd_gamevolume | a | Default: 1<br>Game volume
snd_get_physics_surface_properties | cheat | Get physics surface properties for all the materials.
snd_group_cluster_debug | rep, cheat | Default: false<br>
snd_group_priority_debug | rep, cheat | Default: false<br>
snd_group_priority_max_tolerance | rep, cheat | Default: 0.05<br>
snd_headphone_eq | cl, a, clientcmd_can_execute | Default: 0<br>Select Headphone EQ Preset
snd_headphone_eq_active | cl, clientcmd_can_execute | Default: 0<br>Select Headphone EQ Preset
snd_headphone_pan_exponent | devonly | Specifies the exponent for the pan xfade from phone to phone if the "exp" pan law is being used.
snd_headphone_pan_radial_weight | devonly | Apply cos(angle) * weight before pan law
snd_hrtf_distance_behind | devonly | Default: 50<br>HRTF calculations will calculate the player as being this far behind the camera.
snd_list | cheat | Default: <br>
snd_list_deferred_soundevents | devonly, cheat | List all current deferred load soundevents
snd_list_soundevents | devonly, cheat | List all available soundevents
snd_list_soundevents_by_stack | devonly, cheat | List all available soundevents using specified stack name
snd_log_empty_event_entities | cl, cheat | Default: false<br>Logs the sound event entities that have empty names.
snd_mainmenu_music_break_time_max | cl, cheat | Default: 0<br>Maximum amount of time to pause between playing main menu music
snd_mainmenu_music_break_time_min | cl, cheat | Default: 0<br>Minimum amount of time to pause between playing main menu music
snd_mapobjective_volume | cl, a, release | Default: 0.04<br>Volume of Map Objective Music
snd_max_pitch_shift_inaccuracy | devonly, sv, cl, rep | Default: 0.08<br>
snd_menumap_volume | cl, a, release | Default: 1<br>Volume of background sounds for maps
snd_menumusic_volume | cl, a, release | Default: 0.04<br>Volume of Menu / Non-gameplay music
snd_mergemethod | devonly | Default: 1<br>Sound merge method (0 == sum and clip, 1 == max, 2 == avg).
snd_mix_async | devonly, cheat | Default: true<br>
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
snd_occlusion_debug_listener_pos | devonly, cheat | Default: <br>
snd_occlusion_indirect_max | devonly, cheat | Default: 0.7<br>
snd_occlusion_indirect_min | devonly, cheat | Default: 0.01<br>
snd_occlusion_indirect_radius | devonly, cheat | Default: 120<br>
snd_occlusion_min_wall_thickness | rep, cheat | Default: 4<br>
snd_occlusion_override | devonly, rep, cheat | Default: -1<br>
snd_occlusion_rays | rep, cheat | Default: 4<br>
snd_occlusion_report | devonly, cheat | Default: false<br>
snd_occlusion_visualize | devonly, cheat | Default: false<br>
snd_op_test_convar | cheat | Default: 720<br>
snd_opvar_set_point_debug | sv, cl, rep, cheat | Default: false<br>
snd_opvar_set_point_update_interval | devonly, sv, cl, rep | Default: 0.2<br>
snd_print_activetracks | cheat | List all active tracks
snd_print_arrangements | cheat | List all available sequence arrangments
snd_print_current_mixer_mixgroup | devonly | Get data related to mix group matching string
snd_print_samplers | cheat | List all available samplers
snd_print_sequences | cheat | List all available midi sequences
snd_print_soundevent | devonly | Print the data associated with the specified soundevent.
snd_print_soundevent_default_public_properties | devonly | Print the default public properties of a specified soundevent. Values do not reflect values set on the soundevent. For that see "snd_print_soundevent"
snd_purge_vsnd_table | devonly | Purges the VSnd table
snd_rear_headphone_position | devonly | Specifies the position  (in degrees) of the virtual rear left/right headphones.
snd_rear_stereo_scale | rep, cheat | Default: 1<br>
snd_rear_stereo_speaker_position | devonly | Specifies the position (in degrees) of the virtual rear left/right speakers.
snd_rear_surround_speaker_position | devonly | Specifies the position (in degrees) of the virtual rear left/right speakers.
snd_refdb | cheat | Default: 60<br>Reference dB at snd_refdist
snd_refdist | cheat | Default: 36<br>Reference distance for snd_refdb
snd_refresh_ui_audio_state | cl, cheat | Restores audio DSP state for the UI.
snd_remove_all_soundevents | devonly, cheat | Remove all soundevents
snd_remove_soundevent | devonly, cheat | Remove the specified soundevent
snd_report_audio_nan | release | Default: false<br>
snd_report_c4_sounds | devonly, cl, cheat | Default: false<br>
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
snd_setmixer | devonly | Set named Mixgroup of current mixer to mix vol, mute, solo.
snd_setmixlayer | devonly | Set named Mixgroup of named mix layer to mix vol, mute, solo.
snd_showclassname | cheat | Default: 0<br>
snd_showstart | cheat | Default: 0<br>
snd_side_surround_speaker_position | devonly | Specifies the position (in degrees) of the virtual rear left/right speakers.
snd_sos_block_global_stack | cheat | Default: false<br>
snd_sos_block_stop_global_stack | cheat | Default: true<br>
snd_sos_calc_angle_debug | rep, cheat | Default: false<br>
snd_sos_cl_soundevent_pause_last | devonly, cl | Test
snd_sos_cl_soundevent_start | devonly, cl | Test
snd_sos_cl_soundevent_stop_last | devonly, cl | Test
snd_sos_cl_soundevent_unpause_last | devonly, cl | Test
snd_sos_compare_operator_stacks | cheat | Compares 2 operator stacks and spews any errors
snd_sos_debug_trigger_opvar | devonly, sv | Default: false<br>
snd_sos_enable_nan_check | devonly | Default: false<br>
snd_sos_flush_operators | cheat | Flush and re-parse the sound operator system
snd_sos_get_operator_field_info | cheat | Currently gets info for a single operator field
snd_sos_hide_simple_parameter_overwrite_warnings | devonly | Default: true<br>
snd_sos_ingame_debug | cheat | Default: false<br>
snd_sos_limit_self | devonly | Default: false<br>
snd_sos_list_operator_updates | cheat | Default: false<br>
snd_sos_max_event_base_depth | devonly | Default: 4<br>
snd_sos_opvar_debug | cheat | Default: false<br>
snd_sos_pause_soundevent | cheat | Pause the specified soundevent in the list
snd_sos_pause_system | cheat | Default: false<br>
snd_sos_print_addfield_dupes | cheat | Default: false<br>
snd_sos_print_class_sizes | cheat | Prints the sizes of relevant sos classes.
snd_sos_print_field_name_strings | cheat | Prints a list of currently cached field name strings
snd_sos_print_field_references | cheat | Default: false<br>
snd_sos_print_fps | cheat | Default: false<br>
snd_sos_print_full_field_info | cheat | Default: false<br>
snd_sos_print_groups | cheat | Prints the current state of the groups system
snd_sos_print_operator_stack | cheat | Prints a master list of currently exposed variables
snd_sos_print_operator_stack_operator | cheat | Prints an operator from a stack
snd_sos_print_operator_stacks | cheat | Prints a list of currently available stacks
snd_sos_print_operators | cheat | Prints a list of currently available operators
snd_sos_print_stack_exec_list | cheat | Prints the current stack execution list
snd_sos_print_strings | cheat | Prints a list of currently cached strings
snd_sos_print_table_arrays | cheat | Default: false<br>
snd_sos_print_tool_properties | cheat | Prints the current state of tool properties.
snd_sos_report_entity_deleted | devonly | Default: false<br>
snd_sos_resolve_execute_operator | cheat | Resolve the inputs and execute one specified operator from a specified stack
snd_sos_set_operator_field | cheat | Currently sets a single float operator field
snd_sos_set_operator_field_by_guid | cheat | Currently sets a single float operator field
snd_sos_show_block_debug | cheat | Default: false<br>Spew data about the list of block entries.
snd_sos_show_entry_match_free | devonly | Default: false<br>
snd_sos_show_mixgroup_path_errors | devonly | Default: false<br>
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
snd_sos_show_parameter_overwrite_warnings | devonly | Default: false<br>
snd_sos_show_queuetotrack | cheat | Default: false<br>
snd_sos_show_soundevent_overwrites | devonly | Default: false<br>
snd_sos_show_soundevent_param_overwrite | cheat | Default: false<br>
snd_sos_show_soundevent_start | cheat | Default: false<br>
snd_sos_show_track_list | devonly | Default: false<br>
snd_sos_show_voice_elapsed_time | devonly | Default: false<br>
snd_sos_soundevent_deferred_interval_time | devonly | Default: 0.1<br>
snd_sos_soundevent_filter | cheat | Default: <br>
snd_sos_soundevent_max_deferred_time | devonly | Default: 5<br>
snd_sos_soundevent_profile | cheat | Dump a record of current soundevents and profile data
snd_sos_soundevent_show_deferral_warning | devonly | Default: false<br>
snd_sos_start_soundevent | cheat | Starts a specified soundevent
snd_sos_start_soundevent_at_pos | cheat | Starts a specified soundevent at the given position
snd_sos_start_stack | cheat | Starts a specified stack via an empty soundevent
snd_sos_stop_all_soundevents | cheat | Stops all soundevents currently on the execution list
snd_sos_stop_soundevent_guid | cheat | Stops a specified soundevent
snd_sos_stop_soundevent_index | cheat | Stops a specified soundevent
snd_sos_sv_soundevent_pause_last | devonly, sv | Test
snd_sos_sv_soundevent_start | devonly, sv | Test
snd_sos_sv_soundevent_stop_last | devonly, sv | Test
snd_sos_sv_soundevent_unpause_last | devonly, sv | Test
snd_sos_sv_test_gender | devonly, sv | Test
snd_sos_test_soundmessage | cheat | test
snd_sos_unpause_soundevent | cheat | UnPause the first soundevent in the list
snd_sound_areas_debug | cl, rep, cheat | Default: false<br>
snd_sound_areas_debug_interval | cl, rep, cheat | Default: 0.2<br>
snd_soundevent_clear_deferred | devonly, cheat | Clear the list of deferred soundevents for loading.
snd_soundmixer | devonly | Default: Default_Mix<br>
snd_soundmixer_flush | devonly | Reload soundmixers.txt file.
snd_soundmixer_list_mix_groups | devonly | List all mix groups to dev console.
snd_soundmixer_list_mix_layers | devonly | List all mix layers to dev console.
snd_soundmixer_list_mixers | devonly | List all mixers to dev console.
snd_soundmixer_set_trigger_factor | devonly | Set named mix layer / mix group, trigger amount.
snd_soundmixer_setmixlayer_amount | devonly | Set named mix layer mix amount.
snd_soundmixer_update_maximum_frame_rate | cheat | Default: 10<br>
snd_soundmixer_version | devonly | Default: 2<br>
snd_spatialize_lerp | a, release | Default: 0<br>
snd_steamaudio_active_hrtf | devonly | Default: 0<br>Index of active HRTF.
snd_steamaudio_baked_data_stats | cheat | Display baked data stats for the current mod.
snd_steamaudio_baked_occlusion_mode | cheat | Default: 0<br>0: distance ratio only. 1: deviation only (1/r). 2: deviation only (linear). 3: Mode 0 and Mode 1, 4: Mode 0 and Mode 2
snd_steamaudio_default_hrtf_volume_gain | devonly | Default: 0<br>Adjust overall volume of the default HRTF by the specified gain (dB).
snd_steamaudio_display_probes | devonly | Load all the probes from a file and display probes based on the passed on arguments.
snd_steamaudio_dynamicpathing_max_samples | devonly, sv, cl, rep | Default: 16<br>
snd_steamaudio_enable_compressed_reverb_lookup | devonly | Default: true<br>Use compressed reverb data if available.
snd_steamaudio_enable_custom_hrtf | devonly | Default: false<br>Enable custom HRTF loading.
snd_steamaudio_enable_editor_profiling | devonly | Default: false<br>Enables tracy profiling when baking steam audio data in Hammer.
snd_steamaudio_enable_pathing | cheat | Default: true<br>This variable is checked by soundstack to globally enabling pathing for audio processing.
snd_steamaudio_enable_perspective_correction | a, release | Default: true<br>Enable perspective correction for 3D audio.
snd_steamaudio_enable_probeneighborhood_caching | devonly | Default: true<br>Enable caching listener probe neighborhood for pathing.
snd_steamaudio_enable_reverb | release | Default: 0<br>Enable Steam Audio Reverb processor.
snd_steamaudio_enable_reverb_probe_caching_for_missing_probes | devonly | Default: true<br>Continue using previous prrobes if probe lookup for reverb fails.
snd_steamaudio_enable_spatial_blend_fix | cheat | Toggles the speculative fix for low-frequency issues when using spatial blend.
snd_steamaudio_export_scene | cheat | Exports scene currently used by Steam Audio as a phononscene file.
snd_steamaudio_halton_sequence | cheat | Generate Halton Sequence for a given order and number of samples.
snd_steamaudio_hybrid_reverb_overlap | devonly | Default: 0.25<br>Set the overlap fraction (0 to 1) for hybrid reverb.
snd_steamaudio_hybrid_reverb_transition_time | devonly | Default: 1<br>Set the transition time (in seconds) between convolution and parametric reverb.
snd_steamaudio_invalid_path_length | devonly | Default: 0<br>Path length of invalid path in inches. Set this to .0 to use direct distance as path length.
snd_steamaudio_ir_duration | cheat | Default: 2<br>The time delay between a sound being emitted and the last audible reflection in Steam Audio.
snd_steamaudio_load_dimensions_data | devonly | Default: true<br>If set, baked dimensions data is loaded.
snd_steamaudio_load_materials_data | devonly | Default: true<br>If set, baked materials data is loaded.
snd_steamaudio_load_occlusion_data | devonly | Default: true<br>If set, baked occlusion data is loaded.
snd_steamaudio_load_pathing_data | devonly | Default: true<br>If set, baked pathing data is loaded. Steam Audio Hammer entities can successfully use pathing in this case.
snd_steamaudio_load_reverb_data | devonly | Default: true<br>If set, baked reverb data is loaded. Reset it to zero during an format changes of baked data until all data is updated.
snd_steamaudio_max_convolution_sources | cheat | Default: 4<br>The maximum number of simultaneous sources that can be modeled by Steam Audio.
snd_steamaudio_max_hrtf_normalization_gain_db | devonly | Default: 6<br>Maximum gain any HRTF could have during volume normalization.
snd_steamaudio_max_occlusion_samples | cheat | Default: 64<br>The maximum number of rays that can be traced for volumetric occlusion by Steam Audio.
snd_steamaudio_max_probes_customdata | devonly | Default: 12000<br>Maximum number of probes to create when baking custom data (occlusion).
snd_steamaudio_max_probes_customdata_dimensions | devonly | Default: 4294967295<br>Maximum number of probes to create when baking custom data (dimensions).
snd_steamaudio_max_probes_customdata_materials | devonly | Default: 4294967295<br>Maximum number of probes to create when baking custom data (occlusion).
snd_steamaudio_max_probes_pathing | devonly | Default: 4294967295<br>Maximum number of probes to create when baking paths.
snd_steamaudio_max_probes_reverb | devonly | Default: 4294967295<br>Maximum number of probes to create when baking reverb.
snd_steamaudio_normalize_default_hrtf_volume | devonly | Default: true<br>Normalize volume of default HRTF dataset across all directions.
snd_steamaudio_num_bounces | cheat | Default: 128<br>The maximum number of times any ray can bounce when using Steam Audio.
snd_steamaudio_num_diffuse_samples | cheat | Default: 2048<br>The number of directions considered for ray bounce by Steam Audio.
snd_steamaudio_num_rays | cheat | Default: 65536<br>The number of rays to trace for reflection modeling by Steam Audio.
snd_steamaudio_num_threads | cheat | Default: 2<br>Sets the number of threads used for realtime reflection by Steam Audio.
snd_steamaudio_pathing_caching_threshold | devonly, sv, cl, rep | Default: 5<br>
snd_steamaudio_pathing_enable_caching | devonly, sv, cl, rep | Default: true<br>
snd_steamaudio_pathing_enable_source_probe_interp | devonly | Default: false<br>If set, all the probes near a source withing probe range are used to find paths instead of nearest probe.
snd_steamaudio_pathing_order | cheat | Default: 1<br>The amount of directional detail in the simulated by Steam Audio.
snd_steamaudio_pathing_order_rendering | cheat | Default: 1<br>The amount of directional detail in the rendered audio by Steam Audio.
snd_steamaudio_perspective_correction_factor | devonly | Default: 1<br>Perspective correction factor, ratio of screen size and view depth from screen, for 3D audio.
snd_steamaudio_perspective_correction_front_only | devonly | Default: true<br>Use perspective correction for 3D audio only in the frontal directions.
snd_steamaudio_reverb_level_db | release | Default: -3<br>Adjust overall volume (dB) of the output from Steam Audio Reverb processor.
snd_steamaudio_reverb_order | devonly | Default: 1<br>Ambisonics order to use for simulating reverb.
snd_steamaudio_reverb_order_rendering | devonly | Default: 1<br>Ambisonics order to use for convolution reverb. 0th order = 1 channel, 1st order = 4 channels.
snd_steamaudio_reverb_update_rate | devonly | Default: 30<br>Set the maximum update rate (in Hz) for reverb.
snd_steamaudio_source_pathing_debug | a | Default: false<br>Enable path visualization for steam_audio_source operator.
snd_steamaudio_source_pathing_debug_duration | devonly | Default: 0.01<br>Duration for which path remains visible. Should be close to update rate of the sound operator stack.
snd_steamaudio_source_pathing_enable_validation | devonly | Default: false<br>Enable real-time pathing validation against dynamic geometry.
snd_stereo_speaker_pan_exponent | devonly | Specifies the exponent for the pan xfade from speaker to speaker if the "exp" pan law is being used.
snd_stereo_speaker_pan_radial_weight | devonly | Apply cos(angle) * weight before pan law
snd_surf_volume_inair | cl, a, release | Default: 0.5<br>The volume of the wind when surfing.
snd_surf_volume_map | cl, a, release | Default: 0.3<br>The volume of ambient sounds when surfing is enabled.
snd_surf_volume_slide | cl, a, release | Default: 0.5<br>The volume of sliding along surfaces when surfing.
snd_surround_speaker_pan_exponent | devonly | Specifies the exponent for the pan xfade from speaker to speaker if the "exp" pan law is being used.
snd_surround_speaker_pan_radial_weight | devonly | Apply cos(angle) * weight before pan law
snd_tensecondwarning_volume | cl, a, release | Default: 0.04<br>Volume of Ten Second Warnings
snd_toolvolume | a | Default: 1<br>Volume of sounds in tools (e.g. Hammer, SFM)
snd_ui_positional | devonly, cheat | Default: false<br>
snd_ui_spatialization_spread | devonly, cheat | Default: 1<br>
snd_use_baked_occlusion | rep, cheat, release | Default: 0<br>
snd_vmidi_flush | cheat | Purge and reload all vmidi data and files.
snd_vmix_override_mix_decay_time | cheat | Default: -1<br>If set &gt; 0, overrides how long the decay time is on all mix graphs (in seconds).<br>
snd_vmix_show_input_updates | cheat | Default: false<br>If set to 1, show all incoming updates to vmix inputs.<br>
snd_voipvolume | a | Default: 1<br>Voice volume
snd_vol_arms_race | devonly, cl, a | Default: 1<br>
snd_vol_casual | devonly, cl, a | Default: 1<br>
snd_vol_competitive | devonly, cl, a | Default: 1<br>
snd_vol_deathmatch | devonly, cl, a | Default: 1<br>
snd_vol_per_game_mode | devonly, cl, a | Default: true<br>
snd_vol_spectator | devonly, cl, a | Default: 1<br>
snd_vol_warmup | devonly, cl, a | Default: 1<br>
sndplaydelay | devonly | 
sos_debug_emit | devonly, sv, cl, rep | Default: false<br>
sos_use_guid_filter | devonly, sv, cl, rep | Default: false<br>
sound_device_override | a, release | Default: <br>ID of the sound device to use
soundevent_check_networked_entity | devonly, sv | Default: false<br>
soundinfo | release | Describe the current sound device with an active voice list.
soundlist | devonly | List all known sounds.
soundpatch_captionlength | devonly, sv, cl, rep | Default: 2<br>How long looping soundpatch captions should display for.
soundscape_debug | sv, cheat | Default: false<br>When on, draws lines to all env_soundscape entities. Green lines show the active soundscape, red lines show soundscapes that aren't in range, and white lines show soundscapes that are in range, but not the active soundscape.
soundscape_dumpclient | cl, cheat | Dumps the client's soundscape data.<br>
soundscape_fadetime | cl, cheat | Default: 3<br>Time to crossfade sound effects between soundscapes
soundscape_flush | devonly, sv | Flushes the server & client side soundscapes
soundscape_message | devonly, cl | Default: false<br>
soundscape_radius_debug | cl, cheat | Default: false<br>Prints current volume of radius sounds
soundscape_update_include_bots | devonly, sv, cheat | Default: false<br>Enable to calculate soundscape audio params for bots.
soundsystem_device_used | devonly | Default: <br>Sound device in use (changing this does not change the soundsystem).
soundsystem_update_async | devonly | Default: true<br>
soundsysteminfo | devonly | Describe the current sound device without an active voice list.
sparseshadowtree_cascade_mask | devonly | Default: 4<br>Bitfield describing which cascades to generate/use SST for. (OR'd 1UL&lt;&lt;cascadeIndex, default is 1UL&lt;&lt;2 only, i.e. just cascade 2)
sparseshadowtree_copy_to_shadow_atlas_ps | devonly | Default: true<br>Copy layer from CS output to shadow atlas uses PS copy (vs CopyTexture).
sparseshadowtree_cs_debug_colors | devonly | Default: false<br>Output debug colors for SST CS.
sparseshadowtree_cs_exclude_next_cascade_region | devonly | Default: true<br>Exclude the inner region of a cascade during CS unpack if there is a higher resolution cascade that will cover that area.
sparseshadowtree_cs_unpack_mode | devonly | Default: 1<br>Unpack mode in cs, 0 - one leaf per thread (16 output pixels), 1 (default) - one leaf row per thread (4 output pixels), 2 - one pixel out per thread.
sparseshadowtree_debug_tile_range_xmax | devonly | Default: 1<br>SST Tile range for renderdoc/debug capturing.
sparseshadowtree_debug_tile_range_xmin | devonly | Default: 0<br>SST Tile range for renderdoc/debug capturing.
sparseshadowtree_debug_tile_range_ymax | devonly | Default: 1<br>SST Tile range for renderdoc/debug capturing.
sparseshadowtree_debug_tile_range_ymin | devonly | Default: 0<br>SST Tile range for renderdoc/debug capturing.
sparseshadowtree_disable_add_layers | devonly | Default: false<br>Disable SST runtime layers, for debugging (will exclude geo that CAN render into SST if SST otherwise enabled)
sparseshadowtree_disable_for_viewmodel | devonly | Default: true<br>Disable SST generation and runtime for viewmodel (use original CSM rendering).
sparseshadowtree_enable_rendering | devonly | Default: false<br>Enable use of SST at runtime (static geo rendered into cascades via SST).
sparseshadowtree_leaf_compress_scaleoffset | devonly | Default: true<br>Compress leaf node depths using scale & offset.
sparseshadowtree_leaf_precision | devonly | Default: 0.0004<br>precision for depth compression at SST leaf nodes.
sparseshadowtree_leaf_precision_viewmodel | devonly | Default: 0.0005<br>(viewmodel) precision for depth compression at SST leaf nodes.
sparseshadowtree_parallel_generation | devonly | Default: 2<br>Split SST tile generation into threadjobs (0 - disabled, 1 - wait on readpixels for job batch, 2 - async readpixels).
sparseshadowtree_plane_incr_per_step | devonly | Default: 0.0001<br>depth to increment candidate plane values per iteration to satisfy selection.
sparseshadowtree_plane_incr_per_step_viewmodel | devonly | Default: 0.0025<br>(viewmodel) depth to increment candidate plane values per iteration to satisfy selection.
sparseshadowtree_plane_max_error | devonly | Default: 0.0004<br>max error (distance away in depth) candidate plane is allowed before rejecting.
sparseshadowtree_plane_max_error_viewmodel | devonly | Default: 0.01<br>(viewmodel) max error (distance away in depth) candidate plane is allowed before rejecting.
sparseshadowtree_plane_num_iter | devonly | Default: 5<br>number of steps to push candidate plane behind depths.
sparseshadowtree_render_cables | devonly | Default: false<br>Render cables into SST.
sparseshadowtree_renderdoc_capture_generation | devonly | Default: false<br>Capture dual shadow maps during sparseshadowtree generation.
sparseshadowtree_unpack_direct_to_shadow_atlas | devonly | Default: false<br>unpack SST directly into shadow atlas cascade vs via staging texture PS copy (NOTE - rendersystem fix reqd for AMD + driver fix required for NV + VK only.
sparseshadowtree_uv_frac_offset_x | devonly | Default: 0<br>uv x offset during copy to cascade.
sparseshadowtree_uv_frac_offset_y | devonly | Default: 0<br>uv y offset during copy to cascade.
spawn_group_activate | sv, cheat | Activate specified spawngroup.
spawn_group_load | sv, cheat | Load named spawn group.
spawn_group_unload | sv, cheat | Unload named spawn group.
spawngroup_ignore_timeouts | devonly | Default: false<br>
speaker_config | a | Default: -1<br>
spec_autodirector | cl, clientcmd_can_execute | Default: false<br>Auto-director chooses best view modes while spectating
spec_autodirector_cameraman | devonly, cl | Default: -1<br>
spec_centerchasecam | cl, a | Default: false<br>Looks at the target player's center, instead of his eye position, in chase came mode
spec_chasedistance | devonly, cl | Default: 96<br>Chase cam's ideal distance from target
spec_chasedistancespeed | devonly, cl | Default: 144<br>Chase cam's ideal distance from target
spec_death_panel_replay_position | devonly, cl | Default: 0.75<br>
spec_freeze_deathanim_time | sv, cl, rep, release | Default: 0.8<br>The time that the death cam will spend watching the player's ragdoll before going into the freeze death cam.
spec_freeze_time | sv, cl, rep, release | Default: 3<br>Time spend frozen in observer freeze cam.
spec_freeze_time_lock | sv, cl, rep, release | Default: 1<br>Time players are prevented from skipping the freeze cam
spec_freeze_traveltime | sv, cl, rep, release | Default: 0.3<br>Time taken to zoom in to frame a target in observer freeze cam.
spec_glow_decay_time | cl, release | Default: 2<br>Time to decay glow from 1.0 to spec_glow_silent_factor after spec_glow_full_time.
spec_glow_full_time | cl, release | Default: 1<br>Noisy players stay at full brightness for this long.
spec_glow_silent_factor | cl, release | Default: 0.4<br>Lurking player xray glow scaling.
spec_glow_spike_factor | cl, release | Default: 1.2<br>Noisy player xray glow scaling (pop when noise is made).  Make &gt;1 to add a 'spike' to noise-making players
spec_glow_spike_time | cl, release | Default: 0<br>Time for noisy player glow 'spike' to show that they made noise very recently.
spec_goto | cl, clientcmd_can_execute | Move the spectator camera to a specific location. `spec_goto x y z pitch yaw`
spec_lock_to_accountid | devonly, cl | Default: 0<br>As an observer, lock the spectator target to the given accountid.
spec_lock_to_current_player | devonly, cl | As an observer, lock the spectator target to the currently observed target
spec_mode | cl, clientcmd_can_execute | Set spectator mode
spec_next | cl, clientcmd_can_execute | Spectate next player
spec_player | cl, clientcmd_can_execute | Spectate a player by name or slot
spec_pos | cl, cheat | dump position and angles to the console
spec_prev | cl, clientcmd_can_execute | Spectate previous player
spec_replay_autostart | cl, a | Default: true<br>Auto-start Killer Replay when available
spec_replay_bot | sv, release | Default: false<br>Enable Spectator Hltv Replay when killed by bot
spec_replay_cache_ragdolls | devonly, cl | Default: true<br>when set to 0, ragdolls will settle dynamically before and after Killer Replay
spec_replay_colorcorrection | devonly, cl | Default: 0.5<br>Amount of color correction in deathcam replay
spec_replay_enable | rep, release | Default: 0<br>Enable Killer Replay, requires hltv server running (0:off, 1:default, 2:force)
spec_replay_fadein | devonly, cl | Default: 0.75<br>Amount of time in seconds it takes to visually fade into replay, or into real-time after replay
spec_replay_fadeout | devonly, cl | Default: 0.75<br>Amount of time in seconds it takes to visually fade out of replay, or out of real-time before replay
spec_replay_fullframe | devonly | Default: true<br>Send full frame on every hltv replay transition
spec_replay_leadup_time | rep, release | Default: 5.3438<br>Replay time in seconds before the highlighted event
spec_replay_message_time | rep, release | Default: 9.5<br>How long to show the message about Killer Replay after death. The best setting is a bit shorter than spec_replay_autostart_delay + spec_replay_leadup_time + spec_replay_winddown_time
spec_replay_on_death | rep, release | Default: false<br>When &gt; 0, sets the mode whereas players see delayed replay, and are segregated into a domain of chat and voice separate from the alive players
spec_replay_others_experimental | devonly, cl | Default: false<br>Replay the last death of the round, if possible. Disabled on official servers by default. Experimental.
spec_replay_outline | devonly, cl | Default: 1<br>Enable outline selecting victim in hltv replay: 0 - none; 1 - ouline YOU; 2 - outline YOU, with red ragdoll outline; 3 - normal spectator outlines
spec_replay_rate_base | rep, release | Default: 1<br>Base time scale of Killer Replay.Experimental.
spec_replay_rate_limit | rep, release | Default: 3<br>Minimum allowable pause between replay requests in seconds
spec_replay_rate_slowdown | devonly, cl | Default: 1<br>The part of Killer Replay right before death is played at this rate
spec_replay_rate_slowdown_length | devonly, cl | Default: 0.5<br>The part of Killer Replay right before death is played at this rate
spec_replay_review_sound | devonly, cl | Default: true<br>When set to non-0, a sound effect is played during Killer Replay
spec_replay_round_delay | sv, release | Default: 0<br>Round can be delayed by this much due to someone watching a replay; must be at least 3-4 seconds, otherwise the last replay will always be interrupted by round start, assuming normal pause between round_end and round_start events (7 seconds) and freezecam delay (2 seconds) and 7.4 second full replay (5.4 second pre-death and ~2 seconds post-death) and replay in/out switching (up to a second)
spec_replay_sound_fadein | devonly, cl | Default: 0.05<br>Amount of time in seconds it takes to fade in the audio before or after replay
spec_replay_sound_fadeout | devonly, cl | Default: 0<br>Amount of time in seconds it takes to fade out the audio before or after replay
spec_replay_victim_pov | devonly, cl | Default: false<br>Killer Replay - replay from victim's point of view (1); the default is killer's (0). Experimental.
spec_replay_winddown_time | sv, release | Default: 2<br>The trailing time, in seconds, of replay past the event, including fade-out
spec_show_xray | cl, a, release | Default: 1<br>If set to 1, you can see player outlines and name IDs through walls - who you can see depends on your team and mode
spec_track | devonly, cl | Default: 0<br>Tracks an entity in spec mode
spec_usenumberkeys_nobinds | cl, a | Default: true<br>If set to 1, map voting and spectator view use the raw number keys instead of the weapon binds (slot1, slot2, etc).
spew_fonts | devonly | Spew information about font manager fonts
splitscreen_mode | a, cheat | Default: 0<br>
splitscreen_testreadconfigconflict | devonly | 
ss_add | devonly | Adds a splitscreen user.
ss_mimic | devonly, cl, cheat | Default: 0<br>Split screen users mimic base player's CUserCmds
ss_remove | devonly | Removes a splitscreen user.
ss_teleport | devonly, cl, cheat | Teleport other splitscreen player to my location.
ss_voice_hearpartner | devonly | Default: false<br>Route voice between splitscreen players on same system.
startdemos | release | Play demos in demo sequence.
startmovie | devonly, norecord | Start recording movie frames.
stats | devonly | Prints server performance variables
stats_collect_gpu | devonly | Default: false<br>While doing stats_display, collect GPU perf counters. Used for stats_print_gpu.
stats_display | devonly | Default: 0<br>Displays perf statistics information
stats_highlight_interval | devonly, cl | Default: 10<br>Interval between hightlight screens in the transition stats panel
stats_print | devonly | Prints out perf statistics to the console, clears perf history
stats_print_gpu | devonly | Prints out GPU perf statistics to the console.  Requires stats_display &gt; 0, and stats_collect_gpu = true.  Optional argument of CSV filename
status | release | Print connection status
status_json | release | Print status in JSON format
steam_controller_haptics | cl, release | Default: true<br>
steamaudio_customdata_dimensions_numrays | devonly | Default: 32768<br>Number of rays to trace for estimating inside outside status of a probe.
steamvrevent_quit | devonly, sv, hidden | steamvrevent_quit
steamworks_sessionid_client | cl, hidden, user | Default: 0<br>The client session ID for the new steamworks gamestats.
steamworks_sessionid_lifetime_client | devonly, cl, hidden | Default: 0<br>The full client session ID for the new steamworks gamestats.
steamworks_sessionid_server | devonly, sv, cl, hidden, rep | Default: 0<br>The server session ID for the new steamworks gamestats.
sticky_tooltips | devonly, cl, hidden | Default: false<br>Don't ever hide tooltips. Helpful when debugging complicated tooltip layouts.
stop | release | Finish recording demo.
stopdemos | release | Stop looping demos (current demo will complete).
stopsound | cheat | 
stopsoundscape | cl, cheat | Stops all soundscape processing and fades current looping sounds
stopwatch | devonly, cl | General purpose timer. use 'stopwatch' to toggle or explicitly call 'stopwatch start' and/or 'stopwatch stop'.
subclass_change | sv, cheat | Changes the subclass of the given entity.<br>	Arguments:   	&lt;new_subclass&gt; {entity_name} / {class_name} / {entity_index} / {no argument = pick what player is looking at}
subclass_create | sv, cheat | Creates an entity of the given subclass where the player is looking.
surf_speed_fast | sv, cl, rep, release | Default: 3000<br>Speed above which a player is considered to be going fast.
surf_speed_med | sv, cl, rep, release | Default: 2000<br>Speed above which a player is considered to be going medium.
surf_speed_slow | sv, cl, rep, release | Default: 50<br>Speed above which a player is considered to be going slow.
surfaceprop | sv, cheat | Reports the surface properties at the cursor
suspicious_hit_odds_threshold | sv, release | Default: 0.01<br>
suspicious_hit_player_radius | sv, release | Default: 8<br>
suspicious_hit_strategy | sv, release | Default: 0<br>What to do about suspicious hits. 0: Nothing. 1: Skip the bullet. 2: Skip the bullet and re-roll a new bullet.
sv_accelerate | sv, cl, nf, rep, release | Default: 5.5<br>
sv_accelerate_debug_speed | sv, cl, nf, rep, release | Default: false<br>
sv_accelerate_use_weapon_speed | sv, cl, nf, rep, release | Default: true<br>
sv_ag2_low_skel_lod | devonly, sv | Default: false<br>
sv_air_max_wishspeed | sv, cl, rep, release | Default: 30<br>
sv_airaccelerate | sv, cl, nf, rep, release | Default: 12<br>
sv_allchat | sv, nf, release | Default: true<br>Players can receive all other players' text chat, no death restrictions
sv_allow_annotations | sv, cl, rep, release | Default: false<br>Allow clients to use the annotation system on the server.
sv_allow_ground_weapon_pickup | devonly, sv, cl, rep | Default: true<br>
sv_allow_switching_weapon_handedness | devonly, sv, cl, rep | Default: true<br>
sv_allow_votes | sv, release | Default: true<br>Allow voting?
sv_alltalk | sv, nf, release | Default: false<br>Players can hear all other players' voice communication, no team restrictions
sv_annotation_give_weapon | sv, hidden, release | Give weapon required by annotation
sv_annotation_remove_weapon | sv, hidden, release | Remove weapon given by annotation
sv_auto_adjust_bot_difficulty | sv, release | Default: true<br>Adjust the difficulty of bots each round based on contribution score.
sv_auto_cstrafe_attempt_window | sv, release | Default: 1<br>The length of the window of trailing counter-strafe attempts considered during input automation detection.
sv_auto_cstrafe_kick | sv, release | Default: false<br>Whether or not to kick players when counter-strafe input automation is detected.
sv_auto_cstrafe_logging | sv, release | Default: 0<br>0: never, 1: every time counter-strafe input automation is detected, 2: every counter-strafe
sv_auto_cstrafe_lower_overlap_pct_threshold | sv, release | Default: 0<br>The percentage of overlapping attempts in the attempt window below which input automation detection is triggered at the success threshold.
sv_auto_cstrafe_min_attempts | sv, release | Default: 1<br>The minimum number of counter-strafe attempts required for input automation detection. The player must be moving more than 135.2 units/s for their counter-strafe to be considered an attempt. An attempt is either considered a success (counter-strafing took place within a single tick), an overlap (both directions were held for 1+ ticks) or an underlap (neither direction was held for 1+ ticks).
sv_auto_cstrafe_sequence_length | sv, release | Default: 1<br>The length of sequential counter-strafe attempts evaluated relative to the success threshold. Input automation detection considers the best sequence within the larger attempt window.
sv_auto_cstrafe_success_threshold | sv, release | Default: 1<br>The minimum number of successful counter-strafes within a best sequence that will trigger input automation detection. The number of successes that trigger input automation detection is interpolated between the success threshold and a 'perfect' sequence (all counter-strafes in a sequence are successes), depending on the player's percentage of overlapping counter-strafe attempts.
sv_auto_cstrafe_upper_overlap_pct_threshold | sv, release | Default: 0<br>The percentage of overlapping attempts in the attempt window below which input automation detection is triggered when all counter-strafes in a sequence are successes.
sv_auto_full_alltalk_during_warmup_half_end | sv, release | Default: true<br>When enabled will automatically turn on full all talk mode in warmup, at halftime and at the end of the match
sv_autobunnyhopping | sv, cl, rep, release | Default: false<br>Players automatically re-jump while holding jump button
sv_autobuyammo | sv, cl, nf, rep, release | Default: false<br>Enable automatic ammo purchase when inside buy zones during buy periods
sv_autoexec_mapname_cfg | sv, release | Default: false<br>Execute a mapname cfg file on the server automatically in custom game modes that require it.
sv_autosave | devonly, sv, rep | Default: true<br>Set to 1 to autosave game on level transition. Does not affect autosave triggers.
sv_backspeed | devonly, sv, cl, rep | Default: 0.6<br>How much to slow down backwards motion
sv_banid_enabled | release | Default: true<br>Whether server supports banid command
sv_bot_buy_decoy_weight | sv, release | Default: 1<br>Given a bot will buy a grenade, controls the odds of the grenade type. Proportional to all other sv_bot_buy_*_weight convars.
sv_bot_buy_flash_weight | sv, release | Default: 1<br>Given a bot will buy a grenade, controls the odds of the grenade type. Proportional to all other sv_bot_buy_*_weight convars.
sv_bot_buy_grenade_chance | sv, release | Default: 33<br>Chance bots will buy a grenade with leftover money (after prim, sec and armor). Input as percent (0-100.0)
sv_bot_buy_hegrenade_weight | sv, release | Default: 6<br>Given a bot will buy a grenade, controls the odds of the grenade type. Proportional to all other sv_bot_buy_*_weight convars.
sv_bot_buy_molotov_weight | sv, release | Default: 1<br>Given a bot will buy a grenade, controls the odds of the grenade type. Proportional to all other sv_bot_buy_*_weight convars.
sv_bot_buy_smoke_weight | sv, release | Default: 1<br>Given a bot will buy a grenade, controls the odds of the grenade type. Proportional to all other sv_bot_buy_*_weight convars.
sv_bot_difficulty_kbm | devonly, sv, cl, hidden, rep | Default: 0<br>Bot difficulty while playing with Keyboard/Mouse device
sv_bot_parallel_threat_detection | devonly, sv | Default: true<br>Perform bot threat detection in parallel
sv_bots_get_easier_each_win | sv, release | Default: 0<br>If &gt; 0, some # of bots will lower thier difficulty each time they win. The argument defines how many will lower their difficulty each time.
sv_bounce | sv, cl, nf, rep, release | Default: 0<br>Bounce multiplier for when physically simulated objects collide with other objects.
sv_buy_status_override | sv, rep, release | Default: -1<br>Override for buy status map info. 0 = everyone can buy, 1 = ct only, 2 = t only 3 = nobody
sv_buymenu_open_prevents_opportunistic_pickup | sv, release | Default: false<br>
sv_c4_upright_constraint_damping | devonly, sv | Default: 0.5<br>Controls how much velocity is damped on the constraint. 0 = undamped wobbly spring, 1 = critically damped no wobble fast converge, &gt;1 = over damped
sv_c4_upright_constraint_enabled | devonly, sv | Default: true<br>Use a constraint to keep C4 pointed upright when thrown
sv_c4_upright_constraint_strength | devonly, sv | Default: 0.6<br>How quickly the constraint converges
sv_chat_proximity | sv, cl, rep, release | Default: -1<br>
sv_cheats | nf, rep, release | Default: false<br>Allow cheats on server
sv_client_max_interp_ratio | devonly, sv, cl, rep | Default: 5<br>This can be used to limit the value of cl_interp_ratio for connected clients (only while they are connected).
sv_client_min_interp_ratio | devonly, sv, cl, rep | Default: 0<br>This can be used to limit the value of cl_interp_ratio for connected clients (only while they are connected).<br>
sv_clientrates | devonly | Show client rates.
sv_clip_penetration_traces_to_players | devonly, sv, cl, rep | Default: true<br>
sv_clockcorrection_msecs | sv, release | Default: 30<br>The server tries to keep each player's m_nTickBase withing this many msecs of the server absolute tickcount
sv_cluster | release | Default: 0<br>Data center cluster this server lives in.
sv_coaching_enabled | devonly, sv, cl, rep, release | Default: false<br>Allows spectating and communicating with a team ( 'coach t' or 'coach ct' )
sv_competitive_minspec | sv, cl, nf, rep, release | Default: true<br>Enable to force certain client convars to minimum/maximum values to help prevent competitive advantages.
sv_compute_per_bot_difficulty | devonly, sv, cl, rep | Default: false<br>0 = compute all bot difficulties equally, 1 = compute unique bot difficulty for each bot 
sv_condense_late_buttons | devonly, sv | Default: true<br>When condensing late commands. Should we compress multiple moves of button presses into the target move?
sv_connectionless_legacy_events_allowed | devonly | Default: false<br>
sv_cq_min_queue | devonly, rep | Default: 0<br>Server min buffer size.
sv_cq_trim_bloat_remainder | sv, release | Default: 1<br>When trimming a bloated CQ, leave at least N more commands than the minimum
sv_cq_trim_bloat_space | sv, release | Default: 0<br>When trimming a bloated CQ, try to leave room for N more commands to be added.  0 will trim only what is needed to remove the immediate bloat, a very large value will reset the whole queue.
sv_cq_trim_catchup_remainder | sv, release | Default: 1<br>When trimming an overful CQ due to app 'catchup' request, leave at least N more commands than the minimum
sv_cs_dump_econ_item_stringtable | devonly, sv | sv_cs_dump_econ_item_stringtable
sv_cs_player_speed_has_hostage | sv, cl, rep, release | Default: 200<br>
sv_csgo_shoot_assert_lagcompensation_error | devonly, sv, cl, rep | Default: false<br>
sv_csgo_shoot_force_full_interp | devonly, sv, cl, rep | Default: false<br>
sv_csgo_shoot_force_use_target_time | devonly, sv, cl, rep | Default: false<br>
sv_csgo_shoot_lagcompensation_max_error | devonly, sv, cl, rep | Default: 1<br>Warn if lag compensated head hitbox position doesn't match that on client.
sv_csgo_shoot_log | devonly, sv, cl, rep | Default: false<br>
sv_csgo_shoot_log_attack_cmds_only | devonly, sv, cl, rep | Default: true<br>
sv_csgo_shoot_use_full_interp | devonly, sv, cl, rep | Default: true<br>
sv_csgo_shoot_verify | devonly, sv, cl, rep | Default: false<br>
sv_csgo_shoot_verify_on_attack_only | devonly, sv, cl, rep | Default: true<br>Only run lag compensation error check when primary attack goes down.
sv_damage_prediction_allowed | sv, cl, rep, release | Default: true<br>
sv_deadtalk | sv, cl, nf, rep, release | Default: false<br>Dead players can speak (voice, text) to the living
sv_debug_client_not_in_pvs | sv, cheat | Default: false<br>If set, draw failed client PVS checks with red box
sv_debug_overlays_bandwidth | release | Default: 65536<br>Broadcast server debug overlays traffic
sv_debug_overlays_broadcast | nf, cheat, release | Default: false<br>Broadcast server debug overlays
sv_debug_player_use | devonly, sv, cl, rep | Default: 0<br>Visualizes +use logic. Green cross=trace success, Red cross=trace too far, Green box=radius success
sv_debugroundstats | devonly, sv | Default: false<br>
sv_deltaticks_enforce | release | Default: 2<br>By default, player must ack delta ticks in order. How to enforce it: 2 = kick all clients, 1 = kick only TV clients, 0 = do not kick.
sv_deltaticks_log | release | Default: 2<br>Whether diagnostic logging is enabled when clients ack delta ticks out of order. Policy: 2 = log all out of order acks, 1 = log only when disconnect is triggered, 0 = do not log.
sv_dev_damage_use_netvars | devonly, sv, cl, rep | Default: true<br>Whether we should use network vars (true) or legacy messages (false).
sv_dev_entitydeltapadding_extra_max | devonly | Default: 0<br>When encoding entity deltas, append on a random number of extra bytes.  This happens after sv_dev_entitydeltapadding_min_size.
sv_dev_entitydeltapadding_extra_min | devonly | Default: 0<br>When encoding entity deltas, append on a random number of extra bytes.  This happens after sv_dev_entitydeltapadding_min_size.
sv_dev_entitydeltapadding_min_size | devonly | Default: 0<br>When encoding entity deltas, if the delta size is &lt; N bytes, then shove in N dummy bytes.  This happens before sv_dev_entitydeltapadding_extra_min/sv_dev_entitydeltapadding_extra_max
sv_dev_simulate_gcdown | devonly, sv | &lt;state&gt; Turn on/off simulated GC communications failure (GC is down in a way that we know it is down)
sv_disable_immunity_alpha | sv, cl, rep, release | Default: false<br>If set, clients won't slam the player model render settings each frame for immunity \[mod authors use this\]
sv_disable_observer_interpolation | sv, cl, rep, release | Default: false<br>Disallow interpolating between observer targets on this server.
sv_disable_querycache | devonly, sv, cl, rep, cheat | Default: false<br>debug - disable trace query cache
sv_disable_radar | sv, cl, rep, release | Default: 0<br>0: regular radar; 1: always disabled; 2: disabled in warmup
sv_disable_reliable_delta_retransmit | devonly | Default: true<br>Assume that a reliable entity delta will be ack'ed and send future deltas relative to the last reliable delta.
sv_disable_teamselect_menu | sv, cl, rep, release | Default: false<br>Disable teamselect menu on clients
sv_disconnected_player_data_hold_time | sv, cl, rep, release | Default: 60<br>Duration, in seconds, to hold onto the data of disconnected players, for scoreboard display.
sv_disconnected_players_cleanup_delay | sv, release | Default: 0<br>Delay between player disconnecting and their corpse getting cleaned up.
sv_dz_cash_bundle_size | sv, rep, release | Default: 50<br>Size of a cash bundle
sv_dz_cash_mega_bundle_size | sv, rep, release | Default: 13<br>Size of a mega cash bundle
sv_dz_contractkill_reward | sv, rep, release | Default: 10<br>Cash bundles to award for a successful contract kill
sv_dz_hostage_rescue_reward | sv, cl, rep, release | Default: 18<br>Number of cash bundles to award for rescuing a hostage
sv_dz_show_enemy_name_scope_range |  | Default: 0<br>
sv_dz_squad_wipe_reward | sv, cl, rep, release | Default: 2<br>Number of cash bundles to award for eliminating a squad
sv_early_network_message_processing | devonly, sv | Default: false<br>Processes network messages on the server before entities think, instead of at the end of the tick.
sv_enable_alternate_baselines | release | Default: 1<br>Allow alternate baseline system, set to 2 for debugging spew.
sv_enable_delta_packing | release | Default: true<br>When enabled, this allows for entity packing to use the property changes for building up the data. This is many times faster, but can be disabled for error checking.
sv_enable_donttransmit | devonly | Default: true<br>When encoding entity deltas, instead of unreliably deducing explicit deletions, actually send list of existing but not networked entities (dont_transmit list) to each client.
sv_enable_removearrayelementsoutsidemetadatabounds | release | Default: false<br>
sv_enablebunnyhopping | sv, cl, rep, release | Default: false<br>Allow player speed to exceed maximum running speed
sv_endmatch_item_drop_interval | devonly, sv, cl, rep | Default: 1<br>The time between drops on the end match scoreboard 
sv_endmatch_item_drop_interval_ancient | devonly, sv, cl, rep | Default: 3.5<br>The time between drops on the end match scoreboard for ancient items 
sv_endmatch_item_drop_interval_legendary | devonly, sv, cl, rep | Default: 2<br>The time between drops on the end match scoreboard for legendary items 
sv_endmatch_item_drop_interval_mythical | devonly, sv, cl, rep | Default: 1.25<br>The time between drops on the end match scoreboard for mythical items 
sv_endmatch_item_drop_interval_rare | devonly, sv, cl, rep | Default: 1<br>The time between drops on the end match scoreboard for rare items 
sv_ent_showonlyhitbox | sv, cheat | Default: -1<br>
sv_ents_write_alarm | release | Default: 0<br>Print callstack every time CNetworkGameServerBase::WriteEntityUpdate takes more than this amount of milliseconds
sv_explode_inferno_at_crosshair | devonly, sv, cheat | explodes molotov(0) or Incendiary (1) at crosshair location with single param
sv_explode_smokegrenade_at_crosshair | devonly, sv, cheat | explodes smoke grenade at crosshair location
sv_extra_client_connect_time | devonly | Default: 15<br>Seconds after client connect during which extra frames are buffered to prevent non-delta'd update
sv_extract_ammo_from_dropped_weapons | sv, cl, rep, release | Default: false<br>
sv_extreme_strafe_accuracy_fishtail | devonly, sv, cl, rep | Default: 0<br>Number of degrees of aim 'fishtail' when making an extreme strafe direction change
sv_fade_player_visibility_farz | sv, cl, rep, release | Default: false<br>
sv_falldamage_scale | sv, cl, rep, release | Default: 1<br>
sv_falldamage_to_below_player_multiplier | sv, cl, rep, release | Default: 1<br>Scale damage when distributed across two players
sv_falldamage_to_below_player_ratio | sv, cl, rep, release | Default: 0<br>Landing on a another player's head gives them this ratio of the damage.
sv_filterban | devonly | Default: 1<br>Set packet filtering by IP mode
sv_flashed_amount_for_blind_kill | sv, release | Default: 0.7<br>Minimum flashed alpha value for a player to be awarded a blind kill on the kill feed.
sv_footsteps | devonly, sv, cl, nf, rep | Default: 1<br>Play footstep sound for players
sv_force_team_intro_random | devonly, sv | Default: 0<br>
sv_force_team_intro_variant | devonly, sv | Default: 0<br>
sv_force_transmit_ents | devonly, sv | Default: false<br>Will transmit all entities to client, regardless of PVS conditions (will still skip based on transmit flags, however).
sv_fps_max | devonly, hidden | Default: 0<br>Dedicated server frame rate limiter. 0=tick rate. Only applies to the dedicated server.
sv_friction | sv, cl, nf, rep, release | Default: 5.2<br>World friction.
sv_full_alltalk | sv, cl, rep, release | Default: false<br>Any player (including Spectator team) can speak to any other player
sv_fullupdate | devonly | Force a full update for all clients.
sv_game_mode_convars | devonly, sv | Display the values of the convars for the current game_mode.
sv_game_mode_flags | sv, release | Default: 0<br>Dedicated server game mode flags to run
sv_gameinstructor_disable | sv, cl, rep, release | Default: false<br>Force all clients to disable their game instructors.
sv_gameinstructor_enable | cl, rep, release | Default: false<br>Force all clients to enable their game instructors.
sv_give_item | sv, hidden, rep, cheat, release | Default: <br>Player's extra item to give
sv_gravity | sv, cl, nf, rep, release | Default: 800<br>World gravity.
sv_grenade_trajectory_prac_pipreview | sv, cl, rep, release | Default: false<br>Shows grenade trajectory practice picture-in-picture preview.
sv_grenade_trajectory_prac_trailtime | sv, cl, rep, release | Default: 0<br>Shows grenade trajectory practice visualization for this number of seconds.
sv_grenade_trajectory_time_spectator | sv, cl, rep, release | Default: 0<br>Length of time grenade trajectory remains visible as a spectator.
sv_guardian_extra_equipment_ct | sv, release | Default: <br>Extra starting equipment for CT players in guardian modes
sv_guardian_extra_equipment_t | sv, release | Default: <br>Extra starting equipment for Terrorist players in guardian modes
sv_guardian_refresh_ammo_for_items_on_waves | sv, release | Default: <br>List of additional weapons to refill ammo on waves.
sv_guardian_spawn_health_ct | sv, release | Default: 100<br>Starting health in guardian modes.
sv_guardian_spawn_health_t | sv, release | Default: 100<br>Starting health in guardian modes.
sv_health_approach_enabled | sv, rep, release | Default: true<br>
sv_health_approach_speed | sv, rep, release | Default: 10<br>
sv_hegrenade_damage_multiplier | sv, cl, rep, release | Default: 1<br>
sv_hegrenade_radius_multiplier | sv, cl, rep, release | Default: 1<br>
sv_hibernate_postgame_delay | release | Default: 5<br># of seconds to wait after final client leaves before hibernating.
sv_hibernate_when_empty | release | Default: true<br>Puts the server into extremely low CPU usage mode when no clients connected
sv_hide_ent_in_pvs | devonly, sv | Default: -1<br>
sv_hide_roundtime_until_seconds | sv, cl, rep, release | Default: 0<br>
sv_highlight_distance | sv, cl, rep, release | Default: 500<br>
sv_highlight_duration | sv, cl, rep, release | Default: 3.5<br>
sv_histogram | devonly | var change info histogram<br>
sv_hitbox_debug | devonly, sv | Default: false<br>
sv_hosting_lobby | devonly, rep | Default: false<br>
sv_hoststate_quit_syscall | release | Default: false<br>When enabled, game server will quit immediately via syscall instead of running host states shutdown sequence
sv_human_autojoin_team | sv, cl, rep, release | Default: 0<br>Force human players on to a team. 0 to disable.
sv_ignoregrenaderadio | sv, release | Default: false<br>Turn off Fire in the hole messages
sv_infinite_ammo | sv, cl, rep, cheat, release | Default: 0<br>Player's active weapon will never run out of ammo
sv_instancebaselines | devonly | Default: true<br>Enable instanced baselines. Saves network overhead.
sv_invites_only_mainmenu | sv, cl, rep, release | Default: false<br>If turned on, will ignore all invites when user is playing a match
sv_jump_impulse | sv, cl, rep, release | Default: 301.993<br>Initial upward velocity for player jumps; sqrt(2*gravity*height).
sv_jump_precision_enable | sv, cl, rep, release | Default: true<br>Enable jump precision. Some game modes benefit from being able to turn this off.
sv_jump_spam_penalty_time | sv, cl, rep, release | Default: 0.015625<br>For subtick jumps, if this much time has elapsed since the last time the user has pressed the jump key, pretend they hadn't. Lowering this makes bunnyhopping easier.
sv_kick_ban_duration | sv, cl, nf, rep, release | Default: 15<br>How long should a kick ban from the server should last (in minutes)
sv_kick_players_with_cooldown | sv, rep, release | Default: 1<br>(0: do not kick on insecure servers; 1: kick players with Untrusted status or convicted by Overwatch; 2: kick players with any cooldown)
sv_kill_smokegrenade | devonly, sv, cheat | kill all smoke grenades
sv_ladder_angle | devonly, sv, cl, rep | Default: -0.707<br>Cos of angle of incidence to ladder perpendicular for applying ladder_dampen
sv_ladder_dampen | devonly, sv, cl, rep | Default: 0.2<br>Amount to dampen perpendicular movement on a ladder
sv_ladder_scale_speed | sv, cl, rep, release | Default: 0.78<br>Scale top speed on ladders
sv_ladder_slack_z_mult | sv, cl, rep, cheat | Default: 0.026<br>Difference in Z increases toward the middle of the slack ladder.<br>
sv_lagcomp_filterbyviewangle | sv, cheat | Default: true<br>If true, player pawn will filter lag compensation targets by their view angle.
sv_lagcompensationforcerestore | sv, cheat | Default: true<br>Don't test validity of a lag comp restore, just do it.
sv_lan | release | Default: false<br>Server is a lan server ( no heartbeat, no authentication, no non-class C addresses )
sv_late_commands_allowed | sv, release | Default: 5<br>Allow N late commands to run at 0 timescale prior to running an on-time command. Negative values for network round trip based calculation with a hard cap of the of absolute value
sv_lightquery_debug | sv, cheat | Default: false<br>
sv_limit_buyrandom_per_life | sv, release | Default: true<br>Enable to limit buyrandom command to only run once per player life
sv_load_forced_client_names_file | sv, release | Loads a file containing SteamID64 names for clients
sv_load_random_client_names_file | sv, release | Loads a file containing random name words for clients
sv_log_change_offsets | devonly, sv | Default: false<br>Log change offsets to game/varchangeinfoN.log files.
sv_log_http_record_before_any_listeners | sv, release | Default: false<br>
sv_log_onefile | a, release | Default: false<br>Log server information to only one file.
sv_log_roundstats | sv, release | Default: true<br>
sv_logbans | a, release | Default: false<br>Log server bans in the server logs.
sv_logblocks | release | Default: false<br>If true when log when a query is blocked (can cause very large log files)
sv_logecho | a, release | Default: true<br>Echo log information to the console.
sv_logfile | a, release | Default: false<br>Log server information in the log file.
sv_logflush | a, release | Default: false<br>Flush the log file to disk on each write (slow).
sv_logsdir | a, release | Default: logs<br>Folder in the game directory where server logs will be stored.
sv_long_frame_ms | devonly | Default: 15<br>If a server frame takes longer than N ms, complain about it.  (Dedicated server only.)  See also engine_frametime_warnings_enable.
sv_mapvetopickvote_maps | sv, release | Default: de_inferno,de_mirage,de_train,de_dust2,de_nuke,de_ancient,de_overpass<br>Which maps are used for map veto pick sequence
sv_mapvetopickvote_phase_duration | sv, release | Default: \[1:5\]\[2:15\]\[3:20\]\[4:10\]\[5:10\]\[6:5\]<br>How many seconds each phase lasts
sv_mapvetopickvote_rnd | sv, release | Default: false<br>When enabled will shuffle veto pick maps list order every time
sv_massreport | devonly, sv | Default: false<br>
sv_matchend_drops_enabled | sv, release | Default: true<br>Rewards gameplay time is always accumulated for players, but drops at the end of the match can be prevented
sv_matchpause_auto_5v5 | sv, cl, rep, release | Default: false<br>When enabled will automatically pause the match at next freeze time if less than 5 players are connected on each team.
sv_max_change_offsets | devonly, sv | Default: 48<br>How many network changes to track before requiring full diff check.
sv_max_deathmatch_respawns_per_tick | sv, release | Default: 0<br>
sv_max_distance_transmit_footsteps | devonly, sv, cl, rep | Default: 1250<br>Maximum distance to transmit footstep sound effects.
sv_max_queries_sec | release | Default: 3<br>Maximum queries per second to respond to from a single IP address.
sv_max_queries_sec_global | release | Default: 60<br>Maximum queries per second to respond to from anywhere.
sv_max_queries_window | release | Default: 30<br>Window over which to average queries per second averages.
sv_max_unreliable_delta_size | devonly | Default: 4096<br>Maximum allowable entity delta size over unreliable delivery.
sv_maxclientframes | devonly | Default: 128<br>
sv_maxrate | rep, release | Default: 0<br>Max bandwidth rate allowed on server, 0 == unlimited
sv_maxreplay | devonly | Default: 0<br>Maximum replay time in seconds
sv_maxspeed | sv, cl, nf, rep, release | Default: 320<br>
sv_maxunlag | sv, cl, rep, release | Default: 0.2<br>Maximum lag compensation in seconds
sv_maxunlag_player | sv, release | Default: -1<br>If &gt;0, maximumum lag compensation used for other human pawns. Applied after sv_maxunlag!
sv_maxuptimelimit | sv, release | Default: 0<br>Number of hours to operate before trying sv_shutdown.
sv_maxvelocity | sv, cl, rep, release | Default: 3500<br>Maximum speed any ballistically moving object is allowed to attain per axis.
sv_memlimit | cheat, release | Default: 0<br>If set, whenever a game ends, if the total memory used by the server is greater than this # of megabytes, the server will exit.
sv_merge_changes_after_tick_with_calcdelta | release | Default: 1<br>This fixes bugs where pure calcdelta is used due to recipient changing but it doesn't pick up a field change where the value was changed back to same value as the from snapshot even though the destination fields change list does note the change. Set to 2 to spew any changes merged in by this fix.
sv_metaduplication | cheat | Check serializer meta for duplication, add verbose to command for full spew
sv_min_jump_landing_sound | sv, cl, rep, release | Default: 260<br>
sv_minimum_desired_chicken_count | sv, rep, release | Default: 0<br>Minimum number of chickens to attempt to spawn in the map
sv_minrate | rep, release | Default: 98304<br>Min bandwidth rate allowed on server, 0 == unlimited
sv_mmqueue_reservation | devonly, norecord | Default: <br>Server queue reservation
sv_mmqueue_reservation_extended_timeout | devonly | Default: 21<br>Extended time in seconds before mmqueue reservation expires.
sv_mmqueue_reservation_timeout | devonly | Default: 21<br>Time in seconds before mmqueue reservation expires.
sv_mover_maxslope | devonly, sv, cl, nf, rep | Default: 0.7<br>The maximum slope the player can overcome \[-\]
sv_mover_pogodampingratio | devonly, sv, cl, nf, rep | Default: 1<br>The capsule pogo stick damping ratio \[-\]
sv_mover_pogofrequency | devonly, sv, cl, nf, rep | Default: 10<br>The capsule pogo stick frequency \[hz\].
sv_mute_players_with_social_penalties | devonly, sv | Default: true<br>
sv_networkvar_log_fullchanges | devonly, sv | Default: false<br>Log FUL_FULL_EDICT_CHANGED calls.
sv_networkvar_perfieldtracking | release | Default: true<br>Track individual field offset changes, rather than a single dirty flag for the whole entity.
sv_networkvar_validate | release | Default: false<br>Validate each StateChanged against known offsets.
sv_no_navmesh | devonly, sv, cheat | Default: false<br>Block loading of the navmesh. Unplayable, only used for memory sampling.
sv_noclipaccelerate | sv, cl, a, nf, rep | Default: 5<br>
sv_noclipduringpause | sv, cl, rep, cheat | Default: false<br>If cheats are enabled, then you can noclip with the game paused (for doing screenshots, etc.).
sv_noclipfriction | sv, cl, a, nf, rep | Default: 4<br>Friction during noclip move.
sv_noclipspeed | sv, cl, a, nf, rep | Default: 1200<br>
sv_nomvp | devonly, sv | Default: false<br>Disable MVP awards.
sv_nonemesis | devonly, sv | Default: true<br>Disable nemesis and revenge.
sv_nowinpanel | devonly, sv | Default: false<br>Turn on/off win panel on server
sv_optimizedmovement | devonly, sv, cl, rep | Default: true<br>
sv_outofammo_indicator | sv, cl, rep, release | Default: false<br>
sv_outofpvsentityupdates | devonly | Default: false<br>
sv_packstats | release | Show entity packing stats, pass 'clear' as argument to reset counts.
sv_parallel_checktransmit | sv, release | Default: 2<br>Set to 1 to use threaded checkentities for transmit/pvs on listen servers, 2 for dedicated servers.
sv_parallel_packentities | release | Default: 2<br>Set to 1 to use threaded snapshot sending on listen servers, 2 for dedicated servers.
sv_parallel_sendsnapshot | release | Default: 2<br>0: run all send jobs on main thread; 1: send jobs run asynchronously (except on dedicated server); 2: send jobs asynchronously; 3: send jobs run in parallel but block to not overlap the next tick; 4: main server clients' send jobs run in parallel, then HLTV server jobs; this approximately matches pre-async profile for a single HLTV server configuration
sv_party_mode | sv, cl, rep, release | Default: false<br>Party!!
sv_password | prot, nf, norecord, release | Default: <br>Server password for entry into multiplayer games
sv_pausable | release | Default: 0<br>Is the server pausable.
sv_pausable_dev | devonly | Default: true<br>Whether listen server is pausable when running -dev and playing solo against bots
sv_pausable_dev_ds | devonly | Default: false<br>Whether dedicated server is pausable when running -dev and playing solo against bots
sv_pause_on_console_open | a | Default: false<br>1 = Pause the game when pressing ~ to open the console. CTRL+~ opens the console without pause.
sv_pause_on_tick | devonly, sv, rep, cheat | Default: 0<br>Tick count to pause on
sv_phys_animated_hierarchy | devonly, sv | Default: true<br>
sv_phys_async_buoyancy_update | devonly, sv, rep | Default: false<br>If true, server buoyancy motion controllers are updated in an async job after the tick has completed.
sv_phys_debug_callback_entities | sv, cheat | Default: false<br>Print all entities that get touch callbacks. Each entity is printed only once.
sv_phys_enabled | sv, cheat | Default: true<br>Enable all physics simulation
sv_phys_sleep_enable | sv, cheat | Default: true<br>Enable sleeping for dynamic physics bodies.
sv_phys_sound_disable_impact_sounds_under_hard_threshold | sv, cheat | Default: false<br>if true, impact sounds wont play if no soft impact sound is present and the impact is below the hard velocity threshold.
sv_phys_stop_at_collision | sv, cheat | Default: <br>
sv_phys_visualize_awake | devonly, sv | Default: false<br>
sv_player_parallel_physicsrelinkchildren | devonly, sv | Default: false<br>
sv_player_search_range | devonly, sv, cl, rep | Default: 64<br>
sv_playerradio_use_allowlist | sv, release | Default: true<br>playerradio commands may only use responses from an allow list of commands.
sv_predictable_damage_tag_ticks | sv, release | Default: 2<br>Delay player slowdown when damaged by # ticks to reduce misprediction effects
sv_prime_accounts_only | sv, release | Default: false<br>When this setting is enabled only prime users can connect to this game server.
sv_pure | release | Show user data.
sv_pure_kick_clients | release | Default: true<br>If set to 1, the server will kick clients with mismatching files. Otherwise, it will issue a warning to the client.
sv_pure_trace | release | Default: 0<br>If set to 1, the server will print a message whenever a client is verifying a CRC for a file.
sv_pushaway_clientside | devonly, sv, cl, rep | Default: 0<br>Clientside physics push away (0=off, 1=only localplayer, 1=all players)
sv_pushaway_clientside_size | devonly, sv, cl, rep | Default: 15<br>Minimum size of pushback objects
sv_pushaway_force | devonly, sv, cl, rep | Default: 300000<br>How hard physics objects are pushed away from the players on the server.
sv_pushaway_hostage_force | sv, rep, cheat | Default: 20000<br>How hard the hostage is pushed away from physics objects (falls off with inverse square of distance).
sv_pushaway_max_force | devonly, sv, cl, rep | Default: 2000<br>Maximum amount of force applied to physics objects by players.
sv_pushaway_max_hostage_force | sv, rep, cheat | Default: 1000<br>Maximum of how hard the hostage is pushed away from physics objects.
sv_pushaway_max_player_force | devonly, sv, cl, rep, cheat | Default: 20<br>Maximum of how hard the player is pushed away from physics objects.
sv_pushaway_min_player_speed | devonly, sv, cl, rep | Default: 75<br>If a player is moving slower than this, don't push away physics objects (enables ducking behind things).
sv_pushaway_player_force | devonly, sv, cl, rep, cheat | Default: 450<br>How hard the player is pushed away from physics objects (falls off with inverse square of distance).
sv_pvs_cache_query_inflate_amount | devonly, sv | Default: 0<br>
sv_pvs_entity | devonly, sv | Default: -1<br>If set, only allows this ent index to network (other than players and things that force sending).
sv_pvs_max_distance | rep, release | Default: 0<br>if set, adds a maximum range to PVS/PAS checks
sv_pvs_random | devonly, sv | Default: false<br>If set, objects blink in/out of pvs randomly.
sv_pvs_shadows_include_env | sv, rep, release | Default: false<br>
sv_quantize_movement_input | sv, cl, rep, release | Default: true<br>Quantize movement input values. Enabling this restricts players from using analog input to move at fractional speeds normally impossible with digital button input.
sv_querycache_stats | devonly, sv | Display status of the query cache (client only)
sv_radio_throttle_window | sv, release | Default: 10<br>The number of seconds before radio command tokens refresh.
sv_ragdoll_lru_debug | sv, rep, cheat | Default: false<br>
sv_rcon_banpenalty | devonly | Default: 0<br>Number of minutes to ban users who fail rcon authentication
sv_rcon_log | devonly | Default: true<br>Enable/disable rcon logging.
sv_rcon_maxfailures | devonly | Default: 10<br>Max number of times a user can fail rcon authentication before being banned
sv_rcon_minfailures | devonly | Default: 5<br>Number of times a user can fail rcon authentication in sv_rcon_minfailuretime before being banned
sv_rcon_minfailuretime | devonly | Default: 30<br>Number of seconds to track failed rcon authentications
sv_recipients_check | release | Default: true<br>When packing entities, check that recipient bits match for fast path packing.
sv_record_item_time_data | sv, release | Default: false<br>Turn on recording of per player item time data into the server log.
sv_recvbuf_messages | devonly | Default: 1024<br>Max number of messages that can be queued in a netchan receive buffer for an ordinary connection from a client.
sv_regeneration_force_on | sv, cheat | Default: false<br>Cheat to test regenerative health systems
sv_regeneration_wait_time | devonly, sv, rep | Default: 1<br>
sv_region | release | Default: -1<br>The region of the world to report this server in.
sv_reliableavatardata | sv, cl, rep, release | Default: false<br>Use server overrides for steam avatars
sv_remapper_loopsoundfix | devonly, sv, cl, rep | Default: false<br>
sv_remapper_range_multiplier | devonly, sv, cl, rep | Default: 1<br>
sv_remove_ent_from_pvs | devonly, sv | Default: 0<br>
sv_replay_group_id | release | Default: 0<br>The replay group that this server will be uploading files to
sv_replaysdir | devonly | Default: replays<br>Directory to store replays in
sv_reserve_slots_for_reconnecting_players_kick_prior | devonly | Default: true<br>Kick a previously connected player with the same steamID if a replacement comes along
sv_rethrow_last_grenade | sv, cheat | Emit the last grenade thrown on the server.
sv_rollangle | devonly, sv, cl, nf, rep | Default: 0<br>Max view roll angle
sv_rollspeed | devonly, sv, cl, nf, rep | Default: 200<br>
sv_runcmds | devonly, sv | Default: true<br>
sv_script_think_interval | devonly, sv, cl, rep | Default: 0.1<br>
sv_search_key | release | Default: <br>
sv_search_team_key | release | Default: public<br>When initiating team search, set this key to match with known opponents team
sv_sendtables | devonly | Default: 1<br>Force full sendtable sending path.
sv_sequence_debug | devonly, sv | Default: -1<br>
sv_sequence_debug2 | devonly, sv | Default: -1<br>
sv_sequence_model_substring | devonly, sv | Default: <br>
sv_server_graphic1 | sv, cl, rep, release | Default: <br>A 360x60 (&lt;16kb) image file in /csgo/ that will be displayed to spectators.
sv_server_graphic2 | sv, cl, rep, release | Default: <br>A 220x45 (&lt;16kb) image file in /csgo/ that will be displayed to spectators.
sv_server_verify_blood_on_player | sv, cl, rep, cheat | Default: true<br>
sv_setsteamaccount | release | token<br>Set game server account token to use for logging in to a persistent game server account
sv_shared_team_pvs | devonly, sv | Default: false<br>PVS is shared between teams
sv_show_bot_difficulty_in_name | devonly, sv, cl, rep | Default: false<br>0 = hide bot difficulty in bot name, 1 = show bot difficulty in bot name
sv_show_move_collisions | sv, cl, rep, cheat | Default: false<br>Enable this to visualize collisions between player and geometry.
sv_show_team_equipment_force_on | sv, cl, rep, release | Default: false<br>Force on if not prohibited
sv_show_team_equipment_prohibit | sv, cl, nf, rep, release | Default: false<br>Determines whether +cl_show_team_equipment is prohibited.
sv_show_teammate_death_notification | sv, release | Default: false<br>Show chat notification upon teammate death
sv_show_voip_indicator_for_enemies | sv, rep, release | Default: false<br>Makes it so the voip icon is shown over enemies as well as allies when they are talking
sv_showbullethits | sv, cl, rep, release | Default: 0<br>1=show hits and near misses, 2=show hits only
sv_showhitregistration | sv, cl, rep, cheat | Default: 0<br>Display lag_compensated hitboxes. 0 = off, 1 = server only, 2 = client only, 3 = both server and client
sv_showimpacts | sv, cl, rep, release | Default: 0<br>Shows client (red) and server (blue) bullet impact point (1=both, 2=client-only, 3=server-only)
sv_showimpacts_penetration | sv, cl, rep, release | Default: 0<br>Shows extra data when bullets penetrate. (use sv_showimpacts_time to increase time shown)
sv_showimpacts_time | sv, cl, rep, release | Default: 4<br>Duration bullet impact indicators remain before disappearing
sv_showladders | devonly, sv | Default: false<br>Show bbox and dismount points for all ladders (must be set before level load.)<br>
sv_showlagcompensation_rec | devonly, sv | Default: 0<br>If &gt; 0, show lag compensation hitboxes as they're recorded. Value is for how long.
sv_showplayerhitboxes | devonly, sv, cl, rep | Default: 0<br>Show lag compensated hitboxes for the specified player index whenever a player fires.
sv_showtags | devonly | Describe current gametags.
sv_shutdown | release | Sets the server to shutdown when all games have completed
sv_shutdown_immediately_on_request | devonly | Default: false<br>The server will always shutdown on receiving the shutdown request, even if not hibernating
sv_skel_constraints_enable | rep, cheat | Default: false<br>
sv_skip_update_animations | devonly, sv | Default: false<br>Enable to skip game animations
sv_skirmish_id | sv, cl, rep, release | Default: 0<br>Dedicated server skirmish id to run
sv_skyname | sv, cl, a, rep | Default: sky_urb01<br>Current name of the skybox texture
sv_smoke_volume_blind_start | devonly, cl | Default: 0.2<br>
sv_snapshot_unlimited | rep, release | Default: false<br>For debugging, don't throw away old snapshots so that if you break in debugger (on remote client or server) it won't require an uncompressed update to resume.  You may run out of memory of course...
sv_sniper_tracer_innacuracy | devonly, sv, cl, rep | Default: 0.085<br>How inaccurate a sniper shot can be before we trip sv_sniper_tracer_mode behavior.
sv_sniper_tracer_innacuracy_length | devonly, sv, cl, rep | Default: 200<br>How far should the tracer draw if we trip sv_sniper_tracer_mode behavior.
sv_sniper_tracer_mode | devonly, sv, cl, rep | Default: 1<br>Mode for sniper tracers. 0: legacy, 1: hide when more than sv_sniper_tracer_innacuracy inaccurate.
sv_soundscape_printdebuginfo | sv, cheat | print soundscapes
sv_spawn_afk_bomb_drop_time | sv, rep, release | Default: 15<br>Players that have never moved since they spawned will drop the bomb after this amount of time.
sv_spec_hear | sv, cl, nf, rep, release | Default: 1<br>Determines who spectators can hear: 0: only spectators; 1: all players; 2: spectated team; 3: self only; 4: nobody
sv_spec_use_tournament_content_standards | sv, cl, rep, release | Default: false<br>
sv_specaccelerate | sv, cl, a, nf, rep | Default: 5<br>
sv_specnoclip | sv, cl, a, nf, rep | Default: true<br>
sv_specspeed | sv, cl, a, nf, rep | Default: 1200<br>
sv_spewmeta | cheat | Spew serializer meta
sv_spewworldgroups | devonly | Spew world groups (server)
sv_staminajumpcost | sv, cl, rep, release | Default: 0.08<br>Stamina penalty for jumping
sv_staminalandcost | sv, cl, rep, release | Default: 0.05<br>Stamina penalty for landing
sv_staminamax | sv, cl, rep, release | Default: 80<br>Maximum stamina penalty
sv_staminarecoveryrate | sv, cl, rep, release | Default: 60<br>Rate at which stamina recovers (units/sec)
sv_standable_normal | sv, cl, rep, cheat, release | Default: 0.7<br>
sv_stats | devonly | Default: true<br>Collect CPU usage stats
sv_steamauth_enforce | release | Default: 2<br>By default, player must maintain a reliable connection to Steam servers. When player Steam session drops, enforce it: 2 = instantly kick, 1 = kick at next spawn, 0 = do not kick.
sv_steamauth_ignore_localhost | release | Default: true<br>Ignore VAC and auth errors for client connected via localhost address or in-engine loopback
sv_steamgroup | nf, release | Default: <br>The ID of the steam group that this server belongs to. You can find your group's ID on the admin profile page in the steam community.
sv_steamgroup_exclusive | release | Default: false<br>If set, only members of Steam group will be able to join the server when it's empty, public people will be able to join the server only if it has players.
sv_step_move_vel_min | sv, cl, rep, cheat | Default: 64<br>Min velocity for step move.
sv_stepsize | devonly, sv, cl, nf, rep | Default: 18<br>
sv_stopspeed | sv, cl, nf, rep, release | Default: 80<br>Minimum stopping speed when on ground.
sv_strafing_inaccuracy_bias | sv, cl, rep, cheat, release | Default: 0.5<br>
sv_strafing_inaccuracy_enabled | sv, cl, rep, cheat, release | Default: false<br>
sv_strafing_inaccuracy_scale | sv, cl, rep, cheat, release | Default: 0.1<br>
sv_stressbots | release | Default: false<br>If set to 1, the server calculates data and fills packets to bots. Used for perf testing.
sv_strict_notarget | devonly, sv | Default: false<br>If set, notarget will cause entities to never think they are in the pvs
sv_subtick_movement_view_angles | sv, cl, rep, release | Default: true<br>Whether or not subtick view angles are taken into account during movement.
sv_suppress_friendlyfire_decals | devonly, sv | Default: true<br>
sv_suppress_viewpunch | devonly, sv, cl, rep, cheat | Default: false<br>
sv_surf_sounds | sv, cl, rep, release | Default: false<br>Should we try to play sounds for surf?
sv_tags | nf, release | Default: <br>Server tags. Used to provide extra information to clients when they're browsing for servers. Separate tags with a comma.
sv_talk_after_dying_time | sv, cl, rep, release | Default: 0<br>The number of seconds a player can continue talking after dying as if they were still alive
sv_talk_enemy_dead | sv, cl, rep, release | Default: false<br>Dead players can hear all dead enemy communication (voice, chat)
sv_talk_enemy_living | sv, cl, rep, release | Default: false<br>Living players can hear all living enemy communication (voice, chat)
sv_teamid_overhead | sv, cl, nf, rep, release | Default: true<br>Shows teamID over player's heads.  0 = off, 1 = on
sv_teamid_overhead_always_prohibit | sv, cl, nf, rep, release | Default: false<br>Determines whether cl_teamid_overhead_always is prohibited.
sv_teamid_overhead_maxdist | sv, cl, rep, release | Default: 0<br>If &gt;0, server will override cl_teamid_overhead_maxdist
sv_teamid_overhead_maxdist_spec | sv, cl, rep, release | Default: 0<br>If &gt;0, server will override cl_teamid_overhead_maxdist_spec
sv_temp_baseline_string_table_buffer_size | devonly | Default: 524288<br>Buffer size for writing string table baselines
sv_throw_decoygrenade | devonly, sv, cheat | throw decoy grenade with parmas.
sv_throw_flashgrenade | devonly, sv, cheat | throw flash grenade with parmas.
sv_throw_hegrenade | devonly, sv, cheat | throw HEgrenade with parmas.
sv_throw_molotov | devonly, sv, cheat | throw molotov grenade with parmas.
sv_throw_smokegrenade | devonly, sv, cheat | throw smoke grenade with parmas.
sv_timebetweenducks | sv, cl, rep, release | Default: 0.4<br>Minimum time before recognizing consecutive duck key
sv_timeout | devonly | Default: 20<br>After this many seconds without a message from fully connected client, the client is dropped
sv_turbophysics | devonly, sv, cl, rep | Default: false<br>Turns on turbo physics
sv_turning_inaccuracy_angle_min | sv, cl, rep, cheat, release | Default: 4<br>
sv_turning_inaccuracy_decay | sv, cl, rep, cheat, release | Default: 0.8<br>
sv_turning_inaccuracy_enabled | sv, cl, rep, cheat, release | Default: false<br>
sv_unlag | devonly, sv | Default: true<br>Enables player lag compensation
sv_unlag_debug | devonly, sv | Default: false<br>
sv_unlag_fixstuck | devonly, sv | Default: false<br>Disallow backtracking a player for lag compensation if it will cause them to become stuck
sv_unlockedchapters | a | Default: 1<br>Highest unlocked game chapter.
sv_unpause_on_console_close | a | Default: false<br>1 = Unpause the game when pressing ~ to close the console. 0 = Leave the game paused.
sv_update_animgraph_movement_in_finish | sv, cl, rep, cheat | Default: true<br>Whether we should update animgraph movement in FinishMove.
sv_use_hi_pri_context_switch_time | sv, cl, rep, release | Default: 1<br>+use search behaves as though high priority items are usable for this long after they become unusable to avoid players accidentally performing a different action.
sv_use_pvs_cache | devonly, sv | Default: false<br>
sv_usenetworkvars | devonly | Default: true<br>Use networkvar system.
sv_usercmd_custom_random_seed | sv, release | Default: false<br>When enabled server will populate an additional random seed independent of the client
sv_usercmd_execute_warning_ms | sv, a | Default: 5<br>Emit a warning if we spend more than N ms executing user commands for a single player
sv_vac_webapi_auth_key | sv, release | Default: <br>Key for when posting to vac related webapis.
sv_versus_screen_scene_id | sv, release | Default: 0<br>Determines which scene is used for the versus screen.
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
sv_vote_issue_changelevel_allowed | devonly, sv | Default: true<br>Can people hold votes to change levels?
sv_vote_issue_kick_allowed | sv, nf, rep, release | Default: true<br>Can people hold votes to kick players from the server?
sv_vote_issue_loadbackup_allowed | sv, nf, rep, release | Default: true<br>Can people hold votes to load match from backup?
sv_vote_issue_loadbackup_spec_authoritative | sv, release | Default: false<br>When enabled, admins load match from backup without players vote
sv_vote_issue_loadbackup_spec_only | sv, nf, rep, release | Default: false<br>When enabled, only admins load match from backup
sv_vote_issue_loadbackup_spec_safe | sv, release | Default: true<br>When enabled, admins load match from backup in safe time of the round only
sv_vote_issue_matchready_allowed | devonly, sv | Default: true<br>Can people hold votes to ready/unready the match?
sv_vote_issue_nextlevel_allowed | devonly, sv | Default: true<br>Can people hold votes to set the next level?
sv_vote_issue_nextlevel_allowextend | devonly, sv | Default: true<br>Allow players to extend the current map?
sv_vote_issue_nextlevel_choicesmode | devonly, sv | Default: true<br>Present players with a list of lowest playtime maps to choose from?
sv_vote_issue_nextlevel_prevent_change | devonly, sv | Default: true<br>Not allowed to vote for a nextlevel if one has already been set.
sv_vote_issue_pause_match_allowed | devonly, sv | Default: true<br>Can people hold votes to pause/unpause the match?
sv_vote_issue_pause_match_spec_only | sv, nf, rep, release | Default: false<br>When enabled, only admins start technical pause
sv_vote_issue_restart_game_allowed | sv, release | Default: false<br>Can people hold votes to restart the game?
sv_vote_issue_scramble_teams_allowed | devonly, sv | Default: false<br>Can people hold votes to scramble the teams?
sv_vote_issue_surrrender_allowed | devonly, sv | Default: true<br>Can people hold votes to surrender?
sv_vote_issue_swap_teams_allowed | devonly, sv | Default: false<br>Can people hold votes to swap the teams?
sv_vote_issue_timeout_allowed | devonly, sv | Default: true<br>Can people hold votes to time out?
sv_vote_kick_ban_duration | sv, nf, rep, release | Default: 15<br>How long should a kick vote ban someone from the server? (in minutes)
sv_vote_quorum_ratio | sv, release | Default: 0.501<br>The minimum ratio of players needed to vote on an issue to resolve it.
sv_vote_timer_duration | sv, release | Default: 15<br>How long to allow voting on an issue
sv_vote_to_changelevel_before_match_point | sv, rep, release | Default: false<br>Restricts vote to change level to rounds prior to match point (default 0, vote is never disallowed)
sv_vote_to_changelevel_rndmin | sv, rep, release | Default: 0<br>When non-zero, restricts vote to change level to this many first rounds or minutes of the match (default 0, vote is not disallowed)
sv_walkable_normal | sv, cl, rep, cheat, release | Default: 0.7<br>
sv_warmup_to_freezetime_delay | sv, cl, rep, release | Default: 4<br>Delay between end of warmup and start of match.
sv_watchtransmit | sv, release | Default: -2<br>Watch NetworkStateChanged info for this entity index.
sv_water_slow_amount | sv, cl, rep, release | Default: 0.9<br>
sv_wateraccelerate | sv, cl, nf, rep, release | Default: 10<br>
sv_waterdist | devonly, sv, cl, rep | Default: 12<br>Vertical view fixup when eyes are near water plane.
sv_waterfriction | sv, cl, nf, rep, release | Default: 1<br>
sv_weapon_require_use_grace_period | sv, release | Default: 1<br>
sv_weapon_swap_difficulty_near_hi_pri | sv, cl, rep, release | Default: 2<br>0 = Cone searches easily reach past high priority items to swap weapons. 1 = Cone searches are narrowed and require that the weapon is strictly closer. 2 = cone searches are disabled near high priority items
sv_workshop_allow_other_maps | sv, release | Default: true<br>When hosting a workshop collection, users can play other workshop map on this server when it is empty and then mapcycle into this server collection.
switchhands | cl, release | 
switchhandsleft | cl, release | 
switchhandsright | cl, release | 
sys_info | release | Print system information to the console
sys_minidumpexpandedspew | devonly | Default: true<br>
sys_minidumpspewlines | release | Default: 2000<br>Lines of crash dump console spew to keep.
target_scan_use_query_cache | devonly, sv | Default: true<br>
teammenu | cl, server_can_execute | Show team selection window
telemetry_message | sv, cheat | Place a message in the telemetry timeline
telemetry_toggle_timespan | sv, cheat | Starts/stops a timespan with an ever increasing name.
teleport_trigger_debug | devonly, sv | Default: false<br>
test_dispatcheffect | sv, cheat | Test a clientside dispatch effect.<br>	Usage: test_dispatcheffect &lt;effect name&gt; &lt;distance away&gt; &lt;flags&gt; &lt;magnitude&gt; &lt;scale&gt;<br>	Defaults are: &lt;distance 1024&gt; &lt;flags 0&gt; &lt;magnitude 0&gt; &lt;scale 0&gt;<br>
test_entity_blocker | sv, cheat | Test command that drops an entity blocker out in front of the player.
test_list_entities | sv, cheat | test-list entities
test_restoreonnewmodel | devonly, sv, cl, rep | Default: 0<br>
test_shipping_assert | release | Generate an assert to test shipping assertion code
test_voice_container_nesting | devonly | Test nesting voice containers.
test_voice_containers | devonly | Quick example for how we'd derive traits from voice containers.
testscript_debug | devonly | Default: false<br>Debug test scripts.
think_limit | sv, cl, rep, release | Default: 10<br>Maximum think time in milliseconds, warning is printed if this is exceeded.
thirdperson | cl, cheat, per_tick | Switch to thirdperson camera.
thirdperson_mayamode | cl, cheat | Switch to thirdperson Maya-like camera controls.
thirdpersonshoulder | devonly, cl | Switch to thirdperson-shoulder camera.
thread_pool_option | hidden, release | Default: -1<br>Thread pool option
throttle_expensive_ai | devonly, sv | Default: false<br>
timedemo | release | Play a demo and report performance info.
timedemo_end | devonly | Default: -1<br>Ends timedemo on given tick.
timedemo_start | devonly | Default: -1<br>Starts timedemo on given tick.
timedemoquit | release | Play a demo, report performance info, and then exit
timeleft | sv | prints the time remaining in the match
timeout_ct_start | sv, release | 
timeout_terrorist_start | sv, release | 
toggle | norecord, release | Toggles specified convar value on and off.
toggleRdrOpt | devonly, cl | 
toggleconsole | norecord, release | Show/hide the console.
toggleradarscale | cl, release | Toggles the radar scale
tool_spawned_model_scales | devonly, sv, rep | Default: 1 1 1<br>
tools_stall_monitor_break_on_unknown_cause | devonly | Default: false<br>Break on unknown stall cause
traceattack | devonly, sv | traceattack damage hitgroup
trigger_fan_debug | devonly, sv, cl, rep | Default: false<br>
trigger_fan_player_windblock_debug | devonly, sv, cl, rep | Default: false<br>
trusted_launch | cl, a | Default: 0<br>Trusted launch status
tv_advertise_watchable | prot, nf, norecord, release | Default: false<br>GOTV advertises the match as watchable via game UI, clients watching via UI will not need to type password
tv_allow_autorecording_index | sv, release | Default: -1<br>When &gt;=0 restricts autorecording only to the specified TV index
tv_allow_camera_man | devonly, sv | Default: true<br>Auto director allows spectators to become camera man
tv_allow_camera_man_steamid | sv, release | Default: 0<br>Allows tournament production cameraman to run csgo.exe -interactivecaster on SteamID 7650123456XXX and be the camera man.
tv_allow_camera_man_steamid2 | sv, release | Default: 0<br>Allows tournament production tv cameraman to run csgo.exe -interactivecaster on SteamID 7650123456XXX and be the tv camera man.
tv_allow_static_shots | sv, release | Default: true<br>Auto director uses fixed level cameras for shots
tv_autorecord | release | Default: false<br>Automatically records all games as SourceTV demos.
tv_autoretry | release | Default: true<br>Relay proxies retry connection after network timeout
tv_broadcast | release | Default: false<br>Automatically broadcasts all games as GOTV demos through Steam.
tv_broadcast1 | release | Default: false<br>Automatically broadcasts all games as GOTV\[1\] demos through Steam.
tv_broadcast_drop_fragments | hidden, release | Default: 0<br>Drop every Nth fragment
tv_broadcast_keyframe_interval | release | Default: 3<br>The frequency, in seconds, of sending keyframes and delta fragments to the broadcast relay server
tv_broadcast_keyframe_interval1 | release | Default: 3<br>The frequency, in seconds, of sending keyframes and delta fragments to the broadcast1 relay server
tv_broadcast_max_requests | release | Default: 20<br>Max number of broadcast http requests in flight. If there is a network issue, the requests may start piling up, degrading server performance. If more than the specified number of requests are in flight, the new requests are dropped.
tv_broadcast_max_requests1 | release | Default: 20<br>Max number of broadcast1 http requests in flight. If there is a network issue, the requests may start piling up, degrading server performance. If more than the specified number of requests are in flight, the new requests are dropped.
tv_broadcast_origin_auth | hidden, release | Default: gocastauth<br>X-Origin-Auth header of the broadcast POSTs
tv_broadcast_origin_auth1 | hidden, release | Default: gocastauth<br>X-Origin-Auth header of the broadcast1 POSTs
tv_broadcast_origin_delay | hidden, release | Default: 0<br>Injection delay request for CDN rebroadcast frameworks, seconds
tv_broadcast_resend | devonly | resend broadcast data to broadcast relay
tv_broadcast_spew_threshold | release | Default: 0.1<br>The threshold, in seconds, that we'll spew about the snapshot tick
tv_broadcast_startup_resend_interval | release | Default: 10<br>The interval, in seconds, of re-sending startup data to the broadcast relay server (useful in case relay crashes, restarts or startup data http request fails)
tv_broadcast_status | release | Print out broadcast status
tv_broadcast_terminate | hidden, release | Default: true<br>Terminate every broadcast with a stop command
tv_broadcast_url | release | Default: http://localhost:8080<br>URL of the broadcast relay
tv_broadcast_url1 | release | Default: http://localhost:8080<br>URL of the broadcast relay1
tv_chatgroupsize | release | Default: 0<br>Set the default chat group size
tv_chattimelimit | release | Default: 0.2<br>Limits spectators to chat only every n seconds
tv_clients | release | Shows list of connected SourceTV clients.
tv_debug | release | Default: 0<br>SourceTV debug info.
tv_delay | sv, release | Default: 120<br>SourceTV broadcast delay in seconds
tv_delay1 | sv, release | Default: 15<br>SourceTV\[instance 1\] broadcast delay in seconds
tv_delaymapchange | sv, release | Default: true<br>Delays map change until broadcast is complete
tv_deltacache | release | Default: 2<br>Enable delta entity bit stream cache
tv_demo_starttick | devonly | Default: 0<br>
tv_dispatchmode | release | Default: 1<br>Dispatch clients to relay proxies: 0=never, 1=if appropriate, 2=always
tv_enable | nf, release | Default: false<br>Activates SourceTV on server.
tv_enable1 | nf, release | Default: false<br>Activates SourceTV\[1\] on server.
tv_enable_delta_frames | release | Default: true<br>Indicates whether or not the tv should use delta frames for storage of intermediate frames. This takes more CPU but significantly less memory.
tv_enable_dynamic | nf, release | Default: false<br>When enabled, changes in tv_enable convars cause immediate startup or shutdown of hltv server
tv_extended_logging | devonly | Default: false<br>
tv_grouprelaydatareliable | devonly | Default: false<br>When enabled, this will collect all information for relay sending into a single datagram to ensure that the data stays together through a potentially large number of relays
tv_grouprelaydataunreliable | devonly | Default: false<br>When enabled, this will collect all information for relay sending into a single datagram to ensure that the data stays together through a potentially large number of relays
tv_grouprelaydatavoice | devonly | Default: false<br>Similar to tv_grouprelaydata, but controls whether or not the voice channels should be routed into the grouped data for the relays
tv_include_usercommands | sv, release | Default: true<br>HLTV streams will include player usercommands each tick
tv_instant_replay_full_frame | devonly | Default: true<br>Send embedded full frames
tv_instant_replay_full_frame_build_threaded | devonly | Default: false<br>Build the full frames on a seperate job thread
tv_instant_replay_full_frame_time | devonly | Default: 30<br>Seconds between full frame embeddeds
tv_listen_voice_indices | cl, user | Default: 0<br>Bitfield of playerslots to listen to voice messages from when connected to SourceTV, default is none
tv_listen_voice_indices_h | cl, user | Default: 0<br>High 32 bits of bitfield of playerslots to listen to voice messages from when connected to SourceTV, default is none
tv_log_director_events | devonly, sv | Default: false<br>Log game events being considered by the director
tv_maxclients | release | Default: 128<br>Maximum client number on SourceTV server.
tv_maxclients_relayreserved | release | Default: 0<br>This number of relay client connections are reserved for SourceTV relays.
tv_maxrate | release | Default: 0<br>Max SourceTV spectator bandwidth rate allowed, 0 == unlimited
tv_mem | release | hltv memory statistics. Use with "ent 10" (dump entity 10 memory usage) or "top 8" (dump top 8 memory users) or "class" CWorld (dump CWorld class)
tv_msg | devonly, sv | Send a screen message to all clients.
tv_name | release | Default: SourceTV<br>SourceTV host name
tv_nochat | a, user | Default: false<br>Don't receive chat messages from other SourceTV spectators
tv_overridemaster | release | Default: false<br>Overrides the SourceTV master root address.
tv_password | prot, nf, norecord, release | Default: <br>SourceTV password for all clients of CSTV\[0\]
tv_password1 | prot, nf, norecord, release | Default: <br>SourceTV password for all clients of CSTV\[1\]. If empty, tv_password is used
tv_playcast_delay_prediction | release | Default: true<br>
tv_playcast_delay_resync | release | Default: 0<br>To alleviate intermittent network connectivity problems, this is the number of seconds to wait before actually re-syncing the stream after failure
tv_playcast_max_rcvage | hidden, release | Default: 15<br>
tv_playcast_max_rtdelay | hidden, release | Default: 300<br>
tv_playcast_origin_auth | hidden, release | Default: <br>Get request X-Origin-Auth string
tv_playcast_retry_timeout | release | Default: 25<br>In case of intermittent network problems, how long should playcast retry fragment retrieval before resorting to resync
tv_playcast_showerrors | hidden, release | Default: <br>Set to display headers upon error (e.g. "CF-Ray,CF-Cache-Status,Body" )
tv_port | release | Default: 27020<br>Host SourceTV\[0\] port
tv_port1 | release | Default: 27021<br>Host SourceTV\[1\] port
tv_rate_multiplier | devonly | Default: 2<br>Multiply requested rate by this value to adjust Dota TV send rate
tv_record | release | Starts SourceTV demo recording.
tv_record_immediate | release | Default: 0<br>tv_record starting the moment tv_record was executed, not tv_delay earlier
tv_relay | release | Connect to SourceTV server and relay broadcast.
tv_relay_hard_shutdown | devonly | Default: false<br>
tv_relay_quit_after_game | devonly | Default: true<br>Quit after a game has been relayed, do not hibernate
tv_relay_rate | devonly | Default: 500000<br>default rate for relays
tv_relay_secret_code | devonly | Default: false<br>When enabled, this will use a uniquely generated server code to authenticate relay to relay connections. This code is coordinated via the GC or some external means rather than by clients directly
tv_relaypassword | prot, nf, norecord, release | Default: <br>SourceTV password for relay proxies
tv_relayradio | sv, release | Default: false<br>Relay team radio commands to TV: 0=off, 1=on
tv_relayvoice | release | Default: true<br>Relay voice data: 0=off, 1=on
tv_retry | release | Reconnects the SourceTV relay proxy.
tv_secret_code | devonly | Default: false<br>When enabled, this will use a uniquely generated server code to authenticate relay connections. This code is coordinated via the GC or some external means rather than by clients directly
tv_secure_bypass | release | Default: false<br>Bypass secure challenge on TV port
tv_show_allchat | sv, release | Default: true<br>
tv_spectator_port_offset | cl, release | Default: 0<br>
tv_status | release | Show SourceTV server status.
tv_stop | release | Stops the SourceTV broadcast.
tv_stoprecord | release | Stops SourceTV demo recording.
tv_threaded_merge_entity_deltas | devonly | Default: true<br>Enable SourceTV threading of delta merging
tv_timeout | release | Default: 20<br>SourceTV connection timeout in seconds.
tv_title | release | Default: SourceTV<br>Set title for SourceTV spectator UI
tv_transmitall | rep, release | Default: false<br>Transmit all entities (not only director view)
tv_update_hibernation_enabled | devonly | Default: false<br>Allow SourceTV to control server hibernation state.
tv_window_size | release | Default: 16<br>Specifies the number of seconds worth of frames that the tv replay system should keep in memory. Increasing this greatly increases the amount of memory consumed by the TV system
ui_deepstats_radio_heat_figurine | cl, a, release | Default: 0<br>
ui_deepstats_radio_heat_tab | cl, a, release | Default: 0<br>
ui_deepstats_radio_heat_team | cl, a, release | Default: 0<br>
ui_deepstats_toplevel_mode | cl, a, release | Default: 0<br>
ui_hud_dist | devonly, cl, rep | Default: 24<br>distance from the player to the hud
ui_inspect_bkgnd_map_9CA40421 | cl, a, release | Default: warehouse<br>Inspect background map
ui_inventorysettings_recently_acknowledged | cl, a, release | Default: <br>
ui_leaderboards_top_public_appid | cl, hidden, release | Default: 730<br>
ui_lobby_draft_enabled | cl, release | Default: false<br>
ui_mainmenu_bkgnd_movie_9CA40421 | cl, a, release | Default: de_train<br>Main menu background movie
ui_nearbylobbies_filter3 | cl, a, release | Default: competitive<br>
ui_news_last_read_link | cl, a, release | Default: <br>
ui_notification_tb_snooze | cl, a, release | Default: <br>
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
ui_playsettings_listen_annotations | cl, a, release | Default: 0<br>
ui_playsettings_listen_grenades | cl, a, release | Default: 0<br>
ui_playsettings_listen_infammo | cl, a, release | Default: 0<br>
ui_playsettings_listen_infwarmup | cl, a, release | Default: 0<br>
ui_playsettings_maps_listen_casual | cl, a, release | Default: mg_de_dust2<br>
ui_playsettings_maps_listen_competitive | cl, a, release | Default: mg_de_dust2<br>
ui_playsettings_maps_listen_deathmatch | cl, a, release | Default: mg_de_dust2<br>
ui_playsettings_maps_listen_scrimcomp2v2 | cl, a, release | Default: mg_de_inferno<br>
ui_playsettings_maps_listen_skirmish | cl, a, release | Default: mg_skirmish_armsrace<br>
ui_playsettings_maps_official_casual | cl, a, release | Default: mg_casualalpha<br>
ui_playsettings_maps_official_deathmatch | cl, a, release | Default: mg_casualalpha<br>
ui_playsettings_maps_official_gungameprogressive | cl, a, release | Default: mg_armsrace<br>
ui_playsettings_maps_workshop | cl, a, release | Default: <br>
ui_playsettings_mode_listen | cl, a, release | Default: deathmatch<br>
ui_playsettings_mode_official_v20 | cl, a, release | Default: deathmatch<br>
ui_playsettings_survival_solo | cl, a, release | Default: 0<br>
ui_playsettings_warmup_map_name | cl, a, release | Default: de_mirage<br>
ui_popup_weaponupdate_version | cl, a, release | Default: 0<br>
ui_render_task_clips_label | cl, release | Default: dealt_damage<br>
ui_render_task_file | cl, release | Default: rendertask<br>
ui_render_task_fps | cl, release | Default: 60<br>
ui_render_task_generate_clips | cl, release | Default: false<br>
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
update_all_keyframed_in_spatial_partition_update | devonly, sv, cl, rep | Default: true<br>
update_voices_low_priority | devonly | Default: false<br>
url_execute | devonly, cl | Executes url-based commands, used for incoming commands from url-based launches when the game's already running.
use_fx_queue | devonly, sv, cl, rep | Default: true<br>use_fx_queue
users | devonly | Show user info for players on server.
v8_jitless | devonly | Default: true<br>Disable runtime allocation of executable memory for V8.
v8_maximum_heap_size_mb | devonly | Default: 512<br>Hard limit for the v8 heap size (in mBytes)
v8_stack_size | devonly | Default: 384<br>Default size of stack region v8 is allowed to use (in kBytes)
v8_write_heap_stats | devonly | Dump output of v8::Isolate::GetHeapStatistics.
vcon_clear_buffered_log | devonly, norecord | Clear buffered logging
vcon_clients | devonly, norecord | List connections
vconsole_rcon_server_details | norecord, release, server_cannot_query | Default: <br>when non-empty allows for easy vconsole connection to the dedicated server.
vehicle_debug_impact_damage | devonly, sv | Default: false<br>
videocfg_ao_detail | devonly, cl | Default: 0<br>
videocfg_fsr_detail | devonly, cl | Default: 0<br>
videocfg_hdr_detail | devonly, cl | Default: -1<br>
videocfg_particle_detail | devonly, cl | Default: 1<br>
videocfg_shadow_quality | devonly, cl | Default: 1<br>
videocfg_texture_detail | devonly, cl | Default: 1<br>
view_punch_decay | sv, cl, rep, cheat, release | Default: 18<br>Decay factor exponent for view punch
viewmodel_fov | cl, a, user, per_user | Default: 60<br>Viewmodel FOV
viewmodel_offset_x | cl, a, user, per_user | Default: 1<br>viewmodel_offset_x
viewmodel_offset_y | cl, a, user, per_user | Default: 1<br>viewmodel_offset_y
viewmodel_offset_z | cl, a, user, per_user | Default: -1<br>viewmodel_offset_z
viewmodel_presetpos | cl, a | Default: 1<br>1:"Desktop", 2:"Classic" 
violence_ablood | a | Default: true<br>Draw alien blood
violence_agibs | a | Default: true<br>Show alien gib entities
violence_hblood | a | Default: true<br>Draw human blood
violence_hgibs | a | Default: true<br>Show human gib entities
vis_debug_currentcluster | devonly | Show the current cluster number
vis_debug_drawcluster | devonly | Add cluster # to visualization, (-1) to clear
vis_debug_dumpvisibleclusters | devonly | Show the list of visible clusters
vis_debug_find_los | devonly | Find or clear the vis LOS to here
vis_debug_lock | devonly | Lock vis LOS origin to current
vis_debug_record_start | devonly | Record a path to debug vis
vis_debug_record_stop | devonly | Record a path to debug vis
vis_debug_show | devonly | Show/hide the vis debug visualization
vis_debug_sunclusters | devonly | Showing clusters for sun/csm rendering. Red (full sun csm & lighting), Orange (no viewmodel sun or csm), Green (no sun at all)
vis_debug_tracelos | devonly | Trace rays and check vis from the current camera
vis_enable | devonly | Default: true<br>Enable precomputed visibility when true
vis_force | sv, cheat | Default: false<br>
vis_sunlight_enable | devonly, cheat | Default: true<br>Toggle whether to use sunlight PVS for sunlight views (0 = sky PVS, 1 = sunlight PVS)
vismon_poll_frequency | sv, cheat | Default: 0.5<br>
vismon_trace_limit | sv, cheat | Default: 12<br>
vmem_dump | devonly | Dump memory stats to log.
vmix_debug_list | devonly | Debug dump the list of available vmix graphs
vmix_input | cheat | Set an input mix value
vmix_output | cheat | Dump main graph control output values
voice_all_icons | devonly, cl | Default: false<br>Draw all players' voice icons
voice_always_sample_mic | a | Default: false<br>When enabled, open the voip audio input stream when the application launches.
voice_bypass_noise_gate | devonly | Default: false<br>
voice_clientdebug | devonly, cl | Default: 0<br>
voice_containers_get_instance_args | devonly | Args: \[Voice Container Path\]
voice_containers_get_instance_params | devonly | Args: \[Voice Container Path\]
voice_debugfeedbackfrom | devonly | Default: false<br>
voice_device_override | a, release | Default: <br>Default device used for voice capture.
voice_fadeouttime | devonly | Default: 0.005<br>
voice_in_process | devonly | Default: true<br>
voice_initial_buffer_ms | devonly | Default: 200<br>
voice_input_stallout | user | Default: 2<br>Time before we consider a mic stalled out and need to reset it.
voice_loopback | user | Default: false<br>
voice_loopback_no_networking | user | Default: false<br>
voice_min_buffer_ms | devonly | Default: 100<br>
voice_modenable | cl, a, release, clientcmd_can_execute | Default: true<br>Enable/disable voice in this mod.
voice_modenable_toggle | cl, release | Toggle the voice_modenable convar.
voice_mute | devonly | Mute a specific Steam user
voice_noise_supression | devonly | Default: false<br>
voice_player_speaking_delay_threshold | sv, cheat | Default: 0.5<br>
voice_reset_mutelist | devonly | Reset all mute information for all players who were ever muted.
voice_sequence_maximum_wait_time | devonly | Default: 0.5<br>When receiving packets out of sequence, wait this many seconds for missing sequences to arrive
voice_serverdebug | devonly, sv | Default: false<br>
voice_show_mute | devonly | Show whether current players are muted.
voice_stall_ms | devonly | Default: 250<br>
voice_status_test_toggle | devonly, cl | Test voice and status notices
voice_test_log_send | release | Default: false<br>
voice_threshold | cl, a | Default: -120<br>decibel threshold for how loud the talker's input signal is before we think they are talking.
voice_threshold_attack | devonly | Default: 0.3<br>Amount of time we buffer outgoing audio to detect an onset.
voice_threshold_delay | devonly | Default: 0.7<br>Amount of time the talker is silent before we infer that they are no longer talking.
voice_threshold_hold | devonly | Default: 0.2<br>Amount of time after the talker starts talking we should keep listening regardless of how loud they are speaking.
voice_threshold_ramp_min_db | devonly | Default: -60<br>A dB floor of when to stop transmitting packets, the volume between this and voice_threshold will still transmit packets to allow for volume ramping.
voice_unmute | devonly | Unmute a specific Steam user, or `all` to unmute all connected players.
voice_vox | cl, a, per_user | Default: 0<br>Voice chat uses a vox-style always on
voice_vox_current_peak | devonly, cl | Default: 0<br>Current peak value (out of 64k) of the incoming voice stream
volume | a | Default: 1<br>Sound volume
volume_fog_debug_volumes | cheat | Default: false<br>
volume_fog_density_scale | devonly, cheat | Default: 1<br>Scale global volume fog density
volume_fog_depth | devonly | Default: 128<br>Depth of volume fog texture
volume_fog_depth_warp | devonly | Default: 7<br>
volume_fog_depth_warp_debug | devonly | Default: false<br>
volume_fog_dither_scale | cheat | Default: 1<br>
volume_fog_enable_jitter | cheat | Default: true<br>
volume_fog_height | devonly | Default: 160<br>Height of volume fog texture
volume_fog_intermediate_textures_hdr | devonly | Default: true<br>
volume_fog_shadow_penumbra_multiplier | devonly | Default: 3<br>Penumbra size multiplier for shadow sampling, reduces fog shadow aliasing
volume_fog_temporal_filter | devonly | Default: true<br>
volume_fog_temporal_weight | devonly | Default: 0.9<br>Temporal filtering weight
volume_fog_width | devonly | Default: 240<br>Width of volume fog texture
vprof_counters | devonly | Default: 0<br>
vprof_counters_show_minmax | devonly | Default: false<br>
vprof_dump_counters | devonly | Dump vprof counters to the console
vprof_generate_report | devonly | Generate a report to the console.
vprof_generate_report_budget | devonly | Generate a report to the console based on budget group.
vprof_generate_report_hierarchy | devonly | Generate a report to the console.
vprof_loadhitstore_scale | devonly, hidden | Scale used when displaying load-hit-stores (0 = use default)
vprof_off | devonly | Disable vprof
vprof_on | devonly | Enable vprof
vprof_remote_start | devonly | Request a VProf data stream from the remote server (requires authentication)
vprof_remote_stop | devonly | Stop an existing remote VProf data request
vprof_reset | devonly | Reset the stats in VProf profiler
vprof_reset_peaks | devonly | Reset just the peak time in VProf profiler
vprof_scope_entity_clientthink | devonly, cl, hidden | Default: false<br>Does nothing whatsoever.
vprof_scope_entity_thinks | devonly, sv, cl, rep | Default: false<br>
vprof_think_limit | devonly, sv | Default: false<br>
vprof_time_scale | devonly, hidden | Scale used when displaying time (0 = use default)
vtune | devonly | Controls VTune's sampling.
weapon_accuracy_forcespread | sv, cl, rep, release | Default: 0<br>Force spread to the specified value.
weapon_accuracy_logging | devonly, sv, cl, a, rep | Default: false<br>
weapon_accuracy_nospread | sv, cl, rep, release | Default: false<br>Disable weapon inaccuracy spread
weapon_accuracy_reset_on_deploy | sv, cl, rep, cheat, release | Default: false<br>On deploy, forcibly reset weapon accuracy to zero.
weapon_accuracy_shotgun_spread_patterns | sv, cl, rep, release | Default: true<br>
weapon_air_spread_scale | sv, cl, rep, release | Default: 1<br>Scale factor for jumping inaccuracy, set to 0 to make jumping accuracy equal to standing
weapon_all_nametag | devonly, cl | Default: false<br>
weapon_all_stattrak | devonly, cl | Default: false<br>
weapon_auto_cleanup_time | sv, cl, rep, release | Default: 0<br>If set to non-zero, weapons will delete themselves after the specified time (in seconds) if no players are near.
weapon_debug_inaccuracy_only_up | devonly, sv, cl, rep, cheat | Default: false<br>Force weapon inaccuracy to be in exactly the up direction
weapon_debug_max_inaccuracy | devonly, sv, cl, rep, cheat | Default: false<br>Force all shots to have maximum inaccuracy
weapon_debug_spread_gap | cl, cheat, per_user | Default: 0.67<br>
weapon_debug_spread_show | cl, cheat, per_user | Default: 0<br>Enables display of weapon accuracy; 1: show accuracy box, 3: show accuracy with dynamic crosshair
weapon_land_dip_amt | devonly, sv, cl, rep, cheat | Default: 20<br>The amount the gun should dip when the player lands after a jump.
weapon_max_before_cleanup | sv, cl, rep, release | Default: 0<br>If set to non-zero, will remove the oldest dropped weapon to maintain the specified number of dropped weapons in the world.
weapon_molotov_maxdetonateslope | devonly, sv, cl, rep | Default: 30<br>Maximum angle of slope on which the molotov will detonate
weapon_near_empty_sound | sv, cl, rep, cheat | Default: true<br>
weapon_random_stickers | devonly, cl | Default: false<br>
weapon_reticle_knife_show | sv, cl, rep, release | Default: true<br>When enabled will show knife reticle on clients. Used for game modes requiring target id display when holding a knife.
weapon_skin_force_legacy | devonly, sv, cl, rep | Default: -1<br>
weapon_skins | devonly, cl | Default: true<br>
weapon_skins_on_default | devonly, cl | Default: false<br>
weapon_sound_falloff_multiplier | sv, cl, rep, cheat, release | Default: 1<br>Scaling for falloff of weapon firing sounds
weapon_switch | devonly, sv | Use a particular weapon	<br>Arguments: &lt;weapon_name&gt;
webapi_values_init_buffer_size | devonly, cl | Default: 65536<br>Initial buffer size for buffers in the WebAPIValues buffer pool
webapi_values_max_pool_size_mb | devonly, cl | Default: 400<br>Maximum size in bytes of the WebAPIValues buffer pool
wind_system_debug_volumes | devonly | Default: false<br>
wind_system_default_resolution_xy | devonly | Default: 256<br>
wind_system_default_resolution_z | devonly | Default: 32<br>
wind_system_default_sample_min_spacing | devonly | Default: 12<br>
wind_system_temporal_smoothing | devonly | Default: false<br>
workshop_annotation_submit | cl, release | Submit annotation to workshop. To update an existing submission add its ID number from the workshop URL as a second argument.
workshop_item_submit | cl, hidden, release | 
workshop_tournament_item_submit | cl, hidden, release | 
world_dump_loaded_worlds | devonly | Dump all of the worlds that we know about
world_layer_list | devonly | List all world layers
world_layer_set_visible | devonly | Show or hide the specified world layer
writeid | devonly | Writes a list of permanently-banned user IDs to file.
writeip | devonly | Save the ban list to file.
writekeybindings | release | Saves current key bindings to disk.
zoom_sensitivity_ratio | cl, a, per_user | Default: 1<br>Additional mouse sensitivity scale factor applied when FOV is zoomed in.
