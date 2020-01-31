#ifndef MAINFORM_H
#define MAINFORM_H

#include <QMainWindow>
#include <QToolButton>
#include <QPalette>

#include "AudioWaveForm.h"
#include "AudioReceiver.h"
#include"globaldefine.h"

namespace Ui {
class MainForm;
}

class MainForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = 0);
    ~MainForm();

public slots:
    void exitWindowForm();

private:
    Ui::MainForm *ui;

    AudioReceiver *audioReceiver;

    void initWidgetStyleSheet();
    void initGroupBoxStyleSheet();
    void initLabelStyleSheet();
    void initMenuItemSignalSlotEvent();
    void initAudioDevice();
    void createToolbarItems();
    void setTabWidgetStyle();

    void dynamicInsertWaveForm();
};

#endif // MAINFORM_H
