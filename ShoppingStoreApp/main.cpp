#include<QApplication>
#include "BasicWindow.h"
int main(int argc, char* argv[]) {
	QApplication a(argc, argv);
	BasicWindow w;
    w.show();
    //qDebug()<<__FILE__;
	return a.exec();
} 
