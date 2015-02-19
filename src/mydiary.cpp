#include"../inc/mydiary.h"

mydiary::mydiary(int &argc, char **argv)
	: QApplication(argc, argv)
{
	window = new QWidget();

	save = new QPushButton("Save",window);
	load = new QPushButton("Load",window);

	textarea = new QTextEdit(window);

	window->show();
}


