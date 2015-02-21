#include<QPushButton>
//#include<QTextEdit>
#include<QBoxLayout>
#include<QObject>

#include"mydiary.h"
#include"sectionedit.h"

mydiary::mydiary(int &argc, char **argv)
	: QApplication(argc, argv)
{
	window = new QWidget();
	window01 = new QWidget();

    hookplace_0 = new QBoxLayout(QBoxLayout::LeftToRight, window);
    hookplace_01 = new QBoxLayout(QBoxLayout::TopToBottom, window01);

	save = new QPushButton("Save");
	load = new QPushButton("Load");

	textarea = new sectionedit(window);

//connect signal&slots
	connect(save, SIGNAL(clicked()), textarea, SLOT(save()));
	connect(load, SIGNAL(clicked()), textarea, SLOT(load()));

//window setup
    hookplace_0->addWidget(window01);
    hookplace_0->addWidget(textarea);

    hookplace_01->addWidget(save);
    hookplace_01->addWidget(load);

	window->show();

}


