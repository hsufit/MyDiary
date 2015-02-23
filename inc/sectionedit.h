#include<QTextEdit>

class sectionedit : public QTextEdit {
	Q_OBJECT;

public:
	sectionedit(QWidget *parent = 0);
//	virtual ~sectionedit();

public slots :
	void save();
	void load();

};



