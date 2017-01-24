set(SOURCES "action.cpp"
			"advanceditem.cpp"
			"advanceditemdelegate.cpp"
			"advanceditemmodel.cpp"
			"animatedtextbrowser.cpp"
			"boxwidget.cpp"
			"closebutton.cpp"
			"datetime.cpp"
			"filecookiejar.cpp"
			"filestorage.cpp"
			"iconsetdelegate.cpp"
			"iconstorage.cpp"
			"imagemanager.cpp"
			"jid.cpp"
			"logger.cpp"
			"menu.cpp"
			"menubarchanger.cpp"
			"message.cpp"
			"options.cpp"
			"passworddialog.cpp"
			"pluginhelper.cpp"
			"ringbuffer.cpp"
			"searchlineedit.cpp"
			"shortcuts.cpp"
			"splitterwidget.cpp"
			"stanza.cpp"
			"statusbarchanger.cpp"
			"systemmanager.cpp"
			"textmanager.cpp"
			"toolbarchanger.cpp"
			"unzipfile.cpp"
			"versionparser.cpp"
			"widgetmanager.cpp"
			"xmpperror.cpp")

set(HEADERS "action.h"
			"advanceditem.h"
			"advanceditemdelegate.h"
			"advanceditemmodel.h"
			"animatedtextbrowser.h"
			"boxwidget.h"
			"closebutton.h"
			"datetime.h"
			"filecookiejar.h"
			"filestorage.h"
			"iconsetdelegate.h"
			"iconstorage.h"
			"imagemanager.h"
			"jid.h"
			"logger.h"
			"menu.h"
			"menubarchanger.h"
			"message.h"
			"options.h"
			"passworddialog.h"
			"pluginhelper.h"
			"ringbuffer.h"
			"searchlineedit.h"
			"shortcuts.h"
			"splitterwidget.h"
			"stanza.h"
			"statusbarchanger.h"
			"systemmanager.h"
			"textmanager.h"
			"toolbarchanger.h"
			"unzipfile.h"
			"versionparser.h"
			"widgetmanager.h"
			"xmpperror.h")

qt5_wrap_cpp(MOC_SOURCES ${HEADERS})
