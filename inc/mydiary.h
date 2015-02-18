#include<QApplication>
#include<QPushButton>
#include<QTextEdit>

class mydiary : public QApplication {
	Q_OBJECT

public:
	mydiary(int &argc, char **argv);
	virtual ~mydiary(){}

private:
	QWidget *window;
	QPushButton *save
			  , *load;

	QTextEdit *textarea;


};


mydiary::mydiary(int &argc, char **argv)
	: QApplication(argc, argv)
{
	window = new QWidget();

	save = new QPushButton("Save",window);
	load = new QPushButton("Load",window);

	textarea = new QTextEdit(window);

	window->show();
}

