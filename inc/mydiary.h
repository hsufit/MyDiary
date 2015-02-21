#include<QApplication>
#include<QtWidgets>
//#include<QtWidgets/QApplication>
//#include<QtWidgets/QWidget>

class QPushButton;
class QTextEdit;
class QBoxLayout;


class mydiary : public QApplication {
	Q_OBJECT

public:
	mydiary(int &argc, char **argv);
	virtual ~mydiary(){}

private:
	QWidget *window,*window01;
	QPushButton *save
			  , *load;

	QTextEdit *textarea;

    QBoxLayout *hookplace_0,*hookplace_01;

};



