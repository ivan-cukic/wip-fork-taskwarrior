////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2018, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// columns/Col*
#define STRING_COLUMN_LABEL_DESC     "Priskribo"
#define STRING_COLUMN_LABEL_DUE      "Datlimo"
#define STRING_COLUMN_LABEL_END      "Fino"
#define STRING_COLUMN_LABEL_ENTERED  "Kreita"
#define STRING_COLUMN_LABEL_COUNT    "Nombro"
#define STRING_COLUMN_LABEL_COMPLETE "Finita"
#define STRING_COLUMN_LABEL_MOD      "Modifo"
#define STRING_COLUMN_LABEL_ADDED    "Kreita"
#define STRING_COLUMN_LABEL_AGE      "Aĝo"
#define STRING_COLUMN_LABEL_PROJECT  "Projekto"
#define STRING_COLUMN_LABEL_UNTIL    "Ĝis"
#define STRING_COLUMN_LABEL_WAIT     "Atendu"
#define STRING_COLUMN_LABEL_WAITING  "Atendu ĝis"
#define STRING_COLUMN_LABEL_RECUR    "Reokazas"
#define STRING_COLUMN_LABEL_RECUR_L  "Reokazas ĉiu"
#define STRING_COLUMN_LABEL_START    "Eko"
#define STRING_COLUMN_LABEL_STARTED  "Ekita"
#define STRING_COLUMN_LABEL_ACTIVE   "Ak"
#define STRING_COLUMN_LABEL_STATUS   "Stato"
#define STRING_COLUMN_LABEL_STAT     "St"
#define STRING_COLUMN_LABEL_STAT_PE  "Pendanta"
#define STRING_COLUMN_LABEL_STAT_CO  "Finita"
#define STRING_COLUMN_LABEL_STAT_DE  "Viŝita"
#define STRING_COLUMN_LABEL_STAT_WA  "Atendanta"
#define STRING_COLUMN_LABEL_STAT_RE  "Reokazanta"
#define STRING_COLUMN_LABEL_STAT_P   "Pd"
#define STRING_COLUMN_LABEL_STAT_C   "Fn"
#define STRING_COLUMN_LABEL_STAT_D   "Vŝ"
#define STRING_COLUMN_LABEL_STAT_W   "At"
#define STRING_COLUMN_LABEL_STAT_R   "Re"
#define STRING_COLUMN_LABEL_TAGS     "Etikedoj"
#define STRING_COLUMN_LABEL_TAG      "Etik"
#define STRING_COLUMN_LABEL_UUID     "UUID"
#define STRING_COLUMN_LABEL_URGENCY  "Urĝeco"
#define STRING_COLUMN_LABEL_NAME     "Nomo"
#define STRING_COLUMN_LABEL_VALUE    "Valoro"
#define STRING_COLUMN_LABEL_LAST     "Last instance"
#define STRING_COLUMN_LABEL_RTYPE    "Recurrence type"
#define STRING_COLUMN_LABEL_DATE     "Dato"
#define STRING_COLUMN_LABEL_COLUMN   "Kolumnoj"
#define STRING_COLUMN_LABEL_STYLES   "Formaĝoj Subtenataj"
#define STRING_COLUMN_LABEL_EXAMPLES "Ekzemplo"
#define STRING_COLUMN_LABEL_SCHED    "Fiksa"
#define STRING_COLUMN_LABEL_UDA      "Nomo"
#define STRING_COLUMN_LABEL_TYPE     "Tipo"
#define STRING_COLUMN_LABEL_MODIFY   "Modifiable"
#define STRING_COLUMN_LABEL_NOMODIFY "Read Only"
#define STRING_COLUMN_LABEL_LABEL    "Rubriko"
#define STRING_COLUMN_LABEL_DEFAULT  "Defaŭlto"
#define STRING_COLUMN_LABEL_VALUES   "Valoroj permesataj"
#define STRING_COLUMN_LABEL_UDACOUNT "Nombro de uzoj"
#define STRING_COLUMN_LABEL_ORPHAN   "Orfa UDA"

#define STRING_COLUMN_LABEL_COMMAND  "Command"
#define STRING_COLUMN_LABEL_CATEGORY "Category"
#define STRING_COLUMN_LABEL_RO       "R/W"
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"
#define STRING_COLUMN_LABEL_GC       "GC"
#define STRING_COLUMN_LABEL_CONTEXT  "Context"
#define STRING_COLUMN_LABEL_FILTER   "Filter"
#define STRING_COLUMN_LABEL_MODS     "Mods"
#define STRING_COLUMN_LABEL_MISC     "Misc"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "domo @aĉo next"
#define STRING_COLUMN_EXAMPLES_PROJ  "domo.ĝardeno"
#define STRING_COLUMN_EXAMPLES_PAR   "domo"
#define STRING_COLUMN_EXAMPLES_IND   "  domo.ĝardeno"
#define STRING_COLUMN_EXAMPLES_DESC  "Transloki vian robon suben al la fundan kejlon"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Juste antaŭ tagmanĝi"
#define STRING_COLUMN_EXAMPLES_ANNO2 "Se vi ludos en la maĉo hodiaŭ posttagmeze"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Antaŭ skribi poŝtaĵon hejmen"
#define STRING_COLUMN_EXAMPLES_ANNO4 "Se vi ne faŝonas al si la hararon"

// commands/Cmd*
// USAGE strings are visible in 'task help'
#define STRING_CMD_VERSION_USAGE     "Montras la versinombro de taskwarrior"
#define STRING_CMD_VERSION_USAGE2    "Montras sole la versinombro de taskwarrior"
#define STRING_CMD_VERSION_DOCS      "Oni povas trovi la dokumentojn por Taskwarrior kun 'man task', 'man taskrc', 'man task-tutorial', 'man task-color', 'man task-sync', 'man task-faq', aŭ ĉe http://taskwarrior.org."
#define STRING_CMD_VERSION_UNKNOWN   "nekonata"
#define STRING_CMD_EXEC_USAGE        "Lanĉas komandojn kaj skribojn eksternajn"
#define STRING_CMD_URGENCY_USAGE     "Montras la urĝec-mezuro de tasko"
#define STRING_CMD_URGENCY_RESULT    "tasko {1} urĝeco {2}"
#define STRING_CMD_ADD_USAGE         "Kreas novan taskon"
#define STRING_CMD_ADD_FEEDBACK      "Kreis taskon {1}."
#define STRING_CMD_ADD_RECUR         "Created task {1} (recurrence template)."
#define STRING_CMD_LOG_USAGE         "Kreas novan jamfinitan taskon"
#define STRING_CMD_LOG_NO_RECUR      "Oni ne povas fari taskojn reokazantajn kun 'log'."
#define STRING_CMD_LOG_NO_WAITING    "Oni ne povas fari taskojn atendantajn kun 'log'."

//#define STRING_CMD_LOG_LOGGED        "Registris taskon."
#define STRING_CMD_LOG_LOGGED        "Logged task {1}."

#define STRING_CMD_IDS_USAGE_RANGE   "Montras la identigilon de ĉia kongruanta tasko, kiel atingopovo"
#define STRING_CMD_IDS_USAGE_LIST    "Montras la identigilon de ĉia kongruanta tasko, kiel listo"
#define STRING_CMD_IDS_USAGE_ZSH     "Montras la identigilon kaj la priskribon de ĉia kongruanta tasko"
#define STRING_CMD_UDAS_USAGE        "Montras la detalojn de ĉia definita UDA"
#define STRING_CMD_UDAS_COMPL_USAGE  "Montras ĉian definitan UDA, por motivo memkompletada"
#define STRING_CMD_UUIDS_USAGE_RANGE "Montras la UUID-identigilon de ĉia kongruanta tasko, en forma de listo perkome disigita"
#define STRING_CMD_UUIDS_USAGE_LIST  "Montras la UUID-identigilon de ĉia kongruanta tasko, en forma de listo"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Montras la UUID-identigilon kaj la priskribojn de ĉia kongruanta tasko"
#define STRING_CMD_INFO_USAGE        "Montras datumojn kaj metadatumojn"
#define STRING_CMD_INFO_BLOCKED      "Tiu tasko blokata per"
#define STRING_CMD_INFO_BLOCKING     "Tiu tasko blokas"
#define STRING_CMD_INFO_UNTIL        "Ĝis"
#define STRING_CMD_INFO_MODIFICATION "Modifado"
#define STRING_CMD_INFO_MODIFIED     "Modifado lasta"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Virtual tags"
#define STRING_CMD_UNDO_USAGE        "Malfaras la plej malfrua modifado al tasko"
#define STRING_CMD_STATS_USAGE       "Montras statistikon de la taska datumbazo"
#define STRING_CMD_STATS_CATEGORY    "Kategorio"
#define STRING_CMD_STATS_DATA        "datumoj"
#define STRING_CMD_STATS_TOTAL       "Totalo"
#define STRING_CMD_STATS_ANNOTATIONS "Komentoj"
#define STRING_CMD_STATS_UNIQUE_TAGS "Unikaj etikedoj"
#define STRING_CMD_STATS_PROJECTS    "Projektoj"
#define STRING_CMD_STATS_DATA_SIZE   "Datena grandeco"
#define STRING_CMD_STATS_UNDO_TXNS   "Malfaradoj"
#define STRING_CMD_STATS_BACKLOG     "Sinkronigadoj"
#define STRING_CMD_STATS_TAGGED      "Taskoj etikedataj"
#define STRING_CMD_STATS_OLDEST      "Plej malnova tasko"
#define STRING_CMD_STATS_NEWEST      "Plej nova tasko"
#define STRING_CMD_STATS_USED_FOR    "Taskwarrior uzata ekde"
#define STRING_CMD_STATS_ADD_EVERY   "Tasko kreata ĉiu"
#define STRING_CMD_STATS_COMP_EVERY  "Tasko finata ĉiu"
#define STRING_CMD_STATS_DEL_EVERY   "Tasko viŝata ĉiu"
#define STRING_CMD_STATS_AVG_PEND    "Meznª pendtempo"
#define STRING_CMD_STATS_DESC_LEN    "Meznª priskriblongeco"
#define STRING_CMD_STATS_CHARS       "{1} signojn"
#define STRING_CMD_STATS_BLOCKED     "Taskoj blokataj"
#define STRING_CMD_STATS_BLOCKING    "Taskoj blokantaj"
#define STRING_CMD_REPORTS_USAGE     "Listigas ĉian raporton subtenatan"
#define STRING_CMD_REPORTS_REPORT    "Raporto"
#define STRING_CMD_REPORTS_DESC      "Priskribo"
#define STRING_CMD_REPORTS_SUMMARY   "{1} raportoj"
#define STRING_CMD_TAGS_USAGE        "Montras listo de ĉia uzata etikedo"
#define STRING_CMD_COMTAGS_USAGE     "Montras sole listo de ĉia uzata etikedo, por motivo memkompletada"
#define STRING_CMD_TAGS_SINGLE       "1 etikedo"
#define STRING_CMD_TAGS_PLURAL       "{1} etikedoj"
#define STRING_CMD_TAGS_NO_TAGS      "Nenia etikedo."
#define STRING_CMD_HISTORY_USAGE_D   "Shows a report of task history, by day"
#define STRING_CMD_HISTORY_USAGE_W   "Shows a report of task history, by week"
#define STRING_CMD_HISTORY_USAGE_M   "Montras raporton de taska historio, per monato"
#define STRING_CMD_HISTORY_YEAR      "Jaro"
#define STRING_CMD_HISTORY_MONTH     "Monato"
#define STRING_CMD_HISTORY_DAY       "Day"
#define STRING_CMD_HISTORY_ADDED     "Kreitaj"
#define STRING_CMD_HISTORY_COMP      "Finitaj"
#define STRING_CMD_HISTORY_DEL       "Viŝitaj"
#define STRING_CMD_HISTORY_NET       "Neto"
#define STRING_CMD_HISTORY_USAGE_A   "Montras raporton de taska historio, per jaro"
#define STRING_CMD_HISTORY_AVERAGE   "Meznombro"
#define STRING_CMD_HISTORY_LEGEND    "Gamo: {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Gamo: + kreita, X finita, - viŝita"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_USAGE_M  "Montras grafikan raporton de taska historio, per monato"
#define STRING_CMD_GHISTORY_USAGE_A  "Montras grafikan raporton de taska historio, per jaro"
#define STRING_CMD_GHISTORY_YEAR     "Jaro"
#define STRING_CMD_GHISTORY_MONTH    "Monato"
#define STRING_CMD_GHISTORY_DAY      "Day"
#define STRING_CMD_GHISTORY_NUMBER   "Nombro Kreitaj/Finitaj/Viŝitaj"
#define STRING_CMD_UNIQUE_USAGE      "Generates lists of unique attribute values"
#define STRING_CMD_UNIQUE_MISSING    "An attribute must be specified.  See 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "You must specify an attribute or UDA."

#define STRING_CMD_PROJECTS_USAGE    "Montras la uzatajn projekt-nomojn"
#define STRING_CMD_PROJECTS_USAGE_2  "Montras sole liston de ĉia uzata projekt-nomo"
#define STRING_CMD_PROJECTS_NO       "Nenia projekto."
#define STRING_CMD_PROJECTS_NONE     "(nenio)"
#define STRING_CMD_PROJECTS_SUMMARY  "{1} projekto"
#define STRING_CMD_PROJECTS_SUMMARY2 "{1} projektoj"
#define STRING_CMD_PROJECTS_TASK     "({1} tasko)"
#define STRING_CMD_PROJECTS_TASKS    "({1} taskoj)"
#define STRING_CMD_SUMMARY_USAGE     "Montras raporton de taska statuso per projekto"
#define STRING_CMD_SUMMARY_PROJECT   "Projekto"
#define STRING_CMD_SUMMARY_REMAINING "Restantaj"
#define STRING_CMD_SUMMARY_AVG_AGE   "Meznª aĝo"
#define STRING_CMD_SUMMARY_COMPLETE  "Finitaj"
#define STRING_CMD_SUMMARY_NONE      "(nenio)"
#define STRING_CMD_COUNT_USAGE       "Nombras kongruantajn taskojn"
#define STRING_CMD_GET_USAGE         "DOM-enirilo"
#define STRING_CMD_GET_NO_DOM        "Nenia DOM-referenco specifata."
#define STRING_CMD_GET_BAD_REF       "'{1}' is not a DOM reference."

#define STRING_CMD_DELETE_USAGE      "Viŝas la specifatan taskon"
#define STRING_CMD_DELETE_CONFIRM    "Forviŝi taskon {1} '{2}'?"
#define STRING_CMD_DELETE_TASK       "Viŝanta taskon {1} '{2}'."
#define STRING_CMD_DELETE_TASK_R     "Viŝanta reokazantan taskon {1} '{2}'."
#define STRING_CMD_DELETE_CONFIRM_R  "Tio estas reokazanta tasko. Ĉu vi volas viŝi ĉian pendantan okazon?"
#define STRING_CMD_DELETE_NO         "Ne viŝis taskon."
#define STRING_CMD_DELETE_NOT_DEL    "Tasko {1} '{2}' ne estas viŝebla."
#define STRING_CMD_DELETE_1          "Viŝis {1} taskon."
#define STRING_CMD_DELETE_N          "Viŝis {1} taskojn."

#define STRING_CMD_PURGE_USAGE       "Removes the specified tasks from the data files. Causes permanent loss of data."
#define STRING_CMD_PURGE_ABRT        "Purge operation aborted."
#define STRING_CMD_PURGE_1           "Purged {1} task."
#define STRING_CMD_PURGE_N           "Purged {1} tasks."
#define STRING_CMD_PURGE_CONFIRM     "Permanently remove task {1} '{2}'?"
#define STRING_CMD_PURGE_CONFIRM_R   "Task '{1}' is a recurrence template. All its {2} deleted children tasks will be purged as well. Continue?"
#define STRING_CMD_PURGE_NDEL_CHILD  "Task '{1}' is a recurrence template. Its child task {2} must be deleted before it can be purged."

#define STRING_CMD_APPEND_USAGE      "Aldonas tekston post task-priskribo"
#define STRING_CMD_APPEND_1          "Aldonis al {1} tasko."
#define STRING_CMD_APPEND_N          "Aldonis al {1} taskoj."
#define STRING_CMD_APPEND_TASK       "Aldonanta al tasko {1} '{2}'."
#define STRING_CMD_APPEND_TASK_R     "Aldonanta al reokazanta tasko {1} '{2}'."
#define STRING_CMD_APPEND_CONFIRM_R  "Tio estas reokazanta tasko. Ĉu vi volas aldoni al ĉia pendanta okazaĵo de ĉi tiu tasko?"
#define STRING_CMD_APPEND_CONFIRM    "Aldoni al tasko {1} '{2}'?"
#define STRING_CMD_APPEND_NO         "Ne aldonis al tasko."

#define STRING_CMD_PREPEND_USAGE     "Aldonas tekston antaŭ task-priskribo"
#define STRING_CMD_PREPEND_1         "Predonis al {1} tasko."
#define STRING_CMD_PREPEND_N         "Predonis {1} taskoj."
#define STRING_CMD_PREPEND_TASK      "Predonanta al tasko {1} '{2}'."
#define STRING_CMD_PREPEND_TASK_R    "Predonanta al reokazanta tasko {1} '{2}'."
#define STRING_CMD_PREPEND_CONFIRM_R "Tio estas reokazanta tasko. Ĉu vi volas predoni al ĉia pendanta okazaĵo de ĉi tiu tasko?"
#define STRING_CMD_PREPEND_CONFIRM   "Predonis al taskon {1} '{2}'?"
#define STRING_CMD_PREPEND_NO        "Ne predonis al tasko."

#define STRING_CMD_ANNO_USAGE        "Donas komenton al ekzistanta tasko"
#define STRING_CMD_ANNO_CONFIRM      "Komenti taskon {1} '{2}'?"
#define STRING_CMD_ANNO_TASK         "Komentanta taskon {1} '{2}'."
#define STRING_CMD_ANNO_TASK_R       "Komentanta reokazantan taskon {1} '{2}'."
#define STRING_CMD_ANNO_CONFIRM_R    "Tiu esta reokazanta tasko. Ĉu vi volas komenti ĉia pendanta okazaĵo de tiu tasko?"
#define STRING_CMD_ANNO_NO           "Ne komentis taskon."
#define STRING_CMD_ANNO_1            "Komentis {1} taskon."
#define STRING_CMD_ANNO_N            "Komentis {1} taskojn."

#define STRING_CMD_DENO_USAGE        "Viŝas komenton"
#define STRING_CMD_DENO_NONE         "La specifita tasko ne havas nenian viŝeblan komenton."
#define STRING_CMD_DENO_CONFIRM      "Malkomenti taskon {1} '{2}'?"
#define STRING_CMD_DENO_FOUND        "Trovis kaj viŝis komenton '{1}'."
#define STRING_CMD_DENO_NOMATCH      "Ne trovis nenian komenton por viŝi, kiu kongruas al '{1}'."
#define STRING_CMD_DENO_NO           "Ne malkomentis taskon."
#define STRING_CMD_DENO_1            "Malkomentis {1} taskon."
#define STRING_CMD_DENO_N            "Malkomentis {1} taskojn."

#define STRING_CMD_IMPORT_USAGE      "Importas JSON-dosierojn"
#define STRING_CMD_IMPORT_SUMMARY    "Importis {1} taskojn."
#define STRING_CMD_IMPORT_FILE       "Importanta '{1}'"
#define STRING_CMD_IMPORT_MISSING    "File '{1}' not found."
#define STRING_CMD_IMPORT_UUID_BAD   "Not a valid UUID '{1}'."
#define STRING_TASK_NO_DESC          "Komento havas mankon de priskribo: {1}"
#define STRING_TASK_NO_ENTRY         "Komento havas mankon de enskrib-dato: {1}"

#define STRING_CMD_COMMANDS_USAGE    "Generates a list of all commands, with behavior details"
#define STRING_CMD_HCOMMANDS_USAGE   "Generates a list of all commands, for autocompletion purposes"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Generates a list of all commands, for zsh autocompletion purposes"
#define STRING_CMD_ZSHATTS_USAGE     "Generates a list of all attributes, for zsh autocompletion purposes"
#define STRING_CMD_ALIASES_USAGE     "Generates a list of all aliases, for autocompletion purposes"

#define STRING_CMD_COLOR_USAGE       "All colors, a sample, or a legend"
#define STRING_CMD_COLOR_HERE        "Here are the colors currently in use:"
#define STRING_CMD_COLOR_COLOR       "Color"
#define STRING_CMD_COLOR_DEFINITION  "Definition"
#define STRING_CMD_COLOR_EXPLANATION "Use this command to see how colors are displayed by your terminal."
#define STRING_CMD_COLOR_16          "16-color usage (supports underline, bold text, bright background):"
#define STRING_CMD_COLOR_256         "256-color usage (supports underline):"
#define STRING_CMD_COLOR_YOURS       "Your sample:"
#define STRING_CMD_COLOR_BASIC       "Basic colors"
#define STRING_CMD_COLOR_EFFECTS     "Effects"
#define STRING_CMD_COLOR_CUBE        "Color cube rgb"
#define STRING_CMD_COLOR_RAMP        "Gray ramp"
#define STRING_CMD_COLOR_TRY         "Try running '{1}'."
#define STRING_CMD_COLOR_OFF         "Color is currently turned off in your .taskrc file.  To enable color, remove the line 'color=off', or change the 'off' to 'on'."
#define STRING_CMD_CONFIG_USAGE      "Change settings in the task configuration"
#define STRING_CMD_CONFIG_CONFIRM    "Are you sure you want to change the value of '{1}' from '{2}' to '{3}'?"
#define STRING_CMD_CONFIG_CONFIRM2   "Are you sure you want to add '{1}' with a value of '{2}'?"
#define STRING_CMD_CONFIG_CONFIRM3   "Are you sure you want to remove '{1}'?"
#define STRING_CMD_CONFIG_NO_ENTRY   "No entry named '{1}' found."
#define STRING_CMD_CONFIG_FILE_MOD   "Agorda dosiero {1} modifita."
#define STRING_CMD_CONFIG_NO_NAME    "Specifu la nomon de agordvariablo, kiun vi volas modifi."
#define STRING_CMD_HCONFIG_USAGE     "Listigas çiun subtenatan agordan variablon, por motivo memkompletada"
#define STRING_CMD_CONTEXT_USAGE     "Set and define contexts (default filters)"
#define STRING_CMD_CONTEXT_DEF_SUCC  "Context '{1}' defined. Use 'task context {1}' to activate."
#define STRING_CMD_CONTEXT_DEF_FAIL  "Context '{1}' not defined."
#define STRING_CMD_CONTEXT_DEF_USAG  "Both context name and its definition must be provided."
#define STRING_CMD_CONTEXT_DEF_ABRT  "Context definiton aborted."
#define STRING_CMD_CONTEXT_DEF_ABRT2 "Filter validation failed: {1}"
#define STRING_CMD_CONTEXT_DEF_CONF  "The filter '{1}' matches 0 pending tasks. Do you wish to continue?"
#define STRING_CMD_CONTEXT_DEF_INVLD "The name '{1}' is reserved and not allowed to use as a context name."
#define STRING_CMD_CONTEXT_DEL_SUCC  "Context '{1}' deleted."
#define STRING_CMD_CONTEXT_DEL_FAIL  "Context '{1}' not deleted."
#define STRING_CMD_CONTEXT_DEL_USAG  "Context name needs to be specified."
#define STRING_CMD_CONTEXT_LIST_EMPT "No contexts defined."
#define STRING_CMD_CONTEXT_SET_NFOU  "Context '{1}' not found."
#define STRING_CMD_CONTEXT_SET_SUCC  "Context '{1}' set. Use 'task context none' to remove."
#define STRING_CMD_CONTEXT_SET_FAIL  "Context '{1}' not applied."
#define STRING_CMD_CONTEXT_SHOW_EMPT "No context is currently applied."
#define STRING_CMD_CONTEXT_SHOW      "Context '{1}' with filter '{2}' is currently applied."
#define STRING_CMD_CONTEXT_NON_SUCC  "Context unset."
#define STRING_CMD_CONTEXT_NON_FAIL  "Context not unset."
#define STRING_CMD_HCONTEXT_USAGE    "Lists all supported contexts, for completion purposes"
#define STRING_CMD_CUSTOM_MISMATCH   "La nombroj de kolumnoj kaj de siaj titoloj ne kongruas por raporto '{1}'."
#define STRING_CMD_CUSTOM_SHOWN      "{1} montritaj"
#define STRING_CMD_CUSTOM_COUNT      "1 tasko"
#define STRING_CMD_CUSTOM_COUNTN     "{1} taskoj"
#define STRING_CMD_CUSTOM_TRUNCATED  "stumpigis al {1} vicojn"
#define STRING_CMD_TIMESHEET_USAGE   "Ĉiusemajna resumo de ĉia tasko finita aŭ ekita"
#define STRING_CMD_TIMESHEET_STARTED "Ekis ({1} taskojn)"
#define STRING_CMD_TIMESHEET_DONE    "Finis ({1} taskojn)"
#define STRING_CMD_BURN_USAGE_M      "Montras ĉiumonatan abakon de taskbrulo"
#define STRING_CMD_BURN_USAGE_W      "Montras ĉiusemajnan abakon de taskbrulo"
#define STRING_CMD_BURN_USAGE_D      "Montras ĉiutagan abakon de taskbrulo"
#define STRING_CMD_BURN_TITLE        "Brulo"
#define STRING_CMD_BURN_TOO_SMALL    "Terminala fenestro tro malgranda por vidigi grafeon."
#define STRING_CMD_BURN_TOO_LARGE    "Terminal window too large to draw a graph."
#define STRING_CMD_BURN_DAILY        "Ĉiutaga"
#define STRING_CMD_BURN_WEEKLY       "Ĉiusemajna"
#define STRING_CMD_BURN_MONTHLY      "Ĉiumonata"
#define STRING_CMD_BURN_STARTED      "Ekis"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_DONE         "Finis"         // Must be 7 or fewer characters
#define STRING_CMD_BURN_PENDING      "Pendas"        // Must be 7 or fewer characters
#define STRING_CMD_BURN_NO_CONVERGE  "Nenia konverĝo"
#define STRING_CMD_CAL_USAGE         "Montras kalendaron, kun markoj por datlimitaj taskoj"
#define STRING_CMD_CAL_BAD_MONTH     "Argumento '{1}' ne estas valida monato."
#define STRING_CMD_CAL_BAD_ARG       "Ne povis rekoni argumenton '{1}'."
#define STRING_CMD_CAL_LABEL_DATE    "Dato"
#define STRING_CMD_CAL_LABEL_HOL     "Ferio"
#define STRING_CMD_CAL_SUN_MON       "agordvariablo 'weekstart' devas esti 'Sunday' aŭ 'Monday'."
#define STRING_CMD_CALC_USAGE        "Kalkulilo"

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "Nenia tasko."
#define STRING_FEEDBACK_NO_TASKS_SP  "Nenia tasko specifata."
#define STRING_FEEDBACK_NO_MATCH     "Nenia kongruanto."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 tasko)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} taskoj)"
#define STRING_FEEDBACK_DELETED      "Viŝos {1}."
#define STRING_FEEDBACK_DEP_SET      "Dependoj iĝos '{1}'."
#define STRING_FEEDBACK_DEP_MOD      "Dependoj ŝanĝos el '{1}' al '{2}'."
#define STRING_FEEDBACK_DEP_DEL      "Viŝis dependojn '{1}'."
#define STRING_FEEDBACK_DEP_WAS_SET  "Dependoj iĝis '{1}'."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Dependoj ŝanĝis el '{1}' al '{2}'."
#define STRING_FEEDBACK_ATT_SET      "{1} iĝos '{2}'."
#define STRING_FEEDBACK_ATT_MOD      "{1} ŝanĝos el '{2}' al '{3}'."
#define STRING_FEEDBACK_ATT_DEL      "Viŝis {1}."
#define STRING_FEEDBACK_ATT_DEL_DUR  "Viŝis {1} (duration: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} iĝis '{2}'."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} ŝanĝis el '{2}' al '{3}'."
#define STRING_FEEDBACK_ANN_ADD      "Aldonis komenton '{1}'."
#define STRING_FEEDBACK_ANN_DEL      "Viŝis komenton '{1}'."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Komento iĝis '{1}'."
#define STRING_FEEDBACK_NOP          "Ne ŝanĝos nenion."
#define STRING_FEEDBACK_WAS_NOP      "Ne ŝanĝis nenion."
#define STRING_FEEDBACK_TAG_NOCOLOR  "Speciala etikedo 'nocolor' malebligos kolorreguloj por tiu tasko."
#define STRING_FEEDBACK_TAG_NONAG    "Speciala etikedo 'nonag' antaŭmalebligitos molestojn, kiam oni modifus tiun taskon."
#define STRING_FEEDBACK_TAG_NOCAL    "Speciala etikedo 'nocal' ekskluzivos tiun taskon ĉe raporto 'calendar'."
#define STRING_FEEDBACK_TAG_NEXT     "Speciala etikedo 'next' pligrandigos la urĝecon de tiu tasko por ke ĝi aperus ĉe raporto 'next'."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Virtual tags (including '{1}') are reserved and may not be added or removed."
#define STRING_FEEDBACK_UNBLOCKED    "Malblokis {1} '{2}'."
#define STRING_FEEDBACK_EXPIRED      "Tasko {1} '{2}' fortempiĝis do estis viŝata."
#define STRING_FEEDBACK_BACKLOG_N    "Estas {1} lokaj ŝanĝoj. Sinkronigo devita."
#define STRING_FEEDBACK_BACKLOG      "Estas {1} lokaj ŝanĝoj. Sinkronigo devita."

// 'show' command
#define STRING_CMD_SHOW              "Montras ĉian agordan variablon, aŭ subaron"
#define STRING_CMD_SHOW_ARGS         "Oni sole povas specifi 'all' aŭ serĉĉenon."
#define STRING_CMD_SHOW_NONE         "Nenia kongruanta agordvariablo."
#define STRING_CMD_SHOW_UNREC        "Via dosiero .taskrc enhavas nekonatajn variablojn:"
#define STRING_CMD_SHOW_DIFFER       "Variabloj ĉe .taskrc diferencas de la defaŭltaj valoroj."
#define STRING_CMD_SHOW_EMPTY        "Erara agordo: .taskrc ne enhavas nenion."
#define STRING_CMD_SHOW_DIFFER_COLOR "Tioj estas markitaj supre, ĉe {1}."
#define STRING_CMD_SHOW_CONFIG_ERROR "Erara agordo: {1} enhavas nekonatan valoron '{2}'."
#define STRING_CMD_SHOW_NO_LOCATION  "Erara agordo: data.location ne specifita ĉe dosiero .taskrc."
#define STRING_CMD_SHOW_LOC_EXIST    "Erara agordo: data.location enhavas dosierumnomon neekzistantan aŭ nelegeblan."
#define STRING_CMD_SHOW_CONF_VAR     "Agordvariablo"
#define STRING_CMD_SHOW_CONF_VALUE   "Valoro"
#define STRING_CMD_SHOW_CONF_DEFAULT "Defaŭlta valoro"
#define STRING_CMD_SHOWRAW           "Montras ĉia agordvariablon je maŝinlegebla aranĝo"

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior ne pli subtenas dosier-aranĝon 1, kiu estis originale uzata inter la 27-a de novembro 2006 kaj la 31-a de decembro 2007."
#define STRING_TASK_NO_FF2           "Taskwarrior ne pli subtenas dosier-aranĝon 2, kiu estis originale uzata inter la 1-a de januaro 2008 kaj la 12-a de aprilo 2009."
#define STRING_TASK_NO_FF3           "Taskwarrior no longer supports file format 3, originally used between 23 March 2009 and 16 May 2009."
#define STRING_TASK_PARSE_UNREC_FF   "Ne povis rekoni taskan dosier-aranĝon."
#define STRING_TASK_DEPEND_ITSELF    "Tasko ne povas dependi de si mem."
#define STRING_TASK_DEPEND_MISS_CREA "Ne povis krei dependecon de tasko {1} - netrovita."
#define STRING_TASK_DEPEND_MISS_DEL  "Ne povis viŝi dependecon de tasko {1} - netrovita."
#define STRING_TASK_DEPEND_DUP       "Tasko {1} jam dependas de tasko {2}."
#define STRING_TASK_DEPEND_CIRCULAR  "Detektis kaj malpermesis ciklan dependecon."
#define STRING_TASK_VALID_BLANK      "Ne povas krei blankan taskon."
#define STRING_TASK_VALID_BEFORE     "Averto: Vi specifis daton '{1}' post dato '{2}'."
#define STRING_TASK_VALID_REC_DUE    "Reokazanta tasko devas ankaŭ havi daton 'due'."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "Antaŭmalebligis komandon."
#define STRING_TASK_SAFETY_ALLOW     "Vi ne specifis filtrilon. Laŭ la valoro 'allow.empty.filter', ne faros nenion."
#define STRING_TASK_INVALID_COL_TYPE "Unrecognized column type '{1}' for column '{2}'"

#endif
