#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRegularExpression>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::convertCurrency);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::convertCurrency() {
    QString amountText = ui->lineEdit->text();

    // Проверка корректности ввода
    QRegularExpression regex("^[0-9]*\\.?[0-9]+$");
    if (!regex.match(amountText).hasMatch()) {
        QMessageBox::warning(this, "Ошибка ввода", "Введите корректную сумму.");
        return;
    }

    double amount = amountText.toDouble();
    QString currency = ui->comboBox->currentText();
    double conversionRate = 1.0;

    // Установите здесь свои курсы
    if (currency == "USD") {
        conversionRate = 2.5; // Пример: 1 USD = 2.5 BYN
    } else if (currency == "EUR") {
        conversionRate = 2.8; // Пример: 1 EUR = 2.8 BYN
    } else if (currency == "BYN") {
        conversionRate = 1.0; // 1 BYN = 1 BYN
    }

    double result = amount * conversionRate;
    ui->label->setText("Результат: " + QString::number(result, 'f', 2) + " BYN");
}
