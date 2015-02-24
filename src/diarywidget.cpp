#include<QPushButton>
#include<QTabWidget>
#include<QBoxLayout>

#include<QLabel>

#include"diarywidget.h"
#include"sectionwidget.h"

diarywidget::diarywidget(QWidget *parent)
	: QWidget(parent)
{
//new object
	sect = new sectionwidget();
	cheptcher = new QLabel("working space");
	save = new QPushButton("save");
	load = new QPushButton("load");

//signal connect
	connect(save, SIGNAL(clicked()), sect->retText(), SLOT(save()));
	connect(load, SIGNAL(clicked()), sect->retText(), SLOT(load()));
//ui setup
	QWidget *widget_01 = new QWidget();
	QBoxLayout *hookplace_01 = new QBoxLayout(QBoxLayout::LeftToRight,widget_01);
		hookplace_01->addWidget(save);
		hookplace_01->addWidget(load);

	QTabWidget *lecturemenu = new QTabWidget();
	QWidget *widget_00 = new QWidget();
		lecturemenu->addTab(widget_00,"Daily");
		QBoxLayout *hookplace_00 = new QBoxLayout(QBoxLayout::LeftToRight,widget_00);
			hookplace_00->addWidget(sect);
			hookplace_00->addWidget(cheptcher);

	QBoxLayout *hookplace_0 = new QBoxLayout(QBoxLayout::TopToBottom,this);
		hookplace_0->addWidget(lecturemenu);
		hookplace_0->addWidget(widget_01);

}

sectionwidget *diarywidget::retsec(){

	return sect;
}

