#ifndef DATE_N_EXISTS
#define DATE_N_EXIST

class Date{
        protected:
                std::string datestring;
                int month;
                int day;
		int year;
        public:
                Date();
                void init (std::string datestring);
                void printDate();
}; // end class def

#endif
