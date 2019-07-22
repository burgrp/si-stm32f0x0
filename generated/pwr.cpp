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
          Gets Flash power down in Stop mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getFPDS() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Flash power down in Stop mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setFPDS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
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
          Gets PVD level selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getPLS() volatile {
          return (raw & (0x7 << 5)) >> 5;
        }
        /**
          Sets PVD level selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setPLS(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 5)) | ((value << 5) & (0x7 << 5));
        }
        /**
          Gets Power voltage detector enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPVDE() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Power voltage detector enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPVDE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
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
          Gets Backup regulator enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBRE() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets Backup regulator enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBRE(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets Enable WKUP pin
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEWUP() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Enable WKUP pin
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEWUP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Backup regulator ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBRR() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets Backup regulator ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBRR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets PVD output
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPVDO() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets PVD output
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPVDO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
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