namespace target {
  namespace dbgmcu {
    namespace reg {
      
      /**
        MCU Device ID Code Register
      */
      class IDCODE {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Device Identifier
          @return value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long getDEV_ID() volatile {
          return (raw & (0xFFF << 0)) >> 0;
        }
        /**
          Sets Device Identifier
          @param value in range 0..4095
        */
        __attribute__((always_inline)) unsigned long setDEV_ID(unsigned long value) volatile {
          raw = (raw & ~(0xFFF << 0)) | ((value << 0) & (0xFFF << 0));
        }
        /**
          Gets Division Identifier
          @return value in range 0..15
        */
        __attribute__((always_inline)) unsigned long getDIV_ID() volatile {
          return (raw & (0xF << 12)) >> 12;
        }
        /**
          Sets Division Identifier
          @param value in range 0..15
        */
        __attribute__((always_inline)) unsigned long setDIV_ID(unsigned long value) volatile {
          raw = (raw & ~(0xF << 12)) | ((value << 12) & (0xF << 12));
        }
        /**
          Gets Revision Identifier
          @return value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long getREV_ID() volatile {
          return (raw & (0xFFFF << 16)) >> 16;
        }
        /**
          Sets Revision Identifier
          @param value in range 0..65535
        */
        __attribute__((always_inline)) unsigned long setREV_ID(unsigned long value) volatile {
          raw = (raw & ~(0xFFFF << 16)) | ((value << 16) & (0xFFFF << 16));
        }
      };
      
      /**
        Debug MCU Configuration Register
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
          Gets Debug Stop Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_STOP() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Debug Stop Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Debug Standby Mode
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_STANDBY() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Debug Standby Mode
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_STANDBY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
      };
      
      /**
        APB Low Freeze Register
      */
      class APBLFZ {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Debug Timer 2 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER2_STOP() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Debug Timer 2 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER2_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Debug Timer 3 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER3_STOP() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Debug Timer 3 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER3_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Debug Timer 6 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER6_STOP() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Debug Timer 6 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER6_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Debug Timer 14 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER14_STOP() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets Debug Timer 14 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER14_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets Debug RTC stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_RTC_STOP() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets Debug RTC stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_RTC_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets Debug Window Wachdog stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_WWDG_STOP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Debug Window Wachdog stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_WWDG_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Debug Independent Wachdog stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_IWDG_STOP() volatile {
          return (raw & (0x1 << 12)) >> 12;
        }
        /**
          Sets Debug Independent Wachdog stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_IWDG_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 12)) | ((value << 12) & (0x1 << 12));
        }
        /**
          Gets SMBUS timeout mode stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getI2C1_SMBUS_TIMEOUT() volatile {
          return (raw & (0x1 << 21)) >> 21;
        }
        /**
          Sets SMBUS timeout mode stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setI2C1_SMBUS_TIMEOUT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 21)) | ((value << 21) & (0x1 << 21));
        }
      };
      
      /**
        APB High Freeze Register
      */
      class APBHFZ {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Debug Timer 1 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER1_STOP() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets Debug Timer 1 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER1_STOP(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
        /**
          Gets Debug Timer 15 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER15_STO() volatile {
          return (raw & (0x1 << 16)) >> 16;
        }
        /**
          Sets Debug Timer 15 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER15_STO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 16)) | ((value << 16) & (0x1 << 16));
        }
        /**
          Gets Debug Timer 16 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER16_STO() volatile {
          return (raw & (0x1 << 17)) >> 17;
        }
        /**
          Sets Debug Timer 16 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER16_STO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 17)) | ((value << 17) & (0x1 << 17));
        }
        /**
          Gets Debug Timer 17 stopped when Core is halted
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDBG_TIMER17_STO() volatile {
          return (raw & (0x1 << 18)) >> 18;
        }
        /**
          Sets Debug Timer 17 stopped when Core is halted
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDBG_TIMER17_STO(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 18)) | ((value << 18) & (0x1 << 18));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            MCU Device ID Code Register
          */
          volatile reg::IDCODE IDCODE;
        };
        struct {
          volatile char _space_CR[4];
          /**
            Debug MCU Configuration Register
          */
          volatile reg::CR CR;
        };
        struct {
          volatile char _space_APBLFZ[8];
          /**
            APB Low Freeze Register
          */
          volatile reg::APBLFZ APBLFZ;
        };
        struct {
          volatile char _space_APBHFZ[12];
          /**
            APB High Freeze Register
          */
          volatile reg::APBHFZ APBHFZ;
        };
      };
    };
  }
  
  extern dbgmcu::Peripheral DBGMCU;
}