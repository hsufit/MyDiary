#include<QPushButton>
#include<QBoxLayout>
#include<QGroupBox>
#include<QObject>
#include<QWidget>

#include"mydiary.h"
#include"sectionwidget.h"

mydiary::mydiary(int &argc, char **argv)
	: QApplication(argc, argv)
{
	window = new QWidget();

	bookmenu = new QGroupBox();
		save = new QPushButton("Save");
		load = new QPushButton("Load");
	bookarea = new sectionwidget();

//connect signal&slots
	connect(save, SIGNAL(clicked()), bookarea->retText(), SLOT(save()));
	connect(load, SIGNAL(clicked()), bookarea->retText(), SLOT(load()));

//window setup

    QBoxLayout *hookplace_0 = new QBoxLayout(QBoxLayout::LeftToRight, window);
    	hookplace_0->addWidget(bookmenu);
    	hookplace_0->addWidget(bookarea);


    QBoxLayout *hookplace_00 = new QBoxLayout(QBoxLayout::TopToBottom, bookmenu);
		hookplace_00->addWidget(save);
		hookplace_00->addWidget(load);


	window->show();
}


