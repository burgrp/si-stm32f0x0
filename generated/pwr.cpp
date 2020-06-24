namespace target {
  namespace pwr {
    
    /**
      power control register
    */
    namespace CR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Disable backup domain write protection
          @return boolean value
        */
        __attribute__((always_inline)) bool getDBP() volatile {
          return ((raw & (0x1 << 8)) >> 8);
        }
        /**
          Sets Disable backup domain write protection
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setDBP(bool value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((((value)) << 8) & (0x1 << 8));
          return *(Register*)this;
        }
        /**
          Gets Clear standby flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCSBF() volatile {
          return ((raw & (0x1 << 3)) >> 3);
        }
        /**
          Sets Clear standby flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCSBF(bool value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((((value)) << 3) & (0x1 << 3));
          return *(Register*)this;
        }
        /**
          Gets Clear wakeup flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getCWUF() volatile {
          return ((raw & (0x1 << 2)) >> 2);
        }
        /**
          Sets Clear wakeup flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setCWUF(bool value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((((value)) << 2) & (0x1 << 2));
          return *(Register*)this;
        }
        /**
          Gets Power down deepsleep
          @return boolean value
        */
        __attribute__((always_inline)) bool getPDDS() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Power down deepsleep
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setPDDS(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
        /**
          Gets Low-power deep sleep
          @return boolean value
        */
        __attribute__((always_inline)) bool getLPDS() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Low-power deep sleep
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setLPDS(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
      };
    };
    
    /**
      power control/status register
    */
    namespace CSR {
      class Register {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Sets register to zero
        */
        __attribute__((always_inline)) Register& zero() volatile {
          raw = 0;
          return *(Register*)this;
        }
        /**
          Gets Enable WKUP pin 1
          @param index in range 1..7
          @return boolean value
        */
        __attribute__((always_inline)) bool getEWUP(int index) volatile {
          return ((raw & (0x1 << (8 + 1 * (index - 1)))) >> (8 + 1 * (index - 1)));
        }
        /**
          Sets Enable WKUP pin 1
          @param index in range 1..7
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setEWUP(int index, bool value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 1)))) | ((((value)) << (8 + 1 * (index - 1))) & (0x1 << (8 + 1 * (index - 1))));
          return *(Register*)this;
        }
        /**
          Gets Wakeup flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getWUF() volatile {
          return ((raw & (0x1 << 0)) >> 0);
        }
        /**
          Sets Wakeup flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setWUF(bool value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((((value)) << 0) & (0x1 << 0));
          return *(Register*)this;
        }
        /**
          Gets Standby flag
          @return boolean value
        */
        __attribute__((always_inline)) bool getSBF() volatile {
          return ((raw & (0x1 << 1)) >> 1);
        }
        /**
          Sets Standby flag
          @param value boolean value
        */
        __attribute__((always_inline)) Register& setSBF(bool value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((((value)) << 1) & (0x1 << 1));
          return *(Register*)this;
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            power control register
          */
          CR::Register CR;
        };
        struct {
          char _space_CSR[0x4];
          /**
            power control/status register
          */
          CSR::Register CSR;
        };
      };
    };
  }
  
  extern volatile pwr::Peripheral PWR;
}