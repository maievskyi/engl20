#pragma once
#ifndef ENGL20_H 
#define ENGL20_H
#define TEXTIN "text00.txt"
#define EN 32 //размер англ текста (одного слова) в структ word
#define EN1 256 //размер имени файла уже созданного с структурами word 
#define RU 32 //размер рус текста в структ word
#define MAX_WORD 8//начальный размер массива структур word
#define MULT_DIN_MEM 2 // в сколько раз буд умн размер масс стр при недостижении EOF
#define NAMENOSORT 64 //длинна им-ни сепарированного несортированного ф-ла
#define DELAYKEY 10 // ЗАДЕРЖКА * 0.5 сек для выбора по клавише или таймеру
#define NEWTEXT 1 //ФЛАГ ДЛЯ КОДА НОВОГО ТЕКСТА
#define OLDTEXT 0 //ФЛАГ ДЛЯ КОДА СТАРОГО ТЕКСТА
#define QUANTITYCHARNAME 256 //?? кол-во байт в одной записи в масс имён ф-в прогр ??
#define QUANTITYNAME 1 // кол-во записей элементов стр-тур в массиве имён ф-в программы
// #define d ((&struct word a.c)-(&struct word a)) 
//#define TEXT0  // неразб ткст выв-ся в станд. поток консоли НА ЭКРАН (для  отладки)
//#define TEXTD //вывод считанн текста до сепарац  debug
//#define SEPARATED  // sepmini()
#define SORT






#endif
