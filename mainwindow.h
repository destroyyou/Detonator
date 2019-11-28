#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QtCharts>
using namespace QtCharts;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initWidget();
private:
    Ui::MainWindow *ui;
    //第一行
    QComboBox *m_comPort{nullptr};
    QLabel *m_comPortStatus_Value{nullptr};
    QLabel *m_hashTag_Title{nullptr};
    QLineEdit *m_hashTag_Value{nullptr};
    QLabel *m_layerNum_Title{nullptr};
    QLineEdit *m_layerNum_Value{nullptr};
    QLabel *m_communicationCurrent_Title{nullptr};
    QLabel *m_communicationCurrent_Value{nullptr};
    QLabel *m_cableCurrent_Title{nullptr};
    QLabel *m_cableCurrent_Value{nullptr};
    //第二行
    QPushButton *m_disconnectCom{nullptr};
    QPushButton *m_reset{nullptr};
    QPushButton *m_connect{nullptr};
    QPushButton *m_Placeholder1{nullptr};
    QPushButton *m_Placeholder2{nullptr};
    QPushButton *m_successComfirm{nullptr};
    QPushButton *m_failComfirm{nullptr};
    QLabel *m_communicationVoltage_Title{nullptr};
    QLabel *m_communicationVoltage_Value{nullptr};
    QLabel *m_detonateVoltage_Title{nullptr};
    QLabel *m_detonateVoltage_Value{nullptr};
    //第三行
    QLabel *m_selectedNum_Title{nullptr};
    QLabel *m_detonator_10_Title{nullptr};
    QLabel *m_detonator_9_Title{nullptr};
    QLabel *m_detonator_8_Title{nullptr};
    QLabel *m_detonator_7_Title{nullptr};
    QLabel *m_detonator_6_Title{nullptr};
    QLabel *m_detonator_5_Title{nullptr};
    QLabel *m_detonator_4_Title{nullptr};
    QLabel *m_detonator_3_Title{nullptr};
    QLabel *m_detonator_2_Title{nullptr};
    QLabel *m_detonator_1_Title{nullptr};
    QComboBox *m_selectedNum{nullptr};
    QComboBox *m_detonator_10{nullptr};
    QComboBox *m_detonator_9{nullptr};
    QComboBox *m_detonator_8{nullptr};
    QComboBox *m_detonator_7{nullptr};
    QComboBox *m_detonator_6{nullptr};
    QComboBox *m_detonator_5{nullptr};
    QComboBox *m_detonator_4{nullptr};
    QComboBox *m_detonator_3{nullptr};
    QComboBox *m_detonator_2{nullptr};
    QComboBox *m_detonator_1{nullptr};
    //第五行
    QLabel *m_disconnect_IndicatorLightTitle_1{nullptr};
    QLabel *m_connecting_IndicatorLightTitle_1{nullptr};
    QLabel *m_err_IndicatorLightTitle{nullptr};
    QLabel *m_online_IndicatorLightTitle{nullptr};

    QLabel *m_disconnect_IndicatorLightTitle_2{nullptr};
    QLabel *m_online_IndicatorLightTitle_2{nullptr};
    QLabel *m_digitalPendingDetect_IndicatorLightTitle{nullptr};
    QLabel *m_digitalDetectErr_IndicatorLightTitle{nullptr};
    QLabel *m_pendingDetonate_IndicatorLightTitle{nullptr};
    QLabel *m_skip_IndicatorLightTitle{nullptr};
    QLabel *m_detonateSuccess_IndicatorLightTitle{nullptr};
    QLabel *m_detonateFail_IndicatorLightTitle{nullptr};

    QLabel *m_disconnect_IndicatorLight_1{nullptr};
    QLabel *m_connecting_IndicatorLight_1{nullptr};
    QLabel *m_err_IndicatorLight{nullptr};
    QLabel *m_online_IndicatorLight{nullptr};

    QLabel *m_disconnect_IndicatorLight_2{nullptr};
    QLabel *m_online_IndicatorLight_2{nullptr};
    QLabel *m_digitalPendingDetect_IndicatorLight{nullptr};
    QLabel *m_digitalDetectErr_IndicatorLight{nullptr};
    QLabel *m_pendingDetonate_IndicatorLight{nullptr};
    QLabel *m_skip_IndicatorLight{nullptr};
    QLabel *m_detonateSuccess_IndicatorLight{nullptr};
    QLabel *m_detonateFail_IndicatorLight{nullptr};

    QChart *m_chart;
    QLineSeries *m_lineSeries;
    QValueAxis *m_xAxis;
    QValueAxis *m_yAxis;
};

#endif // MAINWINDOW_H
