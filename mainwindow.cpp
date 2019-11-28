#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initWidget();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initWidget()
{
    //第一行
    m_comPort = new QComboBox(ui->centralWidget);
    m_comPortStatus_Value = new QLabel(ui->centralWidget);
    m_comPortStatus_Value->setText("通信正常");
    m_hashTag_Title = new QLabel(ui->centralWidget);
    m_hashTag_Title->setText("井号：");
    m_hashTag_Title->setAlignment(Qt::AlignVCenter | Qt::AlignRight);
    m_hashTag_Value = new QLineEdit(ui->centralWidget);
    m_hashTag_Value->setMaximumWidth(200);
    m_layerNum_Title = new QLabel(ui->centralWidget);
    m_layerNum_Title->setText("层号：");
    m_layerNum_Title->setAlignment(Qt::AlignVCenter | Qt::AlignRight);
    m_layerNum_Value = new QLineEdit(ui->centralWidget);
    m_layerNum_Value->setMaximumWidth(100);
    m_communicationCurrent_Title = new QLabel(ui->centralWidget);
    m_communicationCurrent_Title->setText("通讯电流(mA)：");
    m_communicationCurrent_Value = new QLabel(ui->centralWidget);
    m_cableCurrent_Title = new QLabel(ui->centralWidget);
    m_cableCurrent_Title->setText("电缆电流(mA)：");
    m_cableCurrent_Value = new QLabel(ui->centralWidget);
    ui->horizontalLayout->addWidget(m_comPort);
    ui->horizontalLayout->addWidget(m_comPortStatus_Value);
    ui->horizontalLayout->addWidget(m_hashTag_Title);
    ui->horizontalLayout->addWidget(m_hashTag_Value);
    ui->horizontalLayout->addWidget(m_layerNum_Title);
    ui->horizontalLayout->addWidget(m_layerNum_Value);
    ui->horizontalLayout->addWidget(m_communicationCurrent_Title);
    ui->horizontalLayout->addWidget(m_communicationCurrent_Value);
    ui->horizontalLayout->addWidget(m_cableCurrent_Title);
    ui->horizontalLayout->addWidget(m_cableCurrent_Value);
    //第二行
    m_disconnectCom = new QPushButton(ui->centralWidget);
    m_disconnectCom->setText("关闭串口");
    m_reset = new QPushButton(ui->centralWidget);
    m_reset->setText("复位");
    m_connect = new QPushButton(ui->centralWidget);
    m_connect->setText("线路连接");
    m_Placeholder1 = new QPushButton(ui->centralWidget);
    m_Placeholder2 = new QPushButton(ui->centralWidget);
    m_successComfirm = new QPushButton(ui->centralWidget);
    m_successComfirm->setText("成功确认");
    m_failComfirm = new QPushButton(ui->centralWidget);
    m_failComfirm->setText("失败确认");
    m_communicationVoltage_Title = new QLabel(ui->centralWidget);
    m_communicationVoltage_Title->setText("通讯电压(V)：");
    m_communicationVoltage_Value = new QLabel(ui->centralWidget);
    m_detonateVoltage_Title = new QLabel(ui->centralWidget);
    m_detonateVoltage_Title->setText("起爆电压(V)：");
    m_detonateVoltage_Value = new QLabel(ui->centralWidget);
    ui->horizontalLayout_2->addWidget(m_disconnectCom);
    ui->horizontalLayout_2->addWidget(m_reset);
    ui->horizontalLayout_2->addWidget(m_connect);
    ui->horizontalLayout_2->addWidget(m_Placeholder1);
    ui->horizontalLayout_2->addWidget(m_Placeholder2);
    ui->horizontalLayout_2->addWidget(m_successComfirm);
    ui->horizontalLayout_2->addWidget(m_failComfirm);
    ui->horizontalLayout_2->addWidget(m_communicationVoltage_Title);
    ui->horizontalLayout_2->addWidget(m_communicationVoltage_Value);
    ui->horizontalLayout_2->addWidget(m_detonateVoltage_Title);
    ui->horizontalLayout_2->addWidget(m_detonateVoltage_Value);
    ui->horizontalLayout_2->setSpacing(15);
    //第三行
    m_selectedNum_Title = new QLabel(ui->centralWidget);
    m_selectedNum_Title->setText("选发个数");
    m_detonator_10_Title = new QLabel(ui->centralWidget);
    m_detonator_10_Title->setText("雷管10");
    m_detonator_9_Title = new QLabel(ui->centralWidget);
    m_detonator_9_Title->setText("雷管9");
    m_detonator_8_Title = new QLabel(ui->centralWidget);
    m_detonator_8_Title->setText("雷管8");
    m_detonator_7_Title = new QLabel(ui->centralWidget);
    m_detonator_7_Title->setText("雷管7");
    m_detonator_6_Title = new QLabel(ui->centralWidget);
    m_detonator_6_Title->setText("雷管6");
    m_detonator_5_Title = new QLabel(ui->centralWidget);
    m_detonator_5_Title->setText("雷管5");
    m_detonator_4_Title = new QLabel(ui->centralWidget);
    m_detonator_4_Title->setText("雷管4");
    m_detonator_3_Title = new QLabel(ui->centralWidget);
    m_detonator_3_Title->setText("雷管3");
    m_detonator_2_Title = new QLabel(ui->centralWidget);
    m_detonator_2_Title->setText("雷管2");
    m_detonator_1_Title = new QLabel(ui->centralWidget);
    m_detonator_1_Title->setText("雷管1");
    ui->gridLayout->addWidget(m_selectedNum_Title,0,0,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout->addWidget(m_detonator_10_Title,0,1,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout->addWidget(m_detonator_9_Title,0,2,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout->addWidget(m_detonator_8_Title,0,3,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout->addWidget(m_detonator_7_Title,0,4,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout->addWidget(m_detonator_6_Title,0,5,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout->addWidget(m_detonator_5_Title,0,6,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout->addWidget(m_detonator_4_Title,0,7,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout->addWidget(m_detonator_3_Title,0,8,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout->addWidget(m_detonator_2_Title,0,9,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout->addWidget(m_detonator_1_Title,0,10,Qt::AlignHCenter | Qt::AlignBottom);

    m_selectedNum = new QComboBox(ui->centralWidget);
    m_detonator_10 = new QComboBox(ui->centralWidget);
    m_detonator_9 = new QComboBox(ui->centralWidget);
    m_detonator_8 = new QComboBox(ui->centralWidget);
    m_detonator_7 = new QComboBox(ui->centralWidget);
    m_detonator_6 = new QComboBox(ui->centralWidget);
    m_detonator_5 = new QComboBox(ui->centralWidget);
    m_detonator_4 = new QComboBox(ui->centralWidget);
    m_detonator_3 = new QComboBox(ui->centralWidget);
    m_detonator_2 = new QComboBox(ui->centralWidget);
    m_detonator_1 = new QComboBox(ui->centralWidget);
    ui->gridLayout->addWidget(m_selectedNum,1,0,Qt::AlignHCenter);
    ui->gridLayout->addWidget(m_detonator_10,1,1,Qt::AlignHCenter);
    ui->gridLayout->addWidget(m_detonator_9,1,2,Qt::AlignHCenter);
    ui->gridLayout->addWidget(m_detonator_8,1,3,Qt::AlignHCenter);
    ui->gridLayout->addWidget(m_detonator_7,1,4,Qt::AlignHCenter);
    ui->gridLayout->addWidget(m_detonator_6,1,5,Qt::AlignHCenter);
    ui->gridLayout->addWidget(m_detonator_5,1,6,Qt::AlignHCenter);
    ui->gridLayout->addWidget(m_detonator_4,1,7,Qt::AlignHCenter);
    ui->gridLayout->addWidget(m_detonator_3,1,8,Qt::AlignHCenter);
    ui->gridLayout->addWidget(m_detonator_2,1,9,Qt::AlignHCenter);
    ui->gridLayout->addWidget(m_detonator_1,1,10,Qt::AlignHCenter);
    ui->gridLayout->setVerticalSpacing(2);
    ui->gridLayout->setHorizontalSpacing(15);
    //第五行
    m_disconnect_IndicatorLightTitle_1 = new QLabel(ui->groupBox);
    m_disconnect_IndicatorLightTitle_1->setText("断开");
    m_connecting_IndicatorLightTitle_1 = new QLabel(ui->groupBox);
    m_connecting_IndicatorLightTitle_1->setText("连接中");
    m_err_IndicatorLightTitle = new QLabel(ui->groupBox);
    m_err_IndicatorLightTitle->setText("故障");
    m_online_IndicatorLightTitle = new QLabel(ui->groupBox);
    m_online_IndicatorLightTitle->setText("在线");

    m_disconnect_IndicatorLight_1 = new QLabel(ui->groupBox);
    m_connecting_IndicatorLight_1 = new QLabel(ui->groupBox);
    m_err_IndicatorLight = new QLabel(ui->groupBox);
    m_online_IndicatorLight = new QLabel(ui->groupBox);
    ui->gridLayout_2->addWidget(m_disconnect_IndicatorLightTitle_1,0,0,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout_2->addWidget(m_connecting_IndicatorLightTitle_1,0,1,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout_2->addWidget(m_err_IndicatorLightTitle,0,2,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout_2->addWidget(m_online_IndicatorLightTitle,0,3,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout_2->addWidget(m_disconnect_IndicatorLight_1,1,0);
    ui->gridLayout_2->addWidget(m_connecting_IndicatorLight_1,1,1);
    ui->gridLayout_2->addWidget(m_err_IndicatorLight,1,2);
    ui->gridLayout_2->addWidget(m_online_IndicatorLight,1,3);

    m_disconnect_IndicatorLightTitle_2 = new QLabel(ui->groupBox_2);
    m_disconnect_IndicatorLightTitle_2->setText("断开");
    m_online_IndicatorLightTitle_2 = new QLabel(ui->groupBox_2);
    m_online_IndicatorLightTitle_2->setText("在线");
    m_digitalPendingDetect_IndicatorLightTitle = new QLabel(ui->groupBox_2);
    m_digitalPendingDetect_IndicatorLightTitle->setText("数码待检测");
    m_digitalDetectErr_IndicatorLightTitle = new QLabel(ui->groupBox_2);
    m_digitalDetectErr_IndicatorLightTitle->setText("数码检测故障");
    m_pendingDetonate_IndicatorLightTitle = new QLabel(ui->groupBox_2);
    m_pendingDetonate_IndicatorLightTitle->setText("待引爆");
    m_skip_IndicatorLightTitle = new QLabel(ui->groupBox_2);
    m_skip_IndicatorLightTitle->setText("跳过");
    m_detonateSuccess_IndicatorLightTitle = new QLabel(ui->groupBox_2);
    m_detonateSuccess_IndicatorLightTitle->setText("引爆成功");
    m_detonateFail_IndicatorLightTitle = new QLabel(ui->groupBox_2);
    m_detonateFail_IndicatorLightTitle->setText("引爆失败");

    m_disconnect_IndicatorLight_2 = new QLabel(ui->groupBox_2);
    m_online_IndicatorLight_2 = new QLabel(ui->groupBox_2);
    m_digitalPendingDetect_IndicatorLight = new QLabel(ui->groupBox_2);
    m_digitalDetectErr_IndicatorLight = new QLabel(ui->groupBox_2);
    m_pendingDetonate_IndicatorLight = new QLabel(ui->groupBox_2);
    m_skip_IndicatorLight = new QLabel(ui->groupBox_2);
    m_detonateSuccess_IndicatorLight = new QLabel(ui->groupBox_2);
    m_detonateFail_IndicatorLight = new QLabel(ui->groupBox_2);

    ui->gridLayout_3->addWidget(m_disconnect_IndicatorLightTitle_2,0,0,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout_3->addWidget(m_online_IndicatorLightTitle_2,0,1,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout_3->addWidget(m_digitalPendingDetect_IndicatorLightTitle,0,2,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout_3->addWidget(m_digitalDetectErr_IndicatorLightTitle,0,3,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout_3->addWidget(m_pendingDetonate_IndicatorLightTitle,0,4,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout_3->addWidget(m_skip_IndicatorLightTitle,0,5,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout_3->addWidget(m_detonateSuccess_IndicatorLightTitle,0,6,Qt::AlignHCenter | Qt::AlignBottom);
    ui->gridLayout_3->addWidget(m_detonateFail_IndicatorLightTitle,0,7,Qt::AlignHCenter | Qt::AlignBottom);

    ui->gridLayout_3->addWidget(m_disconnect_IndicatorLight_2,1,0);
    ui->gridLayout_3->addWidget(m_online_IndicatorLight_2,1,1);
    ui->gridLayout_3->addWidget(m_digitalPendingDetect_IndicatorLight,1,2);
    ui->gridLayout_3->addWidget(m_digitalDetectErr_IndicatorLight,1,3);
    ui->gridLayout_3->addWidget(m_pendingDetonate_IndicatorLight,1,4);
    ui->gridLayout_3->addWidget(m_skip_IndicatorLight,1,5);
    ui->gridLayout_3->addWidget(m_detonateSuccess_IndicatorLight,1,6);
    ui->gridLayout_3->addWidget(m_detonateFail_IndicatorLight,1,7);

    ui->label->setText("等待");
    ui->graphicsView_2->setFrameStyle(0);
    ui->graphicsView_2->setFrameShape(QFrame::NoFrame);
    ui->graphicsView_2->setLineWidth(2);
//    ui->graphicsView_2->setMidLineWidth(2);
    qDebug()<<ui->graphicsView_2->frameShape();
    qDebug()<<ui->graphicsView_2->frameShadow();
    ui->graphicsView_2->setFrameShadow(QFrame::Raised);
    m_chart = new QChart();
    m_chart->setDropShadowEnabled(true);
    m_chart->legend()->hide();
    //    m_chart->setTheme(QChart::ChartThemeDark);
    m_xAxis = new QValueAxis();
    m_xAxis->setRange(0,15);
    //    m_xAxis->setMinorTickCount(10);
    m_xAxis->setTitleText("s");
    m_yAxis = new QValueAxis();
    m_yAxis->setRange(0,360);
    //    m_yAxis->setMinorTickCount(10);
    m_yAxis->setTitleText("V");
    m_chart->addAxis(m_xAxis,Qt::AlignBottom);
    m_chart->addAxis(m_yAxis,Qt::AlignLeft);
    ui->graphicsView->setChart(m_chart);
}
