#ifndef TEXT_H
#define TEXT_H
std::string txt_gotovo = " готово\n";
std::string txt_ = ". . .\nобучение: у вас есть здоровье. вы будете встречать монстров.\nу них есть характеристики, какая шапка на монстре, какой на нём шарф, какой у него любимый чай, и так далее.\nпри начале игры генерируется 4 шапки 4 шарфа 4 чая, у всех у них случайные значения, у шапки и шарфа это значение от -1 до 1, у чая это значение от 0 до 4.\nзначения характеристик первого монстра вы всегда видите, так что запомните значения шапок шарфов и чаёв\nмонстр вас будет кусать в зависемости от этих значений. монстр вас кусает когда сумма шапки и шарфа -1 и меньше,\nесли причина укуса в этом то нужно кусать монстра в ответ, тогда значение шапки либо шарфа увеличится (когда меняется значение то это пишется на экран)\nтакже монстр вас кусает когда значение чая 3 и выше, в этом случае нужно пройти мимо монстра\nу каждого монстра выберается случайная шапка, шарф и любимый чай (из тех которые сгенерировались при начале игры)\nесли монстр вас не укусил, вариант пройти мимо точно ничего не сделает\nтак же в игре есть много другого контента, изучайте игру\n. . .\n";
std::string txt0 = "код игры полностью написан jifug\n";
std::string txt_version = "4.3.4.17\n";
std::string txt1 = " МЕНЮ\n нажмите 1 (затем ENTER) чтобы начать играть. нажмите 2 (затем ENTER) чтобы продолжить игру.\n нажмите 3 (затем ENTER) чтобы прочитать обучение (без него вы не сможете нормально играть)\n";
std::string txt01 = " нажмите 4 чтобы поставить Русский язык\n";
std::string txt02 = " Press 5 to set English language(translated by DeepSeek)\n";

std::string txt2 = " 0 выйти из меню крафта (если кроме этого текста здесь ничего не написано, значит вы не можете ничего создать. если кроме этого текста здесь чтото написано, значит вы можете это создать)\n";
std::string txt3 = " 1 создать прибор для просмотра значения шапки за 0.600 кг железа (заряд 1)\n";
std::string txt4 = " 2 создать прибор для просмотра значения шарфа за 0.600 кг железа и 0.150 кг дерева (заряд на 1 использование)\n";
std::string txt5 = " 3 создать инвертор значений шапки и шарфа за 1.3 кг железа (заряд 1) (при исподьзовании 1 меняет на -1, -1 меняет на 1, 0 меняет на 0, использование работает одновременно на шапку и шарф)\n";
std::string txt6 = " 4 востановить 1 здоровье за 0.31 кг дерева\n";
std::string txt7 = " 5 зарядить 2 раза любой предмет на количество изначального заряда. за 0.300 кг никеля (если при создании у предмета заряд был 1, заряд увеличится на 1, если 10, то на 10. так же вы можете зарядить 2 разных предмета, либо один и тот же)\n";
std::string txt8 = " 6 востановить орган за 0.600 кг никеля\n";
std::string txt08 = " 19 востановить орган2 за 0.200 кг никеля\n";
std::string txt9 = " 7 увеличить иммунитет на 15 за 0.040 кг никеля и 0.070 кг железа\n";
std::string txt10 = " 8 уменьшить инфекцию на 15 за 0.070 кг никеля и 0.100 кг железа\n";
std::string txt11 = " 9 создать деревянного механического кота за 2.500 кг дерева (заряд 10)\n";
std::string txt12 = " 10 создать прибор для повышения значений металла за 2.000 кг дерева (заряд 1)\n";
std::string txt13 = " 11 создать прибор для повышения значений электростанций за 2.000 кг дерева (заряд 1)\n";
std::string txt14 = " 12 создать прибор для просмотра значений металла за 0.800 кг дерева (заряд 1)\n";
std::string txt15 = " 13 создать прибор для просмотра значений электростанций за 0.800 кг дерева (заряд 1)\n";
std::string txt16 = " 14 создать прибор для просмотра значений чая за 1.000 кг дерева (заряд 1)\n";
std::string txt016 = " 25 создать жгут за ";
std::string txt017 = " кг стали\n";
std::string txt018 = "\n у вас жгутов: ";
std::string txt019 = " (7 наложить/снять жгут)";
std::string txt020 = " наложен на кровотичение: ";
std::string txt021 = "\n (0 выход) напишите индекс жгута чтобы взаимодействовать с ним";
std::string txt022 = "\n выберите кровотичение чтобы наложить на него жгут";
std::string txt023 = "\n вы сняли жгут";


std::string txt17 = " выберите";
std::string txt18 = " предмет чей заряд увеличить на изначальный заряд ";
std::string txt19 = " ещё раз";
std::string txtZ1 = "1 прибор для просмотра значений шапок.";
std::string txtZ2 = " 2 прибор для просмотра значений шарфов.";
std::string txtZ3 = " 3 инвертор.";
std::string txtZ4 = " 4 деревянный механический кот.";
std::string txtZ5 = " 5 прибор для повышения значений металлов.";
std::string txtZ6 = " 6 прибор для повышения значений электростанций.";
std::string txtZ7 = " 7 прибор для просмотра значений металлов.";
std::string txtZ8 = " 8 прибор для просмотра значений электростанций.";
std::string txtZ9 = " 9 прибор для просмотра значений чая.";
std::string txtZ10 = " 10 прибор для уменьшения значений чая.";
std::string txtZ11= "";
std::string txtZ12 = "";

std::string txt20 = "\n . . . . . ошибка . . . . .\n\n";
std::string txt21 = " 0 выход. перемещение на WASD. E собрать предмет. F боевой режим. (работает только на английской раскладке)\n";
std::string txt22 = "\n . . . . . . . . . . началась новая игра! . . . . . . . . . .\n\n";
std::string txt23 = " . . . . . вас укусил монстр . . . . .\n";
std::string txt24 = "знатная";
std::string txt25 = "урановая";
std::string txt26 = "из стекловаты";
std::string txt27 = "из клубники и железных пластин";
std::string txt28 = "красный";
std::string txt9201 = " введите 2 числа через пробел, первое число отвечает за количество шарфов и шапок (введёте 10 будет 10 шапок и 10 шарфов) второе число отвечает за количество чаёв\n";
std::string txt9202 = " готово, количество шапок и шарфов: ";
std::string txt9203 = " количество чаёв: ";
std::string null = " null ";
std::string txt29 = "розовый";
std::string txt30 = "белый с жёлтой полоской";
std::string txt31 = "синий";
std::string txt32 = "зелёный";
std::string txt33 = "чёрный";
std::string txt34 = "кофе";
std::string txt35 = "вкусный";
std::string txt36 = "\n . . . шапка монстра:  ";
std::string txt37 = "  шарф монстра:  ";
std::string txt38 = "  любимый чай монстра:  ";
std::string txt39 = "ТЭС";
std::string txt40 = "ГЭС";
std::string txt41 = "ВЭС";
std::string txt42 = "ГеоТЭС";
std::string txt43 = "кобальт";
std::string txt44 = "вольфрам";
std::string txt45 = "хром";
std::string txt46 = "цинк";
std::string txt47 = " любимый тип электростанций монстра:  ";
std::string txt48 = "  любимый металл монстра:  ";
std::string txt49 = "  . . .\n\n";
std::string txt50 = "\n 0 попасть в меню. 1 укусить. 2 пройти мимо. 3 поздароваться. 4 рассказать анекдот. 9 меню крафта.";
std::string txt51 = "\n . . . . . вы остановились идти по тропинке в лесу . . . . .";
std::string txt551 = " 3 пойти в лес за деревом.";
std::string txt552 = " 4 ничего не делать. 9 меню крафта.\n";
std::string txt553 = " 0 попасть в меню. 1 продолжить идти.";
std::string txt554 = " 2 пойти в пищеру.";
std::string txt0554 = " 5 пойти собирать листья.";
std::string txt0555 = "\n у вас бинтов: ";
std::string txt00555 = " (6 перебентовать кровотичение бинтом)";
std::string txt10555 = " ";

std::string txt52 = "\n [===============\n";
std::string txt502 = " ваше здоровье:  ";
std::string txt53 = "  орган:  ";
std::string txt053 = "  орган2:  ";
std::string txt54 = "  инфекция:  ";
std::string txt054 = "  болезнь:  ";
std::string txt55 = "  иммунитет:  ";

std::string txt_exit = " 0 выход\n";
std::string txtK1 = " 1 перебентовать лёгкое кровотичение\n";
std::string txtK2 = " 2 перебентовать среднее кровотичение\n";
std::string txtK3 = " 3 перебентовать сильное кровотичение\n";
std::string txtK4 = " 4 перебентовать критически мощное кровотичение\n";


std::string txt055 = "\n у вас лёгкое кровотечение";
std::string txt056 = "\n у вас среднее кровотичение";
std::string txt057 = "\n у вас сильное кровотичение";
std::string txt058 = "\n у вас критически мощное кровотичение";

std::string txt56 = "\n у вас кг железа: ";
std::string txt57 = "\n у вас кг меди: ";
std::string txt58 = "\n у вас кг дерева: ";
std::string txt59 = "\n у вас кг угля: ";
std::string txt60 = "\n у вас кг никеля: ";
std::string txt61 = "\n у вас кг стали: ";
std::string txtListya = "\n у вас листьев: ";

std::string txt62 = "\n заряд прибора для увелеченя значений шапок: ";
std::string txt062 = " (11 использовать)";
std::string txt63 = "\n заряд прибора для увелечения значений шарфов: ";
std::string txt063 = " (22 использовать)";
std::string txt64 = "\n заряд инвертора: ";
std::string txt064 = " (33 использовать)";

std::string txt65 = "\n заряд деревянного механического кота: ";

std::string txt66 = "\n заряд прибора для увелечения значений металлов: ";
std::string txt065 = " (44 использовать)";
std::string txt67 = "\n заряд прибора для увелечения значений электростанций: ";
std::string txt066 = " (55 использовать)";
std::string txt68 = "\n заряд прибора для просмотра значений металлов: ";
std::string txt067 = " (66 использовать)";
std::string txt69 = "\n заряд прибора для просмотра значений электростанций: ";
std::string txt068 = " (77 использовать)";
std::string txt70 = "\n заряд прибора для просмотра значений чая: ";
std::string txt069 = " (88 использовать)";
std::string txt700 = "\n заряд прибора для уменьшения чая: ";
std::string txt0700 = " (99 использовать)";

std::string txt701 = "\n у вас лекарств:";
std::string txt0701 = " (10 использовать)";
std::string txt702 = "\n выберите какое лекарство использовать ";
std::string txt703 = "от ";
std::string txt704 = " до ";

std::string txt71 = "\n ===============]";
std::string txt72 = "\n вы прошли монстров:  ";
std::string txt73 = "  вы прошли за всё время:  ";
std::string txt072 = " рекорд по пройденным монстрам: ";
std::string txt74 = "  время в игре за всё время в секундах:  ";
std::string txt073 = "  всего забегов:  ";
std::string txt75 = " . . . . . шапка +1 . . . . .\n";
std::string txt76 = " . . . . . шарф +1 . . . . .\n";
std::string txt77 = " . . . . . чай +1 . . . . .\n";
std::string txt78 = " . . . . . ЭС -1 . . . . .\n";
std::string txt79 = " . . . . . металл -1 . . . . .\n";

std::string txt80 = " монстр: здраствуйте (1 ответить: а почему меня здесь все кусают? 2 ответить: а почему тут у всех шапки шарфы и любимые чаи у всех одинаковые?)\n";
std::string txt81 = " монстр: а потому что здесь все добрые и милые, но у всех разные представления о том как нужно ввести себя при встрече (1 ответить: ясно. 2 ответить: я кстати достовляю урановую руду на гидрометаллургический завод (правда))\n";
std::string txt82 = " монстр: а потому что на острове малая токмачка только один магазин N4020, в нём только 4 вида шапок, 4 вида шарфов, зелёный чёрный чай, кофе, и несколько чаёв с неизвестным названием но некоторые из них вкусные (1 ответить: услышал тебя родной. 2 ответить: а на что их покупают?)\n";
std::string txt83 = " монстр: чё те ясно\n";
std::string txt84 = " монстр: ты не боишься монстра 170? (1 ответить: боюсь, а кто это? (истина) 2 ответить: мне поможет монстр 61, я доставляю 2 тонны урановой руды в кармане на его гидрометаллургический завод. и вообще я единственный кто это делает (правда))\n";
std::string txt082 = " монстр: на уран который извлекают из урановой руды на гидрометаллургическом заводе, а урановую руду добывают на урановой шахте, которую достовляют на гидрометаллургический завод по этой тропинке, идя по этой тропинке можно встретить магазин N4020, по сути это единственная тропинка и единственные 3 здания на всей малой токмачке, всё население малой токмачки живёт в палатках в лесу\n";
std::string txt084 = " монстр: он очень злой и страшный, и вообще он 170 килограмм урановой руды добыл\n";
std::string txt0083 = " монстр: он тебя не защитит, ведь он добыл урановой руды в 2.786885245901639 раза меньше\n";

std::string txt85 = " монстр: могу вам дать ";
std::string txt86 = " килограмм железа либо ";
std::string txt87 = " калограмм дерева (1 взять железо 2 взять дерево)\n";
std::string txt88 = " килограмм никеля либо ";
std::string txt89 = " калограмм меди (1 взять никель 2 взять медь)\n";

std::string txt90 = " . . . . . шапка -1 . . . . .\n";
std::string txt91 = " . . . . . шарф -1 . . . . .\n";
std::string txt92 = " . . . . . чай -1 . . . . .\n";
std::string txt93 = " . . . . . ЭС +1 . . . . .\n";
std::string txt94 = " . . . . . металл +1 . . . . .\n";
std::string txt95 = " значение шапки монстра: ";
std::string txt96 = " значение шарфа монстра: ";
std::string txt97 = " значение любимого металла монстра: ";
std::string txt98 = " значение любимого типа электростанций монстра: ";
std::string txt99 = " значение любимого чая монстра: ";
std::string txt111 = "\n - - - - - вы мертвы - - - - -\n\n";
std::string txt112 = " 15 создать копьё за 0.100 кг дерева (прочность 9)\n";
std::string txt113 = " 16 создать факел за 0.400 кг дерева (прочность 9)\n";
std::string txt114 = " 17 создать лук за 0.400 кг дерева (прочность 9)\n";
std::string txt1014 = " 18 создать прибор для уменьшения значения чая за 2.000 кг железа (заряд 1)\n";
std::string txt1015 = " 20 создать бинт за 4 листьев\n";
std::string txt1016 = " 21 создать медную печь за 3.0 кг меди\n";
std::string txt1017 = " 22 создать 0.100 кг угля в медной печи за 0.310 кг дерева\n";
std::string txt1018 = " 23 создать сталь в медной печи за 0.100 кг железа и 0.050 кг угля (топливо дерево или уголь. минимум 0.010 кг)\n";
std::string txt1019 = " выберите вид топлива (0 выход. 1 дерево. 2 уголь)\n";
std::string txt1020 = " напишите сколько кг топлива использовать\n";
std::string txt1021 = " 24 создать лекарство против болезни за 0.200 кг стали и 1 бинт\n";

std::string txt115 = " вы победили\n";
std::string txt116 = " вы проиграли\n";
std::string txt117 = " монстр отнял у вас факел и им ударил вас\n";
std::string txt118 = " монстр спрятался за деревом и кинул в вас факел\n";
std::string txt119 = " вы спрятались за деревом и кинули в монстра факел\n";
std::string txt120 = " монстр выбил копьё из ваших рук и ударил вас (копьё вы подобрали обратно)\n";
std::string txt121 = "\n прочность копья: ";
std::string txt122 = "\n прочность факела: ";
std::string txt123 = "\n прочность лука: ";
std::string txt124 = " никель + 0.020\n\n";
std::string txt125 = " железо + 0.020\n\n";
std::string txt126 = " на вас сработала ловушка\n\n";
std::string txt127 = " шапка и шарф инвертированы\n ";
std::string txt128 = " вы обезвредили ловушку копьём\n\n";
std::string txt129 = "  кровь:  ";
std::string txt130 = " вы собрали листьев: ";

std::string text_v_lesu = " . . . . . (0 выход) идя в лес вы наткулись на монстра 170, его оружие: ";
std::string txt_monstr = " null\n";
std::string txtM1 = "ничего . . . . .\n";
std::string txtM2 = "копьё . . . . .\n";
std::string txtM3 = "факел . . . . .\n";
std::string txtM4 = "лук . . . . .\n";
std::string txtM5 = "дубинка . . . . .\n";
std::string txtMA1 = " нажмите 1 чтобы атаковать монстра копьём\n";
std::string txtMA2 = " нажмите 2 чтобы атаковать монстра факелом\n";
std::string txtMA3 = " нажмите 3 чтобы атаковать монстра луком\n";

std::string txt100 = "[";
std::string txt101 = "]";
std::string txt110 = " . . . ";

void russian() {
    txt_gotovo = " готово\n";
    txt_ = ". . .\nобучение: у вас есть здоровье. вы будете встречать монстров.\nу них есть характеристики, какая шапка на монстре, какой на нём шарф, какой у него любимый чай, и так далее.\nпри начале игры генерируется 4 шапки 4 шарфа 4 чая, у всех у них случайные значения, у шапки и шарфа это значение от -1 до 1, у чая это значение от 0 до 4.\nзначения характеристик первого монстра вы всегда видите, так что запомните значения шапок шарфов и чаёв\nмонстр вас будет кусать в зависемости от этих значений. монстр вас кусает когда сумма шапки и шарфа -1 и меньше,\nесли причина укуса в этом то нужно кусать монстра в ответ, тогда значение шапки либо шарфа увеличится (когда меняется значение то это пишется на экран)\nтакже монстр вас кусает когда значение чая 3 и выше, в этом случае нужно пройти мимо монстра\nу каждого монстра выберается случайная шапка, шарф и любимый чай (из тех которые сгенерировались при начале игры)\nесли монстр вас не укусил, вариант пройти мимо точно ничего не сделает\nтак же в игре есть много другого контента, изучайте игру\n. . .\n";
    txt0 = "код игры полностью написан jifug\n";
    txt1 = " МЕНЮ\n нажмите 1 (затем ENTER) чтобы начать играть. нажмите 2 (затем ENTER) чтобы продолжить игру.\n нажмите 3 (затем ENTER) чтобы прочитать обучение (без него вы не сможете нормально играть)\n";
    txt2 = " 0 выйти из меню крафта (если кроме этого текста здесь ничего не написано, значит вы не можете ничего создать. если кроме этого текста здесь чтото написано, значит вы можете это создать)\n";
    txt3 = " 1 создать прибор для просмотра значения шапки за 0.600 кг железа (заряд 1)\n";
    txt4 = " 2 создать прибор для просмотра значения шарфа за 0.600 кг железа и 0.150 кг дерева (заряд на 1 использование)\n";
    txt5 = " 3 создать инвертор значений шапки и шарфа за 1.3 кг железа (заряд 1) (при исподьзовании 1 меняет на -1, -1 меняет на 1, 0 меняет на 0, использование работает одновременно на шапку и шарф)\n";
    txt6 = " 4 востановить 1 здоровье за 0.31 кг дерева\n";
     txt7 = " 5 зарядить 2 раза любой предмет на количество изначального заряда. за 0.300 кг никеля (если при создании у предмета заряд был 1, заряд увеличится на 1, если 10, то на 10. так же вы можете зарядить 2 разных предмета, либо один и тот же)\n";
     txt8 = " 6 востановить орган за 0.600 кг никеля\n";
     txt08 = " 19 востановить орган2 за 0.200 кг никеля\n";
     txt9 = " 7 увеличить иммунитет на 15 за 0.040 кг никеля и 0.070 кг железа\n";
     txt10 = " 8 уменьшить инфекцию на 15 за 0.070 кг никеля и 0.100 кг железа\n";
     txt11 = " 9 создать деревянного механического кота за 2.500 кг дерева (заряд 10)\n";
     txt12 = " 10 создать прибор для повышения значений металла за 2.000 кг дерева (заряд 1)\n";
     txt13 = " 11 создать прибор для повышения значений электростанций за 2.000 кг дерева (заряд 1)\n";
     txt14 = " 12 создать прибор для просмотра значений металла за 0.800 кг дерева (заряд 1)\n";
     txt15 = " 13 создать прибор для просмотра значений электростанций за 0.800 кг дерева (заряд 1)\n";
     txt16 = " 14 создать прибор для просмотра значений чая за 1.000 кг дерева (заряд 1)\n";
     txt17 = " выберите";
     txt18 = " предмет чей заряд увеличить на изначальный заряд ";
     txt19 = " ещё раз";

     txt016 = " 25 создать жгут за ";
     txt017 = " кг стали\n";
     txt018 = "\n у вас жгутов: ";
     txt019 = " (7 наложить/снять жгут)";

     txtZ1 = "1 прибор для просмотра значений шапок.";
     txtZ2 = " 2 прибор для просмотра значений шарфов.";
     txtZ3 = " 3 инвертор.";
     txtZ4 = " 4 деревянный механический кот.";
     txtZ5 = " 5 прибор для повышения значений металлов.";
     txtZ6 = " 6 прибор для повышения значений электростанций.";
     txtZ7 = " 7 прибор для просмотра значений металлов.";
     txtZ8 = " 8 прибор для просмотра значений электростанций.";
     txtZ9 = " 9 прибор для просмотра значений чая.";
     txtZ10 = " 10 прибор для уменьшения значений чая.";
     txtZ11 = "";
     txtZ12 = "";

     txt20 = "\n . . . . . ошибка . . . . .\n\n";
     txt21 = " 0 выход. перемещение на WASD. E собрать предмет. F боевой режим. (работает только на английской раскладке)\n";
     txt22 = "\n . . . . . . . . . . началась новая игра! . . . . . . . . . .\n\n";
     txt23 = " . . . . . вас укусил монстр . . . . .\n";
     txt24 = "знатная";
     txt25 = "урановая";
     txt26 = "из стекловаты";
     txt27 = "из клубники и железных пластин";
     txt28 = "красный";
     txt9201 = " введите 2 числа через пробел, первое число отвечает за количество шарфов и шапок (введёте 10 будет 10 шапок и 10 шарфов) второе число отвечает за количество чаёв\n";
     txt9202 = " готово, количество шапок и шарфов: ";
     txt9203 = " количество чаёв: ";
    txt29 = "розовый";
   txt30 = "белый с жёлтой полоской";
    txt31 = "синий";
     txt32 = "зелёный";
   txt33 = "чёрный";
    txt34 = "кофе";
    txt35 = "вкусный";
     txt36 = "\n . . . шапка:  ";
    txt37 = "  шарф:  ";
    txt38 = "  любимый чай:  ";
txt39 = "ТЭС";
    txt40 = "ГЭС";
   txt41 = "ВЭС";
    txt42 = "ГеоТЭС";
 txt43 = "кобальт";
     txt44 = "вольфрам";
     txt45 = "хром";
     txt46 = "цинк";
     txt47 = " любимый тип электростанций:  ";
     txt48 = "  любимый металл:  ";
     txt49 = "  . . .\n\n";
     txt50 = "\n 0 попасть в меню. 1 укусить. 2 пройти мимо. 3 поздароваться. 4 рассказать анекдот. 9 меню крафта.";
     txt51 = "\n . . . . . вы остановились идти по тропинке в лесу . . . . .";
     txt551 = " 3 пойти в лес за деревом.";
     txt552 = " 4 ничего не делать. 9 меню крафта.\n";
     txt553 = " 0 попасть в меню. 1 продолжить идти.";
     txt554 = " 2 пойти в пищеру.";
     txt0554 = " 5 пойти собирать листья.";
     txt0555 = "\n у вас бинтов: ";
     txt00555 = " (6 перебентовать кровотичение бинтом)";

    txt52 = "\n [===============\n";
   txt502 = " ваше здоровье:  ";
   txt53 = "  орган:  ";
     txt053 = "  орган2:  ";
    txt54 = "  инфекция:  ";
    txt054 = "  болезнь:  ";
  txt55 = "  иммунитет:  ";

    txt_exit = " 0 выход\n";
     txtK1 = " 1 перебентовать лёгкое кровотичение\n";
 txtK2 = " 2 перебентовать среднее кровотичение\n";
    txtK3 = " 3 перебентовать сильное кровотичение\n";
    txtK4 = " 4 перебентовать критически мощное кровотичение\n";


   txt055 = "\n у вас лёгкое кровотечение";
   txt056 = "\n у вас среднее кровотичение";
    txt057 = "\n у вас сильное кровотичение";
    txt058 = "\n у вас критически мощное кровотичение";

    txt56 = "\n у вас кг железа: ";
    txt57 = "\n у вас кг меди: ";
    txt58 = "\n у вас кг дерева: ";
     txt59 = "\n у вас кг угля: ";
   txt60 = "\n у вас кг никеля: ";
   txt61 = "\n у вас кг стали: ";
    txtListya = "\n у вас листьев: ";

   txt62 = "\n заряд прибора для увелеченя значений шапок: ";
    txt062 = " (11 использовать)";
  txt63 = "\n заряд прибора для увелечения значений шарфов: ";
   txt063 = " (22 использовать)";
     txt64 = "\n заряд инвертора: ";
   txt064 = " (33 использовать)";

    txt65 = "\n заряд деревянного механического кота: ";

  txt66 = "\n заряд прибора для увелечения значений металлов: ";
    txt065 = " (44 использовать)";
   txt67 = "\n заряд прибора для увелечения значений электростанций: ";
    txt066 = " (55 использовать)";
  txt68 = "\n заряд прибора для просмотра значений металлов: ";
   txt067 = " (66 использовать)";
   txt69 = "\n заряд прибора для просмотра значений электростанций: ";
   txt068 = " (77 использовать)";
  txt70 = "\n заряд прибора для просмотра значений чая: ";
    txt069 = " (88 использовать)";
    txt700 = "\n заряд прибора для уменьшения чая: ";
  txt0700 = " (99 использовать)";

  txt701 = "\n у вас лекарств:";
     txt0701 = " (10 использовать)";
    txt702 = "\n выберите какое лекарство использовать ";
    txt703 = "от ";
   txt704 = " до ";

   txt71 = "\n ===============]";
  txt72 = "\n вы прошли монстров:  ";
   txt73 = "  вы прошли за всё время:  ";
  txt072 = " рекорд по пройденным монстрам: ";
   txt74 = "  время в игре за всё время в секундах:  ";
   txt073 = "  всего забегов:  ";
   txt75 = " . . . . . шапка +1 . . . . .\n";
    txt76 = " . . . . . шарф +1 . . . . .\n";
   txt77 = " . . . . . чай +1 . . . . .\n";
   txt78 = " . . . . . ЭС -1 . . . . .\n";
     txt79 = " . . . . . металл -1 . . . . .\n";

     txt80 = " монстр: здраствуйте (1 ответить: а почему меня здесь все кусают? 2 ответить: а почему тут у всех шапки шарфы и любимые чаи у всех одинаковые?)\n";
    txt81 = " монстр: а потому что здесь все добрые и милые, но у всех разные представления о том как нужно ввести себя при встрече (1 ответить: ясно. 2 ответить: я кстати достовляю урановую руду на гидрометаллургический завод (правда))\n";
   txt82 = " монстр: а потому что на острове малая токмачка только один магазин N4020, в нём только 4 вида шапок, 4 вида шарфов, зелёный чёрный чай, кофе, и несколько чаёв с неизвестным названием но некоторые из них вкусные (1 ответить: услышал тебя родной. 2 ответить: а на что их покупают?)\n";
    txt83 = " монстр: чё те ясно\n";
    txt84 = " монстр: ты не боишься монстра 170? (1 ответить: боюсь, а кто это? (истина) 2 ответить: мне поможет монстр 61, я доставляю 2 тонны урановой руды в кармане на его гидрометаллургический завод. и вообще я единственный кто это делает (правда))\n";
    txt082 = " монстр: на уран который извлекают из урановой руды на гидрометаллургическом заводе, а урановую руду добывают на урановой шахте, которую достовляют на гидрометаллургический завод по этой тропинке, идя по этой тропинке можно встретить магазин N4020, по сути это единственная тропинка и единственные 3 здания на всей малой токмачке, всё население малой токмачки живёт в палатках в лесу\n";
    txt084 = " монстр: он очень злой и страшный, и вообще он 170 килограмм урановой руды добыл\n";
    txt0083 = " монстр: он тебя не защитит, ведь он добыл урановой руды в 2.786885245901639 раза меньше\n";

   txt85 = " монстр: могу вам дать ";
   txt86 = " килограмм железа либо ";
    txt87 = " калограмм дерева (1 взять железо 2 взять дерево)\n";
   txt88 = " килограмм никеля либо ";
 txt89 = " калограмм меди (1 взять никель 2 взять медь)\n";

  txt90 = " . . . . . шапка -1 . . . . .\n";
   txt91 = " . . . . . шарф -1 . . . . .\n";
  txt92 = " . . . . . чай -1 . . . . .\n";
   txt93 = " . . . . . ЭС +1 . . . . .\n";
   txt94 = " . . . . . металл +1 . . . . .\n";
   txt95 = " значение шапки монстра: ";
   txt96 = " значение шарфа монстра: ";
   txt97 = " значение любимого металла монстра: ";
   txt98 = " значение любимого типа электростанций монстра: ";
txt99 = " значение любимого чая монстра: ";
   txt111 = "\n - - - - - вы мертвы - - - - -\n\n";
   txt112 = " 15 создать копьё за 0.100 кг дерева (прочность 9)\n";
  txt113 = " 16 создать факел за 0.400 кг дерева (прочность 9)\n";
   txt114 = " 17 создать лук за 0.400 кг дерева (прочность 9)\n";
    txt1014 = " 18 создать прибор для уменьшения значения чая за 2.000 кг железа (заряд 1)\n";
     txt1015 = " 20 создать бинт за 4 листьев\n";
    txt1016 = " 21 создать медную печь за 3.0 кг меди\n";
     txt1017 = " 22 создать 0.100 кг угля в медной печи за 0.310 кг дерева\n";
     txt1018 = " 23 создать сталь в медной печи за 0.100 кг железа и 0.050 кг угля (топливо дерево или уголь. минимум 0.010 кг)\n";
    txt1019 = " выберите вид топлива (0 выход. 1 дерево. 2 уголь)\n";
     txt1020 = " напишите сколько кг топлива использовать\n";
     txt1021 = " 24 создать лекарство против болезни за 0.200 кг стали и 1 бинт\n";

     txt115 = " вы победили\n";
     txt116 = " вы проиграли\n";
    txt117 = " монстр отнял у вас факел и им ударил вас\n";
    txt118 = " монстр спрятался за деревом и кинул в вас факел\n";
   txt119 = " вы спрятались за деревом и кинули в монстра факел\n";
    txt120 = " монстр выбил копьё из ваших рук и ударил вас (копьё вы подобрали обратно)\n";
   txt121 = "\n прочность копья: ";
   txt122 = "\n прочность факела: ";
     txt123 = "\n прочность лука: ";
    txt124 = " никель + 0.020\n\n";
  txt125 = " железо + 0.020\n\n";
   txt126 = " на вас сработала ловушка\n\n";
     txt127 = " шапка и шарф инвертированы\n ";
    txt128 = " вы обезвредили ловушку копьём\n\n";
    txt129 = "  кровь:  ";
   txt130 = " вы собрали листьев: ";

    text_v_lesu = " . . . . . (0 выход) идя в лес вы наткулись на монстра 170, его оружие: ";
   txt_monstr = " null\n";
  txtM1 = "ничего . . . . .\n";
     txtM2 = "копьё . . . . .\n";
    txtM3 = "факел . . . . .\n";
     txtM4 = "лук . . . . .\n";
   txtM5 = "дубинка . . . . .\n";
    txtMA1 = " нажмите 1 чтобы атаковать монстра копьём\n";
     txtMA2 = " нажмите 2 чтобы атаковать монстра факелом\n";
    txtMA3 = " нажмите 3 чтобы атаковать монстра луком\n";

    


}
void english() {
    txt_ = ". . .\n"
        "Tutorial: you have health. You will meet monsters.\n"
        "They have characteristics: what hat the monster wears, what scarf, what favourite tea, etc.\n"
        "At the start of the game, 4 hats, 4 scarves and 4 teas are generated, each with random values: hat and scarf from -1 to 1, tea from 0 to 4.\n"
        "You always see the characteristics of the first monster, so remember the values of hats, scarves and teas.\n"
        "The monster bites depending on these values. It bites when the sum of hat and scarf is -1 or less.\n"
        "If the bite is caused by this, you should bite back – then the hat or scarf value will increase (when a value changes, it is printed on the screen).\n"
        "The monster also bites when the tea value is 3 or higher; in that case you should walk past the monster.\n"
        "Every monster gets a random hat, scarf and favourite tea (from those generated at the start).\n"
        "If the monster does not bite you, the ‘walk past’ action does nothing.\n"
        "There is also a lot of other content – explore the game!\n"
        ". . .\n";

    txt0 = "game code entirely written by jifug\n";
    txt1 = " MENU\n"
        " press 1 (then ENTER) to start the game. press 2 (then ENTER) to continue.\n"
        " press 3 (then ENTER) to read the tutorial (without it you will not be able to play properly)\n";

    txt2 = " 0 exit the crafting menu (if nothing else is written here, you cannot create anything. If something is written here, you can create it)\n";
    txt3 = " 1 craft a device to view the hat value for 0.600 kg of iron (1 charge)\n";
    txt4 = " 2 craft a device to view the scarf value for 0.600 kg of iron and 0.150 kg of wood (1 charge)\n";
    txt5 = " 3 craft an inverter of hat and scarf values for 1.3 kg of iron (1 charge) (when used, 1 becomes -1, -1 becomes 1, 0 stays 0; works on both hat and scarf at once)\n";
    txt6 = " 4 restore 1 health for 0.310 kg of wood\n";
    txt7 = " 5 recharge any item twice by its initial charge amount, for 0.300 kg of nickel (if an item had 1 charge when crafted, it gains 1 charge; if 10, gains 10. You may recharge two different items or the same one)\n";
    txt8 = " 6 restore the organ for 0.600 kg of nickel\n";
    txt08 = " 19 restore organ2 for 0.200 kg of nickel\n";
    txt9 = " 7 increase immunity by 15 for 0.040 kg of nickel and 0.070 kg of iron\n";
    txt10 = " 8 reduce infection by 15 for 0.070 kg of nickel and 0.100 kg of iron\n";
    txt11 = " 9 craft a wooden mechanical cat for 2.500 kg of wood (10 charges)\n";
    txt12 = " 10 craft a device to increase metal values for 2.000 kg wood (1 charge)\n";
    txt13 = " 11 craft a device to increase power plant values for 2.000 kg wood (1 charge)\n";
    txt14 = " 12 craft a device to view metal values for 0.800 kg wood (1 charge)\n";
    txt15 = " 13 craft a device to view power plant values for 0.800 kg wood (1 charge)\n";
    txt16 = " 14 craft a device to view tea values for 1.000 kg wood (1 charge)\n";
    txt17 = " choose";
    txt18 = " which item to recharge by its initial charge ";
    txt19 = " again";
    txtZ1 = "1 device to view hat values.";
    txtZ2 = " 2 device to view scarf values.";
    txtZ3 = " 3 inverter.";
    txtZ4 = " 4 wooden mechanical cat.";
    txtZ5 = " 5 device to increase metal values.";
    txtZ6 = " 6 device to increase power plant values.";
    txtZ7 = " 7 device to view metal values.";
    txtZ8 = " 8 device to view power plant values.";
    txtZ9 = " 9 device to view tea values.";
    txtZ10 = " 10 device to decrease tea values.";
    txtZ11 = "";
    txtZ12 = "";

    txt20 = "\n . . . . . error . . . . .\n\n";
    txt21 = " 0 exit. Move with WASD. E pick up item. F combat mode (only works on English layout)\n";
    txt22 = "\n . . . . . . . . . . a new game has begun! . . . . . . . . . .\n\n";
    txt23 = " . . . . . the monster bit you . . . . .\n";
    txt24 = "noble";
    txt25 = "uranium";
    txt26 = "of glass wool";
    txt27 = "of strawberry and iron plates";
    txt28 = "red";
    txt9201 = " enter 2 numbers separated by a space – the first is the number of scarves and hats (e.g. 10 → 10 hats and 10 scarves), the second is the number of teas\n";
    txt9202 = " done, number of hats and scarves: ";
    txt9203 = " number of teas: ";
    txt29 = "pink";
    txt30 = "white with a yellow stripe";
    txt31 = "blue";
    txt32 = "green";
    txt33 = "black";
    txt34 = "coffee";
    txt35 = "tasty";
    txt36 = "\n . . . hat:  ";
    txt37 = "  scarf:  ";
    txt38 = "  favourite tea:  ";
    txt39 = "TPP";
    txt40 = "HPP";
    txt41 = "WPP";
    txt42 = "GeoTPP";
    txt43 = "cobalt";
    txt44 = "tungsten";
    txt45 = "chromium";
    txt46 = "zinc";
    txt47 = " favourite power plant type:  ";
    txt48 = "  favourite metal:  ";
    txt49 = "  . . .\n\n";
    txt50 = "\n 0 go to menu. 1 bite. 2 walk past. 3 greet. 4 tell a joke. 9 crafting menu.";
    txt51 = "\n . . . . . you stopped walking along the forest path . . . . .";
    txt551 = " 3 go to the forest for wood.";
    txt552 = " 4 do nothing. 9 crafting menu.\n";
    txt553 = " 0 go to menu. 1 continue walking.";
    txt554 = " 2 go to the cave.";
    txt52 = "\n [===============\n";
    txt502 = " your health:  ";
    txt53 = "  organ:  ";
    txt053 = "  organ2:  ";
    txt54 = "  infection:  ";
    txt55 = "  immunity:  ";
    txt56 = "\n you have kg of iron: ";
    txt57 = "\n you have kg of copper: ";
    txt58 = "\n you have kg of wood: ";
    txt59 = "\n you have kg of coal: ";
    txt60 = "\n you have kg of nickel: ";
    txt61 = "\n you have kg of steel: ";
    txt62 = "\n charge of hat device (use 11): ";
    txt63 = "\n charge of scarf device (use 22): ";
    txt64 = "\n charge of inverter (use 33): ";
    txt65 = "\n charge of wooden mechanical cat: ";
    txt66 = "\n charge of metal device (use 44): ";
    txt67 = "\n charge of power plant device (use 55):";
    txt68 = "\n charge of metal-viewing device (use 66): ";
    txt69 = "\n charge of power-plant-viewing device (use 77): ";
    txt70 = "\n charge of tea-viewing device (use 88): ";
    txt700 = "\n charge of tea-lowering device (use 99): ";
    txt71 = "\n ===============]";
    txt72 = "\n monsters passed:  ";
    txt73 = "  total passed (all time):  ";
    txt74 = "  total play time (seconds):  ";
    txt75 = " . . . . . hat +1 . . . . .\n";
    txt76 = " . . . . . scarf +1 . . . . .\n";
    txt77 = " . . . . . tea +1 . . . . .\n";
    txt78 = " . . . . . PP -1 . . . . .\n";
    txt79 = " . . . . . metal -1 . . . . .\n";
    txt072 = " record of passed monsters: ";

    txt80 = "monster: hello (1 answer: why does everyone here bite me? 2 answer: why do you all have the same hats, scarves and teas?)\n";
    txt81 = "monster: because we are all kind and nice, but everyone has their own idea of how to behave when meeting someone (1 answer: I see. 2 answer: by the way, I'm delivering uranium ore to the hydrometallurgical plant (truth))\n";
    txt82 = "monster: because on the island of Malaya Tokmachka there is only one shop N4020, it has only 4 kinds of hats, 4 kinds of scarves, green tea, black tea, coffee and a few teas with unknown names, some of them tasty (1 answer: I hear you, mate. 2 answer: what do they buy them with?)\n";
    txt83 = "monster: what do you mean ‘I see’\n";
    txt082 = "monster: with the uranium extracted from uranium ore at the hydrometallurgical plant, the ore is mined at the uranium mine and delivered to the plant along this path. Walking this path you can find the shop N4020. Actually this is the only path and the only 3 buildings in the whole Malaya Tokmachka; all the inhabitants live in tents in the forest\n";
    txt84 = "monster: aren't you afraid of monster 170? (1 answer: I am, who is that? (truth) 2 answer: monster 61 will help me, I'm carrying 2 tons of uranium ore in my pocket to his hydrometallurgical plant. And I'm the only one who does it (truth))\n";
    txt084 = "monster: he is very angry and scary, and he mined 170 kilograms of uranium ore\n";
    txt0083 = "monster: he won't protect you, because he mined 2.786885245901639 times less uranium ore\n";
    
    txt054 = "  disease:  ";
    txt055 = "\n you have light bleeding";
    txt056 = "\n you have medium bleeding";
    txt057 = "\n you have heavy bleeding";
    txt058 = "\n you have critically severe bleeding";
    txt0554 = " 5 go collect leaves.";
    txt0555 = "\n you have bandages: ";
    txt_exit = " 0 exit\n";
    txtK1 = " 1 bandage light bleeding\n";
    txtK2 = " 2 bandage medium bleeding\n";
    txtK3 = " 3 bandage heavy bleeding\n";
    txtK4 = " 4 bandage critically severe bleeding\n";
    txt129 = "  blood:  ";
    txt130 = " you collected leaves: ";
    txt1015 = " 20 craft a bandage for 4 leaves\n";

    txt85 = " monster: I can give you ";
    txt86 = " kilograms of iron or ";
    txt87 = " kilograms of wood (1 take iron 2 take wood)\n";
    txt88 = " kilograms of nickel or ";
    txt89 = " kilograms of copper (1 take nickel 2 take copper)\n";
    txt90 = " . . . . . hat -1 . . . . .\n";
    txt91 = " . . . . . scarf -1 . . . . .\n";
    txt92 = " . . . . . tea -1 . . . . .\n";
    txt93 = " . . . . . PP +1 . . . . .\n";
    txt94 = " . . . . . metal +1 . . . . .\n";
    txt95 = " hat value of the monster: ";
    txt96 = " scarf value of the monster: ";
    txt97 = " favourite metal value of the monster: ";
    txt98 = " favourite power plant type value of the monster: ";
    txt99 = " favourite tea value of the monster: ";
    txt111 = "\n - - - - - you are dead - - - - -\n\n";
    txt112 = " 15 craft a spear for 0.100 wood (durability 9)\n";
    txt113 = " 16 craft a torch for 0.400 wood (durability 9)\n";
    txt114 = " 17 craft a bow for 0.400 wood (durability 9)\n";
    txt1014 = " 18 craft a device to decrease tea values for 2.000 kg of iron (1 charge)\n";
    txt115 = " you won\n";
    txt116 = " you lost\n";
    txt117 = " the monster took your torch and hit you with it\n";
    txt118 = " the monster hid behind a tree and threw a torch at you\n";
    txt119 = " you hid behind a tree and threw the torch at the monster\n";
    txt120 = " the monster knocked the spear out of your hands and hit you (you picked the spear back up)\n";
    txt121 = "\n spear durability: ";
    txt122 = "\n torch durability: ";
    txt123 = "\n bow durability: ";
    txt124 = " nickel + 0.020\n\n";
    txt125 = " iron + 0.020\n\n";
    txt126 = " a trap was triggered on you\n\n";
    txt127 = " hat and scarf inverted\n ";
    txt128 = " you disarmed the trap with the spear\n\n";

    text_v_lesu = " . . . . . (0 exit) while walking in the forest you met monster 170, its weapon: ";
    txt_monstr = " null\n";
    txtM1 = "nothing . . . . .\n";
    txtM2 = "spear . . . . .\n";
    txtM3 = "torch . . . . .\n";
    txtM4 = "bow . . . . .\n";
    txtM5 = "club . . . . .\n";
    txtMA1 = " press 1 to attack the monster with the spear\n";
    txtMA2 = " press 2 to attack the monster with the torch\n";
    txtMA3 = " press 3 to attack the monster with the bow\n";

    txt_gotovo = " done\n";
    txt701 = "\n you have medicines: ";
    txt702 = "\n choose which medicine to use ";
    txt703 = "for ";
    txt704 = " to ";
    txt1016 = " 21 craft a copper furnace for 3.0 kg of copper\n";
    txt1017 = " 22 craft 0.100 kg of coal in the copper furnace for 0.310 kg of wood\n";
    txt1018 = " 23 craft steel in the copper furnace for 0.100 kg of iron and 0.050 kg of coal (fuel: wood or coal. minimum 0.010 kg)\n";
    txt1019 = " choose fuel type (0 exit. 1 wood. 2 coal)\n";
    txt1020 = " enter how many kg of fuel to use\n";
    txt1021 = " 24 craft disease medicine for 0.200 kg of steel and 1 bandage\n";

    txt00555 = " (6 bandage the bleeding)";
    txtListya = "\n you have leaves: ";
    txt062 = " (use 11)";
    txt063 = " (use 22)";
    txt064 = " (use 33)";
    txt065 = " (use 44)";
    txt066 = " (use 55)";
    txt067 = " (use 66)";
    txt068 = " (use 77)";
    txt069 = " (use 88)";
    txt0700 = " (use 99)";
    txt0701 = " (use 10)";

    txt62 = "\n charge of hat device: ";
    txt63 = "\n charge of scarf device: ";
    txt64 = "\n charge of inverter: ";
    txt65 = "\n charge of wooden mechanical cat: ";
    txt66 = "\n charge of metal device: ";
    txt67 = "\n charge of power plant device: ";
    txt68 = "\n charge of metal-viewing device: ";
    txt69 = "\n charge of power-plant-viewing device: ";
    txt70 = "\n charge of tea-viewing device: ";
    txt700 = "\n charge of tea-lowering device: ";

    
}
#endif