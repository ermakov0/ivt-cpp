#pragma once

// Объявления функций

/// <summary>
/// Посчитать сумму цифр числа
/// </summary>
/// <param name="number">Положительное число, переданное по значению (копия)</param>
/// <returns>Сумма цифр числа</returns>
int sum(int number);

/// <summary>
/// Посчитать сумму цифр числа
/// </summary>
/// <param name="number">Положительное число, переданное по значению (копия)</param>
/// <param name="result">Возврат суммы цифр числа по ссылке</param>
void sum(int number, int& result/*out*/);

/// <summary>
/// Посчитать сумму цифр числа
/// </summary>
/// <param name="number">Положительное число, переданное по значению (копия)</param>
/// <param name="result">Возврат суммы цифр по указателю</param>
void sum(int number, int* result/*out*/);
