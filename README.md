[![CI/CD GitHub Actions](https://github.com/Samvel228/test2/actions/workflows/test-action.yml/badge.svg)](https://github.com/Samvel228/test2/actions/workflows/test-action.yml)
[![Coverage Status](https://coveralls.io/repos/Samvel228/test2/badge.svg?branch=main)](https://coveralls.io/github/Samvel228/test2?branch=main)
[![Quality Gate](https://sonarcloud.io/api/project_badges/measure?project=Samvel228_test2&metric=alert_status)](https://sonarcloud.io/dashboard?id=Samvel228_test2)
[![Bugs](https://sonarcloud.io/api/project_badges/measure?project=Samvel228_test2&metric=bugs)](https://sonarcloud.io/summary/new_code?id=Samvel228_test2)
[![Code smells](https://sonarcloud.io/api/project_badges/measure?project=Samvel228_test2&metric=code_smells)](https://sonarcloud.io/dashboard?id=Samvel228_test2)

# План тестирования

## Атестационное тестирование:  
Тест А1 (положительный)  
Начальное состояние: Открытый терминал  
Действие: Пользователь запускает программу и пишет 1  
затем 2  
Ожидаемый результат:2

Тест А2 (положительный)  
Начальное состояние: Открытый терминал  
Действие: Пользователь запускает программу и пишет 2  
затем 2, 2, 2  
Ожидаемый результат: no roots  
## Блочное тестирование:

### Функция `double* square(double a, double b, double c)`

#### Тест Б1.1:  
Входные данные: a=1, b=-3, c=2 (дискриминант > 0)  
Ожидаемый результат: Два корня, вернуть указатель на массив [2, 1].

#### Тест Б1.2:  
Входные данные: a=1, b=-2, c=1 (дискриминант = 0)  
Ожидаемый результат: Один корень, вернуть указатель на массив [1].

#### Тест Б1.3:  
Входные данные: a=2, b=2, c=2 (дискриминант < 0)   
Ожидаемый результат: Нет действительных корней, вернуть NULL.

### Функция `int fibonachi(int num)`

#### Тест Б2.1:  
Входные данные: num = 5  
Ожидаемый результат: 5.  

#### Тест Б2.2:  
Входные данные: num = 10  
Ожидаемый результат: 55.  

#### Тест Б2.3:
Входные данные: num = -1  
Ожидаемый результат: 0.  

#### Тест Б2.3:
Входные данные: num = 1  
Ожидаемый результат: 1.  
## Интеграционное тестирование:

#### Тест И1:
Методы: `int fibonachi(int num)`, `double* square(double a, double b, double c)`  
Описание: Проверка использования результата функции `fibonachi` в функции `square`  
Входные данные: a= fibonachi(5) b= fibonachi(5) c= fibonachi(5)  
Ожидаемый результат: Результат `fibonachi(5)` будет использован в `square` для расчета корней.  
