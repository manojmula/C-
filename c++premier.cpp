/***
 * Countless programmers have learnes c++
 * from previous editions of c++ premier edition
 * durring that time c++ has metured greately
 * its focus and that its programming community 
 * has widended from looking mostly at machine efficiency to devoting more attention to programmer
 * efficiency
 * in 2011 the c++ standards commite issued a major revision to the iso c++ standard this
 * revision standard is latest step is c++ evolution and continues the emphsis on programmer 
 * efficiency 
 * the primary goals of the new standard are to 
 * Make the language more uniform and easier to teach and learn
 * make the standard libreries easer to access and more efficient to use
 * Make it easier to write efficient abstarcctions and libraries
 * in this editon we have completely reevices the c++ premier to use the latest standard
 * you can get an ideaof how extensively the new standard has effecteed c++ by reviewing the new 
 * features tables of the conetcs
 * which lists the section that cover new material and appears new page
 * 
 * Some additions in the new standard such as auto for the type interference are pervasive
 * These facilities make the code in this edition easier to read and to understand
 * Programs and programmers
 * can ignore type details which makes it easier to concentrate on the program is intended to do
 * Other new such feature such as smart pointers and move enabled containers let us wrrite
 * more suposricated classes
 * without having to contend with the intricacies of resource managment
 * as a result we can start to teach how to write your own classes much earlier in the book
 * than we did in the fourth edition 
 * we and you no longer have to worry about many of the details that stood in our way under the previous standad
 * we have marked those parts of the text that cover features defined by new standard
 * eith marginakl icon
 * we hope that readers who are already familiar with the core of c++ will find these alerts useful in dicing where
 * to focus theierr attention
 * We also expect that these icons will help explain error message from compiler
 * that might not yet suport new features 
 * Although nearly all examples in this book have been compiled under the current realese of the 
 * GNU compiler
 * we realize some readers will not have access to completely updated compilers
 * Even though neumorous readers will not yet hthe core languge reamins unchanges
 * 
 * WHY READ THIS BOOK
 * Modern c++ can be though of comprising three parts
 * the low level languga much of which is inherited from c
 * More advances language features  that allows us to define our own types and to organize large scale
 * programs and systems
 * The standard library which uses these advances features to provide useful data structutes and algorithms
 * most of the tesxt presents the more abstratc features of c++ as advanced topics at the end of the book
 * There are two problrms that approah
 * readers can get bogged down in the details inherent in low level programming and give up frustaration
 * Those who do press on learn bad habits that they must unlearn
 * 
 * We take opposite approach :right from the start we use features that let programmers ignore the 
 * details inherit in low lwvwl programmung .For example we introduce the libarry string and vetor types along
 * the built in arthematic
 * and array typesPrangarams that use these library types are easier to write and understand
 * much less error prone
 * 
 * Too often library is thaught as advanced topic
 * I instead of using libarary many books use low level programming techniques based on pointer to character
 * arrays and dynanic memory managment  
 * Getting programs that use these low level techniques to work correctly is much harder than writing
 * the corresponding c++ code using the libarary
 * 
 * throughout c++ premie we empasize good style we want to help you the reader devoplop the good
 * habits immediately and avoid needing to unlearn bad habits as you gain more sophsticated knowledge 
 * we highlight particlularly tricky matters and warn about common misconseptions and pitfals
 * 
 * we also explain the tationale behind the rules explaining why not just not what
 * we belive that by understanding why things work as they do readers can more quickly cement their grasp of the language
 * 
 * Although you need not know c in order to understand this book
 * we assume you know enouh about programming to write compile and run a program in at least one modern block-structuer
 * languahgge 
 * In partiular we asume you used varaibles and called functions and used a compiler
 * 
 * GETTING STARTED
 * 
 * Section 1.1 write simple c++ program
 * section 1.2 a first look at input and output
 * section 1.3 a word about comments
 * section 1.4 flow of control
 * section 1.5 intriduction to classes
 * section 1.6 the book store program
 * 
 * This chapter introduces most of the basic elements of c++ types varaibles expresions
 * statments and functions
 * along with the way we will breifly explain how to compile and execute program
 * After having read this chapter and worked thoroughly through exersise you 
 * should be able to weite compilee and excute the programs
 * later in the chapter will asume that you can use tthe feature introduced in this chapter and will explain these 
 * features more in details 
 * the way to learn new programmming language is tow rite programs 
 * in this chapter we will learn simple problem for a bookstore
 * our book store keeps a file of transactions exach of which records the sale of one or more copis
 * of single book 
 * each transsaction contains three elements
 * 0-201-70353-X 4 24.99
 * the first element is an ISBN the second is the number of copies sold and the last pne is the price 
 * at which the number of copies are sold
 * and the last is the price at which the each of these copies was sold
 * From time to time these bookstores owner reads this file and for each book computes these number of copies sold
 * the total reevenue from that book the average salse proze
 * to be able to write this program we need to cover a few basic topics of c++
 * features
 * In addition we will need to know how to compile and execute prrogram
 * Although we havent designed yet our prrogram its easy that it must 
 * 
 * Define varaibles
 * Do input and output
 * use a data structure too hold the data
 * test wheather two records have the same ISBN number
 * contain a loop that will process every reccord in  the treansaction
 * we will start by reviewing how to solve these subproblems in c++and the write our bookstore program
 * 
 * WRITING SIMPLE C++ PROGRAM
 * 
 * Every c++ program contains one or more function one of which must be named as main
 * the opertaing system runs on c++ program called main
 * here is a simple version of main that dose nuthing but return a value to the operating system
 * int main()
 * {
 *  return 0;
 * }
 * 
 * A function definations has four elements return type, a function name,  possibly
 * empty parameter list enclosed in paranthesis and a function body 
 * although main is special in some ways we define main the same way we define any other function
 * 
 * In this example
 * Mian has an empty parameter list  shown by () with nuthing inside
 * will discuss the other parameter types that we can define for main
 * 
 * the main function is requireed to have return type int which is type that represents integers
 * the int type is buily in type which means that it is one of the type of the language defines
 * 
 * the final part of function defination the function body is a block of statments starting from curly braces and 
 * ending with close curly
 * {
 *  return 0;
 * }
 * 
 * the only statment in this block is a return which is a statment that terminates a function as is the case here a return 
 * can also send a value to the functions caller
 * when a return statment includes a value the value returned must have a type that is compatibla eiwth the return typr
 * of a function 
 * in this case the return type of main is int and the return value is 0 and is an int
 * Note: note the semicolon at the end of the return statment semicoln mark is the end of the statments in c++
 * they are easy to overlook but when forgotten can lead to misterious error messages
 * 
 * on most systems the value returned from main is the status indicater
 * a return type value of 0 indicates succes 
 * a non zero return has a meaning that is defined by the system
 * ordinary a non zero return indicate what kinf of error
 * KEY NOTE TYPES
 * TYPES are one of the most funcdamentall conceptts of the programming and a concept that we will come back to over
 * and over in the premier
 * 
 * 
 * ***/