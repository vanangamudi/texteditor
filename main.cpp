#include "widget.hpp"
#include "status_bar.hpp"
#include "layout.hpp"
#include "application.hpp"
#include "screen.hpp"
#include "isearch_buffer.hpp"

int main(int argc, char **argv)
{
    Application a(argc, argv);
    Widget mainWindow;
    Screen screen(&mainWindow);
    screen.setFocus();
    StatusBar statusBar(&mainWindow);
    screen.setStatusBar(&statusBar);
    Layout mainWindowLayout(Layout::Vertical);
    mainWindow.setLayout(&mainWindowLayout);
    mainWindowLayout.addWidget(&screen);
    mainWindowLayout.addWidget(&statusBar);
    auto r = a.exec();
    return r;
}
