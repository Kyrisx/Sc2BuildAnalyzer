#ifndef NEWPROJECT_H
#define NEWPROJECT_H

#include <QObject>

class NewProject : public QObject
{
    Q_OBJECT
public:
    explicit NewProject(QObject *parent = nullptr);

signals:

public slots:
};

#endif // NEWPROJECT_H