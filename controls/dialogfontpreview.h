#ifndef DIALOGFONTPREVIEW_H
#define DIALOGFONTPREVIEW_H
//-----------------------------------------------------------------------------
#include <QDialog>
//-----------------------------------------------------------------------------
#include "idocument.h"
#include <QImage>
#include <QPixmap>
//-----------------------------------------------------------------------------
namespace Ui {
class DialogFontPreview;
}
//-----------------------------------------------------------------------------
class DialogFontPreview : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogFontPreview(QWidget *parent = 0);
    ~DialogFontPreview();

    void setDocument(IDocument *document);
    
private:
    Ui::DialogFontPreview *ui;
    IDocument *mDocument;
    QImage mOriginalImage;
    QPixmap mScaledPixmap;

private slots:
    void on_lineEditText_textChanged(const QString &text);
    void on_spinBoxScale_valueChanged(int i);
};
//-----------------------------------------------------------------------------
#endif // DIALOGFONTPREVIEW_H