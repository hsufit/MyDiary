#include<QPushButton>
#include<QBoxLayout>
#include<QGroupBox>
#include<QObject>
#include<QWidget>

#include"mydiary.h"
#include"sectionedit.h"

mydiary::mydiary(int &argc, char **argv)
	: QApplication(argc, argv)
{
	window = new QWidget();

	bookmenu = new QGroupBox();
		save = new QPushButton("Save");
		load = new QPushButton("Load");
	textarea = new sectionedit();

//connect signal&slots
	connect(save, SIGNAL(clicked()), textarea, SLOT(save()));
	connect(load, SIGNAL(clicked()), textarea, SLOT(load()));

//window setup

    QBoxLayout *hookplace_0 = new QBoxLayout(QBoxLayout::LeftToRight, window);
    	hookplace_0->addWidget(bookmenu);
    	hookplace_0->addWidget(textarea);


    QBoxLayout *hookplace_00 = new QBoxLayout(QBoxLayout::TopToBottom, bookmenu);
		hookplace_00->addWidget(save);
		hookplace_00->addWidget(load);

	window->show();
}


