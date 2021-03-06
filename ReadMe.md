# Проект студентов СКФУ группы `ИНС-бп-о-15-1` по созданию 2-х колесного мобильного балансирующего робота `МБР`, 2018-2019 уч. г.

### Программное обеспечение в данном репозиторий отвечает за взаимодействие с датчиками расстояния. 
Данная прошивка содержит у себя в оперативной памяти последние актуальные значения датчиков расстояния и по запросу от основной системы управления отправляет необходимые данные по интерфейсу `UART`

#### Как пользоваться репозиторием:
 - папка `CMSIS` содержит низкоуровневые библиотеки для микроконтроллера
 - папка `HAL` содержит высокоуровневые библиотеки `HAL - hardware abstraction layer` и низкоуровневые API функции `LL - low level` для взаимодействия с периферийными устройствами микроконтроллера
 - папка `Prj` содержит файлы, относящиеся к данному проекту (например, `main.c`,`main.h`, `rcc.c`, `rcc.h` и т.д.)
 - папка `docs` содержит необходимую документацию для данного проекта, в частности datasheet на микроконтроллер, описание библиотек `HAL` и `LL` и datasheet на отладочную плату `STM32L476 Discovery`
 - файл `Project map.md` содержит карту проекта, в нем описаны используемые периферийные устройства микроконтроллера, их подключение к портам ввода/вывода и каналам `DMA - Direct memory access`.
 - файл `STM32L476VG_use_periph.ioc` является файлом генератора кода `STM32CubeMx`. В данном проекте файл используется для наглядной демонстрации подключения используемой периферии к портам ввода/вывода и каналам `DMA` (дублирует часть функции файла `Project map.md`)
 
Внешние, по отношению к данному проекту библиотеки, копируются в корень папки с проектом.