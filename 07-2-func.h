#pragma once

// ���������� �������

/// <summary>
/// ��������� ����� ���� �����
/// </summary>
/// <param name="number">������������� �����, ���������� �� �������� (�����)</param>
/// <returns>����� ���� �����</returns>
int sum(int number);

/// <summary>
/// ��������� ����� ���� �����
/// </summary>
/// <param name="number">������������� �����, ���������� �� �������� (�����)</param>
/// <param name="result">������� ����� ���� ����� �� ������</param>
void sum(int number, int& result/*out*/);

/// <summary>
/// ��������� ����� ���� �����
/// </summary>
/// <param name="number">������������� �����, ���������� �� �������� (�����)</param>
/// <param name="result">������� ����� ���� �� ���������</param>
void sum(int number, int* result/*out*/);
