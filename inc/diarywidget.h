#include<QWidget>

class QPushButton;

class QLabel;

class sectionwidget;

class diarywidget : public QWidget {
	Q_OBJECT;

public:
	diarywidget(QWidget *parent = 0);

	sectionwidget *retsec();
private:
	sectionwidget *sect;
	QLabel *cheptcher;
	QPushButton *save,*load;
};
