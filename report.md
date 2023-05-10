##Отчет
*В ходе данной лабораторной работы был зедействован стандартный ГПСЧ языка C++. Были сгенерированы бинарные последовательности длиной 128 бит. 
Эти последовательности были проанализированы тремя, ранее написанными, статистическими тестами NIST для проверки случайности этих последовательностей. 
Результаты тестов изложены далее:*

'''
Sequence 1:
11111111101010000100100000101000011010110100100110100101001000111100010010010000100001111011100010100110001100011100011100010101
a) Frequency bitwise test: p_value = 0.288844
b) Identical consecutive bits test: p_value = 0.844472
c) Longest sequence of ones in a block test: p_value = 1.25622e-22

Sequence 2:
10110010010111000111111110110100111000001001001110000110001010001100100100000101001000000111010010011111010111110111110110011011
a) Frequency bitwise test: p_value = 0.859684
b) Identical consecutive bits test: p_value = 0.70908
c) Longest sequence of ones in a block test: p_value = 2.1069e-11

Sequence 3:
11110011111011010110111101111100111110011100100100110110101100111011101101101111001011001010000001111101101101011010000111011111
a) Frequency bitwise test: p_value = 0.00467773
b) Identical consecutive bits test: p_value = 0.698535
c) Longest sequence of ones in a block test: p_value = 0.00116978

Sequence 4:
00000111110000111101111110111010011100110100111110001010010100000101111101011010010100010001100011111011000001011111010111111010
a) Frequency bitwise test: p_value = 0.288844
b) Identical consecutive bits test: p_value = 0.577431
c) Longest sequence of ones in a block test: p_value = 9.21922e-10

Sequence 5:
10110100111011100011001000011100110011000111111000000011111000110001011111000010011000111111100011110000011110111011110100101010
a) Frequency bitwise test: p_value = 0.4795
b) Identical consecutive bits test: p_value = 0.141122
c) Longest sequence of ones in a block test: p_value = 0.0109202
'''

###Вывод: как видно из третьего теста случайно последовательностью можно назвать только последовательность №5
