#include<QApplication>
//#include<QtWidgets/QApplication>
//#include<QtWidgets/QWidget>

class QPushButton;
class QGroupBox;
class QWidget;
class sectionedit;


class mydiary : public QApplication {
	Q_OBJECT

public:
	mydiary(int &argc, char **argv);
	virtual ~mydiary(){}

private:
	QWidget *window,*window01;
	QPushButton *save
			  , *load;
	QGroupBox *bookmenu;

	sectionedit *textarea;


};



