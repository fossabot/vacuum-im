#ifndef DEF_OPTIONVALUES_H
#define DEF_OPTIONVALUES_H

// AccountManager
#define OPV_ACCOUNT_ROOT                                "accounts"
#define OPV_ACCOUNT_DEFAULTRESOURCE                     "accounts.default-resource"
#define OPV_ACCOUNT_ITEM                                "accounts.account"
#define OPV_ACCOUNT_ORDER                               "accounts.account.order"
#define OPV_ACCOUNT_NAME                                "accounts.account.name"
#define OPV_ACCOUNT_ACTIVE                              "accounts.account.active"
#define OPV_ACCOUNT_STREAMJID                           "accounts.account.streamJid"
#define OPV_ACCOUNT_RESOURCE                            "accounts.account.resource"
#define OPV_ACCOUNT_PASSWORD                            "accounts.account.password"
#define OPV_ACCOUNT_REQUIREENCRYPTION                   "accounts.account.require-encryption"
// ConnectionManager
#define OPV_ACCOUNT_CONNECTION_ITEM                     "accounts.account.connection"
#define OPV_ACCOUNT_CONNECTION_TYPE                     "accounts.account.connection-type"
// DefaultConnection
#define OPV_ACCOUNT_CONNECTION_HOST                     "accounts.account.connection.host"
#define OPV_ACCOUNT_CONNECTION_PORT                     "accounts.account.connection.port"
#define OPV_ACCOUNT_CONNECTION_PROXY                    "accounts.account.connection.proxy"
#define OPV_ACCOUNT_CONNECTION_SSLPROTOCOL              "accounts.account.connection.ssl-protocol"
#define OPV_ACCOUNT_CONNECTION_USELEGACYSSL             "accounts.account.connection.use-legacy-ssl"
#define OPV_ACCOUNT_CONNECTION_CERTVERIFYMODE           "accounts.account.connection.cert-verify-mode"
// StatusChanger
#define OPV_ACCOUNT_AUTOCONNECT                         "accounts.account.auto-connect"
#define OPV_ACCOUNT_AUTORECONNECT                       "accounts.account.auto-reconnect"
#define OPV_ACCOUNT_STATUS_ISMAIN                       "accounts.account.status.is-main"
#define OPV_ACCOUNT_STATUS_LASTONLINE                   "accounts.account.status.last-online"
// BookMarks
#define OPV_ACCOUNT_IGNOREAUTOJOIN                      "accounts.account.ignore-autojoin"
// Compress
#define OPV_ACCOUNT_STREAMCOMPRESS                      "accounts.account.stream-compress"
// MessageArchiver
#define OPV_ACCOUNT_HISTORYREPLICATE                    "accounts.account.history-replicate"
#define OPV_ACCOUNT_HISTORYDUPLICATE                    "accounts.account.history-duplicate"

// Avatars
#define OPV_AVATARS_SMALLSIZE                           "avatars.small-size"
#define OPV_AVATARS_LARGESIZE                           "avatars.large-size"
#define OPV_AVATARS_NORMALSIZE                          "avatars.normal-size"

// BirthdayReminder
#define OPV_BIRTHDAYREMINDER_STARTTIME                  "birthdayreminder.start-time"
#define OPV_BIRTHDAYREMINDER_STOPTIME                   "birthdayreminder.stop-time"

// Console
#define OPV_CONSOLE_ROOT                                "console"
#define OPV_CONSOLE_CONTEXT_ITEM                        "console.context"
#define OPV_CONSOLE_CONTEXT_NAME                        "console.context.name"
#define OPV_CONSOLE_CONTEXT_STREAMJID                   "console.context.streamjid"
#define OPV_CONSOLE_CONTEXT_CONDITIONS                  "console.context.conditions"
#define OPV_CONSOLE_CONTEXT_HIGHLIGHTXML                "console.context.highlight-xml"
#define OPV_CONSOLE_CONTEXT_WORDWRAP                    "console.context.word-wrap"

// DataStreamsManager
#define OPV_DATASTREAMS_ROOT                            "datastreams"
#define OPV_DATASTREAMS_SPROFILE_ITEM                   "datastreams.settings-profile"
#define OPV_DATASTREAMS_SPROFILE_NAME                   "datastreams.settings-profile.name"
#define OPV_DATASTREAMS_METHOD_ITEM                     "datastreams.settings-profile.method"
// InBandStream
#define OPV_DATASTREAMS_METHOD_BLOCKSIZE                "datastreams.settings-profile.method.block-size"
#define OPV_DATASTREAMS_METHOD_MAXBLOCKSIZE             "datastreams.settings-profile.method.max-block-size"
#define OPV_DATASTREAMS_METHOD_STANZATYPE               "datastreams.settings-profile.method.stanza-type"
// SocksStreams
#define OPV_DATASTREAMS_SOCKSLISTENPORT                 "datastreams.socks-listen-port"
#define OPV_DATASTREAMS_METHOD_CONNECTTIMEOUT           "datastreams.settings-profile.method.connect-timeout"
#define OPV_DATASTREAMS_METHOD_ENABLEDIRECT             "datastreams.settings-profile.method.enable-direct-connections"
#define OPV_DATASTREAMS_METHOD_ENABLEFORWARD            "datastreams.settings-profile.method.enable-forward-direct"
#define OPV_DATASTREAMS_METHOD_FORWARDADDRESS           "datastreams.settings-profile.method.forward-direct-address"
#define OPV_DATASTREAMS_METHOD_USEACCOUNTSTREAMPROXY    "datastreams.settings-profile.method.use-account-stream-proxy"
#define OPV_DATASTREAMS_METHOD_USEUSERSTREAMPROXY       "datastreams.settings-profile.method.use-user-stream-proxy"
#define OPV_DATASTREAMS_METHOD_USERSTREAMPROXY          "datastreams.settings-profile.method.user-stream-proxy"
#define OPV_DATASTREAMS_METHOD_USEACCOUNTNETPROXY       "datastreams.settings-profile.method.use-account-network-proxy"
#define OPV_DATASTREAMS_METHOD_USERNETWORKPROXY         "datastreams.settings-profile.method.user-network-proxy"

// FileStreamsManager
#define OPV_FILESTREAMS_DEFAULTDIR                      "filestreams.default-dir"
#define OPV_FILESTREAMS_GROUPBYSENDER                   "filestreams.group-by-sender"
#define OPV_FILESTREAMS_DEFAULTMETHOD                   "filestreams.default-method"
#define OPV_FILESTREAMS_ACCEPTABLEMETHODS               "filestreams.acceptable-methods"
// FileTransfer
#define OPV_FILETRANSFER_ROOT                           "filestreams.filetransfer"
#define OPV_FILETRANSFER_AUTORECEIVE                    "filestreams.filetransfer.autoreceive"
#define OPV_FILETRANSFER_HIDEONSTART                    "filestreams.filetransfer.hide-dialog-on-start"

// MainWindow
#define OPV_MAINWINDOW_SHOWONSTART                      "mainwindow.show-on-start"

// MessageWidgets
#define OPV_MESSAGES_ROOT                               "messages"
#define OPV_MESSAGES_LOADHISTORY                        "messages.load-history"
#define OPV_MESSAGES_SHOWSTATUS                         "messages.show-status"
#define OPV_MESSAGES_ARCHIVESTATUS                      "messages.archive-status"
#define OPV_MESSAGES_EDITORAUTORESIZE                   "messages.editor-auto-resize"
#define OPV_MESSAGES_EDITORMINIMUMLINES                 "messages.editor-minimum-lines"
#define OPV_MESSAGES_EDITORBASEFONTSIZE                 "messages.editor-base-font-size"
#define OPV_MESSAGES_CLEANCHATTIMEOUT                   "messages.clean-chat-timeout"
#define OPV_MESSAGES_COMBINEWITHROSTER                  "messages.combine-with-roster"
#define OPV_MESSAGES_TABWINDOWS_ROOT                    "messages.tab-windows"
#define OPV_MESSAGES_TABWINDOWS_ENABLE                  "messages.tab-windows.enable"
#define OPV_MESSAGES_TABWINDOWS_DEFAULT                 "messages.tab-windows.default"
#define OPV_MESSAGES_TABWINDOW_ITEM                     "messages.tab-windows.window"
#define OPV_MESSAGES_TABWINDOW_NAME                     "messages.tab-windows.window.name"
#define OPV_MESSAGES_TABWINDOW_TABSCLOSABLE             "messages.tab-windows.window.tabs-closable"
#define OPV_MESSAGES_TABWINDOW_TABSBOTTOM               "messages.tab-windows.window.tabs-bottom"
// Emoticons
#define OPV_MESSAGES_EMOTICONS_ICONSET                  "messages.emoticons.iconset"
#define OPV_MESSAGES_EMOTICONS_MAXINMESSAGE             "messages.emoticons.max-in-message"
// ChatStates
#define OPV_MESSAGES_CHATSTATESENABLED                  "messages.chatstates-enabled"
// NormalMessageHandler
#define OPV_MESSAGES_UNNOTIFYALLNORMAL                  "messages.unnotify-all-normal-messages"
// MessageStyles
#define OPV_MESSAGES_SHOWDATESEPARATORS                 "messages.show-date-separators"
#define OPV_MESSAGES_MAXMESSAGESINWINDOW                "messages.max-messages-in-window"
// SpellChecker
#define OPV_MESSAGES_SPELL_LANG                         "messages.spell.lang"
#define OPV_MESSAGES_SPELL_ENABLED                      "messages.spell.enabled"

// MultiUserChat
#define OPV_MUC_SHOWENTERS                              "muc.show-enters"
#define OPV_MUC_SHOWSTATUS                              "muc.show-status"
#define OPV_MUC_ARCHIVESTATUS                           "muc.archive-status"
#define OPV_MUC_REJOINAFTERKICK                         "muc.rejoin-after-kick"
#define OPV_MUC_QUITONWINDOWCLOSE                       "muc.quit-on-window-close"
#define OPV_MUC_REFERENUMERATION                        "muc.refer-enumeration"
#define OPV_MUC_NICKNAMESUFFIX                          "muc.nickname-suffix"
#define OPV_MUC_USERVIEWMODE                            "muc.user-view-mode"
#define OPV_MUC_GROUPCHAT_ITEM                          "muc.groupchat"
#define OPV_MUC_GROUPCHAT_NOTIFYSILENCE                 "muc.groupchat.notify-silence"
// Bookmarks
#define OPV_MUC_SHOWAUTOJOINED                          "muc.show-auto-joined"

// MessageArchiver
#define OPV_HISTORY_ENGINE_ITEM                         "history.engine"
#define OPV_HISTORY_ENGINE_ENABLED                      "history.engine.enabled"
#define OPV_HISTORY_ENGINE_REPLICATEAPPEND              "history.engine.replicate-append"
#define OPV_HISTORY_ENGINE_REPLICATEREMOVE              "history.engine.replicate-remove"
#define OPV_HISTORY_ARCHIVEVIEW_FONTPOINTSIZE           "history.archiveview.font-point-size"
// FileMessageArchive
#define OPV_FILEARCHIVE_HOMEPATH                        "history.file-archive.home-path"
#define OPV_FILEARCHIVE_DATABASESYNC                    "history.file-archive.database-sync"
#define OPV_FILEARCHIVE_COLLECTION_MINSIZE              "history.file-archive.collection.min-size"
#define OPV_FILEARCHIVE_COLLECTION_MAXSIZE              "history.file-archive.collection.max-size"
#define OPV_FILEARCHIVE_COLLECTION_CRITICALSIZE         "history.file-archive.collection.critical-size"
// ServerMessageArchive
#define OPV_SERVERARCHIVE_MAXUPLOADSIZE                 "history.server-archive.max-upload-size"

// MessageStyleManager
#define OPV_MESSAGESTYLE_ROOT                           "message-styles"
#define OPV_MESSAGESTYLE_MTYPE_ITEM                     "message-styles.message-type"
#define OPV_MESSAGESTYLE_CONTEXT_ITEM                   "message-styles.message-type.context"
#define OPV_MESSAGESTYLE_CONTEXT_ENGINEID               "message-styles.message-type.context.engine-id"
#define OPV_MESSAGESTYLE_ENGINE_ITEM                    "message-styles.message-type.context.engine"
#define OPV_MESSAGESTYLE_ENGINE_STYLEID                 "message-styles.message-type.context.engine.style-id"
#define OPV_MESSAGESTYLE_STYLE_ITEM                     "message-styles.message-type.context.engine.style"
// IMessageStyleEngine
#define OPV_MESSAGESTYLE_STYLE_VARIANT                  "message-styles.message-type.context.engine.style.variant"
#define OPV_MESSAGESTYLE_STYLE_FONTFAMILY               "message-styles.message-type.context.engine.style.font-family"
#define OPV_MESSAGESTYLE_STYLE_FONTSIZE                 "message-styles.message-type.context.engine.style.font-size"
#define OPV_MESSAGESTYLE_STYLE_SELFCOLOR                "message-styles.message-type.context.engine.style.self-color"
#define OPV_MESSAGESTYLE_STYLE_CONTACTCOLOR             "message-styles.message-type.context.engine.style.contact-color"
#define OPV_MESSAGESTYLE_STYLE_BGCOLOR                  "message-styles.message-type.context.engine.style.bg-color"
#define OPV_MESSAGESTYLE_STYLE_BGIMAGEFILE              "message-styles.message-type.context.engine.style.bg-image-file"
#define OPV_MESSAGESTYLE_STYLE_BGIMAGELAYOUT            "message-styles.message-type.context.engine.style.bg-image-layout"

// OptionsManager
#define OPV_COMMON_ROOT                                 "common"
#define OPV_COMMON_LANGUAGE                             "common.language"
#define OPV_COMMON_AUTOSTART                            "common.autostart"
// ClintInfo
#define OPV_COMMON_SHAREOSVERSION                       "common.share-os-version"
// Statistics
#define OPV_COMMON_STATISTICTS_ENABLED                  "common.statistics-enabled"
// VCardPlugin
#define OPV_COMMON_RESTRICT_VCARD_IMAGES_SIZE           "common.restrict-vcard-images-size"

// Notifications
#define OPV_NOTIFICATIONS_ROOT                          "notifications"
#define OPV_NOTIFICATIONS_SILENTIFDND                   "notifications.silent-if-dnd"
#define OPV_NOTIFICATIONS_SILENTIFAWAY                  "notifications.silent-if-away"
#define OPV_NOTIFICATIONS_NATIVEPOPUPS                  "notifications.native-popups"
#define OPV_NOTIFICATIONS_FORCESOUND                    "notifications.force-sound"
#define OPV_NOTIFICATIONS_HIDEMESSAGE                   "notifications.hide-message"
#define OPV_NOTIFICATIONS_EXPANDGROUPS                  "notifications.expand-groups"
#define OPV_NOTIFICATIONS_SOUNDCOMMAND                  "notifications.sound-command"
#define OPV_NOTIFICATIONS_POPUPTIMEOUT                  "notifications.popup-timeout"
#define OPV_NOTIFICATIONS_TYPEKINDS_ITEM                "notifications.type-kinds.type"
#define OPV_NOTIFICATIONS_KINDENABLED_ITEM              "notifications.kind-enabled.kind"

// ConnectionManager
#define OPV_PROXY_ROOT                                  "proxy"
#define OPV_PROXY_DEFAULT                               "proxy.default"
#define OPV_PROXY_ITEM                                  "proxy.proxy"
#define OPV_PROXY_NAME                                  "proxy.proxy.name"
#define OPV_PROXY_TYPE                                  "proxy.proxy.type"
#define OPV_PROXY_HOST                                  "proxy.proxy.host"
#define OPV_PROXY_PORT                                  "proxy.proxy.port"
#define OPV_PROXY_USER                                  "proxy.proxy.user"
#define OPV_PROXY_PASS                                  "proxy.proxy.pass"

// RostersView
#define OPV_ROSTER_ROOT                                 "roster"
#define OPV_ROSTER_VIEWMODE                             "roster.view-mode"
#define OPV_ROSTER_SORTMODE                             "roster.sort-mode"
#define OPV_ROSTER_SHOWOFFLINE                          "roster.show-offline"
#define OPV_ROSTER_SHOWRESOURCE                         "roster.show-resource"
#define OPV_ROSTER_HIDESCROLLBAR                        "roster.hide-scrollbar"
#define OPV_ROSTER_MERGESTREAMS                         "roster.merge-streams"
// RosterChanger
#define OPV_ROSTER_AUTOSUBSCRIBE                        "roster.auto-subscribe"
#define OPV_ROSTER_AUTOUNSUBSCRIBE                      "roster.auto-unsubscribe"
// RosterSearch
#define OPV_ROSTER_SEARCH_ENABLED                       "roster.search.enabled"
#define OPV_ROSTER_SEARCH_FIELDEBANLED                  "roster.search.field-enabled"
// RosterItemExchange
#define OPV_ROSTER_EXCHANGE_AUTOAPPROVEENABLED          "roster.exchange.auto-approve-enabled"
//RecentContact
#define OPV_ROSTER_RECENT_ALWAYSSHOWOFFLINE             "roster.recent.always-show-offline"
#define OPV_ROSTER_RECENT_HIDEINACTIVEITEMS             "roster.recent.hide-inactive-items"
#define OPV_ROSTER_RECENT_SIMPLEITEMSVIEW               "roster.recent.simple-items-view"
#define OPV_ROSTER_RECENT_SORTBYACTIVETIME              "roster.recent.sort-by-active-time"
#define OPV_ROSTER_RECENT_SHOWONLYFAVORITE              "roster.recent.show-only-favorite"
#define OPV_ROSTER_RECENT_MAXVISIBLEITEMS               "roster.recent.max-visible-items"
#define OPV_ROSTER_RECENT_INACTIVEDAYSTIMEOUT           "roster.recent.inactive-days-timeout"

// ShortcutManager
#define OPV_SHORTCUTS                                   "shortcuts"

// StatusChanger
#define OPV_STATUSES_ROOT                               "statuses"
#define OPV_STATUSES_MAINSTATUS                         "statuses.main-status"
#define OPV_STATUSES_MODIFY                             "statuses.modify-status"
#define OPV_STATUS_ITEM                                 "statuses.status"
#define OPV_STATUS_NAME                                 "statuses.status.name"
#define OPV_STATUS_SHOW                                 "statuses.status.show"
#define OPV_STATUS_TEXT                                 "statuses.status.text"
#define OPV_STATUS_PRIORITY                             "statuses.status.priority"
// AutoStatus
#define OPV_AUTOSTARTUS_ROOT                            "statuses.autostatus"
#define OPV_AUTOSTARTUS_AWAYRULE                        "statuses.autostatus.away-rule"
#define OPV_AUTOSTARTUS_OFFLINERULE                     "statuses.autostatus.offline-rule"
#define OPV_AUTOSTARTUS_RULE_ITEM                       "statuses.autostatus.rule"
#define OPV_AUTOSTARTUS_RULE_ENABLED                    "statuses.autostatus.rule.enabled"
#define OPV_AUTOSTARTUS_RULE_TIME                       "statuses.autostatus.rule.time"
#define OPV_AUTOSTARTUS_RULE_SHOW                       "statuses.autostatus.rule.show"
#define OPV_AUTOSTARTUS_RULE_TEXT                       "statuses.autostatus.rule.text"
#define OPV_AUTOSTARTUS_RULE_PRIORITY                   "statuses.autostatus.rule.priority"

// StatusIcons
#define OPV_STATUSICONS                                 "statusicons"
#define OPV_STATUSICONS_DEFAULT                         "statusicons.default-iconset"
#define OPV_STATUSICONS_RULES_ROOT                      "statusicons.rules"
#define OPV_STATUSICONS_RULE_ITEM                       "statusicons.rules.rule"
#define OPV_STATUSICONS_RULE_PATTERN                    "statusicons.rules.rule.pattern"
#define OPV_STATUSICONS_RULE_ICONSET                    "statusicons.rules.rule.iconset"

// Statistics
#define OPV_STATISTICS_PROFILEID                        "statistics.profile-id"

// XmppStreams
#define OPV_XMPPSTREAMS_TIMEOUT_HANDSHAKE               "xmppstreams.timeout.handshake"
#define OPV_XMPPSTREAMS_TIMEOUT_KEEPALIVE               "xmppstreams.timeout.keepalive"
#define OPV_XMPPSTREAMS_TIMEOUT_DISCONNECT              "xmppstreams.timeout.disconnect"
// RosterPlugin
#define OPV_XMPPSTREAMS_TIMEOUT_ROSTERREQUEST           "xmppstreams.timeout.roster-request"

#endif // DEF_OPTIONVALUES_H
