#ifndef DANMUVIEW_H
#define DANMUVIEW_H
#include "framelessdialog.h"
#include "Play/Danmu/common.h"
class QTreeView;
class QLineEdit;
class DanmuView : public CFramelessDialog
{
    Q_OBJECT
public:
    explicit DanmuView(const QList<DanmuComment *> *danmuList, QWidget *parent = nullptr);
    explicit DanmuView(const QList<QSharedPointer<DanmuComment> > *danmuList, QWidget *parent = nullptr);

private:
    QTreeView *danmuView;
    QLineEdit *filterEdit;
    void initView(int danmuCount);

    // CFramelessDialog interface
protected:
    virtual void onClose();
};



#endif // DANMUVIEW_H
