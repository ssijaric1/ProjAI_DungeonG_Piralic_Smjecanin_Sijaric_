#pragma once
#include <gui/Window.h>
#include "MainView.h"

class MainWindow : public gui::Window {
private:
    MainView view;
    
public:
    MainWindow() : gui::Window(gui::Size(1200, 800)) {
        this->setTitle("Dungeon Game");
        this->setCentralView(&view);
        setResizable(true);
    }
};