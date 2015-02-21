#include<iostream>
#include<QInputDialog>

#include<QMessageBox>

#include"sectionedit.h"

sectionedit::sectionedit(QWidget *parent=0)
	: QTextEdit(parent)
{
//QMessageBox::information(parent,"for save", "hello there");
}

sectionedit::~sectionedit(){}

void sectionedit::save() {
/*QString text;
bool suc;

text = QInputDialog::getText(parent, "Input Dialog",
			"Please input file name",QLinedit::Normal,
			&suc);
if(suc)
	cout<<"load successful"<<text<<endl;
*/
this->setText("this is save");
//QMessageBox::information(this,"for save", "hello there");
}


void sectionedit::load() {
/*QString text;
bool suc;

text = QInputDialog::getText(parent, "Input Dialog",
			"Please input file name",QLinedit::Normal,
			&suc);
if(suc)
	cout<<"load successful"<<text<<endl;
*/
this->setText("this is load");
//QMessageBox::information(this,"for load", "hello there");
}
