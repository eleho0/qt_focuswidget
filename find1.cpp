#include "find1.h"
#include "ui_find1.h"

Find1::Find1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Find1)
{


    ui->setupUi(this);
    connect(ui->pushButton_2,SIGNAL(clicked()), this,SLOT(numPB_clicked()));
    connect(ui->pushButton_3,SIGNAL(clicked()), this, SLOT(gloPB_clicked()));

}

Find1::~Find1()
{
    delete ui;
}

void Find1::numPB_clicked()
{
    QWidget* curr_widget = this->focusWidget();
    if(curr_widget->inherits("QLineEdit")){
        qDebug("ha, it is a lineedit!!");
        //QLineEdit *curr_le = ((QLineEdit*)curr_widget);
         QLineEdit *curr_le = static_cast<QLineEdit*>(curr_widget);
         curr_le->insert("bbq");
    }



}


void Find1::gloPB_clicked()
{

    QWidget* curr_widget = this->focusWidget();

    if(curr_widget->inherits("QLineEdit")){


        QPushButton* anci_PB = dynamic_cast<QPushButton*>(sender());
        QString str = anci_PB->text();

        qDebug("ha, it is a lineedit!!");
        QLineEdit *curr_le = static_cast<QLineEdit*>(curr_widget);
        curr_le->insert(str);
    }

}

void Find1::on_pushButton_clicked()
{
   QWidget* curr_widget = this->focusWidget();
   if(curr_widget->inherits("QLineEdit")){
       qDebug("ha, it is a lineedit!!");
   }

//   QString ClickedButtonName =((QPushButton*) ClickedButton)->text();
   if(this->focusWidget() == ui->input1){
       ui->input1->insert("ha");
   }
   qDebug("you clicked input1!!!");
  // ui->input1->insert("bbq");
}


