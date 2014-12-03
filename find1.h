#ifndef FIND1_H
#define FIND1_H

#include <QWidget>

namespace Ui {
class Find1;
}

class Find1 : public QWidget
{
    Q_OBJECT

public:
    explicit Find1(QWidget *parent = 0);
    ~Find1();

public slots:
    void numPB_clicked();
    void gloPB_clicked();


private slots:
    void on_pushButton_clicked();


private:
    Ui::Find1 *ui;
};

#endif // FIND1_H
