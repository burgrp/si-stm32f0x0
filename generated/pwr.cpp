namespace target {
  namespace pwr {
    namespace reg {
      
      /**
        power control register
      */
      class CR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Disable backup domain write protection
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBP() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Disable backup domain write protection
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Clear standby flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCSBF() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Clear standby flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCSBF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets Clear wakeup flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCWUF() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Clear wakeup flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCWUF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Power down deepsleep
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPDDS() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Power down deepsleep
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPDDS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Low-power deep sleep
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getLPDS() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Low-power deep sleep
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setLPDS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        power control/status register
      */
      class CSR {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Enable WKUP pin 1
          @param index in range 1..7
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEWUP(int index) volatile {
          return (raw & (0x1 << (8 + 1 * (index - 1)))) >> (8 + 1 * (index - 1));
        }
        /**
          Sets Enable WKUP pin 1
          @param index in range 1..7
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEWUP(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (8 + 1 * (index - 1)))) | ((value << (8 + 1 * (index - 1))) & (0x1 << (8 + 1 * (index - 1))));
        }
        /**
          Gets Enable WKUP pin 1
          @return value in range 0..127
        */
        __attribute__((always_inline)) unsigned long getEWUP() volatile {
          return (raw & (0x7F << 8)) >> 8;
        }
        /**
          Sets Enable WKUP pin 1
          @param value in range 0..127
        */
        __attribute__((always_inline)) unsigned long setEWUP(unsigned long value) volatile {
          raw = (raw & ~(0x7F << 8)) | ((value << 8) & (0x7F << 8));
        }
        /**
          Gets Wakeup flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWUF() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Wakeup flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWUF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Standby flag
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSBF() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Standby flag
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSBF(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
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
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_CSR[4];
          /**
            power control/status register
          */
          volatile reg::CSR CSR;
        };
      };
    };
  }
  
  extern pwr::Peripheral PWR;
}