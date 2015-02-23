#include<QLineEdit>
#include<QLabel>

#include<QBoxLayout>

#include"sectionedit.h"
#include"sectionwidget.h"

sectionwidget::sectionwidget(QWidget *parent)
	: QWidget(parent)
{
//new object
	name = new QLineEdit();
	textinfo = new QLabel;
	text = new sectionedit();

//signal connect
//ui setup
	QWidget *widget00 = new QWidget();
	QBoxLayout *hookplace00 = new QBoxLayout(QBoxLayout::LeftToRight,widget00);
		hookplace00->addWidget(name);
		hookplace00->addWidget(textinfo);

	QBoxLayout *hookplace0 = new QBoxLayout(QBoxLayout::TopToBottom,this);
	hookplace0->addWidget(widget00);
	hookplace0->addWidget(text);

}

QWidget *sectionwidget::retText(){

	return text;
}




