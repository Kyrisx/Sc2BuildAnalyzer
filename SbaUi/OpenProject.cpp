#include "OpenProject.h"
#include "ui_OpenProject.h"

OpenProject::OpenProject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenProject)
{
    ui->setupUi(this);
}

OpenProject::~OpenProject()
{
    delete ui;
}
