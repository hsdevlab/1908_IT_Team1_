#include "cluster.h"
#include "ui_cluster.h"

cluster::cluster(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cluster)
{
    ui->setupUi(this);
}

cluster::~cluster()
{
    delete ui;
}
