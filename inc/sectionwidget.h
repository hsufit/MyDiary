#include<QWidget>

class QLineEdit;
class QLabel;

class sectionedit;


class sectionwidget : public QWidget {
	Q_OBJECT;

public:
	sectionwidget(QWidget *parent=0);

	QWidget *retText();

private:
	sectionedit *text;
	QLineEdit *name;
	QLabel *textinfo;

};
