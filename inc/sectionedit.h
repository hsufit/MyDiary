//class QTextEdit;
#include<QTextEdit>

class sectionedit : public  QTextEdit {
	Q_OBJECT;

public:
//	sectionedit(const QString &, QWidget *);
	sectionedit(QWidget *);
	~sectionedit();

	

public slots :
	void save();
	void load();

};



