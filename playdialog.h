#ifndef PLAYDIALOG_H
#define PLAYDIALOG_H

#include <QMainWindow>
#include "mediaplayer.h"
#include "QImage"

QT_BEGIN_NAMESPACE
namespace Ui { class PlayDialog; }
QT_END_NAMESPACE

class PlayDialog : public QMainWindow
{
    Q_OBJECT

public:
    PlayDialog(QWidget *parent = nullptr);
    ~PlayDialog();

private slots:
    void on_pb_start_clicked();
    void SLT_recvImage(QImage image);

private:
    Ui::PlayDialog *ui;
    MediaPlayer* p_mediaPlayer;
};
#endif // PLAYDIALOG_H
