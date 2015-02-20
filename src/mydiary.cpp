#include<QPushButton>
#include<QTextEdit>
#include<QBoxLayout>


#include"mydiary.h"


mydiary::mydiary(int &argc, char **argv)
	: QApplication(argc, argv)
{
	window = new QWidget();
	window01 = new QWidget();

    hookplace_0 = new QBoxLayout(QBoxLayout::LeftToRight, window);
    hookplace_01 = new QBoxLayout(QBoxLayout::TopToBottom, window01);

	save = new QPushButton("Save");
	load = new QPushButton("Load");

	textarea = new QTextEdit(window);

    hookplace_0->addWidget(window01);
    hookplace_0->addWidget(textarea);

    hookplace_01->addWidget(save);
    hookplace_01->addWidget(load);

	window->show();
}


