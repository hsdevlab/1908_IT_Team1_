#ifndef CLUSTER_H
#define CLUSTER_H

#include <QWidget>

namespace Ui {
class cluster;
}

class cluster : public QWidget
{
    Q_OBJECT

public:
    explicit cluster(QWidget *parent = nullptr);
    ~cluster();

private:
    Ui::cluster *ui;
};

#endif // CLUSTER_H
