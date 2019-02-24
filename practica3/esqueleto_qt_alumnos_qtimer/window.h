/*
* Prácticas de IG
* Copyright Domingo Martín Perandrés 2014-218
* dmartin@ugr.es
*
* GPL 3
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardPaths>
#include <QFileDialog>
#include <QDialog>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QGuiApplication>

QT_FORWARD_DECLARE_CLASS(QOpenGLWidget)

class _gl_widget;

class _window : public QMainWindow
{
    Q_OBJECT

public:
    _window();

private:
  _gl_widget *GL_widget;
};

#endif
